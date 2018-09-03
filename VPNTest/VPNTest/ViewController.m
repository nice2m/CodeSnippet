//
//  ViewController.m
//  VPNTest
//
//  Created by nice2meet on 2018/9/3.
//  Copyright © 2018年 nice2meet. All rights reserved.
//

#include <ifaddrs.h>
#import "ViewController.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UILabel *vpnLabel;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.vpnLabel.hidden = FALSE;
}


- (BOOL)isVPNConnected_iOS9Below
{
    struct ifaddrs *interfaces = NULL;
    struct ifaddrs *temp_addr = NULL;
    int success = 0;
    
    // retrieve the current interfaces - returns 0 on success
    success = getifaddrs(&interfaces);
    if (success == 0) {
        // Loop through linked list of interfaces
        temp_addr = interfaces;
        while (temp_addr != NULL) {
            NSString *string = [NSString stringWithFormat:@"%s" , temp_addr->ifa_name];
            if ([string rangeOfString:@"tap"].location != NSNotFound ||
                [string rangeOfString:@"tun"].location != NSNotFound ||
                [string rangeOfString:@"ppp"].location != NSNotFound){
                return YES;
            }
            
            temp_addr = temp_addr->ifa_next;
        }
    }
    
    // Free memory
    freeifaddrs(interfaces);
    return NO;
}

- (BOOL)isVPNConnected_iOS9
{
    NSDictionary *dict = CFBridgingRelease(CFNetworkCopySystemProxySettings());
    NSArray *keys = [dict[@"__SCOPED__"]allKeys];
    for (NSString *key in keys) {
        if ([key rangeOfString:@"tap"].location != NSNotFound ||
            [key rangeOfString:@"tun"].location != NSNotFound ||
            [key rangeOfString:@"ppp"].location != NSNotFound){
            return YES;
        }
    }
    return NO;
}

- (BOOL)isVPNConnected_iOS10Above
{
    NSDictionary *dict = CFBridgingRelease(CFNetworkCopySystemProxySettings());
    NSArray *keys = [dict[@"__SCOPED__"]allKeys];
    for (NSString *key in keys) {
        if ([key rangeOfString:@"tap"].location != NSNotFound ||
            [key rangeOfString:@"tun"].location != NSNotFound ||
            [key rangeOfString:@"ipsec"].location != NSNotFound ||
            [key rangeOfString:@"ppp"].location != NSNotFound){
            return YES;;
        }
    }
    return NO;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    NSString * isStr = @"is";
    if (@available(iOS 10.0, *)) {
        // iOS 10.0 and above
        
        isStr = [self isVPNConnected_iOS10Above] ? @"is" : @"is NOT";
    } else if (@available(iOS 9.0, *)) {
        // below 10.0
        isStr = [self isVPNConnected_iOS9] ? @"is" : @"is NOT";
    } else {
        isStr = [self isVPNConnected_iOS9Below] ? @"is" : @"is NOT";
    }
    
    self.vpnLabel.text = [NSString stringWithFormat:@"VPN %@ connected!",isStr];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
