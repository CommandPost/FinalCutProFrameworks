//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OZObjectDelegate.h"
#import "POObjectDelegate.h"

@class NSObject<POHostDelegate>, NSObject<POViewDelegate>;

@interface OZOSCObjectDelegate : NSObject <POObjectDelegate, OZObjectDelegate>
{
    NSObject<POViewDelegate> *_viewDelegate;
    NSObject<POHostDelegate> *_delegate;
    struct OZScene *_scene;
    unsigned int _objectID;
    struct OZChannelRef *_channelRef;
    BOOL _useAssociatedNode;
}

- (id)initWithChannel:(struct OZChannelBase *)arg1 andHostDelegate:(id)arg2 andViewDelegate:(id)arg3;
- (void)setHostDelegate:(id)arg1 andViewDelegate:(id)arg2;
- (void)setChannel:(struct OZChannelBase *)arg1;
- (void)useAssociatedNode:(BOOL)arg1;
- (void)dealloc;
- (struct OZRenderState)getState;
- (struct OZObjectManipulator *)getObjectManipulator;
- (struct OZSceneNode *)getSceneNode;
- (struct OZElement *)getElement;
- (struct OZObjectManipulator *)getObjectFromId:(unsigned int)arg1;
- (struct OZChannelBase *)getChannel;
- (struct OZChannelBase *)getSceneChannelRoot;
- (void)willDeleteChannel:(struct OZChannelBase *)arg1;
- (unsigned int)getProperties;
- (PCVector3_457fd1f0)getPosition;
- (PCVector3_457fd1f0)getRotation;
- (PCVector3_457fd1f0)getScale;
- (PCVector3_457fd1f0)getPivot;
- (void)setPosition:(const PCVector3_457fd1f0 *)arg1;
- (void)offsetPosition:(const PCVector3_457fd1f0 *)arg1;
- (void)offsetPosition:(const PCVector3_457fd1f0 *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)setRotation:(const PCVector3_457fd1f0 *)arg1;
- (void)setRotationZ:(double)arg1;
- (void)setScale:(const PCVector3_457fd1f0 *)arg1;
- (void)setPivot:(const PCVector3_457fd1f0 *)arg1;
- (PCVector2_79efa81a)getFourCornerBottomLeft;
- (PCVector2_79efa81a)getFourCornerBottomRight;
- (PCVector2_79efa81a)getFourCornerTopLeft;
- (PCVector2_79efa81a)getFourCornerTopRight;
- (void)setFourCornerBottomLeft:(const PCVector2_79efa81a *)arg1;
- (void)setFourCornerBottomRight:(const PCVector2_79efa81a *)arg1;
- (void)setFourCornerTopLeft:(const PCVector2_79efa81a *)arg1;
- (void)setFourCornerTopRight:(const PCVector2_79efa81a *)arg1;
- (PCVector2_79efa81a)getShear;
- (void)setShear:(const PCVector2_79efa81a *)arg1;
- (void)getCropL:(double *)arg1 andR:(double *)arg2 andB:(double *)arg3 andT:(double *)arg4;
- (void)setCropL:(double)arg1 andR:(double)arg2 andB:(double)arg3 andT:(double)arg4;
- (int)getCropType;
- (int)getCropKeyframeCount;
- (void)setCropType:(int)arg1;
- (BOOL)cropDisplaysNameForType:(int)arg1;
- (void)getCropKeyframeForType:(int)arg1 kf:(int)arg2 andL:(double *)arg3 andR:(double *)arg4 andB:(double *)arg5 andT:(double *)arg6;
- (void)setCropKeyframeForType:(int)arg1 kf:(int)arg2 andL:(double)arg3 andR:(double)arg4 andB:(double)arg5 andT:(double)arg6;
- (void)convertXYZSamplesPercentageToPixelValuesXYZSamplesIfRequired:(int)arg1 samplesX:(double *)arg2 samplesY:(double *)arg3 samplesZ:(double *)arg4;
- (void)convertPixelValuesToXYZSamplesPercentageXYZSamplesIfRequired:(int)arg1 samplesX:(double *)arg2 samplesY:(double *)arg3 samplesZ:(double *)arg4;
- (void)getMultiCamAngle:(int *)arg1;
- (void)setMultiCamAngle:(int)arg1;
- (void)enableCrop:(BOOL)arg1;
- (void)enableDistort:(BOOL)arg1;
- (struct OZChannelPosition3D *)getPositionChannel;
- (BOOL)shouldDrawMotionPath;
- (struct OZChannelPosition3D *)getPositionChannelBH;
- (BOOL)positionHasActiveBehaviors:(struct OZChannelPosition3D *)arg1;
- (BOOL)positionHasMotionPathBehavior:(struct OZChannelPosition3D *)arg1;
- (BOOL)updateMotionPath:(const PCVector3_457fd1f0 *)arg1 newRot:(const PCVector3_457fd1f0 *)arg2 newScale:(const PCVector3_457fd1f0 *)arg3 newPivot:(const PCVector3_457fd1f0 *)arg4;
- (BOOL)isPathParametric;
- (CDStruct_1b6d18a9)getTimeOffset;
- (void)getBorderSizeX:(double *)arg1 andY:(double *)arg2;
- (double)getRoundness;
- (void)setRoundness:(double)arg1;
- (PCRect_b601f9f3)getBounds;
- (void)getCorners:(vector_61369161 *)arg1 withFourCorner:(BOOL)arg2;
- (PCRect_b601f9f3)getOriginalBounds;
- (PCRect_b601f9f3)getSceneBounds;
- (PCRect_b601f9f3)getInputBounds;
- (PCBox_06a14057)getLocalVolume;
- (PCVector3_457fd1f0)calcDragFrom:(const PCVector3_457fd1f0 *)arg1 to:(const PCVector3_457fd1f0 *)arg2;
- (BOOL)transformChannelsVisible;
- (unsigned int)scaleChannelsVisible;
- (unsigned int)rotationChannelsVisible;
- (unsigned int)translationChannelsVisible;
- (double)getPixelAspectRatio;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getPreTransform:(int)arg1 matrix:(PCMatrix44Tmpl_e98c85ee *)arg2;
- (void)getPostTransform:(int)arg1 matrix:(PCMatrix44Tmpl_e98c85ee *)arg2;
- (void)getLocalToParent:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)getParentToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getParentToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 withFourCornerTransform:(BOOL)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2 withCameraTransform:(BOOL)arg3;
- (void)getLocalToEye:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToParent:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToParent:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToParent:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)getParentToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 transX:(double)arg2 transY:(double)arg3 transZ:(double)arg4 rotX:(double)arg5 rotY:(double)arg6 rotZ:(double)arg7 scaleX:(double)arg8 scaleY:(double)arg9 scaleZ:(double)arg10 shearX:(double)arg11 shearY:(double)arg12 pivotX:(double)arg13 pivotY:(double)arg14 pivotZ:(double)arg15 onlyObj:(BOOL)arg16;
- (void)getInvTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 transX:(double)arg2 transY:(double)arg3 transZ:(double)arg4 rotX:(double)arg5 rotY:(double)arg6 rotZ:(double)arg7 scaleX:(double)arg8 scaleY:(double)arg9 scaleZ:(double)arg10 shearX:(double)arg11 shearY:(double)arg12 pivotX:(double)arg13 pivotY:(double)arg14 pivotZ:(double)arg15 onlyObj:(BOOL)arg16;
- (int)workingSpace;
- (void)_getCameraToWorldRotation:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getLocalToOsc:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)getOscToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 extraRotation:(const PCQuat_de30948b *)arg2;
- (BOOL)applyingFilterInScreenSpace;
- (BOOL)projectPointToObject:(struct OZTransformNode *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (BOOL)projectPointToObject:(struct OZTransformNode *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4 transform:(PCMatrix44Tmpl_e98c85ee *)arg5;
- (BOOL)projectPointToObjectX:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (BOOL)projectPointToObjectX:(double *)arg1 y:(double *)arg2 z:(double *)arg3 transform:(PCMatrix44Tmpl_e98c85ee *)arg4;
- (BOOL)projectPoint:(PCVector3_457fd1f0 *)arg1 toSpaceOf:(int)arg2;
- (BOOL)projectPoints:(vector_8d17e539 *)arg1 toSpaceOf:(int)arg2;
- (void)getTransformedCorner1:(PCVector2_79efa81a *)arg1 c2:(PCVector2_79efa81a *)arg2 c3:(PCVector2_79efa81a *)arg3 c4:(PCVector2_79efa81a *)arg4;
- (PCRect_b601f9f3)getTransformedBounds;
- (void)calculateSnapBounds:(double *)arg1 y1:(double *)arg2 x2:(double *)arg3 y2:(double *)arg4;
- (void)clipPoints:(const vector_8d17e539 *)arg1 returnVisible:(vector_69938c0b *)arg2;
- (void)clipOutline:(const PCVector2_79efa81a *)arg1 numPoints:(int)arg2 edges:(PCVector2_79efa81a *)arg3 returnVisible:(vector_69938c0b *)arg4;
- (void)drawElementOutline:(const PCMatrix44Tmpl_e98c85ee *)arg1 red:(double)arg2 green:(double)arg3 blue:(double)arg4;
- (void)drawGeometry:(_Bool)arg1;
- (void)dirty;
- (void)addToUndo:(id)arg1;
- (void)addToUndoWillDelete:(id)arg1;
- (PCRay3_bdf7da08)computeRay:(const PCVector3_457fd1f0 *)arg1 withFlattening:(BOOL)arg2;
- (BOOL)isIsolatedNode;
- (void)passMouseDownAndObjectToToolWithEvent:(id)arg1;
- (BOOL)objectIsViewersCamera;
- (BOOL)objectContainsCamera;
- (BOOL)switchViewToSelectedCamera;
- (BOOL)shouldDrawGradientOSC;
- (BOOL)shouldFlip;
- (BOOL)absolutePoints;
- (struct OZChannelFolder *)generatorRoot;
- (void *)createContextSentry;
- (void)destroyContextSentry:(void *)arg1;
- (id)menuForEvent:(id)arg1 withActivePart:(int)arg2 andNumPositions:(int)arg3 andTarget:(id)arg4;
- (void)menuAddTrack:(id)arg1 withActivePart:(struct OZChannelBase *)arg2;
- (void)_doDelayedPresetLoad:(id)arg1;
- (void)_presetLoadNotify:(id)arg1;
- (void)_buildPreset:(const struct OZLibraryPresetsMap *)arg1 menu:(id)arg2 target:(struct OZChannelGradientPositioned *)arg3;
- (void)buildGradientPresetMenu:(id)arg1 target:(struct OZChannelGradientPositioned *)arg2;
- (void)deleteSelectedObjects;
- (void)deleteObject;
- (void)didSelectContextMenuItem;

@end
