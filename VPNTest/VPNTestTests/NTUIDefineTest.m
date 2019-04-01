//
//  NTUIDefineTest.m
//  VPNTestTests
//
//  Created by nice2meet on 2019/4/1.
//  Copyright © 2019 nice2meet. All rights reserved.
//

#import <XCTest/XCTest.h>

// 测试宏参考
// https://www.jianshu.com/p/ea9040849a43

@interface NTUIDefineTest : XCTestCase

@end

@implementation NTUIDefineTest

/*
 
 #define nt_is_iPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
 #define nt_is_pad (UI_USER_INTERFACE_IDIOM()== UIUserInterfaceIdiomPad)
 
 #define nt_std_screenWidth (nt_is_iPhone ? 320 : 768)
 #define nt_std_screenHeight (nt_is_iPhone ? 568 : 1024)
 
 #define nt_kRatioOfScreenWidth  (UIScreen.mainScreen.bounds.size.width / nt_std_screenWidth)
 #define nt_kRatioOfScreenHeight (UIScreen.mainScreen.bounds.size.height / nt_std_screenHeight)
 
 #define nt_widthAdapted(x)  ceilf((x) * nt_kRatioOfScreenWidth)
 #define nt_heightAdapted(x) ceilf((x) * nt_kRatioOfScreenHeight)
 
 #define nt_fontAdaptedSize(R) [UIFont systemFontOfSize:nt_widthAdapted(R)]
 #define nt_boldFontAdaptedSize(R) [UIFont boldSystemFontOfSize:nt_widthAdapted(R)]
 
 #define nt_kScreenWidth [UIScreen mainScreen].bounds.size.width
 #define nt_kScreenHeight [UIScreen mainScreen].bounds.size.height
 #define nt_kScreenBounds [UIScreen mainScreen].bounds
 
 #define nt_kStatusBarHeight [UIApplication sharedApplication].statusBarFrame.size.height
 #define nt_kNaviBarHeight 44.f
 #define nt_kTabBarHeight 49.f
 
 #define nt_is_iPhone4 (480 == CGRectGetHeight([UIScreen mainScreen].bounds))
 #define nt_is_iPhone5 (568 == CGRectGetHeight([UIScreen mainScreen].bounds))
 #define nt_is_iPhone6 (667 == CGRectGetHeight([UIScreen mainScreen].bounds))
 #define nt_is_iPhone6Plus (736 == CGRectGetHeight([UIScreen mainScreen].bounds))
 #define nt_is_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
 
 
 #define nt_uicolor_RGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
 #define nt_uicolor_RGBA(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]
 
 #define nt_keyWindow [UIApplication sharedApplication].keyWindow
 #define nt_calculate_size_text(Text,FontSize) [Text sizeWithAttributes:@{NSFontAttributeName:[UIFont systemFontOfSize:FontSize]}]
 
 #define nt_img_named(name) [UIImage imageNamed:name]
 */

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)testExample {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
