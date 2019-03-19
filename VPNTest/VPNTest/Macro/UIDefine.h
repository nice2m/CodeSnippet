//
//  UIDefine.h
//  VPNTest
//
//  Created by Ganjiuhui on 2019/3/19.
//  Copyright © 2019年 nice2meet. All rights reserved.
//

#ifndef UIDefine_h
#define UIDefine_h

#define nt_is_iPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define nt_is_pad (UI_USER_INTERFACE_IDIOM()== UIUserInterfaceIdiomPad)

#define nt_std_screenWidth (nt_is_iPhone ? 320 : 768)
#define nt_std_screenHeight (nt_is_iPhone ? 568 : 1024)

#define nt_kScreenWidthRatio  (UIScreen.mainScreen.bounds.size.width / nt_std_screenWidth)
#define nt_kScreenHeightRatio (UIScreen.mainScreen.bounds.size.height / nt_std_screenHeight)

#define nt_adaptedWidth(x)  ceilf((x) * nt_kScreenWidthRatio)
#define nt_adaptedHeight(x) ceilf((x) * nt_kScreenHeightRatio)

#define nt_adaptedFontSize(R) [UIFont systemFontOfSize:nt_AdaptedWidth(R)]
#define nt_adaptedBoldFontSize(R) [UIFont boldSystemFontOfSize:nt_AdaptedWidth(R)]

#define nt_kScreenWidth [UIScreen mainScreen].bounds.size.width
#define nt_kScreenHeight [UIScreen mainScreen].bounds.size.height
#define nt_kScreenBounds [UIScreen mainScreen].bounds
#define nt_kSizeScale nt_kScreenWidthRatio

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

#endif /* UIDefine_h */
