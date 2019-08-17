# Foundation 的包含的基本库
## CocoaLumberjack

use DDOSLogger for iOS 10 and later, DDTTYLogger and DDASLLogger for earlier versions.

项目地址为： [https://github.com/CocoaLumberjack/CocoaLumberjack](https://github.com/CocoaLumberjack/CocoaLumberjack)

本项目主要以OC为主的基础库。

添加 #import <CFFoundation/CFFoundation.h> 主项目中的pch文件。

首先，在想要在你的应用程序中配置这个日志框架，通常在applicationDidFinishLaunching方法中配置。

[DDLog addLogger:[DDASLLogger sharedInstance]];

or

[DDLog addLogger:[DDTTYLogger sharedInstance]];




