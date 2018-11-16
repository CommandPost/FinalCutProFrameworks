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

- (void)didSelectContextMenuItem;
- (void)deleteObject;
- (void)deleteSelectedObjects;
- (void)buildGradientPresetMenu:(id)arg1 target:(struct OZChannelGradientPositioned *)arg2;
- (void)_buildPreset:(const struct OZLibraryPresetsMap *)arg1 menu:(id)arg2 target:(struct OZChannelGradientPositioned *)arg3;
- (void)_presetLoadNotify:(id)arg1;
- (void)_doDelayedPresetLoad:(id)arg1;
- (void)menuAddTrack:(id)arg1 withActivePart:(struct OZChannelBase *)arg2;
- (id)menuForEvent:(id)arg1 withActivePart:(int)arg2 andNumPositions:(int)arg3 andTarget:(id)arg4;
- (void)destroyContextSentry:(void *)arg1;
- (void *)createContextSentry;
- (struct OZChannelFolder *)generatorRoot;
- (BOOL)absolutePoints;
- (BOOL)shouldFlip;
- (BOOL)shouldDrawGradientOSC;
- (BOOL)switchViewToSelectedCamera;
- (BOOL)objectContainsCamera;
- (BOOL)objectIsViewersCamera;
- (void)passMouseDownAndObjectToToolWithEvent:(id)arg1;
- (BOOL)isIsolatedNode;
- (PCRay3_bdf7da08)computeRay:(const PCVector3_457fd1f0 *)arg1 withFlattening:(BOOL)arg2;
- (void)addToUndoWillDelete:(id)arg1;
- (void)addToUndo:(id)arg1;
- (void)dirty;
- (void)drawGeometry:(_Bool)arg1;
- (void)drawElementOutline:(const PCMatrix44Tmpl_e98c85ee *)arg1 red:(double)arg2 green:(double)arg3 blue:(double)arg4;
- (void)clipOutline:(const PCVector2_79efa81a *)arg1 numPoints:(int)arg2 edges:(PCVector2_79efa81a *)arg3 returnVisible:(vector_69938c0b *)arg4;
- (void)clipPoints:(const vector_8d17e539 *)arg1 returnVisible:(vector_69938c0b *)arg2;
- (void)calculateSnapBounds:(double *)arg1 y1:(double *)arg2 x2:(double *)arg3 y2:(double *)arg4;
- (PCRect_b601f9f3)getTransformedBounds;
- (void)getTransformedCorner1:(PCVector2_79efa81a *)arg1 c2:(PCVector2_79efa81a *)arg2 c3:(PCVector2_79efa81a *)arg3 c4:(PCVector2_79efa81a *)arg4;
- (BOOL)projectPoints:(vector_8d17e539 *)arg1 toSpaceOf:(int)arg2;
- (BOOL)projectPoint:(PCVector3_457fd1f0 *)arg1 toSpaceOf:(int)arg2;
- (BOOL)projectPointToObjectX:(double *)arg1 y:(double *)arg2 z:(double *)arg3 transform:(PCMatrix44Tmpl_e98c85ee *)arg4;
- (BOOL)projectPointToObjectX:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (BOOL)projectPointToObject:(struct OZTransformNode *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4 transform:(PCMatrix44Tmpl_e98c85ee *)arg5;
- (BOOL)projectPointToObject:(struct OZTransformNode *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (BOOL)applyingFilterInScreenSpace;
- (void)getOscToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 extraRotation:(const PCQuat_de30948b *)arg2;
- (void)getLocalToOsc:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)_getCameraToWorldRotation:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (int)workingSpace;
- (void)getInvTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 transX:(double)arg2 transY:(double)arg3 transZ:(double)arg4 rotX:(double)arg5 rotY:(double)arg6 rotZ:(double)arg7 scaleX:(double)arg8 scaleY:(double)arg9 scaleZ:(double)arg10 shearX:(double)arg11 shearY:(double)arg12 pivotX:(double)arg13 pivotY:(double)arg14 pivotZ:(double)arg15 onlyObj:(BOOL)arg16;
- (void)getTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 transX:(double)arg2 transY:(double)arg3 transZ:(double)arg4 rotX:(double)arg5 rotY:(double)arg6 rotZ:(double)arg7 scaleX:(double)arg8 scaleY:(double)arg9 scaleZ:(double)arg10 shearX:(double)arg11 shearY:(double)arg12 pivotX:(double)arg13 pivotY:(double)arg14 pivotZ:(double)arg15 onlyObj:(BOOL)arg16;
- (void)getParentToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToParent:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)getWorldToParent:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToParent:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getWorldToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getLocalToEye:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2 withCameraTransform:(BOOL)arg3;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 withFourCornerTransform:(BOOL)arg2;
- (void)getParentToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getParentToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getLocalToParent:(PCMatrix44Tmpl_e98c85ee *)arg1 withFlattening:(BOOL)arg2;
- (void)getPostTransform:(int)arg1 matrix:(PCMatrix44Tmpl_e98c85ee *)arg2;
- (void)getPreTransform:(int)arg1 matrix:(PCMatrix44Tmpl_e98c85ee *)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1;
- (double)getPixelAspectRatio;
- (unsigned int)translationChannelsVisible;
- (unsigned int)rotationChannelsVisible;
- (unsigned int)scaleChannelsVisible;
- (BOOL)transformChannelsVisible;
- (PCVector3_457fd1f0)calcDragFrom:(const PCVector3_457fd1f0 *)arg1 to:(const PCVector3_457fd1f0 *)arg2;
- (PCBox_dd92ab54)getLocalVolume;
- (PCRect_b601f9f3)getInputBounds;
- (PCRect_b601f9f3)getSceneBounds;
- (PCRect_b601f9f3)getOriginalBounds;
- (void)getCorners:(vector_9ae9b2a4 *)arg1 withFourCorner:(BOOL)arg2;
- (PCRect_b601f9f3)getBounds;
- (void)setRoundness:(double)arg1;
- (double)getRoundness;
- (void)getBorderSizeX:(double *)arg1 andY:(double *)arg2;
- (CDStruct_1b6d18a9)getTimeOffset;
- (BOOL)isPathParametric;
- (BOOL)updateMotionPath:(const PCVector3_457fd1f0 *)arg1 newRot:(const PCVector3_457fd1f0 *)arg2 newScale:(const PCVector3_457fd1f0 *)arg3 newPivot:(const PCVector3_457fd1f0 *)arg4;
- (BOOL)positionHasMotionPathBehavior:(struct OZChannelPosition3D *)arg1;
- (BOOL)positionHasActiveBehaviors:(struct OZChannelPosition3D *)arg1;
- (struct OZChannelPosition3D *)getPositionChannelBH;
- (BOOL)shouldDrawMotionPath;
- (struct OZChannelPosition3D *)getPositionChannel;
- (void)enableDistort:(BOOL)arg1;
- (void)enableCrop:(BOOL)arg1;
- (void)setMultiCamAngle:(int)arg1;
- (void)getMultiCamAngle:(int *)arg1;
- (void)convertPixelValuesToXYZSamplesPercentageXYZSamplesIfRequired:(int)arg1 samplesX:(double *)arg2 samplesY:(double *)arg3 samplesZ:(double *)arg4;
- (void)convertXYZSamplesPercentageToPixelValuesXYZSamplesIfRequired:(int)arg1 samplesX:(double *)arg2 samplesY:(double *)arg3 samplesZ:(double *)arg4;
- (void)setCropKeyframeForType:(int)arg1 kf:(int)arg2 andL:(double)arg3 andR:(double)arg4 andB:(double)arg5 andT:(double)arg6;
- (void)getCropKeyframeForType:(int)arg1 kf:(int)arg2 andL:(double *)arg3 andR:(double *)arg4 andB:(double *)arg5 andT:(double *)arg6;
- (BOOL)cropDisplaysNameForType:(int)arg1;
- (void)setCropType:(int)arg1;
- (int)getCropKeyframeCount;
- (int)getCropType;
- (void)setCropL:(double)arg1 andR:(double)arg2 andB:(double)arg3 andT:(double)arg4;
- (void)getCropL:(double *)arg1 andR:(double *)arg2 andB:(double *)arg3 andT:(double *)arg4;
- (void)setShear:(const PCVector2_79efa81a *)arg1;
- (PCVector2_79efa81a)getShear;
- (void)setFourCornerTopRight:(const PCVector2_79efa81a *)arg1;
- (void)setFourCornerTopLeft:(const PCVector2_79efa81a *)arg1;
- (void)setFourCornerBottomRight:(const PCVector2_79efa81a *)arg1;
- (void)setFourCornerBottomLeft:(const PCVector2_79efa81a *)arg1;
- (PCVector2_79efa81a)getFourCornerTopRight;
- (PCVector2_79efa81a)getFourCornerTopLeft;
- (PCVector2_79efa81a)getFourCornerBottomRight;
- (PCVector2_79efa81a)getFourCornerBottomLeft;
- (void)setPivot:(const PCVector3_457fd1f0 *)arg1;
- (void)setScale:(const PCVector3_457fd1f0 *)arg1;
- (void)setRotationZ:(double)arg1;
- (void)setRotation:(const PCVector3_457fd1f0 *)arg1;
- (void)offsetPosition:(const PCVector3_457fd1f0 *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)offsetPosition:(const PCVector3_457fd1f0 *)arg1;
- (void)setPosition:(const PCVector3_457fd1f0 *)arg1;
- (PCVector3_457fd1f0)getPivot;
- (PCVector3_457fd1f0)getScale;
- (PCVector3_457fd1f0)getRotation;
- (PCVector3_457fd1f0)getPosition;
- (unsigned int)getProperties;
- (void)willDeleteChannel:(struct OZChannelBase *)arg1;
- (struct OZChannelBase *)getSceneChannelRoot;
- (struct OZChannelBase *)getChannel;
- (struct OZObjectManipulator *)getObjectFromId:(unsigned int)arg1;
- (struct OZElement *)getElement;
- (struct OZSceneNode *)getSceneNode;
- (struct OZObjectManipulator *)getObjectManipulator;
- (struct OZRenderState)getState;
- (void)dealloc;
- (void)useAssociatedNode:(BOOL)arg1;
- (void)setChannel:(struct OZChannelBase *)arg1;
- (void)setHostDelegate:(id)arg1 andViewDelegate:(id)arg2;
- (id)initWithChannel:(struct OZChannelBase *)arg1 andHostDelegate:(id)arg2 andViewDelegate:(id)arg3;

@end

