//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFBackgroundTaskTarget-Protocol.h>
#import <Flexo/FFStorageLocationOutOfDiskSpaceProtocol-Protocol.h>
#import <Flexo/MIOCoreDelegateProtocol-Protocol.h>
#import <Flexo/MIODestinationProtocol-Protocol.h>

@class FFBackgroundTask, FFPTPDownloadManager, MIORADCore, NSCondition, NSHashTable, NSMutableDictionary, NSMutableSet;

@interface FFRADIngestManager : NSObject <MIOCoreDelegateProtocol, MIODestinationProtocol, FFStorageLocationOutOfDiskSpaceProtocol, FFBackgroundTaskTarget>
{
    BOOL _ingestBackgroundTaskRunning;
    FFBackgroundTask *_ingestBackgroundTask;
    BOOL _ingestBackgroundTaskCancelled;
    unsigned int _ingestClipsAddedCount;
    unsigned int _ingestClipsCompletedCount;
    NSMutableDictionary *_ingestClipsInProgress;
    NSCondition *_condition;
    NSMutableDictionary *_ingestStopwatches;
    MIORADCore *_radCore;
    BOOL _willCloseDown;
    BOOL _showsAlert;
    BOOL _isReimport;
    NSHashTable *_preIngestRADAssets;
    NSMutableSet *_clipsToThumbnail;
    FFPTPDownloadManager *_ptpDownloadManager;
    NSMutableDictionary *_destinationTempFolders;
    BOOL _pausedThumbnailRequests;
    BOOL _autoCorrect;
}

+ (void)removeFileImportUserNotifications;
+ (id)radVolumeForPTPDeviceLocationID:(id)arg1;
+ (void)postUserNotificationForPTPDeviceLocationID:(id)arg1;
+ (void)removeRADVolumeUserNotificationPTPDeviceLocationID:(id)arg1;
+ (void)removeRADVolumeUserNotificationForURL:(id)arg1;
+ (void)removeUserNotificationOnRADVolume:(id)arg1;
+ (void)ejectRADVolumeAtPath:(id)arg1;
+ (void)addOwnedClipsToEventMainThread:(id)arg1;
+ (id)generateClipNameFromClip:(id)arg1;
+ (BOOL)moveSourceURL:(id)arg1 toExternalFileURL:(id)arg2 withSymlinkAtTargetURL:(id)arg3;
+ (id)rangeStringWithRADClip:(id)arg1;
+ (id)stringWithFilename:(id)arg1 rangeString:(id)arg2;
+ (BOOL)isFullClipImport:(CDStruct_e83c9415)arg1 mediaRange:(CDStruct_e83c9415)arg2 frameDuration:(CDStruct_1b6d18a9)arg3;
+ (void)takeClipsOffline:(id)arg1;
+ (void)addKeywords:(id)arg1 toClip:(id)arg2 inEvent:(id)arg3;
+ (id)radCore;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
+ (id)keyPathsForValuesAffectingImporting;
@property BOOL showsAlert; // @synthesize showsAlert=_showsAlert;
@property BOOL willCloseDown; // @synthesize willCloseDown=_willCloseDown;
@property BOOL autoCorrect; // @synthesize autoCorrect=_autoCorrect;
@property(retain) NSMutableDictionary *ingestClipsInProgress; // @synthesize ingestClipsInProgress=_ingestClipsInProgress;
@property(retain) NSCondition *condition; // @synthesize condition=_condition;
@property(retain) FFBackgroundTask *ingestBackgroundTask; // @synthesize ingestBackgroundTask=_ingestBackgroundTask;
- (void)removeTempFolderForSubSegment:(id)arg1;
- (void)clipRemovedFromQueue:(id)arg1;
- (void)_updateStatusTextDescription;
- (id)sidebarCameraItems;
- (void)postFileImportCompleteUserNotification;
- (void)postIngestCompleteUserNotificationOnRADVolume:(id)arg1;
- (BOOL)isPTPDownloadRequestPendingOnRADVolume:(id)arg1;
- (BOOL)isIngestPendingOnRADVolume:(id)arg1;
- (BOOL)isCopyRequestPendingOnRADVolume:(id)arg1;
- (void)assetCopyQueueCompletedMainThread:(id)arg1;
- (void)assetCopyQueueCompleted:(id)arg1;
- (BOOL)isUserNotificationSupported;
- (id)librariesInUse:(id)arg1;
- (id)assetsChanging:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)stopWritingFilesToLocation:(id)arg1;
- (void)invalidateAssetForVolumeDidMount:(id)arg1;
- (void)invalidateRADAssets:(id)arg1;
- (void)radVolumeWillUnmount:(id)arg1;
- (void)unregisterRADAssetForVolumeNotifications:(id)arg1;
- (void)registerRADAssetForVolumeNotifications:(id)arg1;
- (id)importRangesOfMedia:(id)arg1 toEvent:(id)arg2 withKeywords:(id)arg3;
- (void)restoreOriginalClipIfNecessaryForAsset:(id)arg1 inEvent:(id)arg2 withKeywords:(id)arg3;
- (void)completedTask:(id)arg1;
- (void)startedTask:(id)arg1;
- (void)canceledTask:(id)arg1;
- (void)resumedTask:(id)arg1;
- (BOOL)confirmIsPaused:(id)arg1;
- (void)pausedTask:(id)arg1;
- (void)radVolumeDidUnmount:(id)arg1;
- (void)stopAllIngestsFromVolume:(id)arg1;
- (void)stopAllIngestsToLocation:(id)arg1;
- (void)stopAllIngests;
- (void)updateBackgroundThread;
- (void)stopIngestOfCurrentClip;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)reimportForClips:(id)arg1 validateOnly:(BOOL)arg2;
- (BOOL)reimportForSequenceProject:(id)arg1 validateOnly:(BOOL)arg2;
- (BOOL)reimportForEventProjects:(id)arg1 validateOnly:(BOOL)arg2;
- (void)reimportAssetRefs:(id)arg1 newEventLocation:(id)arg2;
- (BOOL)showAllCamerasMissingDialog;
- (BOOL)showSomeCamerasMissingDialog;
- (BOOL)showNothingToReimportDialog;
- (BOOL)showNoCameraClipsReimportDialog;
- (BOOL)showReimportDialog;
- (BOOL)ingestClipFFMIORADAsset:(id)arg1 clippedRange:(id)arg2 newClip:(id)arg3 sourceClip:(id)arg4 event:(id)arg5 isReimport:(BOOL)arg6 ingestStartDate:(id)arg7;
- (void)backgroundIngestProgress:(id)arg1 task:(id)arg2;
- (void)mioIngestErrorMain:(id)arg1;
- (void)mioIngestError:(id)arg1;
- (void)mioClipDidIngestMain:(id)arg1;
- (void)mioClipDidIngest:(id)arg1;
- (void)mioClipWillIngest:(id)arg1;
- (id)displayName;
- (id)addClipToQueue:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (void)cancelAndWaitForTaskToFinish:(id)arg1;
- (BOOL)importing;
- (id)ptpDownloadManager;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (id)radCore;

@end

