//
//  NTFoundationTest.m
//  VPNTestTests
//
//  Created by nice2meet on 2019/4/1.
//  Copyright © 2019 nice2meet. All rights reserved.
//

#import <XCTest/XCTest.h>
#import ""

@interface NTFoundationTest : XCTestCase

@end

@implementation NTFoundationTest

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

- (void)osVersion
{
    NSString *osVersion = [[UIDevice currentDevice] systemVersion];
    NSString * osVersionT = nt_OS_version;
    

}
/*
 
 
 #define nt_OS_version [[UIDevice currentDevice] systemVersion]
 #define nt_is_OS_latter(v) ([nt_OS_version compare:v options:NSNumericSearch] != NSOrderedAscending)
 
 //摘自YYKit
#ifndef nt_weakify
#if DEBUG
#if __has_feature(objc_arc)
#define nt_weakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
#else
#define nt_weakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
#endif
#else
#if __has_feature(objc_arc)
#define nt_weakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
#else
#define nt_weakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
#endif
#endif
#endif

#ifndef nt_strongify
#if DEBUG
#if __has_feature(objc_arc)
#define nt_strongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
#else
#define nt_strongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
#endif
#else
#if __has_feature(objc_arc)
#define nt_strongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
#else
#define nt_strongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
#endif
#endif
#endif

#define nt_userDefault [NSUserDefaults standardUserDefaults]
#define nt_notifCenter [NSNotificationCenter defaultCenter]
#define nt_notifCenter_observe_self(aName,aSEL) [[NSNotificationCenter defaultCenter] addObserver:self selector:aSEL name:aName object:nil]

 
 */

@end
