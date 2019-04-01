//
//  NTDebug.h
//  VPNTest
//
//  Created by nice2meet on 2019/4/1.
//  Copyright © 2019 nice2meet. All rights reserved.
//

#ifndef NTDebug_h
#define NTDebug_h

#ifdef DEBUG


#define nt_alert_log(fmt, ...) { UIAlertView *alert = [UIAlertView alloc] \
initWithTitle:[NSString stringWithFormat:@"%s\n [Line %d] ", __PRETTY_FUNCTION__, __LINE__] \
message:[NSString stringWithFormat:fmt, ##__VA_ARGS__] \
delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil]; \
[alert show]; \
}

#define nt_log(FORMAT, ...) fprintf(stderr, "\n\n******(class)%s(log begin)******\n(SEL)%s\n(line)%zd\n(data)%s\n******(class)%s(log end)******\n\n", [[[NSString stringWithUTF8String: __FILE__] lastPathComponent] UTF8String], __FUNCTION__, __LINE__, [[NSString stringWithFormat: FORMAT, ## __VA_ARGS__] UTF8String], [[[NSString stringWithUTF8String: __FILE__] lastPathComponent] UTF8String]);


#else


#define nt_alert_log(...)
#define nt_log(...)

#endif



#endif /* NTDebug_h */
