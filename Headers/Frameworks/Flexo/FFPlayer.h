//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFContext, FFPMRLogFunnel, FFPlaybackContext, FFPlayerScheduledData, FFProvider, FFSVContext, FFSourceVideo, FFStreamVideo, FFStreamVideoCache, FFStreamVideoOptions, NSConditionLock, NSLock, NSMutableArray, NSMutableSet, NSOperationQueue, NSThread, NSTimer;

@interface FFPlayer : NSObject
{
    FFContext *_ffContext;
    FFPlaybackContext *_context;
    FFProvider *_sourceVideoProvider;
    FFSourceVideo *_sourceVideo;
    FFStreamVideoCache *_streamVideoCache;
    FFStreamVideo *_streamVideo;
    NSMutableArray *_destVideos;
    NSMutableSet *_outOfDateDests;
    NSOperationQueue *_asyncScheduleOpQueue;
    FFPMRLogFunnel *_detailPMRFunnel;
    FFPMRLogFunnel *_summaryPMRFunnel;
    int _loopMode;
    CDStruct_e83c9415 _loopRange;
    CDStruct_e83c9415 _loopRangeWithoutPrePostRoll;
    CDStruct_1b6d18a9 _returnToTime;
    NSTimer *_updateTimeTimer;
    struct OpaqueFigTimebase *_timebase;
    long long _lastPBStartFrameNum;
    CDStruct_1b6d18a9 _duration;
    BOOL _inited;
    NSConditionLock *_threadCondition;
    NSLock *_playerLock;
    NSThread *_playerLockHolder;
    NSMutableSet *_blockingDests;
    NSMutableSet *_starvingDests;
    NSLock *_cachedPropsLock;
    NSLock *_streamMutex;
    long long _currentScheduleFrameIndex;
    NSMutableArray *_scheduledFrames;
    FFPlayerScheduledData *_currentScrubFrame;
    NSMutableArray *_recentlyPushed;
    FFPlayerScheduledData *_lastFrameMD5Only;
    double _rate;
    NSMutableArray *_savedFramesForRateChange;
    NSMutableArray *_heldGridTokens;
    NSThread *_localThread;
    _Bool _waitForThreadToAck;
    FFStreamVideoOptions *_currentVideoOptions;
    struct __CFDictionary *_ptsForCurrentStream[2];
    FFSVContext *_scrubContexts[3];
    FFSVContext *_playContexts[3];
    CDStruct_1b6d18a9 _timeForContext;
    long long _rateForContext;
    CDStruct_1b6d18a9 _sampleDuration;
    CDStruct_1b6d18a9 _frameDuration;
    CDStruct_1b6d18a9 _smallestSampleDuration;
    int _fieldDominance;
    struct CGRect _sequenceBounds;
    int _quality;
    int _temporalQual;
    BOOL _highSpeedPlayReducesTQual;
    BOOL _scrubHighQuality;
    BOOL _draftTextMode;
    unsigned long long _streamAudioFlags;
    struct CGColorSpace *_colorSpace;
    int _mode;
    BOOL _destsStarted;
    BOOL _abortPreroll;
    _Bool _enteredLOHMode;
    struct FFAudioPlayer *_audioPlayer;
    int _renderLocation;
    _Bool _recalcRenderLoc;
    _Bool _oscsOutOfDate;
    _Bool _deferOSCRegeneration;
    BOOL _playsSelected;
    BOOL _showMagicFrame;
    CDStruct_1b6d18a9 _lastSpotlightHoldoff;
    CDStruct_1b6d18a9 _lastUpdateSystemActivity;
    int _framesPushedDuringPB;
    int _framesDroppedOrSkippedDuringPB;
    int _diskRelatedDropSkips;
    int _latePushesDuringPB;
    unsigned long long _pmrPeakKnownBandwidth;
    unsigned long long _pmrPeakUncertainBandwidth;
    int _framesFromSegmentStore;
    int _framesWithNewImageError;
    int _nThrottled;
    _Bool _sufferedLockHoldoff;
    CDStruct_1b6d18a9 _DEBUG_lastPBStartTime;
    int _throttlePlayheadAmount;
    int _throttlePlayheadCounter;
    int _frameSentSincePreroll;
    _Bool _waitingForInitialFill;
    struct FFPlayerHealthMeter *_healthMeter;
    BOOL _useLoopingPreroll;
    BOOL _useLoopingPostroll;
    BOOL _loopingInhibitedUntilStop;
    BOOL _audioOnlyLooping;
    BOOL _dontRedrawOnInvals;
    BOOL _stopOnDroppedFrame;
    int _stopOnDropExemptions;
    unsigned int _framesSinceFlush;
    BOOL _changingRate;
    int _heliumResourceChoicePolicy;
    struct TimeRateChangeController *_timeRateChangeController;
}

