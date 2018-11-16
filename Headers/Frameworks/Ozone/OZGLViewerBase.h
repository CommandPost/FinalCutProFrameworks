//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZGLView.h>

#import "OZObjCObserver.h"

@interface OZGLViewerBase : OZGLView <OZObjCObserver>
{
    struct OZDocument *_document;
    struct OZViewerState *_pViewerState;
    double _border;
    vector_6694fb0a *_pChannelChanged;
    struct PCAtomicValue *_pAreChannelsEvaluated;
    CDStruct_1b6d18a9 _startRecordTime;
    CDStruct_1b6d18a9 _endRecordTime;
    BOOL _recordPastBegin;
    BOOL _recordPastEnd;
    BOOL _oldRecordMode;
    BOOL _isRecording;
    struct PCAtomicValue *_pRetainCount;
    double _originalPanX;
    double _originalPanY;
    double _originalZoom;
}

- (id).cxx_construct;
- (void)setShowRenderFields:(id)arg1;
- (void)setShowDepthOfField:(id)arg1;
- (void)setShowShadows:(id)arg1;
- (void)setShowReflection:(id)arg1;
- (void)setShowLighting:(id)arg1;
- (void)setShowFrameBlending:(id)arg1;
- (void)setShowMotionBlur:(id)arg1;
- (void)setUseDropZones:(id)arg1;
- (CDStruct_1b6d18a9)getTime;
- (void)magnifyWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)postRedisplay:(_Bool)arg1;
- (struct OZSceneNode *)getIsolatedIncludeAnimating;
- (struct OZSceneNode *)getIsolatedNode;
- (void)simplifyChannels;
- (void)finishRecordingChannelsAtTime:(CDStruct_1b6d18a9)arg1 playingForward:(BOOL)arg2;
- (void)setupChannelsForRecordingAtTime:(CDStruct_1b6d18a9)arg1 playingForward:(BOOL)arg2;
- (void)notify:(unsigned int)arg1;
- (void)updateZoomPopup;
- (void)zoomOutCenteredAtPoint:(struct CGPoint)arg1;
- (void)zoomInCenteredAtPoint:(struct CGPoint)arg1;
- (void)zoomOutKeepCentered;
- (void)zoomInKeepCentered;
- (void)zoomCenteredWithRect:(struct CGRect)arg1 zoomIn:(BOOL)arg2;
- (void)zoomFitToFill:(struct CGRect)arg1;
- (void)zoomToFullScreen;
- (BOOL)isFitInWindow;
- (void)zoomToFitInWindow;
- (void)zoomToOneHundred;
- (void)fitInWindow;
- (double)getZoom;
- (void)setZoom:(double)arg1 panX:(double)arg2 panY:(double)arg3;
- (void)setZoom:(double)arg1 center:(const PCVector2_7e488b7d *)arg2;
- (void)setZoom:(double)arg1;
- (void)positionAtCenter;
- (void)setCameraTransformIntoRenderState:(struct OZRenderState *)arg1;
- (PCVector3_457fd1f0)convertPoint:(const PCVector3_457fd1f0 *)arg1 fromSpace:(int)arg2 toSpace:(int)arg3 object:(struct OZTransformNode *)arg4 state:(const struct OZRenderState *)arg5;
- (PCVector2_7e488b7d)filmToWorldCoords:(const PCVector2_7e488b7d *)arg1;
- (PCVector2_7e488b7d)viewToWorldCoords:(const PCVector2_7e488b7d *)arg1;
- (PCVector2_7e488b7d)worldToFilmCoords:(const PCVector2_7e488b7d *)arg1;
- (PCVector2_7e488b7d)worldToViewCoords:(const PCVector2_7e488b7d *)arg1;
- (PCVector2_7e488b7d)filmToViewCoords:(const PCVector2_7e488b7d *)arg1;
- (PCVector2_7e488b7d)viewToFilmCoords:(float)arg1 y:(float)arg2;
- (PCVector2_7e488b7d)viewToFilmCoords:(const PCVector2_7e488b7d *)arg1;
- (void)setDocumentToViewTransform;
- (void)setWorldToViewTransform;
- (void)setWorldToFilmTransform;
- (void)setFilmToViewTransform;
- (void)getViewToImageTransform:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getViewToImageTransform:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getImageToViewTransform:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getImageToViewTransform:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToViewTransform:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToViewTransform:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToFilmTransform:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToFilmTransform:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getViewToFilmTransform:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getViewToFilmTransform:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getFilmToViewTransform:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getFilmToViewTransform:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)endCameraAction;
- (void)beginCameraAction:(const struct PCString *)arg1;
- (void)getRenderGateTransform:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (PCPtr_41ab8147)getCamera;
- (PCPtr_41ab8147)getCameraAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (double)getPixelAspectRatioAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (double)getPixelAspectRatio;
- (void)setIgnoreTransformationsForElement:(struct OZSceneNode *)arg1;
- (const struct OZRenderState *)getRenderState;
- (CDStruct_1b6d18a9)getCurrentTime;
- (PCVector2_7e488b7d)getCenterInFilmCoords;
- (_Bool)getPARCompensation;
- (_Bool)showToolInfo;
- (void)panToCenter;
- (double)getPanY;
- (double)getPanX;
- (void)setPan:(double)arg1 y:(double)arg2;
- (double)getDocumentHeight;
- (double)getDocumentWidth;
- (const struct PCColor *)sceneBackgroundColor;
- (id)toolbarModule;
- (id)canvasModule;
- (struct OZViewerState *)getViewerState;
- (struct OZDocument *)getDocument;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

