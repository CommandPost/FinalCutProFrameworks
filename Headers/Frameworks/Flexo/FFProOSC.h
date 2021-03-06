//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFComponentOSC.h>

#import <Flexo/POHostDelegate-Protocol.h>
#import <Flexo/POObjectDelegate-Protocol.h>
#import <Flexo/POViewDelegate-Protocol.h>

@class FFCHRootChannel, FFChannelChangeController, FFEffect, FFHeCropEffect, FFHeDistortEffect, FFHeTrimEffect, FFHeliumXFormEffect, NSCursor, NSString, POOnScreenControl;

@interface FFProOSC : FFComponentOSC <POHostDelegate, POViewDelegate, POObjectDelegate>
{
    POOnScreenControl *_OZOSC;
    struct _CGLContextObject *_context;
    struct _CGLContextObject *_drawContext;
    int _vpWidth;
    int _vpHeight;
    int _activePart;
    NSCursor *_cursor;
    FFHeliumXFormEffect *_transform;
    FFHeCropEffect *_crop;
    FFHeTrimEffect *_trim;
    FFHeDistortEffect *_distort;
    unsigned long long _nodeIndex;
    FFEffect *_oscEffect;
    unsigned long long _numEffects;
    struct PCUUID _id;
    BOOL _doRegister;
    NSString *_registryKey;
    FFCHRootChannel *_rootChannel;
    BOOL _HDRLibrary;
    BOOL _mouseIsDown;
    long long _dragCount;
    void *_moPathHandleX;
    void *_moPathHandleY;
    void *_moPathHandleZ;
    void *_rotHandleX;
    void *_rotHandleY;
    void *_rotHandleZ;
    void *_scaleHandleX;
    void *_scaleHandleY;
    void *_scaleHandleZ;
    void *_pivotHandleX;
    void *_pivotHandleY;
    void *_pivotHandleZ;
    void *_speedHandle;
    CDStruct_1b6d18a9 _lastTime;
    FFChannelChangeController *_changeController;
}

