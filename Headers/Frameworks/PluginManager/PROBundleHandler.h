//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PluginManager/PROAPIAccessing-Protocol.h>
#import <PluginManager/PROPlugInDelegate-Protocol.h>
#import <PluginManager/PROPlugInFirewallErrorHandler-Protocol.h>

@class NSArray, NSBundle, NSMutableArray, NSMutableDictionary, NSString, PROPlugInFirewall;
@protocol PKPlugIn, PROBundleHandlerDelegate, PROPlugInRegistering, PROPluginDynamicRegCompletion, PROVersionedAPIAccess;

__attribute__((visibility("hidden")))
@interface PROBundleHandler : NSObject <PROPlugInDelegate, PROPlugInFirewallErrorHandler, PROAPIAccessing>
{
    NSBundle *bundle;
    NSMutableArray *plugIns;
    NSMutableDictionary *groups;
    id <PROPlugInRegistering> principalClassInstance;
    struct {
        unsigned int canCreateInstances:1;
        unsigned int askedAboutCreatingInstances:1;
        unsigned int :30;
    } bundleFlags;
    NSArray *requestedProtocols;
    id <PROBundleHandlerDelegate> delegate;
    id <PROVersionedAPIAccess> apiManager;
    PROPlugInFirewall *apiAccessPoint;
    id <PKPlugIn> pluginKitPlug;
    id <PROPluginDynamicRegCompletion> setupCallbackObject;
    CDUnknownBlockType deferralCompletionBlock;
    BOOL deferred;
}

- (BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1;
- (id)plugInGroupWithUUID:(struct __CFUUID *)arg1;
- (void)plugIn:(id)arg1 didError:(id)arg2;
- (void)plugInCouldNotInitialize:(id)arg1;
- (void)plugInFirewall:(id)arg1 receivedBadMessage:(SEL)arg2;
- (id)apiForProtocol:(id)arg1;
- (void)registerPlugIns;
- (void)finishRegisteringPlugIns;
- (BOOL)isDeferred;
- (void)notifyDeferralComplete;
- (void)setDeferralNotification:(CDUnknownBlockType)arg1;
- (void)loadDeferredPlugins;
- (BOOL)shouldDeferLoading;
- (BOOL)loadingInProMSRendererTool;
- (void)completeRegistrationWithGroups:(id *)arg1 plugIns:(id *)arg2 requestedProtocols:(id *)arg3;
- (BOOL)dynamicPluginRequestedProtocolArray:(id *)arg1 groupArray:(id *)arg2 plugInArray:(id *)arg3;
- (BOOL)dynamicXPCPluginRequestedProtocolArray:(id *)arg1 groupArray:(id *)arg2 pluginArray:(id *)arg3;
- (void)registerDynamicPlugInsAsynch:(id)arg1;
- (void)addPlugIn:(id)arg1;
- (BOOL)_plugInHasReservedUUID:(id)arg1;
- (void)setRegistrationCallbackObject:(id)arg1;
- (id)apiManagerForPlugInInstances;
- (id)principalClassInstance;
- (BOOL)isPrincipalClassAvailable;
- (id)pluginKitPlug;
- (void)setPluginKitPlug:(id)arg1;
- (id)plugIns;
- (void)setAPIManager:(id)arg1;
- (id)apiManager;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)groupsDictionary;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBundleHandler:(id)arg1;
- (void)reportError:(id)arg1;
- (id)getBundle;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

