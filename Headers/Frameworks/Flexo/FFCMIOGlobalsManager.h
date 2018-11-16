//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface FFCMIOGlobalsManager : NSObject
{
    BOOL _CMIOEnabled;
    BOOL _deviceListIsBuilding;
    BOOL _deviceListIsValid;
    BOOL _validatingDeviceUID;
    NSString *_CMIODeviceUID;
    NSHashTable *_videoModuleList;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *CMIODeviceUID; // @synthesize CMIODeviceUID=_CMIODeviceUID;
- (BOOL)hasActiveConnection;
- (BOOL)canUseCMIODevices;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)existingCMIODeviceRemoved:(id)arg1;
- (void)newCMIODeviceAvailable:(id)arg1;
- (void)buildDeviceListEnd:(id)arg1;
- (void)buildDeviceListStart:(id)arg1;
- (void)_removeDestFromVideoModuleWithUID:(id)arg1;
- (void)_updateVideoModules;
- (void)unregisterVideoModule:(id)arg1;
- (void)registerVideoModule:(id)arg1;
- (void)_removeDeviceWithConnection:(id)arg1;
- (void)_validateDeviceUID;
- (void)dealloc;
- (oneway void)release;
- (id)init;

@end
