//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFStorageLocationOutOfDiskSpaceProtocol.h"
#import "MIOCoreDelegateProtocol.h"
#import "MIODestinationProtocol.h"

@class FFBackgroundTask, FFMediaEventProject, MIORADCore, NSCondition, NSHashTable, NSMutableDictionary, NSMutableSet;

@interface FFRADIngestManager : NSObject <MIOCoreDelegateProtocol, MIODestinationProtocol, FFStorageLocationOutOfDiskSpaceProtocol>
{
    BOOL _ingestBackgroundTaskRunning;
    FFBackgroundTask *_ingestBackgroundTask;
    BOOL _ingestBackgroundTaskCancelled;
    unsigned int _ingestClipsAddedCount;
    unsigned int _ingestClipsCompletedCount;
    NSMutableDictionary *_ingestClipsInProgress;
    NSCondition *_condition;
    NSMutableDictionary *_ingestStopwatches;
    FFMediaEventProject *_currentEvent;
    MIORADCore *_radCore;
    BOOL _willCloseDown;
    BOOL _showsAlert;
    BOOL _isReimport;
    NSHashTable *_preIngestRADAssets;
    NSMutableSet *_clipsToThumbnail;
    BOOL _autoCorrect;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)radCore;
- (id)radCore;
- (id)init;
- (void)dealloc;
- (void)cancelAndWaitForTaskToFinish:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (id)addClipToQueue:(id)arg1;
- (id)displayName;
- (void)mioClipWillIngest:(id)arg1;
- (void)mioClipDidIngest:(id)arg1;
- (void)mioIngestError:(id)arg1;
- (void)backgroundIngestProgress:(id)arg1 task:(id)arg2;
- (BOOL)ingestClipFFMIORADAsset:(id)arg1 clippedRange:(id)arg2 newClip:(id)arg3 sourceClip:(id)arg4 event:(id)arg5 isReimport:(BOOL)arg6;
- (BOOL)showReimportDialog;
- (BOOL)showNoCameraClipsReimportDialog;
- (BOOL)showNothingToReimportDialog;
- (BOOL)showSomeCamerasMissingDialog;
- (BOOL)showAllCamerasMissingDialog;
- (void)reimportAssetRefs:(id)arg1 newEventLocation:(id)arg2;
- (BOOL)reimportForOrganizerModule:(id)arg1 organizerSelectionState:(unsigned int)arg2 organizerSelectedBrowser:(unsigned int)arg3 project:(id)arg4 validateOnly:(BOOL)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)restoreMediaMapOnClip:(id)arg1;
- (void)stopIngestOfCurrentClip;
- (void)stopAllIngests;
- (void)stopAllIngestsToLocation:(id)arg1;
- (void)pausedTask:(id)arg1;
- (BOOL)confirmIsPaused:(id)arg1;
- (void)resumedTask:(id)arg1;
- (void)canceledTask:(id)arg1;
- (id)generateClipNameFromClip:(id)arg1;
- (id)importRangesOfMedia:(id)arg1;
- (void)addMediaSetToEventMainThread:(id)arg1;
- (void)markImportedRange:(CDStruct_e83c9415)arg1 onClipsWithID:(id)arg2 inVolumes:(id)arg3 originalClip:(id)arg4;
- (void)restoreOriginalClipIfNecessaryForAsset:(id)arg1 inEvent:(id)arg2;
- (id)importRangesOfMediaMainThread:(id)arg1;
- (void)registerRADAssetForVolumeNotifications:(id)arg1;
- (void)unregisterRADAssetForVolumeNotifications:(id)arg1;
- (void)invalidateRADAssets:(id)arg1;
- (void)stopWritingFilesToLocation:(id)arg1;
@property BOOL showsAlert; // @synthesize showsAlert=_showsAlert;
@property BOOL willCloseDown; // @synthesize willCloseDown=_willCloseDown;
@property BOOL autoCorrect; // @synthesize autoCorrect=_autoCorrect;
@property(retain) NSMutableDictionary *ingestClipsInProgress; // @synthesize ingestClipsInProgress=_ingestClipsInProgress;
@property(retain) NSCondition *condition; // @synthesize condition=_condition;
@property(retain) FFBackgroundTask *ingestBackgroundTask; // @synthesize ingestBackgroundTask=_ingestBackgroundTask;
@property(retain) FFMediaEventProject *currentEvent; // @synthesize currentEvent=_currentEvent;

@end

