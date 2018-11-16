//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFBackgroundTaskTarget.h"

@class FFBackgroundTask, FFPMRLogFunnel, FFProvider, FFSVContext, FFSourceVideo, NSLock, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSRecursiveLock, NSThread;

__attribute__((visibility("hidden")))
@interface FFRenderStateTracker : NSObject <FFBackgroundTaskTarget>
{
    FFSVContext *_scrubContext;
    FFSourceVideo *_source;
    FFProvider *_provider;
    NSMutableArray *_knownRanges;
    NSMutableArray *_dirtyRanges;
    NSMutableIndexSet *_statesEncountered;
    NSRecursiveLock *_rbLock;
    int _rbLockCount;
    _Bool _stateFullyKnownAtLockTime;
    NSThread *_rbLockHolder;
    CDStruct_e83c9415 _primaryInterestTimeRange;
    NSLock *_bgTaskIVarLock;
    FFBackgroundTask *_backgroundCalculationTask;
    _Bool _bgProcessingEnabled;
    _Bool _timelineIsDragging;
    _Bool _oscIsDragging;
    FFPMRLogFunnel *_pmrFunnel;
    long long _UIPlayersPlayering;
    int _deferredRenderStateNotify;
    NSMutableSet *_segmentsWithDrops;
    _Bool _temporaryHold;
}

+ (id)assetsInUseForSource:(id)arg1;
+ (id)anchoredObjectInUseForSource:(id)arg1;
@property _Bool temporaryHold; // @synthesize temporaryHold=_temporaryHold;
@property(readonly) FFSourceVideo *source; // @synthesize source=_source;
- (id).cxx_construct;
- (id)librariesInUse;
- (id)assetsInUse;
- (id)description;
- (void)runBackgroundCalculationTask:(id)arg1 onTask:(id)arg2;
- (void)setPrimaryInterestTimeRange:(CDStruct_e83c9415)arg1;
- (void)_recalculateInBackground;
- (void)cancelBackgroundOps;
- (BOOL)_calculateRenderStatesOnTask:(id)arg1 timeout:(CDStruct_1b6d18a9)arg2;
- (BOOL)_analyzeNextDirtyInRange:(CDStruct_e83c9415)arg1;
- (int)_getStateForInfo:(id)arg1 startAt:(CDStruct_1b6d18a9)arg2 exitTime:(CDStruct_1b6d18a9)arg3 retRange:(CDStruct_e83c9415 *)arg4 segmentMD5s:(CDStruct_bdcb2b0d *)arg5 diskMD5s:(CDStruct_bdcb2b0d *)arg6 hasData:(char *)arg7 context:(id)arg8;
- (BOOL)_analyzeSegmentStoreForInfo:(id)arg1 checkActual:(_Bool)arg2 startAt:(CDStruct_1b6d18a9)arg3 renderFilePaths:(id)arg4 exitTime:(CDStruct_1b6d18a9)arg5 retRange:(CDStruct_e83c9415 *)arg6 segmentMD5:(CDStruct_bdcb2b0d *)arg7 diskMD5:(CDStruct_bdcb2b0d *)arg8 context:(id)arg9;
- (void)checkRangeAndMD5sForRecentlyCreatedRenderFiles:(CDStruct_e83c9415)arg1 md5s:(id)arg2;
- (void)checkRangeForRecentlyCreatedRenderFiles:(id)arg1;
- (_Bool)analyzeNextDirtyInRange:(CDStruct_e83c9415)arg1;
- (id)md5sInUseInRange:(CDStruct_e83c9415)arg1 collectRenderedSegments:(BOOL)arg2 collectNeedsRenderSegments:(BOOL)arg3;
- (id)md5sInUse;
- (id)statesEncountered;
- (_Bool)stateFullyKnown;
- (id)renderStateInRange:(CDStruct_e83c9415)arg1 wantDetailedSegmentation:(_Bool)arg2;
- (id)renderStateInRange:(CDStruct_e83c9415)arg1;
- (id)renderState;
- (id)copyConsolidatedRenderRangeState:(long long)arg1 endTime:(CDStruct_1b6d18a9)arg2 ignoreMD5:(_Bool)arg3;
- (void)_markRangeAsDirty:(CDStruct_e83c9415)arg1 allowDefer:(_Bool)arg2;
- (void)queueDeferredRenderStateNotify:(id)arg1;
- (void)deferredRenderStateNotify:(id)arg1;
- (void)rangeInvalidated:(id)arg1;
- (void)setState:(int)arg1 forRange:(CDStruct_e83c9415)arg2 withSegmentMD5s:(CDStruct_bdcb2b0d *)arg3 diskMD5s:(CDStruct_bdcb2b0d *)arg4 hasData:(char *)arg5 nativeSampleDur:(CDStruct_1b6d18a9)arg6;
- (CDStruct_e83c9415)_findNextDirtyInRange:(CDStruct_e83c9415)arg1;
- (void)_insertIntoKnownRange:(id)arg1;
- (void)_removeFromDirtyRanges:(CDStruct_e83c9415)arg1;
- (_Bool)_addToDirtyRanges:(CDStruct_e83c9415)arg1;
- (_Bool)_removeRangeFromKnownRanges:(CDStruct_e83c9415)arg1;
- (void)_validateKnownAndDirtyRanges:(id)arg1;
- (_Bool)diskSpaceAvailableForRendering;
- (id)_scrubContext;
- (CDStruct_e83c9415)_videoTimeRange;
- (_Bool)BGProcessingEnabled;
- (void)setBGProcessingEnabled:(_Bool)arg1;
- (void)segmentDroppedFrame:(id)arg1;
- (BOOL)holdingRBLock;
- (_Bool)hasKnownDropSegments;
- (void)rbUnlock;
- (void)rbLock;
- (void)readUnlockSeq;
- (void)readLockSeq:(id)arg1;
- (id)lockableModelObject;
- (id)sequence;
- (void)dealloc;
- (id)initWithSourceVideo:(id)arg1;
- (id)init;
- (void)uiPlaybackStateChange:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (void)oscDidStopDragging:(id)arg1;
- (void)oscWillStartDragging:(id)arg1;
- (void)timelineDidStopDragging:(id)arg1;
- (void)timelineWillStartDragging:(id)arg1;
- (void)_delayedRestartCalc;
- (_Bool)_draggingHoldActive;

@end

