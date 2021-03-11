//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIO/MIOObject.h>

@class MIORADManager, NSMutableDictionary, NSNotificationCenter, NSUndoManager;

@interface MIORADPluginManager : MIOObject
{
    NSMutableDictionary *_registeredPlugins;
    NSUndoManager *_undoManager;
    MIORADManager *_radManager;
    NSNotificationCenter *_pluginNotificationCenter;
}

@property MIORADManager *radManager; // @synthesize radManager=_radManager;
- (void)pluginVolumesFound:(id)arg1;
- (id)metadataDefinitionsFromPlugins;
- (void)broadcastPathToPlugins:(id)arg1;
- (id)invalidVolumesFromPlugin:(id)arg1 withErrors:(id *)arg2;
- (void)volumesFromPlugin:(id)arg1;
- (void)postPluginVolumesReady:(id)arg1;
- (id)pathIsValidVolume:(id)arg1;
- (id)pluginForPluginID:(id)arg1;
- (BOOL)doesPath:(id)arg1 containSomeOfClipsWithUIDs:(id)arg2;
- (id)notificationCenter;
- (void)registerPluginBundles:(id)arg1;
- (id)getPluginBundlesFromPaths:(id)arg1;
- (id)enumeratePluginPaths:(id)arg1;
- (void)setRADManager:(id)arg1;
- (void)dealloc;
- (id)initWithUndoManager:(id)arg1 radManager:(id)arg2 notificationCenter:(id)arg3 searchPaths:(id)arg4 andValidate:(id)arg5;

@end