+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)initialize;
+ (void)uiPlayStateChanged;
+ (id)newContextForPT:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 field:(unsigned int)arg3 quality:(int)arg4 temporalQuality:(int)arg5 priority:(int)arg6 options:(id)arg7;
+ (id)newContextForStream:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 field:(unsigned int)arg3 quality:(int)arg4 temporalQuality:(int)arg5 priority:(int)arg6 options:(id)arg7;
+ (id)newHighQualityContextForSource:(id)arg1 field:(unsigned int)arg2;
+ (id)newReducedRateTrackerForMultiAngle;
+ (void)teardown;
- (_Bool)_consumeDropExemption;
- (_Bool)_consumeDropExemptions:(int)arg1 retNumConsumed:(int *)arg2;
- (void)_setDropExemptions:(int)arg1;
- (void)_addDestDropInfo:(id)arg1 forDests:(id)arg2;
- (id)description;
- (void)resetPMRStats;
- (_Bool)getOGLContextForThread;
- (_Bool)establishOGLContextForThread;
- (void)playerRenderThreadMain:(id)arg1;
- (int)_holdOffOSServicesForUIPlayback;
- (void)_suspendBGOpsDuringPlayObserver:(id)arg1;
- (id)init;
- (id)initWithVideoSource:(id)arg1 quality:(int)arg2 playbackContext:(id)arg3 mode:(int)arg4;
- (void)setPlaysSelected:(BOOL)arg1;
- (BOOL)playsSelected;
- (void)dealloc;
- (void)shutdown;
- (void)_waitForThreadToFinish;
- (id)_newEmptyImageForRect:(struct CGRect)arg1 pixelTransform:(id)arg2 loc:(int)arg3;
- (void)setContext:(id)arg1;
- (void)_setNeedsUpdateInternal:(BOOL)arg1 enableLiveEditsOptimization:(BOOL)arg2;
- (void)setNeedsUpdate:(BOOL)arg1;
- (void)_forceAllDestsToRedraw;
- (void)_markAllDestsAsNeedingRedraw;
- (void)videoRangeInvalidated:(id)arg1;
- (void)_setSourceVideo:(id)arg1;
- (id)videoSource;
- (id)videoStream;
- (id)audioSource;
- (void)setSourceAudio:(id)arg1;
- (void)setupComplete;
- (long long)videoDestCount;
- (void)cancelWorkIfNoDestsRemain;
- (void)addDestVideo:(id)arg1;
- (void)removeDestVideo:(id)arg1;
- (void)removeAllDestVideos;
- (void)addDestAudio:(id)arg1;
- (void)removeDestAudio:(id)arg1;
- (void)addDestAudioRender:(id)arg1;
- (void)removeAllDestAudioRenders;
- (void)_updateMasterClockForCurrentDests;
- (BOOL)_needSecondField:(id)arg1;
- (BOOL)_needAllAngles:(id)arg1;
- (void)_forgetGraphedFrames;
- (void)setLastFramePushed:(id)arg1;
- (id)lastFramePushed;
- (id)_newPlayerSchedDataForTime:(CDStruct_1b6d18a9)arg1 timeRepresented:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 context1:(id)arg4 context2:(id)arg5 aaContext:(id)arg6 aaRepeats:(int)arg7;
- (BOOL)_pushEmptyFrame:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)time;
- (BOOL)loop;
- (void)setLoop:(BOOL)arg1;
- (void)useGlobalLoopMode:(BOOL)arg1;
- (CDStruct_e83c9415)loopRange;
- (void)_recalculateLoopRange;
- (void)setLoopRange:(CDStruct_e83c9415)arg1;
- (void)setAudioOnlyLooping:(BOOL)arg1;
- (void)resetLoopRange;
- (CDStruct_1b6d18a9)returnToTime;
- (void)setReturnToTime:(CDStruct_1b6d18a9)arg1;
- (void)resetReturnToTime;
- (void)toggleLoopingPreroll;
- (void)toggleLoopingPostroll;
- (void)inhibitLoopingUntilStop;
- (void)flush;
- (void)_flushInternalDueToContentChange:(BOOL)arg1 contextChange:(BOOL)arg2 enableLiveEditsOptimization:(BOOL)arg3;
- (void)_generateOverlayTextures:(id)arg1 pmrMsg:(struct __CFString *)arg2;
- (void)_playCompletedWithDrops:(id)arg1;
- (void)maybeReportPlaybackCompleteDropSkipWarningForTotalDropCount:(int)arg1 totalPushed:(int)arg2 diskRelated:(int)arg3 oldRate:(float)arg4;
- (void)_stopDueToDrop:(id)arg1 additionalInfo:(id)arg2;
- (void)_stopDueToDrop:(id)arg1;
- (void)_noteDroppedFrames:(int)arg1 firstDrop:(CDStruct_1b6d18a9)arg2 additionalInfo:(id)arg3 pmrInfo:(struct __CFString *)arg4;
- (id)copyFirstOnTimeFrameFromArray:(id)arg1 rate:(double)arg2 nowTime:(CDStruct_1b6d18a9)arg3 maxDestLatency:(unsigned int)arg4;
- (id)copyFirstOnTimeFrame:(double)arg1 nowTime:(CDStruct_1b6d18a9)arg2 maxDestLatency:(unsigned int)arg3;
- (int)_cancelMostLateFrames:(id)arg1 rate:(double)arg2 nowTime:(CDStruct_1b6d18a9)arg3 chosenFrame:(id)arg4 maxDestLatency:(unsigned int)arg5 dests:(id)arg6 reason:(struct __CFString *)arg7;
- (int)_countCompletedReadAheads:(id)arg1 retDecodeAheadCount:(int *)arg2 retSchedAhead:(int *)arg3;
- (void)_pruneExtraOldFrames:(double)arg1 nowTime:(CDStruct_1b6d18a9)arg2 chosenFrame:(id)arg3 maxDestLatency:(unsigned int)arg4 reason:(struct __CFString *)arg5;
- (id)_newChosenAndAlternates:(id)arg1 rate:(double)arg2 nowTime:(CDStruct_1b6d18a9)arg3 chosenFrame:(id)arg4 maxDestLatency:(unsigned int)arg5;
- (id)newFramesToQueue:(id)arg1;
- (id)_copyCurrentFrames;
- (id)_newFramesNeedingScheduling;
- (id)copyFramesToBeHinted:(id)arg1 rate:(double)arg2;
- (BOOL)_buildOneFrame:(double)arg1 retSchedTime:(CDStruct_1b6d18a9 *)arg2 maxDestLatency:(unsigned int)arg3;
- (void)_transferReusableFlattenedFrames:(id)arg1 dests:(id)arg2 last:(id)arg3;
- (id)_copyDestsToSkipForTime:(CDStruct_1b6d18a9)arg1 destList:(id)arg2;
- (_Bool)_maybeQueueFrame:(id)arg1 referenceFrames:(id)arg2 dests:(id)arg3 renderLocation:(int)arg4;
- (void)_ensureScheduledFramesHaveUsableDests;
- (BOOL)videoDestsWantFrame;
- (int)_renderVideo;
- (void)idle;
- (void)_waitForNextNInputs:(unsigned long long)arg1 beforeDate:(id)arg2;
- (BOOL)_videoDestsWantFrame;
- (unsigned int)_maxVideoDestOutputLatencyInFrames;
- (void)_rebuildDestLists;
- (void)videoDestCallback:(BOOL)arg1 forVideoDest:(id)arg2;
- (void)destAudioRenderCallback;
- (BOOL)destsUpToDate;
- (unsigned int)meterAudioLevels:(float *)arg1 channels:(unsigned int)arg2;
- (void)_startVideo:(id)arg1;
- (int)start:(double)arg1 maxDestLatency:(unsigned int)arg2;
- (void)stop;
- (void)_stop;
- (int)_stashFramesForRateChange:(CDStruct_1b6d18a9)arg1 frameDuration:(CDStruct_1b6d18a9)arg2 oldrate:(double)arg3 rate:(double)arg4;
- (void)_setTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 duration:(CDStruct_1b6d18a9)arg3 forceRedraw:(BOOL)arg4;
- (BOOL)_shouldStopAtLoopRangeEnd;
- (void)setTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2;
- (void)setTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 duration:(CDStruct_1b6d18a9)arg3 forceRedraw:(BOOL)arg4;
- (void)setTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 duration:(CDStruct_1b6d18a9)arg3;
- (void)setTimeRateDuration:(id)arg1;
- (double)rate;
- (double)playerRate;
- (void)setPlayerTimeToPlayerSampleBoundary;
- (void)setDeferOSCGeneration:(_Bool)arg1;
- (void)processDeferredOSCs;
- (void)regenerateOSCs;
- (CDStruct_1b6d18a9)frameDuration;
- (void)setFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)sampleDuration;
- (void)setSampleDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)stepDuration;
- (void)setStatus:(id)arg1;
- (void)clearStatus;
- (int)_fieldDominance;
- (int)quality;
- (int)temporalQuality;
- (BOOL)scrubHighQuality;
- (BOOL)highSpeedPlayReducesTQual;
- (BOOL)draftTextMode;
- (void)_invalidateScrubContext:(BOOL)arg1 invalidatePlayContext:(BOOL)arg2;
- (_Bool)_updateRenderLocIfNeeded;
- (void)_setRenderLocationNeedsUpdate;
- (int)heliumResourceChoicePolicy;
- (void)setHeliumResourceChoicePolicy:(int)arg1;
- (id)ptForQuality:(int)arg1 field:(int)arg2;
- (void)_getContextsForRate:(double)arg1 f1Context:(id *)arg2 f2Context:(id *)arg3 allAnglesContext:(id *)arg4;
- (double)_stopAndLockForQualityChange;
- (void)_unlockAndResumeForQualityChange:(double)arg1;
- (void)setQuality:(int)arg1;
- (void)setTemporalQuality:(int)arg1;
- (void)setHighSpeedPlayReducesTQual:(BOOL)arg1;
- (void)setScrubHighQuality:(BOOL)arg1;
- (void)setDraftTextMode:(BOOL)arg1;
- (int)mode;
- (struct CGRect)sequenceBounds;
- (id)copyCurrentScrubContext;
- (void)_updateTimeViaTimer:(id)arg1;
- (void)_updateFFContextTime:(CDStruct_1b6d18a9)arg1 rate:(long long)arg2 mustUpdate:(_Bool)arg3;
- (void)timeRateChangedForContext:(id)arg1;
- (void)videoQualityChangedForContext:(id)arg1;
- (void)videoTemporalQualityChangedForContext:(id)arg1;
- (void)videoShowObjectsChangedForContext:(id)arg1;
- (void)videoShowObjectsOptionsChangedForContext:(id)arg1;
- (void)videoRolesChangedForContext:(id)arg1;
- (void)streamAudioFlagsChangedForContext:(id)arg1;
- (void)setAbortPreroll:(BOOL)arg1;
- (struct __CFDictionary *)copyPixelTransforms:(id)arg1 forField:(int)arg2;
- (void)_setupFromSourceVideo;
- (id)_sharedLock;
- (void)readLockSequence;
- (void)readUnlockSequence;
- (void)lockPlayer:(const char *)arg1;
- (void)lockPlayer;
- (void)unlockPlayer;
- (void)beginScrubbing:(CDStruct_1b6d18a9)arg1;
- (void)endScrubbing;
- (void)beginStepPlayback:(CDStruct_1b6d18a9)arg1;
- (void)endStepPlayback;
- (void)beginSkimming;
- (void)endSkimming;
- (BOOL)isAudioPlaybackOn;
- (void)notifyAudioPlaybackStateChanged;
- (struct OpaqueFigTimebase *)timebase;
- (id)context;
- (BOOL)showMagicFrame;
- (void)setShowMagicFrame:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_wakeThread:(const char *)arg1;
- (void)_waitForAttention;
- (void)_waitForQueueFill;
- (void)_idleThreadIfSatisfied:(int)arg1;
@property(readonly, nonatomic) FFPlaybackContext *playbackContext; // @synthesize playbackContext=_context;
@property(readonly, nonatomic) BOOL changingRate; // @synthesize changingRate=_changingRate;
@property BOOL stopOnDroppedFrame; // @synthesize stopOnDroppedFrame=_stopOnDroppedFrame;
@property BOOL dontRedrawOnInvals; // @synthesize dontRedrawOnInvals=_dontRedrawOnInvals;
@property _Bool waitForThreadToAck; // @synthesize waitForThreadToAck=_waitForThreadToAck;

@end

