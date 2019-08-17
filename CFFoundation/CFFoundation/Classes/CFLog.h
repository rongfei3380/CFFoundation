//
//  CFLog.h
//  CFFoundation
//
//  Created by Jobs on 2019/8/14.
//  Copyright © 2019 Jobs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>

NS_ASSUME_NONNULL_BEGIN


#define CFLOGLEVEL_DEBUG    7
#define CFLOGLEVEL_INFO     5
#define CFLOGLEVEL_WARNING  3
#define CFLOGLEVEL_ERROR    1

#if DEBUG
#define LXMAXLOGLEVEL       LXLOGLEVEL_DEBUG
#else
#define LXMAXLOGLEVEL       LXLOGLEVEL_INFO
#endif

#define LXLogCurrentMethod LXDebugLog(@"%@/%@", NSStringFromClass([self class]), NSStringFromSelector(_cmd))

#define LXDPRINT(s, level , ...)  NSLog(@"%@\t%s(%d): " s, level ,__PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#define LXDebugLog(s, ...) { \
if (LXLOGLEVEL_DEBUG <= LXMAXLOGLEVEL) { \
LXDPRINT(s, @"DEBUG", ##__VA_ARGS__); \
} \
}((void)0)

#define LXInfoLog(s, ...) { \
if (LXLOGLEVEL_INFO <= LXMAXLOGLEVEL) { \
LXDPRINT(s, @"INFO", ##__VA_ARGS__); \
} \
}((void)0)

#define LXWarnLog(s, ...) { \
if (LXLOGLEVEL_WARNING <= LXMAXLOGLEVEL) { \
LXDPRINT(s, @"WARN", ##__VA_ARGS__); \
} \
}((void)0)

#define LXErrorLog(s, ...) { \
if (LXLOGLEVEL_ERROR <= LXMAXLOGLEVEL) { \
LXDPRINT(s, @"ERROR", ##__VA_ARGS__); \
} \
}((void)0)


@interface CFLog : NSObject

@end

NS_ASSUME_NONNULL_END
