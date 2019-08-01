//
//  NSString+nt_addition.h
//  VPNTest
//
//  Created by ntm on 2019/3/20.
//  Copyright © 2019年 nice2meet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (nt_addition)

- (int)nt_intValue;
- (NSNumber *)nt_numberValue;
- (BOOL)nt_isEmpty;
+ (NSString *)nt_stringWithUUID;
- (NSData *)nt_dataValue;

- (BOOL)nt_containsString:(NSString *)string;
- (BOOL)nt_containsCharacterSet:(NSCharacterSet *)set;

- (CGFloat)nt_widthForFont:(UIFont *)font;
- (CGFloat)nt_heightForFont:(UIFont *)font width:(CGFloat)width;

- (NSString *)nt_stringByTrim;
+ (NSString *)nt_stringNamed:(NSString *)name;
@end

@interface NSString (nt_encode)

- (NSData *)aes;



@end


NS_ASSUME_NONNULL_END
