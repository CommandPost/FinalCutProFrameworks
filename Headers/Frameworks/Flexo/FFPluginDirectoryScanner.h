//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFPluginDirectoryScanner : NSObject
{
}

+ (id)appLevelPlugInsURL;
+ (id)appLevelPlugInsPath;
+ (void)scanForPluginsInProAppSupportSubDirectory:(id)arg1 withExtension:(id)arg2 delegate:(id)arg3 didLoadSelector:(SEL)arg4;
+ (void)scanForPluginsInDirectory:(id)arg1 withExtension:(id)arg2 delegate:(id)arg3 didLoadSelector:(SEL)arg4;
+ (void)_scanDirectory:(id)arg1 withExtension:(id)arg2 scanned:(id)arg3 delegate:(id)arg4 didLoadSelector:(SEL)arg5;

@end

