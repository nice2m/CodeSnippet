//
//  FoundationConst.h
//  VPNTest
//
//  Created by Ganjiuhui on 2019/3/19.
//  Copyright © 2019年 nice2meet. All rights reserved.
//

#ifndef FoundationConst_h
#define FoundationConst_h

#define nt_OS_version [[UIDevice currentDevice] systemVersion]
#define nt_is_OS_latter(v) ([nt_OS_version compare:v options:NSNumericSearch] != NSOrderedAscending)

//摘自YYKit
/**
 Synthsize a weak or strong reference.
 
 Example:
 @nt_weakify(self)
 [self doSomething^{
 @nt_strongify(self)
 if (!self) return;
 ...
 }];
 
 */
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




#endif /* FoundationConst_h */
