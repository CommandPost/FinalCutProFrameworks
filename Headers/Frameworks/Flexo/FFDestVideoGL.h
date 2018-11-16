//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestVideo.h>

#import "FFDestVideoOptionalMethods.h"

@class FFImage, FFImageDisplay, FFPMRLogFunnel, FFPlayerFrame, NSColor, NSLock, NSMutableArray, NSObject<OS_dispatch_semaphore>, Stopwatch;

__attribute__((visibility("hidden")))
@interface FFDestVideoGL : FFDestVideo <FFDestVideoOptionalMethods>
{
    NSLock *_queueLock;
    NSMutableArray *_renderedFrames;
    FFPlayerFrame *_lastSelectedFrame;
    unsigned int _normalQueueSize;
    unsigned int _maxQueueCapacity;
    int _lateDraw;
    struct __CVDisplayLink *_displayLink;
    BOOL _queuedStopIsPending;
    NSObject<OS_dispatch_semaphore> *_displayLinkSync;
    BOOL _displayLinkIsRunning;
    double _sleepIntervalStartTime;
    int _playerQuality;
    BOOL _displayForThumbnail;
    double _lastDisplayLinkCallTimeInSeconds;
    double _lastDisplayLinkExecDurationInSeconds;
    Stopwatch *_watch;
    double _performanceIntervalStartTime;
    int _unviewedDrops;
    unsigned long long _frameCount;
    _Bool _prevFrameWasScrub;
    CDStruct_1b6d18a9 _drawDelay;
    FFImageDisplay *_imageDisplay;
    unsigned int _display;
    NSColor *_backgroundColor;
    struct CGRect _viewBounds;
    struct _CGLContextObject *_CGLContext;
    struct CGColorSpace *_deviceColorSpace;
    int _currentLocation;
    CDStruct_1b6d18a9 _timeStampOfLastDrawnFrame;
    CDStruct_1b6d18a9 _lastTimeDisplayed;
    BOOL _displayedBothFields;
    BOOL _needsUpdate;
    BOOL _currentDisplayChanged;
    BOOL _willDisplay;
    BOOL _didDisplay;
    BOOL _isVisible;
    unsigned int _rangeCheckMode;
    NSLock *_lock;
    BOOL _drawingSuspended;
    int _requestedBackground;
    BOOL _showHDRAsRawValues;
    BOOL _observingUserDefaults;
    BOOL _drawFloat;
    int _lateCountDrawing;
    int _displayAttempts;
    FFImage *_blueFrame;
    FFPMRLogFunnel *_pmrFunnel;
}

- (id)description;
- (void)_recordDroppedFrame:(id)arg1;
- (_Bool)performOverfullRecovery;
- (_Bool)supportsOverfullRecovery;
- (void)setViewBounds:(struct CGRect)arg1;
- (void)setDeviceColorSpace:(struct CGColorSpace *)arg1 backgroundColor:(id)arg2;
- (void)setCGLContext:(struct _CGLContextObject *)arg1;
- (void)setDisplay:(unsigned int)arg1;
- (void)setCurrentLocation:(int)arg1;
- (void)suspendDrawing;
- (void)resumeDrawing;
- (void)setNeedsUpdateFromTimer:(id)arg1;
- (void)setNeedsUpdate:(BOOL)arg1;
- (int)drawFieldsInterlaced;
- (void)updateObservedValuesForContext:(void *)arg1;
- (void)_updateRenderBackground:(id)arg1;
- (BOOL)isLayerBacked;
- (BOOL)isRunning;
- (void)_queuedStop;
- (void)stop;
- (void)start:(id)arg1;
- (int)_displayTimerCallback:(const CDStruct_e50ab651 *)arg1 outTime:(const CDStruct_e50ab651 *)arg2;
- (void)_drawImages:(id)arg1 forRate:(double)arg2 clockTime:(CDStruct_1b6d18a9)arg3 isStaleFrame:(BOOL)arg4 qSize:(float)arg5;
- (void)debugPrintMultiAngleRects:(id)arg1;
- (void)_drawAudioImageAtTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2;
- (void)_drawMissingImageAtTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2;
- (void)_notifyPlayer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 rate:(double)arg3 rawFrameDur:(CDStruct_1b6d18a9)arg4 needsUpdate:(BOOL)arg5;
- (void)drawEmptyBackground;
- (id)_copyPlayerFrameForTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 tbRate:(double)arg3 retQSize:(float *)arg4;
- (id)_copyPlayerFrameForTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 tbRate:(double)arg3 retIsStale:(char *)arg4 retQSize:(float *)arg5;
- (int)getFrameQueueStatus;
- (int)_getFrameQueueStatusWithPlayerTime:(CDStruct_1b6d18a9)arg1 rawFrameDuration:(CDStruct_1b6d18a9)arg2 rate:(double)arg3;
- (void)pushFrame:(id)arg1;
- (void)liveFlushWithRunout:(unsigned int)arg1 playerTime:(CDStruct_1b6d18a9)arg2 rate:(double)arg3;
- (void)flush:(BOOL)arg1;
- (void)_internalFlush:(BOOL)arg1 keepLastSelected:(BOOL)arg2;
- (void)_pmrLogQueueDepth:(_Bool)arg1 count:(unsigned int)arg2;
- (id)newOnScreenControlsTextureForFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 drawProperties:(id)arg3 isDisplaying:(BOOL)arg4;
- (id)newDrawPropertiesForFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)frameDurationForMaximumOutputRate;
- (void)setSampleDuration:(CDStruct_1b6d18a9)arg1 fieldDominance:(int)arg2 sequenceBounds:(struct CGRect)arg3 sequenceCameraMode:(int)arg4;
- (void)_notifyVisibleChanged;
- (BOOL)_updateVisible;
- (void)setPlayer:(id)arg1;
- (BOOL)showHDRAsRawValues;
- (void)setRangeCheckZebraMode:(unsigned int)arg1;
- (unsigned int)rangeCheckZebraMode;
- (int)requestedBackground;
- (BOOL)wantsDithering:(id)arg1;
- (struct CGSize)maxSupportedSize;
- (id)supportedPixelFormats;
- (struct CGColorSpace *)colorSpace;
- (int)imageLocation;
- (BOOL)callDisplayCallback:(CDStruct_1b6d18a9)arg1 lastTimeDisplayed:(id)arg2 initialDraw:(BOOL)arg3;
- (BOOL)checkDisplayCallback:(CDStruct_1b6d18a9)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithDisplayID:(unsigned int)arg1 andCGLContext:(struct _CGLContextObject *)arg2 usingCoreAnimation:(BOOL)arg3 forSkimming:(BOOL)arg4;

@end

