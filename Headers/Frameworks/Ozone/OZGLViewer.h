//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZGLViewerOSC.h>

#import "POHostDelegate.h"
#import "POViewDelegate.h"

@class NSFont, NSImage, NSTimer;

@interface OZGLViewer : OZGLViewerOSC <POHostDelegate, POViewDelegate>
{
    struct OZRenderManager *_pRenderManager;
    shared_ptr_211f3873 *_pRender;
    PCRect_07ce470f _roi;
    struct PCTimer _roiChangedTimer;
    PCRect_b601f9f3 _renderGate;
    PCRect_07ce470f _renderBounds;
    PCRect_07ce470f _lastRoi;
    PCMatrix44Tmpl_e98c85ee _renderPixelTransform;
    BOOL _openGLInitialized;
    BOOL _VSyncOn;
    struct PCMutex _instructionMutex;
    struct OZRenderInstruction *_pRenderInstruction;
    struct queue<OZRenderResult*, std::deque<OZRenderResult*, std::allocator<OZRenderResult*>>> *_pDisplayQueue;
    struct PCMutex *_pDisplayQueueLock;
    NSTimer *_pDisplayTimer;
    struct PCTimer *_pViewerTimer;
    struct PCAtomicValue *_pNeedsRender;
    struct PCAtomicValue *_pRenderReady;
    struct OZRenderState *_pRenderState;
    shared_ptr_ea64efcb *_pRenderTex;
    struct shared_ptr<PGContext> *_pCurrentColorContext;
    struct shared_ptr<PGSurface> *_pCurrentColorSurface;
    BOOL _ignoreNextDisplay;
    struct PCAtomicValue *_pPlayMode;
    struct PCAtomicValue *_pIsPlaying;
    struct PCAtomicValue *_pPlayForward;
    struct PCAtomicValue *_pIsAnimatingCamera;
    double _animStartZoom;
    double _animEndZoom;
    PCVector2_79efa81a _animStartPan;
    PCVector2_79efa81a _animEndPan;
    struct OZVideoOutput *_pVideoOutput;
    BOOL _channelDoneChanging;
    BOOL _videoOutputHasError;
    BOOL _voPostDisplay;
    BOOL _useMainRenderForVideoOut;
    BOOL _renderFullViewWasOn;
    struct queue<OZRenderResult*, std::deque<OZRenderResult*, std::allocator<OZRenderResult*>>> *_pVODisplayQueue;
    struct PCMutex *_pVODisplayQueueLock;
    struct OZAudioMixer *_pAudioMixer;
    unsigned int _audioLoopCount;
    BOOL _playAudio;
    double _updateTimes[60];
    BOOL _haveShownTooBigDialog;
    BOOL _useSceneTimeRangeEnd;
    struct PCSemaphore *_pRenderImageSignal;
    NSImage *_pRenderImageResult;
    struct PCMutex *_pRenderSignal;
    int _nonTimerUpdateDisplayCount;
    NSFont *_tmpFont;
    BOOL _windowWillMiniaturize;
    int _backgroundWidth;
    int _backgroundHeight;
    int _lastRenderWidth;
    int _lastRenderHeight;
    float _monitorGamma;
    double _rate;
    BOOL _didPreroll;
    BOOL _isScheduling;
    struct FFPMRSimpleTimer *_pmrTimer;
    struct OZProxyScrub _proxyScrub;
    int _proxyRendCount;
    struct OZViewPainter *_painter;
    _Bool _painterUsesHelium;
    float _backingScale;
}

