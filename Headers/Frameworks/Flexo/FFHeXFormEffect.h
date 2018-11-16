//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumXFormEffect.h>

@class CHChannelAngle, CHChannelPosition, CHChannelScale;

__attribute__((visibility("hidden")))
@interface FFHeXFormEffect : FFHeliumXFormEffect
{
    CHChannelPosition *_chPosition;
    CHChannelAngle *_chRotation;
    CHChannelScale *_chScale;
    CHChannelPosition *_chAnchor;
}

- (id)initWithEffectID:(id)arg1;
- (void)dealloc;
- (unsigned int)attributeCopyingFlags;
- (BOOL)isNoOp;
- (id)positionChannel;
- (id)rotationChannel;
- (id)scaleChannel;
- (id)anchorChannel;
- (id)positionChan;
- (id)rotationChan;
- (id)scaleChan;
- (id)anchorChan;
- (id)motionPathChan;
- (void)getPixelPositionAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)getRotationAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)getScaleAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)getPixelPivotAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)getPivotAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)offsetPixelPositionAtTime:(CDStruct_1b6d18a9)arg1 deltaX:(double)arg2 deltaY:(double)arg3 deltaZ:(double)arg4 options:(unsigned int)arg5;
- (void)setPixelPositionAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)setPositionAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)setRotationAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)setScaleAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)setPixelPivotAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)setPivotAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (void)calcTransform:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)modifyImageTransform:(id)arg1 andImageSpaceBounds:(struct CGRect *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)newUpdatedDownstreamPT:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)createChannelsInFolder:(id)arg1;
- (id)onScreenControlsForChannelFolder:(id)arg1 effectStack:(id)arg2;
- (id)inputKeys;
- (BOOL)isAnimated;

@end
