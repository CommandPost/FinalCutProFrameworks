//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol POViewDelegate
- (id)getView;
- (void)panToCenter;
- (double)getPanX;
- (double)getPanY;
- (void)abortRenders;
- (void)invalidatePendingRenders;
- (void)setPan:(double)arg1 y:(double)arg2;
- (void)setZoom:(double)arg1;
- (void)setZoom:(double)arg1 center:(const PCVector2_79a470e1 *)arg2;
- (void)setZoom:(double)arg1 panX:(double)arg2 panY:(double)arg3;
- (double)getZoom;
- (PCVector2_79a470e1)getCenterInFilmCoords;
- (void)postRedisplay;
- (void)postRedisplay:(_Bool)arg1;
- (float)getWidth;
- (float)getHeight;
- (CDStruct_1b6d18a9)getFrameDuration;
- (void)updateOnScreenControls;
- (void)incProxyRend;
- (void)decProxyRend;
- (void)setTime:(CDStruct_1b6d18a9)arg1;
- (void)gotoStartOrEndTime:(_Bool)arg1;
- (struct _CGLContextObject *)glContext;
- (struct OZSceneNode *)getIsolatedNode;
- (BOOL)showToolInfo;
- (int)oscMode;
- (void)setCursor:(id)arg1;
- (void)setCursorForOSC:(id)arg1 event:(id)arg2;
- (void)clearOSCCursor;
- (id)getCurrentTool;
- (BOOL)isPlaying;
- (void)jogFrameBy:(double)arg1;
- (void)selectCamera:(int)arg1 animate:(BOOL)arg2;
- (struct LiCamera *)getCamera;
- (PCRay3_021fa152)computeRay:(const PCVector3_515d8d1c *)arg1;
- (BOOL)getNearClip:(PCPlane_9953f2b2 *)arg1;
- (BOOL)viewIsOrthographic;
- (PCVector3_515d8d1c)getWorldSpaceEyePosition;
- (void)postRenderInstruction;
- (PCVector2_79a470e1)filmToViewCoords:(const PCVector2_79a470e1 *)arg1;
- (PCVector2_79a470e1)viewToFilmCoords:(const PCVector2_79a470e1 *)arg1;
- (PCVector2_79a470e1)viewToFilmCoords:(float)arg1 y:(float)arg2;
- (void)initSelectionInOSC:(id)arg1;
- (BOOL)updateSelectionInOSC:(id)arg1 withRect:(PCRect_3a266109 *)arg2;
- (double)getPixelAspectRatio;
- (id)onScreenControls;
- (struct CGRect)availableBounds;
- (void)getWorldToFilm:(PCMatrix44Tmpl_93ed1289 *)arg1;
- (void)getFilmToView:(PCMatrix44Tmpl_93ed1289 *)arg1;
- (void)getWorldToView:(PCMatrix44Tmpl_93ed1289 *)arg1;
- (void)getWorldToViewWithPAR:(PCMatrix44Tmpl_93ed1289 *)arg1;
- (void)getEyeToWorld:(PCMatrix44Tmpl_93ed1289 *)arg1;
- (void)getWorldToEye:(PCMatrix44Tmpl_93ed1289 *)arg1;
- (void)setFilmToViewTransform;
- (BOOL)isSnapping;
- (void)startSnappingWithSelectedOnly:(BOOL)arg1;
- (void)checkSnapsFor:(PCRect_3a266109)arg1 withX:(double *)arg2 andY:(double *)arg3 exact:(BOOL)arg4;
- (void)checkSnapsForX:(double)arg1 andY:(double)arg2 withDeltaX:(double *)arg3 andDeltaY:(double *)arg4 exact:(BOOL)arg5;
- (void)dismissSnaps;
- (void)endSnapping;
- (void)updateInfoBarObjectStatus:(id)arg1;
- (void)hideInfoBarObjectStatus;
- (void)locateViewTimeAtSampleBoundary;
@end

