//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProOSC/POMotionPath.h>

@interface OZMotionPathOSC : POMotionPath
{
}

- (_Bool)transformPath;
- (unsigned int)getShape;
- (struct OZChannelDouble *)getWaveDampingChan;
- (struct OZChannelAngle *)getWavePhaseChan;
- (struct OZChannelDouble *)getWaveFrequencyChan;
- (struct OZChannelDouble *)getWaveAmplitudeChan;
- (struct OZChannel2D *)getRectSizeChan;
- (struct OZChannel2D *)getRadiusChan;
- (struct OZChannelPercent *)getOffsetChan;
- (struct OZChanRotoshapeRefWithPicker *)getGeometryChan;
- (struct OZChannelPosition *)getEndPointChan;
- (int)getShapeSamplesX:(vector_8f06c10f *)arg1 Y:(vector_8f06c10f *)arg2 Z:(vector_8f06c10f *)arg3 T:(vector_8f06c10f *)arg4;
- (PCVector3_457fd1f0)calculateOwnerOffset;
- (void)applyObjectTransform:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (CDStruct_1b6d18a9)getTimeOffset;
- (struct OZChannelPosition3D *)getPosition;
- (struct OZObjectManipulator *)getObjectManipulator;
- (struct OZSceneNode *)getAssociatedSceneNode;
- (struct OZSceneNode *)getSceneNode;
- (void)notify:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

