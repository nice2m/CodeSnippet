//
//  UIScrollView+Adjust.m
//  VPNTest
//
//  Created by ntm on 2019/3/20.
//  Copyright © 2019年 nice2meet. All rights reserved.
//

#import "UIScrollView+nt_addition.h"

@implementation UIScrollView (nt_addition)

#pragma mark - 
- (void)nt_adjustScrollBehavior
{
    if (@available(iOS 11.0,*))
    {
        self.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;
    }
}

#pragma mark - util

- (void)registerCellClass:(Class)clazz reuseId:(NSString *)reuseId
{
    if ([self isKindOfClass:[UITableView class]])
    {
        UITableView *tb = (UITableView *)self;
        [tb registerClass:clazz forCellReuseIdentifier:reuseId];
    }
    else if ([self isKindOfClass:[UICollectionView class]])
    {
        UICollectionView *tb = (UICollectionView *)self;
        [tb registerClass:clazz forCellWithReuseIdentifier:reuseId];
    }
    
}

- (void)registerCellClass:(Class)clazz
{
    NSString * reuseId = NSStringFromClass(clazz);
    [self registerCellClass:clazz reuseId:reuseId];
}

- (void)registerNibNamed:(NSString *)nibName reuseId:(NSString *)reuseId
{
    UINib * nib = [UINib nibWithNibName:nibName bundle:nil];
    if ([self isKindOfClass:[UITableView class]])
    {
        UITableView *tb = (UITableView *)self;
        [tb registerNib:nib forCellReuseIdentifier:reuseId];
    }
    else if ([self isKindOfClass:[UICollectionView class]])
    {
        UICollectionView *tb = (UICollectionView *)self;
        [tb registerNib:nib forCellWithReuseIdentifier:reuseId];

    }
    
}

- (void)registerNibNamed:(NSString *)nibName
{
    [self registerNibNamed:nibName reuseId:nibName];
}

@end
