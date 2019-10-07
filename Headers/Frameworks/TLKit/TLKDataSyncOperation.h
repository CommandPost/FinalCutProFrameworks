//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "TLKOperationPipingSource.h"

@class NSOperationQueue, PCChangeLog, TLKDataSourceProxy, TLKDelegateProxy, TLKLayoutDatabase;

@interface TLKDataSyncOperation : NSOperation <TLKOperationPipingSource>
{
    BOOL _performsOperationsConcurrently;
    BOOL _syncHeightOnly;
    PCChangeLog *_inputChangeLog;
    PCChangeLog *_outputChangeLog;
    TLKDataSourceProxy *_dataSourceProxy;
    TLKLayoutDatabase *_database;
    TLKDelegateProxy *_delegateProxy;
    double _defaultItemHeight;
    NSOperationQueue *_suboperationQueue;
}

@property(readonly, nonatomic) NSOperationQueue *suboperationQueue; // @synthesize suboperationQueue=_suboperationQueue;
@property(nonatomic) double defaultItemHeight; // @synthesize defaultItemHeight=_defaultItemHeight;
@property(nonatomic) BOOL syncHeightOnly; // @synthesize syncHeightOnly=_syncHeightOnly;
@property(nonatomic) BOOL performsOperationsConcurrently; // @synthesize performsOperationsConcurrently=_performsOperationsConcurrently;
@property(retain, nonatomic) TLKDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(retain, nonatomic) TLKLayoutDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) TLKDataSourceProxy *dataSourceProxy; // @synthesize dataSourceProxy=_dataSourceProxy;
@property(copy, nonatomic) PCChangeLog *outputChangeLog; // @synthesize outputChangeLog=_outputChangeLog;
@property(copy, nonatomic) PCChangeLog *inputChangeLog; // @synthesize inputChangeLog=_inputChangeLog;
- (void)_reloadCachedSpineItemsIfNeeded_DELETE_THIS_METHOD;
- (void)_deleteReferencesToRemovedItems_MODEL_ONLY:(id)arg1;
- (void)pruneItemsNotInModelFromArray:(id)arg1;
- (void)_addConnectedItemsForRemovedItems_FETCH_ONLY:(id)arg1;
- (void)processRemovedItems;
- (id)partitionedArrayOfChangeLogsFromInputChangeLog;
- (void)runFetchOperationSynchronouslyAndStoreResultsToSyncItemsOperation:(id)arg1;
- (id)newSyncItemsOperationForChangeLog:(id)arg1;
- (id)newSyncItemsOperation;
- (void)_syncHeightForItems;
- (void)_syncItems;
- (void)_resetBackgroundMusicLane;
- (void)_reloadSpineLane;
- (void)_resetLaneIndexes;
- (void)_deleteRecordsForLanes:(id)arg1;
- (void)_updateRecordsForLanes:(id)arg1;
- (void)_createRecordsForInsertedLanes:(id)arg1;
- (void)_syncChildLanesOfLane:(id)arg1 inTrack:(id)arg2;
- (void)_createRecordsForInsertedLanes:(id)arg1 inTrack:(id)arg2;
- (void)_cachePropertiesForLane:(id)arg1;
- (void)_syncLanes;
- (void)_discardContainerInfoForContainers:(id)arg1;
- (void)_cachePropertiesForTrackContainerInfo:(id)arg1;
- (id)createContainerInfoForContainer:(id)arg1;
- (void)reloadWithTracksAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3 timelineView:(id)arg4;
- (void)_syncTracks;
- (void)updateDefaultItemHeightFromSharedContainerMetrics;
- (void)setupSuboperationQueueBasedOnMultipleThreadSupport;
- (void)raiseExceptionIfRequiredInputPropertiesNotSet;
- (BOOL)inputChangeLogIsUndefinedOrEmpty;
- (void)main;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 dataSourceProxy:(id)arg2 changeLog:(id)arg3;
- (id)init;

@end

