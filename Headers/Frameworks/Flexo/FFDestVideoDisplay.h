//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFDestVideoDrawsInUI.h>

#import <Flexo/FFDestVideoCreateOnScreenControlsTextureProtocol-Protocol.h>
#import <Flexo/FFDestVideoSuspendRequestInfoRecalcProtocol-Protocol.h>

@class FFDestVideoRequestInfo, FFPMRLogFunnel, FFPlayerFrame, NSColor, NSMutableArray, NSObject;
@protocol FFVideoPainting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FFDestVideoDisplay : FFDestVideoDrawsInUI <FFDestVideoSuspendRequestInfoRecalcProtocol, FFDestVideoCreateOnScreenControlsTextureProtocol>
{
    struct FFSynchronizable *_frameQueueLock;
    NSMutableArray *_frameQueue;
    FFPlayerFrame *_lastSelectedFrame;
    unsigned int _normalQueueSize;
    CDStruct_1b6d18a9 _normalQueueDuration;
    unsigned int _maxQueueCapacity;
    int _lateDraw;
    unsigned int _rangeCheckMode;
    int _playbackUIBackgroundPref;
    BOOL _observingUserDefaults;
    struct {
        struct __CVDisplayLink *_link;
        _Bool _initialized;
        struct atomic<bool> _queuedStopIsPending;
        struct FFSynchronizable *_displayLinkSync;
        char _displayLinkIsRunning;
        struct atomic<double> _sleepIntervalStartTime;
        double _lastDisplayLinkCallTimeInSeconds;
        struct _opaque_pthread_t *_threadInDisplayLinkCB;
        struct PCProcrastinatedDispatch_t _queuedStopProcastinated;
        NSObject<OS_dispatch_queue> *_queuedStopQueue;
        unsigned int _lastDirectDisplayID;
    } _displayLink;
    struct FFSynchronizable *_destLock;
    BOOL _unsafeToReuse;
    struct CGColorSpace *_deviceColorSpace;
    NSColor *_backgroundColor;
    id <FFVideoPainting> _renderHelper;
    int _cachedPossiblyStaleRawDrawStyle;
    _Bool _appIsTerminating;
    struct FFSynchronizable *_curReqInfoLock;
    FFDestVideoRequestInfo *_currentRequestInfo;
    struct PCProcrastinatedDispatch_t _updateRequestInfo;
    NSObject<OS_dispatch_queue> *_updateRequestInfoQueue;
    FFPMRLogFunnel *_pmrFunnel;
    int _unviewedDrops;
    struct CGSize _viewSize;
    CDStruct_1b6d18a9 _lastReturnTime;
    CDStruct_1b6d18a9 _lastReturnTimeDuringPlayback;
    struct FFTimingIntervalInfo *_intervalBetweenCallsDuringPlayback;
    struct FFTimingIntervalInfo *_drawingCompletedCostDuringPlayback;
    struct FFTimingIntervalInfo *_drawingQueuedCostDuringPlayback;
    _Bool _hasFoundRealFrameSinceFlush;
    BOOL _disableOSCs;
}

- (id).cxx_construct;
@property BOOL disableOSCs; // @synthesize disableOSCs=_disableOSCs;
- (void)resumeRequestInfoRecalc;
- (void)suspendRequestInfoRecalc;
- (_Bool)_currentThreadRunningDisplayLinkCallback;
- (int)_displayTimerCallback:(const CDStruct_e50ab651 *)arg1 outTime:(const CDStruct_e50ab651 *)arg2;
- (int)drawNow:(const CDStruct_e50ab651 *)arg1 outTime:(const CDStruct_e50ab651 *)arg2;
- (_Bool)_isPlayingOrPrerolling;
- (id)_currentPlayer;
- (struct FFSynchronizable *)_frameQueueLock;
- (struct FFSynchronizable *)_curReqInfoLock;
- (struct FFSynchronizable *)_destLock;
@property(readonly) BOOL isRunning;
- (void)stop;
- (void)start:(id)arg1 reason:(id)arg2;
- (void)drawCurrentImageWithViewportSize:(struct CGSize)arg1 painter:(id)arg2 contextData:(id)arg3;
- (void)drawEmptyImageWithViewportSize:(struct CGSize)arg1 painter:(id)arg2 contextData:(id)arg3;
- (id)copyRenderHelper;
- (void)setNeedsUpdate:(BOOL)arg1;
- (void)setEnableDrawAllAngles:(BOOL)arg1;
- (void)setDrawHelper:(id)arg1;
- (int)drawFieldsInterlaced;
- (id)delegate;
- (void)setDisplay:(unsigned int)arg1;
- (void)setDeviceColorSpace:(struct CGColorSpace *)arg1 backgroundColor:(id)arg2;
- (void)updateDisplaySettings;
- (void)setViewBounds:(struct CGRect)arg1;
- (struct CGSize)viewSize;
- (void)setViewSize:(struct CGSize)arg1;
- (_Bool)performOverfullRecovery;
- (_Bool)supportsOverfullRecovery;
- (void)setDelegate:(id)arg1;
- (void)checkForUpdatedImageLocation;
- (void)_notifyPlayer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 rate:(double)arg3 rawFrameDur:(CDStruct_1b6d18a9)arg4 needsUpdate:(BOOL)arg5;
- (id)_copyPlayerFrameForTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 tbRate:(double)arg3 effFrameDur:(CDStruct_1b6d18a9)arg4 retIsStale:(char *)arg5 retQSize:(unsigned long long *)arg6;
- (id)copyEstimatedVRAMRequirements:(int)arg1 reqInfoHint:(id)arg2;
- (int)getFrameQueueStatus;
- (int)_getFrameQueueStatusWithPlayerTime:(CDStruct_1b6d18a9)arg1 rawFrameDuration:(CDStruct_1b6d18a9)arg2 rate:(double)arg3;
- (void)pushFrame:(id)arg1;
- (void)liveFlushWithRunout:(unsigned int)arg1 playerTime:(CDStruct_1b6d18a9)arg2 rate:(double)arg3;
- (void)flush:(BOOL)arg1;
- (void)_pmrLogQueueDepth:(_Bool)arg1 count:(unsigned long long)arg2 frameDur:(CDStruct_1b6d18a9)arg3;
- (id)newOnScreenControlsTextureForFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 drawProperties:(id)arg3 isDisplaying:(BOOL)arg4;
- (id)newDrawPropertiesForFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_internalFlush:(BOOL)arg1 keepLastSelected:(BOOL)arg2;
- (void)setPlayer:(id)arg1;
- (CDStruct_1b6d18a9)queueDuration;
- (void)setSampleDuration:(CDStruct_1b6d18a9)arg1 fieldDominance:(int)arg2 sequenceBounds:(struct CGRect)arg3 sequenceCameraMode:(int)arg4;
- (void)setRangeCheckZebraMode:(unsigned int)arg1;
- (int)getRawDrawStyleWithoutLocking;
- (void)_recalculateRequestedImageInfo;
- (void)_queueRecalcRequestedImageInfo:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (const struct FxDeviceSet *)_queueLocation;
- (id)requestedImageInfo;
- (void)_recordDroppedFrame:(id)arg1;
- (void)notifyDestOfUIDrawingParameterChange;
- (void)_reportDisplayLinkStats;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

