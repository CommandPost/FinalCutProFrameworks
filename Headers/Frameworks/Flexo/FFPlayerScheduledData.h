//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HGRQCustomJobProtocol.h"
#import "HGRQJobProtocol.h"

@class FFGraphBuildInformation, FFHGAsyncCustomJob, FFHGAsyncFanoutJob, FFPendingHGCJSync, FFPlSchDCSCompareCache, FFRenderedMD5InfoForFrame, FFSVContext, FFSchedInfo, FFScheduleToken, FFStreamVideo, FFSubRangeMD5Info, NSArray, NSCondition, NSDictionary, NSError, NSMutableArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface FFPlayerScheduledData : NSObject <HGRQJobProtocol, HGRQCustomJobProtocol>
{
    FFStreamVideo *_stream;
    CDStruct_1b6d18a9 _time;
    CDStruct_1b6d18a9 _timeRepresented;
    NSString *_frameRepresentedString;
    NSObject *_objectForCustomJobSyncer;
    CDStruct_1b6d18a9 _alwaysFwdTime;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _nativeFrameDur;
    CDStruct_1b6d18a9 _nativeSampleDur;
    struct CGRect _bounds;
    int _fieldCount;
    CDStruct_e83c9415 _streamTimeRange;
    FFSVContext *_contexts[3];
    struct CGRect _opaqueBounds[3];
    FFScheduleToken *_tokens[3];
    FFScheduleToken *_compositeToken;
    unsigned int _knownClearFlags;
    FFScheduleToken *_hintTokens[3];
    CDStruct_1b6d18a9 _schedTimes[3];
    FFPlSchDCSCompareCache *_csCmpCache;
    CDStruct_1b6d18a9 _pushedToDestsTime;
    FFRenderedMD5InfoForFrame *_scheduledCachingInfo[3];
    FFRenderedMD5InfoForFrame *_graphedCachingInfo[3];
    FFSubRangeMD5Info *_md5Infos[3];
    id _imgCost[3];
    NSDictionary *_imgDicts[3];
    int _aaRepeats;
    NSArray *_assignedDests;
    NSSet *_assignedDestsSet;
    NSSet *_skippedDests;
    NSMutableArray *_destBackgroundInfos[3];
    int _renderLocation;
    _Bool _inRenderMode;
    _Bool _forScrub;
    _Bool _waitForLoadingFX;
    _Bool _forPreroll;
    long long _distanceFromLoopPoint;
    float _skipLevelWhenCreated;
    FFSchedInfo *_schedInfo;
    int _cameraMode;
    _Bool _sentPMRLogs;
    FFHGAsyncCustomJob *_generateImageJob;
    int _executionLocation;
    CDStruct_1b6d18a9 _diskIOScheduledTime;
    CDStruct_1b6d18a9 _diskIOCompletionTime;
    double _scheduleTokenTime;
    double _generateGraphTime;
    CDStruct_0ea56580 _scheduleTokenBlockedInfo;
    CDStruct_0ea56580 _graphBuildBlockedInfo;
    CDStruct_0ea56580 _graphExecBlockedInfo;
    long long _readLockWait;
    _Bool _boundToRenderer;
    _Bool _notScheduledWhenChosen;
    double _waitForSchedulingDuration;
    _Bool _diskNotCompleteWhenChosen;
    _Bool _imagedWhileTokenBlockingFlagsSet;
    _Bool _hasStartedGraphing;
    _Bool _notReadyAtEnqueue;
    _Bool _notReadyAtJobStart;
    _Bool _fromSegmentStore;
    _Bool _fromRAMCache;
    double _customJobWaitedInQueueTime;
    double _execJobWaitedInQueueTime;
    FFGraphBuildInformation *_graphBuildInfos[3];
    FFHGAsyncFanoutJob *_flatteningImages[3];
    NSArray *_outputsForDests[3];
    _Bool _inval;
    NSCondition *_guard;
    int _state;
    NSArray *_overlayTexturesForDests;
    NSArray *_overlayInfoForDests;
    _Bool _copiedFlattenedImage;
    _Bool _isBlankFrame;
    _Bool _isAudioFrame;
    _Bool _isRateChangeFrame;
    _Bool _ibpIntoHelium;
    _Bool _ibpMulticam;
    _Bool _unoptIntoHelium;
    _Bool _unoptMulticam;
    unsigned long long _segmentBandwidthEstimate[3];
    unsigned long long _bandwidthEstimate;
    _Bool _bwIsUncertain;
    _Bool _canceledByLiveEdit;
    int _liveEditSpecialHandling;
    _Bool _wasUrgentlyScheduled;
    FFPendingHGCJSync *_customJobSyncer;
    NSError *_errorInfo;
    NSMutableArray *_holdUntilDealloc;
    long long distanceFromLoopPoint;
}

