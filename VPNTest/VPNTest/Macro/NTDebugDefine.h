//
//  NTDebugDefine
//  VPNTest
//
//  Created by nice2meet on 2019/4/1.
//  Copyright © 2019 nice2meet. All rights reserved.
//

#ifndef NTDebug_h
#define NTDebug_h

#ifdef DEBUG


#define NTDebugAlert(FORMAT, ...) { UIAlertView *alert = [[UIAlertView alloc] \
initWithTitle:[NSString stringWithFormat:@"%s\n [Line %d] ", __PRETTY_FUNCTION__, __LINE__] \
message:[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] \
delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil]; \
[alert show]; \
}

#define NTDebugLog(FORMAT, ...) fprintf(stderr, "\n\n[File]%s\n[Method]%s\n[Line]%d\n[Content]%s\n\n", [[[NSString stringWithUTF8String: __FILE__] lastPathComponent] UTF8String], __FUNCTION__, __LINE__, [[NSString stringWithFormat: FORMAT, ##__VA_ARGS__] UTF8String])

#else


#define NTDebugAlert(...)
#define NTDebugLog(...)

#endif



#endif /* NTDebug_h */
