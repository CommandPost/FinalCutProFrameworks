//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFCMIOGlobalsObserver : NSObject
{
}

+ (BOOL)canUseCMIODevices;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)newCMIODeviceAvailable:(id)arg1;
+ (void)buildDeviceListEnd:(id)arg1;
+ (void)buildDeviceListStart:(id)arg1;
+ (void)_updateVideoModules;
+ (void)unregisterVideoModule:(id)arg1;
+ (void)registerVideoModule:(id)arg1;
+ (void)_setup;
+ (void)_validateDeviceUID;

@end