+ (void)initialize;
@property(readonly) int cameraMode; // @synthesize cameraMode=_cameraMode;
@property(readonly) FFSchedInfo *schedInfo; // @synthesize schedInfo=_schedInfo;
@property _Bool bwIsUncertain; // @synthesize bwIsUncertain=_bwIsUncertain;
@property unsigned long long bandwidthEstimate; // @synthesize bandwidthEstimate=_bandwidthEstimate;
@property _Bool unoptMulticam; // @synthesize unoptMulticam=_unoptMulticam;
@property _Bool unoptIntoHelium; // @synthesize unoptIntoHelium=_unoptIntoHelium;
@property _Bool ibpMulticam; // @synthesize ibpMulticam=_ibpMulticam;
@property _Bool ibpIntoHelium; // @synthesize ibpIntoHelium=_ibpIntoHelium;
@property(nonatomic) _Bool isRateChangeFrame; // @synthesize isRateChangeFrame=_isRateChangeFrame;
@property(nonatomic) _Bool isAudioFrame; // @synthesize isAudioFrame=_isAudioFrame;
@property(readonly) _Bool isBlankFrame; // @synthesize isBlankFrame=_isBlankFrame;
@property _Bool fromRAMCache; // @synthesize fromRAMCache=_fromRAMCache;
@property _Bool fromSegmentStore; // @synthesize fromSegmentStore=_fromSegmentStore;
@property(readonly) _Bool notReadyAtJobStart; // @synthesize notReadyAtJobStart=_notReadyAtJobStart;
@property CDStruct_1b6d18a9 pushedToDestsTime; // @synthesize pushedToDestsTime=_pushedToDestsTime;
@property double execJobWaitedInQueueTime; // @synthesize execJobWaitedInQueueTime=_execJobWaitedInQueueTime;
@property double customJobWaitedInQueueTime; // @synthesize customJobWaitedInQueueTime=_customJobWaitedInQueueTime;
@property double generateGraphTime; // @synthesize generateGraphTime=_generateGraphTime;
@property double waitForSchedulingDuration; // @synthesize waitForSchedulingDuration=_waitForSchedulingDuration;
@property _Bool imagedWhileTokenBlockingFlagsSet; // @synthesize imagedWhileTokenBlockingFlagsSet=_imagedWhileTokenBlockingFlagsSet;
@property _Bool diskNotCompleteWhenChosen; // @synthesize diskNotCompleteWhenChosen=_diskNotCompleteWhenChosen;
@property _Bool notScheduledWhenChosen; // @synthesize notScheduledWhenChosen=_notScheduledWhenChosen;
@property _Bool hasStartedGraphing; // @synthesize hasStartedGraphing=_hasStartedGraphing;
@property _Bool boundToRenderer; // @synthesize boundToRenderer=_boundToRenderer;
@property double scheduleTokenTime; // @synthesize scheduleTokenTime=_scheduleTokenTime;
@property(readonly) int executionLocation; // @synthesize executionLocation=_executionLocation;
@property float skipLevelWhenCreated; // @synthesize skipLevelWhenCreated=_skipLevelWhenCreated;
@property long long distanceFromLoopPoint; // @synthesize distanceFromLoopPoint;
@property _Bool forPreroll; // @synthesize forPreroll=_forPreroll;
@property(readonly) int fieldCount; // @synthesize fieldCount=_fieldCount;
@property(readonly, nonatomic) CDStruct_1b6d18a9 timeRepresented; // @synthesize timeRepresented=_timeRepresented;
@property CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(readonly, nonatomic) CDStruct_1b6d18a9 nativeSampleDur; // @synthesize nativeSampleDur=_nativeSampleDur;
@property(readonly, nonatomic) CDStruct_1b6d18a9 nativeFrameDur; // @synthesize nativeFrameDur=_nativeFrameDur;
@property(readonly) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly) FFStreamVideo *stream; // @synthesize stream=_stream;
- (void)setErrorInfo:(id)arg1;
- (id)errorInfo;
- (id)description;
- (void)markForLiveEditSpecialHandling:(int)arg1;
- (int)liveEditSpecialHandling;
- (_Bool)canceledByLiveEdit;
- (void)markAsCancelledByLiveEdit;
- (_Bool)cancelIfInvalAndReturnIsCanceled:(int *)arg1;
- (_Bool)inval;
- (void)setInval:(_Bool)arg1;
- (id)statusInfo;
- (void)sendPMRLogs:(id)arg1 scrubbing:(_Bool)arg2;
- (double)bufferCopyTime;
- (double)executeGraphBlockedTime;
- (double)generateGraphBlockedTime;
- (double)diskIOElapsedTime;
- (double)rendererIdleIntervalBeforeThisJob;
- (double)executeGraphTime;
- (_Bool)_onlyPrimaryContext;
- (BOOL)drawMultiAngle;
- (id)f1Context;
- (long long)readLockWait;
- (_Bool)partiallyFromSegmentStore;
- (_Bool)isCancelled;
- (void)cancel;
- (void)setHintTokens:(id *)arg1;
- (void)hintCacheData:(unsigned int)arg1;
- (_Bool)pushFramesToAssignedDests:(double)arg1 retDestsPushed:(id)arg2 currentTimecodeType:(unsigned int)arg3 healthLevels:(CDStruct_b80813c2)arg4;
- (void)generateOverlayInfo:(double)arg1 currentTimecodeType:(unsigned int)arg2;
- (id)_newPlayerFrameForDestNum:(int)arg1 forRate:(double)arg2 forTimecodeType:(unsigned int)arg3;
- (id)copyPushableImageForDest:(unsigned int)arg1 contextNum:(unsigned int)arg2;
- (_Bool)_flattenedImagesCompatibleWithOwnDests:(_Bool)arg1;
- (void)generateImageRepsAndQueueFlattenToExecuteOn:(int)arg1 withLocationPreference:(int)arg2;
- (void)jobFinished:(id)arg1;
- (void)jobStarted:(id)arg1;
- (void)customHGRenderQueueJobCallback:(struct HGRenderer *)arg1 theJob:(id)arg2;
- (id)newFlattenImageJob:(id)arg1 contextNum:(int)arg2 renderer:(struct HGRenderer *)arg3 bgInfo:(id)arg4 streamProps:(id)arg5;
- (id)_copyRenderPropsForContext:(int)arg1 props:(id)arg2;
- (_Bool)doesDest:(id)arg1 needContext:(int)arg2;
- (_Bool)betterThan:(id)arg1;
- (unsigned int)_schedTokenFlags;
- (_Bool)isUsable;
- (int)frameState;
- (void)setAssignedDests:(id)arg1 destsToSkip:(id)arg2;
- (id)skippedDests;
- (id)assignedDestsInNSSet;
- (id)assignedDests;
- (_Bool)waitForFlattenedImagesBeforeDate:(id)arg1;
- (_Bool)flattenedImagesReady;
- (_Bool)waitAndCheckTokenForAsyncError:(id)arg1 contextNum:(int)arg2;
- (_Bool)codecHasStarted;
- (_Bool)pushToCodecWithTestForAbort:(CDUnknownBlockType)arg1 retPreviouslyPushed:(_Bool *)arg2;
- (_Bool)pushedToCodec;
- (_Bool)waitForInputImagesReadyBeforeTimeInterval:(double)arg1;
- (_Bool)waitForReadyToImageBeforeTimeInterval:(double)arg1;
- (_Bool)_internal_waitForFlagsClear:(unsigned int)arg1 beforeTimeInterval:(double)arg2;
- (_Bool)readyToImage;
- (_Bool)diskIOComplete;
- (_Bool)inputSourcesReady;
- (_Bool)_internalTestFlags:(unsigned int)arg1;
- (void)_updateDiskIOCompletedTime;
- (id)_sharedLock;
- (_Bool)noLongerNeedsScheduling;
- (_Bool)waitUntilScheduled:(id)arg1;
- (_Bool)schedulingComplete;
- (void)queueUrgentSchedule:(id)arg1;
- (_Bool)_scheduleInternal;
- (_Bool)_precalculateMD5_magicFrame_andCheckForLoadingFX:(id)arg1;
- (CDStruct_1b6d18a9)timeForContextNumber:(int)arg1;
- (void)schedule;
- (_Bool)usableFor:(id)arg1 timeRepresented:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 nativeFrameDur:(CDStruct_1b6d18a9)arg4 nativeSampleDur:(CDStruct_1b6d18a9)arg5 context1:(id)arg6 context2:(id)arg7 aaContext:(id)arg8 aaRepeats:(int)arg9;
- (void)updateState:(_Bool)arg1 newState:(int)arg2 cause:(id)arg3;
- (void)validateIvarsForState:(int)arg1;
- (_Bool)getFlattenedImagesFrom:(id)arg1 proposedDests:(id)arg2 willSkipDests:(id)arg3;
- (void)_getFlattenedImagesFrom:(id)arg1;
- (_Bool)canUseFlattenedImagesFrom:(id)arg1 proposedDests:(id)arg2 willSkipDests:(id)arg3;
- (void)_getFrameCacheInfoAlreadyHoldingLock:(id *)arg1;
- (_Bool)noGridForGrid;
- (id)copyForLiveEdit:(id)arg1 saveGrid:(_Bool)arg2 saveF1F2:(_Bool)arg3;
- (id)copyForNewOSCsForProposedDests:(id)arg1 withUnneededDests:(id)arg2 schedInfo:(id)arg3;
- (id)copyForNewGraph:(id)arg1;
- (void)_checkSchedTokFlags:(_Bool)arg1;
- (void)dealloc;
- (id)initWithStream:(id)arg1 time:(CDStruct_1b6d18a9)arg2 timeRepresented:(CDStruct_1b6d18a9)arg3 duration:(CDStruct_1b6d18a9)arg4 nativeFrameDur:(CDStruct_1b6d18a9)arg5 nativeSampleDur:(CDStruct_1b6d18a9)arg6 context1:(id)arg7 context2:(id)arg8 aaContext:(id)arg9 aaRepeats:(int)arg10 bounds:(struct CGRect)arg11 schedQueue:(id)arg12 inRenderMode:(_Bool)arg13 forScrub:(_Bool)arg14 schedInfo:(id)arg15 waitForLoadingFX:(_Bool)arg16 isBlankFrame:(_Bool)arg17 isAudioFrame:(_Bool)arg18 frameRepString:(id)arg19 customJobSyncer:(id)arg20;

@end

