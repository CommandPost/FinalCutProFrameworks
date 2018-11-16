//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

@class MIORADPluginManager, NSMutableArray, NSUndoManager;

@interface MIORADManager : MIOObject
{
    NSMutableArray *_volumes;
    NSMutableArray *_radVolumes;
    NSMutableArray *_archiveVolumes;
    NSMutableArray *_flatClipsArray;
    NSMutableArray *_spannedClips;
    NSUndoManager *_undoManager;
    MIORADPluginManager *_pluginManager;
    BOOL _shouldAddVolumesSynchronously;
}

+ (void)initialize;
+ (id)sharedRADManager;
+ (void)releaseSharedRADManager;
- (id)init;
- (void)loadRADPlugins:(id)arg1 andValidate:(id)arg2;
- (BOOL)createVolumeListWithPath:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)clipForUID:(id)arg1;
- (id)clipForInProgressSubSegment:(id)arg1;
- (BOOL)shouldMountSynchronously;
- (id)extendedClipProperties;
- (BOOL)volumeExistsAtPath:(id)arg1 checkMountingVolumes:(BOOL)arg2 withPluginID:(id)arg3;
- (BOOL)doesPath:(id)arg1 containSomeOfClipsWithUIDs:(id)arg2;
- (BOOL)pathIsValidVolume:(id)arg1;
- (void)addVolumeForPath:(id)arg1;
- (void)addVolumesForPaths:(id)arg1;
- (void)addTempVolume:(id)arg1;
- (void)removeTempVolumeForPath:(id)arg1;
- (BOOL)replaceVolume:(id)arg1 withVolume:(id)arg2;
- (BOOL)addVolume:(id)arg1;
- (void)replaceTempVolumeWithVolume:(id)arg1;
- (void)postVolumeFailedToMount:(id)arg1;
- (void)removeClipFromFlatClipsArray:(id)arg1;
- (void)scanForiOSDevices;
- (BOOL)removeVolume:(id)arg1;
- (void)removeListOfRADVolumes;
- (id)volumes;
- (id)clips;
- (id)spannedClips;
- (id)volumeAtIndex:(unsigned int)arg1;
- (unsigned int)volumeIndex:(id)arg1;
- (unsigned int)volumeCount;
- (void)afcDeviceMountingFailed:(id)arg1;
- (void)afcDevicesChanged:(id)arg1;
- (void)volumeDidMount:(id)arg1;
- (void)volumeWillUnmount:(id)arg1;
- (void)volumeDidUnmount:(id)arg1;
- (void)addPluginVolumes:(id)arg1;
- (void)pluginVolumesInvalid:(id)arg1;
- (void)removeListOfSpannedClips;
- (void)setUndoManager:(id)arg1;
- (id)undoManager;
- (void)setPluginManager:(id)arg1;
- (void)setShouldAddVolumesSynchronously:(BOOL)arg1;
- (BOOL)shouldAddVolumesSynchronously;
- (id)arrayProxyForVolume:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)metadataDefinitionsFromPlugins;

@end
