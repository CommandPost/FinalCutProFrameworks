//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

__attribute__((visibility("hidden")))
@interface FFHeliumXFormEffect : FFHeliumEffect
{
}

- (BOOL)isAnimated;
- (void)setPivotAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)setPixelPivotAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)setScaleAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)setRotationAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)setPositionAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)setPixelPositionAtTime:(CDStruct_1b6d18a9)arg1 curveX:(double)arg2 curveY:(double)arg3 curveZ:(double)arg4 options:(unsigned int)arg5;
- (void)offsetPixelPositionAtTime:(CDStruct_1b6d18a9)arg1 deltaX:(double)arg2 deltaY:(double)arg3 deltaZ:(double)arg4 options:(unsigned int)arg5;
- (void)getPivotAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)getPixelPivotAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)getScaleAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)getRotationAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)getPixelPositionAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (BOOL)shouldDrawMotionPath;
- (id)motionPathChan;
- (id)anchorChan;
- (id)scaleChan;
- (id)rotationChan;
- (id)positionChan;

@end

