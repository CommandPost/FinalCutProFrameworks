//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProServiceBase.h>

#import "FFProExtensionHostObserver.h"

__attribute__((visibility("hidden")))
@interface FFProServicePlugIn : FFProServiceBase <FFProExtensionHostObserver>
{
    id <PKPlugIn> _plugInKitPlugIn;
}

+ (void)discoverServicesFor:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly) id <PKPlugIn> plugInKitPlugIn; // @synthesize plugInKitPlugIn=_plugInKitPlugIn;
- (void)unregisterHostObserver;
- (void)registerHostObserver;
- (void)sendHostActionTo:(id)arg1 action:(id)arg2 auxiliaryInfo:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)observeHostNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)deactivate;
- (void)activateAndConnectToRemoteViewController:(CDUnknownBlockType)arg1;
- (void)setupHostPrincipal;
- (id)containerURL;
- (id)URL;
- (id)plugInBundle;
- (id)version;
- (id)identifier;
- (id)name;
- (id)plugInInfoDictionary;
- (void)dealloc;
- (id)initWithPlugInKitPlugIn:(id)arg1;

@end
