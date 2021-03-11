//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PluginManager/PROPlugInManager.h>

#import <PluginManager/PROBundleHandlerDelegate-Protocol.h>
#import <PluginManager/PROVersionedAPIAccess-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, PROReadWriteLock;

__attribute__((visibility("hidden")))
@interface PROConcretePlugInManager : PROPlugInManager <PROVersionedAPIAccess, PROBundleHandlerDelegate>
{
    NSMutableDictionary *protocols;
    NSMutableDictionary *groupsDictionary;
    NSMutableDictionary *bundlesDictionary;
    NSMutableDictionary *uuids;
    NSMutableDictionary *classesDictionary;
    NSMutableArray *plugIns;
    NSMutableDictionary *api;
    PROReadWriteLock *apiLock;
    NSMutableArray *plugInSearchDirectories;
    NSMutableArray *deferredPluginBundles;
    NSMutableDictionary *blockedLibraryPlugins;
    NSMutableDictionary *blockedDocumentPlugins;
    id delegate;
    struct {
        unsigned int respondsToDidError:1;
        unsigned int respondsToDidPlugInDidError:1;
        unsigned int respondsToShouldLoadBundle:1;
        unsigned int respondsToShouldLoadPlugIn:1;
        unsigned int respondsToDidLoadPlugIn:1;
        unsigned int useStrictLoading:1;
    } managerFlags;
    NSRecursiveLock *mutex;
}

- (BOOL)validateProtocols:(id)arg1;
- (void)unregisterAPIForProtocol:(id)arg1;
- (void)unregisterAPIForProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned int)arg3;
- (id)apiForProtocol:(id *)arg1 versions:(id)arg2;
- (id)plugInsForProtocols:(id)arg1;
- (id)plugInsForProtocol:(id)arg1;
- (id)objectInBundlesAtIndex:(unsigned int)arg1;
- (unsigned int)countOfBundles;
- (id)blockedDocumentPlugins;
- (id)blockedLibraryPlugins;
- (id)plugInGroupWithUUID:(struct __CFUUID *)arg1;
- (id)plugInWithClassName:(id)arg1;
- (id)plugInWithUUID:(struct __CFUUID *)arg1;
- (id)plugInGroupsMutable;
- (id)plugInGroups;
- (id)plugIns;
- (void)bundleHandler:(id)arg1 didError:(id)arg2;
- (void)bundleHandler:(id)arg1 didAddPlugIn:(id)arg2;
- (BOOL)bundleHandler:(id)arg1 shouldAddPlugIn:(id)arg2;
- (void)scanForPlugInsInBundle:(id)arg1 deferralNotification:(CDUnknownBlockType)arg2;
- (void)scanForPlugInsInBundle:(id)arg1 withPluginKitPlugIn:(id)arg2 deferralNotification:(CDUnknownBlockType)arg3;
- (void)scanForPlugInsInDirectory:(id)arg1 deferralNotification:(CDUnknownBlockType)arg2;
- (void)scanForPlugIns;
- (void)scanForPlugInsInBundleHelper:(id)arg1 zone:(struct _NSZone *)arg2 withPluginKitPlugIn:(id)arg3 deferralNotification:(CDUnknownBlockType)arg4;
- (void)finishPluginSetupForBundle:(id)arg1 handler:(id)arg2;
- (void)mergeGroupsDictionaryWith:(id)arg1;
- (void)removeAllBlockedDocumentPlugins;
- (void)getNameOverrides:(id)arg1 pluginName:(id *)arg2 bundleName:(id *)arg3;
- (BOOL)checkIfShouldBlockPlugin:(id)arg1 returnPluginDictionary:(id *)arg2;
- (BOOL)checkPluginVersionAgainstBlockList:(id)arg1 blockDict:(id)arg2;
- (id)newBlockPluginList:(struct __CFString *)arg1;
- (void)addDocumentBlockedPlugin:(id)arg1;
- (void)addLibraryBlockedPlugin:(id)arg1 bundleName:(id)arg2 pluginName:(id)arg3 version:(id)arg4;
- (void)removePlugin:(id)arg1;
- (void)removeDeferredPluginBundle:(id)arg1;
- (BOOL)bundleIsDeferred:(id)arg1;
- (void)loadDeferredPlugin:(id)arg1;
- (void)loadDeferredPlugins;
- (id)deferredPluginKitPlugs;
- (void)addDeferredPluginBundle:(id)arg1;
- (void)addPlugIn:(id)arg1;
- (void)removeAllPlugIns;
- (id)plugInSearchDirectories;
- (void)removeObjectFromPlugInSearchDirectoriesAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inPlugInSearchDirectoriesAtIndex:(unsigned int)arg2;
- (void)setPlugInSearchDirectories:(id)arg1;
- (void)addPlugInSearchDirectory:(id)arg1;
- (BOOL)shouldLoadPlugIn:(id)arg1;
- (BOOL)shouldLoadBundle:(id)arg1;
- (void)reportError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setRequiresProtocolsToBePresentWhenLoading:(BOOL)arg1;
- (BOOL)requiresProtocolsToBePresentWhenLoading;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

