//
//  UIScrollView+Adjust.h
//  VPNTest
//
//  Created by ntm on 2019/3/20.
//  Copyright © 2019年 nice2meet. All rights reserved.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIScrollView (nt_addition)


#pragma mark -

- (void)nt_adjustScrollBehavior;

#pragma mark - util

- (void)registerCellClass:(Class)clazz reuseId:(NSString *)reuseId;
- (void)registerCellClass:(Class)clazz;
- (void)registerNibNamed:(NSString *)nibName reuseId:(NSString *)reuseId;
- (void)registerNibNamed:(NSString *)nibName;

@end

NS_ASSUME_NONNULL_END
