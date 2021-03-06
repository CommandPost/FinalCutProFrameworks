//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue;

@interface FFMediaEventController : NSObject
{
    NSMapTable *_syncRequests;
    BOOL _hasDoneInitialSyncMedia;
    NSOperationQueue *_operationQueue;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
+ (void)initialize;
+ (id)mediaComponentReferencesToMediaID:(id)arg1 inLibrary:(id)arg2;
+ (id)mediaComponentReferencesToMediaID:(id)arg1 inSelection:(id)arg2;
+ (id)_mediaComponentReferencesInObject:(id)arg1 mediaID:(id)arg2 includeAnchored:(BOOL)arg3;
+ (void)_addObject:(id)arg1 toArray:(id)arg2 ifMediaComponentFor:(id)arg3;
@property(readonly, nonatomic) BOOL hasDoneInitialSyncMedia; // @synthesize hasDoneInitialSyncMedia=_hasDoneInitialSyncMedia;
- (BOOL)deleteEvents:(id)arg1 error:(id *)arg2;
- (void)setDefaultMediaEvent:(id)arg1;
- (id)defaultMediaEvent;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (void)appWillBecomeActive:(id)arg1;
- (void)mediaQualityChanged:(id)arg1;
- (void)syncMediaForEventInBackground:(id)arg1;
- (BOOL)syncMediaForEvent:(id)arg1 onlyAsset:(id)arg2 after:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)syncMediaForEvent:(id)arg1 asynchronously:(BOOL)arg2 error:(id *)arg3;
- (void)syncMedia;
- (BOOL)syncLibraryDocument:(id)arg1 error:(id *)arg2;
- (void)waitForSyncMediaRequestsToFinish;
- (BOOL)_syncMedia:(id *)arg1;
- (BOOL)_syncMediaForEvent:(id)arg1 onlyAsset:(id)arg2 selector:(const CDStruct_b1640004 *)arg3 after:(unsigned long long)arg4 error:(id *)arg5;
- (void)_syncCameraClipsForEvent:(id)arg1;
- (void)_invalidateAssets:(id)arg1;
- (void)_syncMediaCompleted:(id)arg1;
- (void)_unregisterSyncRequest:(id)arg1;
- (void)_resetMediaAvailableInEvent:(id)arg1;
- (void)_registerSyncRequest:(id)arg1;
- (id)_findSyncInfo:(id)arg1 identifier:(id)arg2;
- (void)_updateModifiedMediaRep:(id)arg1 forRequest:(id)arg2 finishedDownload:(BOOL)arg3 forceUpdateForProjUpdate:(BOOL)arg4 retryIfFileIsChanging:(BOOL)arg5;
- (void)_updateModifiedMediaRep:(id)arg1 forRequest:(id)arg2 finishedDownload:(BOOL)arg3 forceUpdateForProjUpdate:(BOOL)arg4;
- (void)downloadFinishedForMediaRep:(id)arg1;
- (BOOL)actionAddSnapShotOfSkimmableItemToEventController:(CDStruct_1b6d18a9)arg1 skimmable:(id)arg2 error:(id *)arg3;
- (BOOL)actionMoveClipsToTrash:(id)arg1 mediaRefsToDelete:(id)arg2 error:(id *)arg3;
- (id)undoHandler;

@end

