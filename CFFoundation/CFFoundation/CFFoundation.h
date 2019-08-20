//
//  CFFoundation.h
//  CFFoundation
//
//  Created by Jobs on 2019/8/14.
//  Copyright © 2019 Jobs. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for CFFoundation.
FOUNDATION_EXPORT double CFFoundationVersionNumber;

//! Project version string for CFFoundation.
FOUNDATION_EXPORT const unsigned char CFFoundationVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CFFoundation/PublicHeader.h>
#import <CocoaLumberjack/CocoaLumberjack.h>
#ifdef DEBUG
static const DDLogLevel ddLogLevel = DDLogLevelVerbose;
#else
static const DDLogLevel ddLogLevel = DDLogLevelWarning;
#endif  /* DEBUG */
