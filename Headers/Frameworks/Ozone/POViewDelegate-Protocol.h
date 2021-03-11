//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class LKCursor, NSArray, NSAttributedString, NSEvent, NSView, OZTool, POOnScreenControl;

@protocol POViewDelegate
- (void)performSelectForEvent:(NSEvent *)arg1 osc:(POOnScreenControl *)arg2;
- (int)performHitCheckForEvent:(NSEvent *)arg1 osc:(POOnScreenControl *)arg2;
- (void)locateViewTimeAtSampleBoundary;
- (void)hideInfoBarObjectStatus;
- (void)updateInfoBarObjectStatus:(NSAttributedString *)arg1;
- (void)endSnapping;
- (void)dismissSnaps;
- (void)checkSnapsForX:(double)arg1 andY:(double)arg2 withDeltaX:(double *)arg3 andDeltaY:(double *)arg4 exact:(BOOL)arg5;
- (void)checkSnapsFor:(PCRect_b601f9f3)arg1 withX:(double *)arg2 andY:(double *)arg3 exact:(BOOL)arg4;
- (void)startSnappingWithSelectedOnly:(BOOL)arg1;
- (BOOL)isSnapping;
- (void)setFilmToViewTransform;
- (void)getWorldToEye:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getEyeToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToViewWithPAR:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToView:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getFilmToView:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToFilm:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (struct CGRect)availableBounds;
- (NSArray *)onScreenControls;
- (double)getPixelAspectRatio;
- (BOOL)updateSelectionInOSC:(NSEvent *)arg1 withRect:(PCRect_b601f9f3 *)arg2;
- (void)initSelectionInOSC:(NSEvent *)arg1;
- (PCVector2_7e488b7d)viewToFilmCoords:(float)arg1 y:(float)arg2;
- (PCVector2_7e488b7d)viewToFilmCoords:(const PCVector2_7e488b7d *)arg1;
- (PCVector2_7e488b7d)filmToViewCoords:(const PCVector2_7e488b7d *)arg1;
- (void)postRenderInstruction;
- (PCVector3_457fd1f0)getWorldSpaceEyePosition;
- (BOOL)viewIsOrthographic;
- (BOOL)getNearClip:(PCPlane_d15dbf20 *)arg1;
- (PCRay3_bdf7da08)computeRay:(const PCVector3_457fd1f0 *)arg1;
- (PCPtr_41ab8147)getCamera;
- (void)selectCamera:(int)arg1 animate:(BOOL)arg2;
- (void)jogFrameBy:(double)arg1;
- (BOOL)isPlaying;
- (OZTool *)getCurrentTool;
- (void)clearOSCCursor;
- (void)setCursorForOSC:(POOnScreenControl *)arg1 event:(NSEvent *)arg2;
- (void)setCursor:(LKCursor *)arg1;
- (int)oscMode;
- (BOOL)showToolInfo;
- (struct OZSceneNode *)getIsolatedNode;
- (shared_ptr_80358429)destinationDevice;
- (struct _CGLContextObject *)glContext;
- (void)gotoStartOrEndTime:(_Bool)arg1;
- (void)setTime:(CDStruct_1b6d18a9)arg1;
- (void)decProxyRend;
- (void)incProxyRend;
- (void)updateOnScreenControls;
- (CDStruct_1b6d18a9)getFrameDuration;
- (float)getHeight;
- (float)getWidth;
- (void)postRedisplay:(_Bool)arg1;
- (void)postRedisplay;
- (PCVector2_7e488b7d)getCenterInFilmCoords;
- (double)getZoom;
- (void)setZoom:(double)arg1 panX:(double)arg2 panY:(double)arg3;
- (void)setZoom:(double)arg1 center:(const PCVector2_7e488b7d *)arg2;
- (void)setZoom:(double)arg1;
- (void)setPan:(double)arg1 y:(double)arg2;
- (void)invalidatePendingRenders;
- (void)abortRenders;
- (double)getPanY;
- (double)getPanX;
- (void)panToCenter;
- (double)isHDRLibraryFillMultiply;
- (BOOL)isHDRLibrary;
- (double)backingScaleFactor;
- (NSView *)getView;
@end