+ (PCPtr_4c450fa5)getCamera:(int)arg1 forScene:(struct OZScene *)arg2 atTime:(const CDStruct_1b6d18a9 *)arg3 forViewState:(struct OZViewerState *)arg4;
- (void)initOpenGL;
- (BOOL)wantsBestResolutionOpenGLSurface;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (const struct OZRenderState *)getRenderState;
- (void)setIgnoreTransformationsForElement:(struct OZTransformNode *)arg1;
- (struct OZAudioMixer *)getAudioMixer;
- (int)getResolutionMode;
- (void)setResolutionMode:(int)arg1;
- (_Bool)isDynamicResolutionEnabled;
- (void)setDynamicResolutionMode:(_Bool)arg1;
- (BOOL)isActiveView;
- (_Bool)fullView;
- (PCRect_b601f9f3)getViewGate;
- (PCRect_b601f9f3)renderGate;
- (PCRect_07ce470f)roi;
- (PCRect_07ce470f)renderBounds;
- (PCMatrix44Tmpl_e98c85ee)renderPixelTransform;
- (void)drawVideoOutput;
- (void)initializeOpenGL;
- (_Bool)isIgnoreNextDisplayWithContext:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updatePanZoom;
- (void)reshape;
- (void)setupRenderableArea;
- (void)renewGState;
- (void)updateViewport;
- (void)setMaximumWindowSize;
- (void)setUnrestrictedWindowSize;
- (void)adjustProjectView:(_Bool)arg1;
- (BOOL)displayQueueEmpty;
- (void)windowWillMiniaturize:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)applicationActivated:(id)arg1;
- (void)updateMonitorGamma;
- (float)getMonitorGamma;
- (BOOL)isFlipped;
- (PCRect_07ce470f)anticipateROI:(const PCRect_07ce470f *)arg1 forTransform:(const PCMatrix44Tmpl_e98c85ee *)arg2;
- (void)renderCancelledFunc;
- (void)markNeedingDisplay;
- (_Bool)proxyScrub;
- (int)getScrubQuality:(int)arg1;
- (int)getScrubTextQuality:(int)arg1;
- (_Bool)getScrubHighQualityResampling:(_Bool)arg1;
- (_Bool)getScrubShapeAntialiasing:(_Bool)arg1;
- (_Bool)get3DIntersectionAntialiasing:(_Bool)arg1;
- (void)postPrefetchInstruction:(CDStruct_1b6d18a9)arg1;
- (void)postAudioPrefetchInstruction:(CDStruct_1b6d18a9)arg1;
- (void)postEvalInstruction;
- (void)postGraphBuilderInstruction;
- (void)postRenderInstruction;
- (void)postRenderInstructionForViewer;
- (void)clearRenderInstruction;
- (void)postRenderInstructionForVideoOutput;
- (void)getRenderParams:(struct OZRenderParams *)arg1 forTexture:(BOOL)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)getRenderParams:(struct OZRenderParams *)arg1 forTexture:(BOOL)arg2 atTime:(CDStruct_1b6d18a9)arg3 forceFullView:(BOOL)arg4 mayReduceSpatialQuality:(BOOL)arg5;
- (void)getRenderRequestRenderParams:(struct OZRenderParams *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)startDisplayTimer;
- (void)stopDisplayTimer;
- (void)updateDisplayFromTimer;
- (void)requestNewRender;
- (void)updateDisplay;
- (void)updateViewerFPS;
- (void)setVSync;
- (void)postRedisplay:(_Bool)arg1;
- (void)doPlay;
- (void)doPlayFromStart;
- (void)doPause;
- (void)thinKeyframes;
- (void)stopPause;
- (_Bool)isPlaying;
- (BOOL)didPreroll;
- (void)setDidPreroll:(BOOL)arg1;
- (BOOL)isScheduling;
- (void)setPlayForward:(_Bool)arg1;
- (_Bool)isPlayingForward;
- (_Bool)isAnimatingCamera;
- (BOOL)playAudio;
- (void)setPlayAudio:(BOOL)arg1;
- (void)setPlayMode:(int)arg1;
- (int)getPlayMode;
- (double)getPlaybackFrameRate;
- (void)checkCurrentTimeForLooping;
- (void)updateTime;
- (void)updateTime:(CDStruct_1b6d18a9 *)arg1;
- (CDStruct_1b6d18a9)getNextFrameTime:(CDStruct_1b6d18a9)arg1;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1;
- (void)setRenderTime:(const CDStruct_1b6d18a9 *)arg1;
- (CDStruct_1b6d18a9)getRenderTime;
- (BOOL)isVSyncOn;
- (void)lockFrameRate:(id)arg1;
- (void)abortRenders;
- (void)invalidatePendingRenders;
- (void)ignoreNextDisplay;
- (_Bool)needsRender;
- (void)addRender:(struct OZRenderResult *)arg1;
- (void)addVideoOutputRender:(struct OZRenderResult *)arg1;
- (void)clearDisplayQueue;
- (void)updateRenderManager;
- (void)scrubAudio:(BOOL)arg1;
- (void)updateAudioPlayback;
- (void)notify:(unsigned int)arg1;
- (void)createCurrentColorContext;
- (void)getImageSample:(struct PCColor *)arg1 atFilm:(const PCVector2_79efa81a *)arg2 includeBGColor:(BOOL)arg3;
- (void)selectCamera:(int)arg1 animate:(BOOL)arg2;
- (id)getCameraName;
- (void)selectCamera:(id)arg1;
- (void)selectCurrentCamera:(id)arg1;
- (void)selectNextCamera:(id)arg1;
- (void)activeCamera:(id)arg1;
- (void)perspectiveCamera:(id)arg1;
- (void)frontCamera:(id)arg1;
- (void)backCamera:(id)arg1;
- (void)leftCamera:(id)arg1;
- (void)rightCamera:(id)arg1;
- (void)topCamera:(id)arg1;
- (void)bottomCamera:(id)arg1;
- (void)resetCamera:(id)arg1;
- (void)handleCameraCommand:(int)arg1;
- (void)frameAll:(id)arg1;
- (void)frameObject:(id)arg1;
- (void)focusOnObject:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct OZSceneNode *)getIsolatedNode;
- (struct OZSceneNode *)getIsolatedIncludeAnimating;
- (id)createRenderedImage;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)createDropInfo:(struct OZDropTargetInfo *)arg1 sender:(id)arg2;
- (shared_ptr_ea64efcb)getRenderTexture;
- (BOOL)isVideoOutputEnabled;
- (void)toggleVideoOutput;
- (void)updateDisplayAtCurrentFrame;
- (id)viewerDelegate;
- (double)getRate;
- (void)setRate:(double)arg1;
- (void)incProxyRend;
- (void)decProxyRend;
- (struct OZScene *)getScene;
- (void)correctColorForDisplay:(struct PCColor *)arg1;
- (id)createOSCWithComponent:(struct OZOnScreenControlComponent *)arg1 andChannel:(struct OZChannelBase *)arg2;
- (id)createToolWithComponent:(struct OZToolComponent *)arg1 andChannel:(struct OZChannelBase *)arg2;
- (id)createOverlayWithComponent:(struct OZOverlayComponent *)arg1;
- (PCVector2_7e488b7d)viewCoords2DForEvent:(id)arg1;
- (PCVector2_7e488b7d)filmCoords2DForEvent:(id)arg1;
- (PCVector3_457fd1f0)viewCoords3DForEvent:(id)arg1;
- (PCVector3_457fd1f0)filmCoords3DForEvent:(id)arg1;
- (PCMatrix44Tmpl_e98c85ee)viewTransformation;
- (CDStruct_1b6d18a9)getTime;
- (struct OZScene *)scene;
- (BOOL)has3DObjects;
- (BOOL)applyFlatten;
- (const struct OZRenderState *)renderState;
- (double)getSceneWidth;
- (double)getSceneHeight;
- (double)pixelAspectRatio;
- (double)scenePixelAspectRatio;
- (void)setAnimateFlag:(BOOL)arg1;
- (void)notifyChangeDelta;
- (void)notifyChangeDone;
- (void)notifyObjectChange:(BOOL)arg1;
- (void)notifySceneChange;
- (void)notifyInspectorContentsChanged;
- (void)notifyPathChanged;
- (void)postNotification:(unsigned int)arg1;
- (BOOL)channelChanged:(unsigned int)arg1;
- (BOOL)timeRangeChanged:(unsigned int)arg1;
- (BOOL)sceneListChanged:(unsigned int)arg1;
- (BOOL)objectEnableChanged:(unsigned int)arg1;
- (void)ignoreObserverOnce:(void *)arg1 forFlags:(unsigned int)arg2;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)aboutToChangeChannel:(const struct OZChannelBase *)arg1;
- (void)abort:(BOOL)arg1;
- (void)startCaptureModifiedChannels:(id)arg1;
- (void)endCaptureModifiedChannels;
- (void)beginUndoGroup:(id)arg1;
- (void)endUndoGroup;
- (void)beginTemporaryUndo;
- (BOOL)isInTemporaryUndo;
- (void)endTemporaryUndo;
- (void)clearTemporaryUndoItems;
- (void)undoBegin;
- (void)undoEnd;
- (BOOL)showToolTips;
- (void)drawElementOutline:(struct OZElement *)arg1 state:(const struct OZRenderState *)arg2 viewTransformation:(const PCMatrix44Tmpl_e98c85ee *)arg3 color:(id)arg4;
- (void)registerOSC:(id)arg1 withID:(const struct PCUUID *)arg2;
- (void)deregisterOSC:(id)arg1 withID:(const struct PCUUID *)arg2;
- (void)getActiveOSCsWithID:(const struct PCUUID *)arg1 inList:(list_c8607091 *)arg2;
- (id)createScaleOSCWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (BOOL)isMotion;
- (id)getView;
- (void)getWorldToFilm:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getFilmToView:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToView:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToViewWithPAR:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getEyeToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToEye:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (PCRay3_bdf7da08)computeRay:(const PCVector3_457fd1f0 *)arg1;
- (BOOL)getNearClip:(PCPlane_b38c146d *)arg1;
- (BOOL)viewIsOrthographic;
- (PCVector3_457fd1f0)getWorldSpaceEyePosition;
- (BOOL)isSnapping;
- (void)startSnappingWithSelectedOnly:(BOOL)arg1;
- (void)checkSnapsFor:(PCRect_b601f9f3)arg1 withX:(double *)arg2 andY:(double *)arg3 exact:(BOOL)arg4;
- (void)checkSnapsForX:(double)arg1 andY:(double)arg2 withDeltaX:(double *)arg3 andDeltaY:(double *)arg4 exact:(BOOL)arg5;
- (void)dismissSnaps;
- (void)endSnapping;
- (CDStruct_1b6d18a9)getFrameDuration;
- (void)jogFrameBy:(double)arg1;
- (struct _CGLContextObject *)glContext;
- (void)setTime:(CDStruct_1b6d18a9)arg1;
- (void)gotoStartOrEndTime:(_Bool)arg1;
- (void)updateInfoBarObjectStatus:(id)arg1;
- (void)hideInfoBarObjectStatus;
- (void)locateViewTimeAtSampleBoundary;
- (void)initSchedulingAtTime:(CDStruct_1b6d18a9)arg1;
- (void)scheduleTokensAtTime:(CDStruct_1b6d18a9)arg1;
- (void)hintTokensWillImageAtTime:(CDStruct_1b6d18a9)arg1;
- (void)pruneTokensAtTime:(CDStruct_1b6d18a9)arg1 reason:(const char *)arg2;
- (void)pruneTokensExceptAtTime:(CDStruct_1b6d18a9)arg1 reason:(const char *)arg2;
- (void)pruneAllTokens:(const char *)arg1;
- (void)willSetChannel:(struct OZChannelBase *)arg1;
- (void)didSetChannel:(struct OZChannelBase *)arg1;
- (double)backingScaleFactor;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) NSFont *tmpFont; // @synthesize tmpFont=_tmpFont;

@end