- (id).cxx_construct;
@property(readonly) int activePart; // @synthesize activePart=_activePart;
- (void)renderOSC:(id)arg1 drawProperties:(id)arg2 shouldClearBackground:(BOOL)arg3;
- (BOOL)supportsMetalRendering;
- (void)unlock;
- (void)lock;
- (void)releaseWriteLock;
- (void)acquireWriteLock;
- (double)isHDRLibraryFillMultiply;
- (BOOL)isHDRLibrary;
- (double)backingScaleFactor;
- (void)resetKeyframeForCheckedChannels;
- (void)toggleKeyframeForCheckedChannels;
- (void)locateViewTimeAtSampleBoundary;
- (void)checkChannelParameterChanged:(id)arg1;
- (void)gotoChannelsToCheckPreviousOrNextKeyframeFromTime:(CDStruct_1b6d18a9)arg1 previous:(BOOL)arg2;
- (BOOL)keyframeAtTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)nextKeyframeFromTime:(CDStruct_1b6d18a9)arg1 returnTimesInRangeOnly:(BOOL)arg2;
- (CDStruct_1b6d18a9)previousKeyframeFromTime:(CDStruct_1b6d18a9)arg1 returnTimesInRangeOnly:(BOOL)arg2;
- (void)setKeyframeAddFromKeyframeAtCurrentPosition;
- (id)deleteKeyFrameImage;
- (id)addKeyFrameImage;
- (id)nextKeyFrameSelectedImage;
- (id)nextKeyFrameNotSelectedImage;
- (id)previousKeyFrameSelectedImage;
- (id)previousKeyFrameNotSelectedImage;
- (id)keyFrameButton;
- (id)channelsToCheckForKeyframes;
- (void)didSetChannel:(struct OZChannelBase *)arg1;
- (void)willSetChannel:(struct OZChannelBase *)arg1;
- (void)menuAddTrack:(id)arg1 withActivePart:(struct OZChannelBase *)arg2;
- (id)menuForEvent:(id)arg1 withActivePart:(int)arg2 andNumPositions:(int)arg3 andTarget:(id)arg4;
- (struct OZChannelFolder *)generatorRoot;
- (void)destroyContextSentry:(void *)arg1;
- (void *)createContextSentry;
- (BOOL)absolutePoints;
- (BOOL)shouldFlip;
- (BOOL)shouldDetachGradientOSCFromObject;
- (void)findCustomGradientChannels:(struct vector<OZChannelRef *, std::__1::allocator<OZChannelRef *>> *)arg1;
- (BOOL)hasCustomGradientChannels;
- (BOOL)shouldDrawGradientOSC;
- (void)didSelectContextMenuItem;
- (void)deleteObject;
- (void)deleteSelectedObjects;
- (void)buildGradientPresetMenu:(id)arg1 target:(struct OZChannelGradientPositioned *)arg2;
- (BOOL)switchViewToSelectedCamera;
- (BOOL)objectContainsCamera;
- (BOOL)objectIsViewersCamera;
- (void)decProxyRend;
- (void)incProxyRend;
- (void)passMouseDownAndObjectToToolWithEvent:(id)arg1;
- (BOOL)isIsolatedNode;
- (void)addToUndoWillDelete:(id)arg1;
- (void)addToUndo:(id)arg1;
- (void)dirty;
- (BOOL)handleBGTranslates;
- (BOOL)showSideScaleOSC;
- (BOOL)showRotationOSC;
- (void)getPrimitivesForContextAndResult:(struct PORenderContextAndResult *)arg1;
- (void)drawGeometry:(_Bool)arg1;
- (void)drawElementOutline:(const PCMatrix44Tmpl_e98c85ee *)arg1 red:(double)arg2 green:(double)arg3 blue:(double)arg4;
- (vector_91526fd1)clippedBoundingLines:(const PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)clipOutline:(const PCVector2_5d498db0 *)arg1 numPoints:(int)arg2 edges:(PCVector2_5d498db0 *)arg3 returnVisible:(vector_a7cf9eda *)arg4;
- (void)clipPoints:(const vector_ced1dec3 *)arg1 returnVisible:(vector_a7cf9eda *)arg2;
- (BOOL)getTransformedBounds:(PCRect_3a266109 *)arg1;
- (void)getTransformedCorner1:(PCVector2_5d498db0 *)arg1 c2:(PCVector2_5d498db0 *)arg2 c3:(PCVector2_5d498db0 *)arg3 c4:(PCVector2_5d498db0 *)arg4;
- (BOOL)allowsScaleZConstraints;
- (PCBox_dd92ab54)getLocalVolume;
- (PCRect_3a266109)getSceneBounds;
- (PCRect_3a266109)getInputBounds;
- (PCRect_3a266109)getOriginalBounds;
- (void)convertPixelValuesToXYZSamplesPercentageXYZSamplesIfRequired:(int)arg1 samplesX:(double *)arg2 samplesY:(double *)arg3 samplesZ:(double *)arg4;
- (void)convertXYZSamplesPercentageToPixelValuesXYZSamplesIfRequired:(int)arg1 samplesX:(double *)arg2 samplesY:(double *)arg3 samplesZ:(double *)arg4;
- (void)getCorners:(vector_d8ace1c2 *)arg1 withFourCorner:(BOOL)arg2;
- (PCRect_3a266109)getBounds;
- (PCRay3_bdf7da08)computeRay:(const PCVector3_457fd1f0 *)arg1 withFlattening:(BOOL)arg2;
- (BOOL)projectPoints:(vector_ced1dec3 *)arg1 toSpaceOf:(int)arg2;
- (PCMatrix44Tmpl_e98c85ee)transformWithoutDistortAtTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)projectPoint:(PCVector3_457fd1f0 *)arg1 toSpaceOf:(int)arg2;
- (BOOL)projectPointToObjectX:(double *)arg1 y:(double *)arg2 z:(double *)arg3 transform:(PCMatrix44Tmpl_e98c85ee *)arg4;
- (BOOL)projectPointToObjectX:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (BOOL)applyingFilterInScreenSpace;
- (void)getInvTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 transX:(double)arg2 transY:(double)arg3 transZ:(double)arg4 rotX:(double)arg5 rotY:(double)arg6 rotZ:(double)arg7 scaleX:(double)arg8 scaleY:(double)arg9 scaleZ:(double)arg10 shearX:(double)arg11 shearY:(double)arg12 pivotX:(double)arg13 pivotY:(double)arg14 pivotZ:(double)arg15 onlyObj:(BOOL)arg16;
- (void)getTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 transX:(double)arg2 transY:(double)arg3 transZ:(double)arg4 rotX:(double)arg5 rotY:(double)arg6 rotZ:(double)arg7 scaleX:(double)arg8 scaleY:(double)arg9 scaleZ:(double)arg10 shearX:(double)arg11 shearY:(double)arg12 pivotX:(double)arg13 pivotY:(double)arg14 pivotZ:(double)arg15 onlyObj:(BOOL)arg16;
- (void)getParentToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToParent:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)getWorldToParent:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToParent:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getLocalToEye:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2 withCameraTransform:(BOOL)arg3;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 withFourCornerTransform:(BOOL)arg2;
- (void)getParentToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getParentToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getLocalToParent:(PCMatrix44Tmpl_e98c85ee *)arg1 withTranslation:(PCVector3_457fd1f0 *)arg2 andRotation:(PCVector3_457fd1f0 *)arg3 andScale:(PCVector3_457fd1f0 *)arg4 andPivot:(PCVector3_457fd1f0 *)arg5 andShear:(PCVector2_5d498db0 *)arg6;
- (void)getLocalToParent:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)getLocalToEffect:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getPostTransform:(int)arg1 matrix:(PCMatrix44Tmpl_e98c85ee *)arg2;
- (void)getPreTransform:(int)arg1 matrix:(PCMatrix44Tmpl_e98c85ee *)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (unsigned int)translationChannelsVisible;
- (unsigned int)rotationChannelsVisible;
- (unsigned int)scaleChannelsVisible;
- (BOOL)transformChannelsVisible;
- (PCVector3_457fd1f0)calcDragFrom:(const PCVector3_457fd1f0 *)arg1 to:(const PCVector3_457fd1f0 *)arg2;
- (void)setRoundness:(double)arg1;
- (double)getRoundness;
- (void)getBorderSizeX:(double *)arg1 andY:(double *)arg2;
- (void)setShear:(const PCVector2_5d498db0 *)arg1;
- (PCVector2_5d498db0)getShear;
- (void)setFourCornerTopRight:(const PCVector2_5d498db0 *)arg1;
- (void)setFourCornerTopLeft:(const PCVector2_5d498db0 *)arg1;
- (void)setFourCornerBottomRight:(const PCVector2_5d498db0 *)arg1;
- (void)setFourCornerBottomLeft:(const PCVector2_5d498db0 *)arg1;
- (PCVector2_5d498db0)getFourCornerTopRight;
- (PCVector2_5d498db0)getFourCornerTopLeft;
- (PCVector2_5d498db0)getFourCornerBottomRight;
- (PCVector2_5d498db0)getFourCornerBottomLeft;
- (CDStruct_1b6d18a9)getTimeOffset;
- (BOOL)updateMotionPath:(const PCVector3_457fd1f0 *)arg1 newRot:(const PCVector3_457fd1f0 *)arg2 newScale:(const PCVector3_457fd1f0 *)arg3 newPivot:(const PCVector3_457fd1f0 *)arg4 count:(long long)arg5;
- (BOOL)updateMotionPath:(const PCVector3_457fd1f0 *)arg1 newRot:(const PCVector3_457fd1f0 *)arg2 newScale:(const PCVector3_457fd1f0 *)arg3 newPivot:(const PCVector3_457fd1f0 *)arg4;
- (void)updateSpeedCurve:(struct OZChannelPercent *)arg1 path:(struct OZChannelPosition3D *)arg2;
- (BOOL)setSpeedKeypoint:(struct OZChannelPercent *)arg1 path:(struct OZChannelPosition3D *)arg2 time:(const CDStruct_1b6d18a9 *)arg3 newVal:(double)arg4;
- (BOOL)setPivotKeypoint:(struct OZChannelPosition3D *)arg1 time:(const CDStruct_1b6d18a9 *)arg2 newTime:(const CDStruct_1b6d18a9 *)arg3 newPivot:(const PCVector3_457fd1f0 *)arg4;
- (BOOL)setScaleKeypoint:(struct OZChannelScale3D *)arg1 time:(const CDStruct_1b6d18a9 *)arg2 newTime:(const CDStruct_1b6d18a9 *)arg3 newScale:(const PCVector3_457fd1f0 *)arg4;
- (BOOL)setRotationKeypoint:(struct OZChannelRotation3D *)arg1 time:(const CDStruct_1b6d18a9 *)arg2 newTime:(const CDStruct_1b6d18a9 *)arg3 newRot:(const PCVector3_457fd1f0 *)arg4;
- (BOOL)setPositionKeypoint:(struct OZChannelPosition3D *)arg1 time:(const CDStruct_1b6d18a9 *)arg2 delta:(const PCVector3_457fd1f0 *)arg3;
- (BOOL)_pathPointWasSetToLinear:(struct OZChannelPosition3D *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)findSpeedKeypoint:(int)arg1 channel:(struct OZChannelPercent *)arg2;
- (void)findScaleKeypointAtTime:(CDStruct_1b6d18a9 *)arg1 channel:(struct OZChannelScale3D *)arg2;
- (void)findPivotKeypointAtTime:(CDStruct_1b6d18a9 *)arg1 channel:(struct OZChannelPosition3D *)arg2;
- (void)findRotationKeypointAtTime:(CDStruct_1b6d18a9 *)arg1 channel:(struct OZChannelRotation3D *)arg2;
- (void)findScaleKeypoint:(int)arg1 channel:(struct OZChannelScale3D *)arg2;
- (void)findPivotKeypoint:(int)arg1 channel:(struct OZChannelPosition3D *)arg2;
- (void)findRotationKeypoint:(int)arg1 channel:(struct OZChannelRotation3D *)arg2;
- (BOOL)isPathParametric;
- (BOOL)positionHasMotionPathBehavior:(struct OZChannelPosition3D *)arg1;
- (BOOL)positionHasActiveBehaviors:(struct OZChannelPosition3D *)arg1;
- (struct OZChannelPosition3D *)getPositionChannel;
- (BOOL)shouldDrawAnimationPath;
- (BOOL)shouldDrawMotionPath;
- (void)enableDistort:(BOOL)arg1;
- (void)enableCrop:(BOOL)arg1;
- (void)setMultiCamAngle:(int)arg1;
- (void)getMultiCamAngle:(int *)arg1;
- (void)setKenBurnsInterpolationType:(int)arg1;
- (int)getKenBurnsInterpolationType;
- (BOOL)cropDisplaysNameForType:(int)arg1;
- (void)setCropKeyframeForType:(int)arg1 kf:(int)arg2 andL:(double)arg3 andR:(double)arg4 andB:(double)arg5 andT:(double)arg6;
- (void)getCropKeyframeForType:(int)arg1 kf:(int)arg2 andL:(double *)arg3 andR:(double *)arg4 andB:(double *)arg5 andT:(double *)arg6;
- (void)setCropType:(int)arg1;
- (int)getCropKeyframeCount;
- (int)getCropType;
- (void)setCropL:(double)arg1 andR:(double)arg2 andB:(double)arg3 andT:(double)arg4;
- (void)setCropL:(double)arg1 andR:(double)arg2 andB:(double)arg3 andT:(double)arg4 forceAddKeyframe:(BOOL)arg5;
- (void)setCropCropL:(double)arg1 andR:(double)arg2 andB:(double)arg3 andT:(double)arg4 forceAddKeyframe:(BOOL)arg5;
- (void)getCropL:(double *)arg1 andR:(double *)arg2 andB:(double *)arg3 andT:(double *)arg4;
- (void)getCropCropL:(double *)arg1 andR:(double *)arg2 andB:(double *)arg3 andT:(double *)arg4;
- (void)getTrimL:(double *)arg1 andR:(double *)arg2 andB:(double *)arg3 andT:(double *)arg4;
- (void)setPivot:(const PCVector3_457fd1f0 *)arg1;
- (void)setScale:(const PCVector3_457fd1f0 *)arg1;
- (void)setRotationZ:(double)arg1;
- (void)setRotation:(const PCVector3_457fd1f0 *)arg1;
- (void)offsetPosition:(const PCVector3_457fd1f0 *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)offsetPosition:(const PCVector3_457fd1f0 *)arg1;
- (void)offsetPositionFromScale:(const PCVector3_457fd1f0 *)arg1;
- (void)setPosition:(const PCVector3_457fd1f0 *)arg1;
- (PCVector3_457fd1f0)getPivot;
- (PCVector3_457fd1f0)getScale;
- (PCVector3_457fd1f0)getRotation;
- (PCVector3_457fd1f0)getPosition;
- (unsigned int)getProperties;
- (void)useAssociatedNode:(BOOL)arg1;
- (void)willDeleteChannel:(struct OZChannelBase *)arg1;
- (struct OZChannelBase *)getSceneChannelRoot;
- (struct OZChannelBase *)getChannel;
- (id)crop;
- (void)setEffect:(id)arg1;
- (id)transform;
- (void)hideInfoBarObjectStatus;
- (void)updateInfoBarObjectStatus:(id)arg1;
- (void)updateOnScreenControls;
- (struct OZSceneNode *)getIsolatedNode;
- (id)getCurrentTool;
- (BOOL)updateSelectionInOSC:(id)arg1 withRect:(PCRect_3a266109 *)arg2;
- (void)initSelectionInOSC:(id)arg1;
- (struct CGRect)availableBounds;
- (id)onScreenControls;
- (double)getPixelAspectRatio;
- (PCVector2_79a470e1)viewToFilmCoords:(float)arg1 y:(float)arg2;
- (PCVector2_79a470e1)viewToFilmCoords:(const PCVector2_79a470e1 *)arg1;
- (PCVector2_79a470e1)filmToViewCoords:(const PCVector2_79a470e1 *)arg1;
- (BOOL)showToolInfo;
- (void)postRenderInstruction;
- (PCPtr_af78c7cb)getCamera;
- (void)selectCamera:(int)arg1 animate:(BOOL)arg2;
- (BOOL)isPlaying;
- (void)clearOSCCursor;
- (void)setCursorForOSC:(id)arg1 event:(id)arg2;
- (void)setCursor:(id)arg1;
- (int)oscMode;
- (shared_ptr_d444a1e3)destinationDevice;
- (id)MDPHitTestController;
- (struct _CGLContextObject *)glContext;
- (CDStruct_1b6d18a9)getFrameDuration;
- (float)getHeight;
- (float)getWidth;
- (void)performSelectForEvent:(id)arg1 osc:(id)arg2;
- (int)performHitCheckForEvent:(id)arg1 osc:(id)arg2;
- (void)postRedisplay:(_Bool)arg1;
- (void)postRedisplay;
- (PCVector2_79a470e1)getCenterInFilmCoords;
- (double)getZoom;
- (void)setZoom:(double)arg1 panX:(double)arg2 panY:(double)arg3;
- (void)setZoom:(double)arg1 center:(const PCVector2_79a470e1 *)arg2;
- (void)setZoom:(double)arg1;
- (void)setPan:(double)arg1 y:(double)arg2;
- (void)invalidatePendingRenders;
- (void)abortRenders;
- (double)getPanY;
- (double)getPanX;
- (void)panToCenter;
- (void)setFilmToViewTransform;
- (void)getOscToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 extraRotation:(const PCQuat_8a184614 *)arg2;
- (void)getLocalToOsc:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (int)workingSpace;
- (void)jogFrameBy:(double)arg1;
- (void)endSnapping;
- (void)dismissSnaps;
- (void)calculateSnapBounds:(double *)arg1 y1:(double *)arg2 x2:(double *)arg3 y2:(double *)arg4;
- (void)checkSnapsForX:(double)arg1 andY:(double)arg2 withDeltaX:(double *)arg3 andDeltaY:(double *)arg4 exact:(BOOL)arg5;
- (void)addOSCSpecificSnappingPointsToVertical:(id)arg1 horizontal:(id)arg2;
- (void)checkSnapsFor:(PCRect_3a266109)arg1 withX:(double *)arg2 andY:(double *)arg3 exact:(BOOL)arg4;
- (BOOL)isSnapping;
- (void)startSnappingWithSelectedOnly:(BOOL)arg1;
- (PCVector3_457fd1f0)getWorldSpaceEyePosition;
- (BOOL)viewIsOrthographic;
- (BOOL)getNearClip:(PCPlane_d15dbf20 *)arg1;
- (PCRay3_bdf7da08)computeRay:(const PCVector3_457fd1f0 *)arg1;
- (void)getWorldToEye:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getEyeToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToViewWithPAR:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToView:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getFilmToView:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToFilm:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (id)getView;
- (BOOL)proUI;
- (BOOL)isMotion;
- (id)createScaleOSCWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)getActiveOSCsWithID:(const struct PCUUID *)arg1 inList:(list_50fb8e68 *)arg2;
- (void)deregisterOSC:(id)arg1 withID:(const struct PCUUID *)arg2;
- (void)registerOSC:(id)arg1 withID:(const struct PCUUID *)arg2;
- (id)makeKeyForID:(const struct PCUUID *)arg1;
- (void)drawElementOutline:(struct OZElement *)arg1 state:(const struct OZRenderState *)arg2 viewTransformation:(const PCMatrix44Tmpl_e98c85ee *)arg3 red:(double)arg4 green:(double)arg5 blue:(double)arg6;
- (BOOL)showToolTips;
- (void)mouseUpFromAnotherOSC;
- (void)mouseDownFromAnotherOSC;
- (void)undoEnd;
- (void)undoBegin;
- (void)clearTemporaryUndoItems;
- (void)endTemporaryUndo;
- (BOOL)isInTemporaryUndo;
- (void)beginTemporaryUndo;
- (void)endUndoGroup;
- (void)beginUndoGroup:(id)arg1;
- (void)endCaptureModifiedChannels;
- (void)startCaptureModifiedChannels:(id)arg1;
- (void)abort:(BOOL)arg1;
- (void)aboutToChangeChannel:(const struct OZChannelBase *)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)ignoreObserverOnce:(void *)arg1 forFlags:(unsigned int)arg2;
- (BOOL)objectEnableChanged:(unsigned int)arg1;
- (BOOL)sceneListChanged:(unsigned int)arg1;
- (BOOL)timeRangeChanged:(unsigned int)arg1;
- (BOOL)channelChanged:(unsigned int)arg1;
- (void)postNotification:(unsigned int)arg1 updateToolOnSelectionChanged:(BOOL)arg2;
- (void)postNotification:(unsigned int)arg1;
- (void)gotoStartOrEndTime:(_Bool)arg1;
- (void)setTime:(CDStruct_1b6d18a9)arg1;
- (void)notifyShapeChanged;
- (void)notifyPathChanged;
- (void)notifyInspectorContentsChanged;
- (void)notifySceneChange;
- (void)notifyObjectChange:(BOOL)arg1;
- (void)notifyChangeDone;
- (void)notifyChangeDelta;
- (void)setAnimateFlag:(BOOL)arg1;
- (double)scenePixelAspectRatio;
- (double)pixelAspectRatio;
- (double)getSceneHeight;
- (double)getSceneWidth;
- (void)setIgnoreTransformationsForElement:(struct OZTransformNode *)arg1;
- (const struct OZRenderState *)renderState;
- (float)blendingGamma;
- (struct CGColorSpace *)workingColorSpace;
- (BOOL)applyFlatten;
- (BOOL)has3DObjects;
- (CDStruct_1b6d18a9)getTime;
- (PCVector3_457fd1f0)filmCoords3DForEvent:(id)arg1;
- (PCVector3_457fd1f0)viewCoords3DForEvent:(id)arg1;
- (PCVector2_79a470e1)filmCoords2DForEvent:(id)arg1;
- (PCVector2_79a470e1)viewCoords2DForEvent:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)isAccessorized;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (struct CGRect)calcBounds;
- (void)setPlayerVideoModule:(id)arg1;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (void)flagsChanged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)nudgeRightMany:(id)arg1;
- (void)nudgeLeftMany:(id)arg1;
- (void)nudgeDownMany:(id)arg1;
- (void)nudgeUpMany:(id)arg1;
- (void)nudgeRight:(id)arg1;
- (void)nudgeLeft:(id)arg1;
- (void)nudgeDown:(id)arg1;
- (void)nudgeUp:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)acceptPassiveEvent:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (BOOL)mouseCreatesUndo;
- (void)mouseExited:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (id)getActionName;
- (BOOL)shouldAddUndoOnMouseDown;
- (BOOL)settingChannelsFromOSC;
- (void)ensureIntrinsic;
- (void)_startProOSCBegin:(id)arg1 actionName:(id)arg2;
- (void)multipleWillDidSetChannels:(list_50fb8e68)arg1 willSet:(BOOL)arg2;
- (void)_willDidSetChannels:(id)arg1 willSet:(BOOL)arg2;
- (id)getCursor;
- (void)mouseMoved:(id)arg1;
- (BOOL)shouldSetContextAttributesOnMouseMoved;
- (void)mouseUp:(id)arg1;
- (void)_finishMouseTracking;
- (void)_localMouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)shouldRespondInMouseLoopToKeyDownOrUp;
- (void)proOSCMouseDownInitialize:(id)arg1;
- (id)selectedItemForOSC;
- (id)intrinsicTrim;
- (id)intrinsicCrop;
- (id)intrinsicTransform;
- (id)undoChannels;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (void)setChannel:(struct OZChannelBase *)arg1;
- (void)dealloc;
- (id)initWithEffectStack:(id)arg1 andOZOSC:(id)arg2;
- (void)_effectStackChanged;
- (void)initContext;
- (int)keyframeOption;
- (_Bool)isEditingMotionPath;
- (_Bool)isDistortAnimated;
- (_Bool)isCropAnimated;
- (_Bool)isTransformAnimated;
- (id)findDistortEffect:(id)arg1;
- (id)findCropEffect:(id)arg1;
- (id)findTransformEffect:(id)arg1;
- (id)effectIntrinsicsForClass:(Class)arg1 effectStack:(id)arg2;
- (void)setActivePart:(int)arg1;

@end

