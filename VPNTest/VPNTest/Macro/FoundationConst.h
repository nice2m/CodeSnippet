//
//  FoundationConst.h
//  VPNTest
//
//  Created by Ganjiuhui on 2019/3/19.
//  Copyright © 2019年 nice2meet. All rights reserved.
//

#ifndef FoundationConst_h
#define FoundationConst_h

#define NT_kOSVersion [[UIDevice currentDevice] systemVersion]
#define NT_IS_OS_LATTER(v) ([NT_kOSVersion compare:v options:NSNumericSearch] != NSOrderedAscending)

#define NT_WeakSelf __weak typeof(self) weakSelf = self;
#define NT_WeakObj(obj) __weak typeof(obj) weakObj = obj;


#endif /* FoundationConst_h */
