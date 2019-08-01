//
//  NTMacroDefine.h
//  VPNTest
//
//  Created by ntm on 2019/3/19.
//  Copyright © 2019年 nice2meet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef NTMacroDefine_h
#define NTMacroDefine_h

//摘自YYKit
/**
 Synthsize a weak or strong reference.
 
 Example:
 @NTWeakify(self)
 [self doSomething^{
 @NTStrongify(self)
 if (!self) return;
 ...
 }];
 
 */

#ifndef NTWeakify
#if DEBUG
#if __has_feature(objc_arc)
#define NTWeakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
#else
#define NTWeakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
#endif
#else
#if __has_feature(objc_arc)
#define NTWeakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
#else
#define NTWeakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
#endif
#endif
#endif

#ifndef NTStrongify
#if DEBUG
#if __has_feature(objc_arc)
#define NTStrongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
#else
#define NTStrongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
#endif
#else
#if __has_feature(objc_arc)
#define NTStrongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
#else
#define NTStrongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
#endif
#endif
#endif


#pragma mark - Util

#pragma mark Foundation

#define NTStandardUserDefault [NSUserDefaults standardUserDefaults]
#define NTDefaultNotificationCenter [NSNotificationCenter defaultCenter]
#define NTNotificationCenterObserveSelf(notificationName,aSelector) [[NSNotificationCenter defaultCenter] addObserver:self selector:aSelector name:notificationName object:nil]
#define NTDeviceVersion [[UIDevice currentDevice] systemVersion]
#define NTIsDeviceVersionLatter(v) ([NTDeviceVersion compare:v options:NSNumericSearch] != NSOrderedAscending)



#pragma mark  UIKit

#define NTIsiPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define NTIsiPad (UI_USER_INTERFACE_IDIOM()== UIUserInterfaceIdiomPad)

#define NTScreenWidth (NTIsiPhone ? 320 : 768)
#define NTScreenHeight (NTIsiPhone ? 568 : 1024)
#define NTkScreenWidth [UIScreen mainScreen].bounds.size.width
#define NTkScreenHeight [UIScreen mainScreen].bounds.size.height
#define NTkScreenBounds [UIScreen mainScreen].bounds

#define NTIsiPhone4 (480 == CGRectGetHeight([UIScreen mainScreen].bounds))
#define NTIsiPhone5 (568 == CGRectGetHeight([UIScreen mainScreen].bounds))
#define NTIsiPhone6 (667 == CGRectGetHeight([UIScreen mainScreen].bounds))
#define NTIsiPhone6Plus (736 == CGRectGetHeight([UIScreen mainScreen].bounds))
#define NTIsiPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define NTkRatioOfScreenWidth  (UIScreen.mainScreen.bounds.size.width / NTScreenWidth)
#define NTWidthAdapted(x)  ceilf((x) * NTkRatioOfScreenWidth)
#define NTFontAdaptedSize(R) [UIFont systemFontOfSize:NTWidthAdapted(R)]
#define NTBoldFontAdaptedSize(R) [UIFont boldSystemFontOfSize:NTWidthAdapted(R)]

#define NTStatusBarHeight [UIApplication sharedApplication].statusBarFrame.size.height
#define NTNaviBarHeight 44.f
#define NTTabBarHeight 49.f
#define NTSafeTop NTIsiPhoneX ? 44 : 20
#define NTSafeBottom NTIsiPhoneX ? 34 : 0
#define NTSafeNavigationBarTop NTStatusBarHeight+NTNaviBarHeight

#define NTUIColorRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define NTUIColorRGBA(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]

#define NTKeyWindow [UIApplication sharedApplication].keyWindow
#define NTCalculateSizeText(Text,FontSize) [Text sizeWithAttributes:@{NSFontAttributeName:[UIFont systemFontOfSize:FontSize]}]
#define NTImgNamed(name) [UIImage imageNamed:name]

#endif /* NTMacroDefine_h */
