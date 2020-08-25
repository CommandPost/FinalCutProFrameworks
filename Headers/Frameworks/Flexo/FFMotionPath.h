//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POMotionPath.h"

#import "NSMenuDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFMotionPath : POMotionPath <NSMenuDelegate>
{
}

+ (void)maybeInitResources;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (id)buildPointMenu;
- (PCPtr_ca97d389)initAsset:(unsigned int)arg1 largeAssets:(_Bool)arg2;
- (void)inverseConvertPoint:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (void)convertPoint:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (PCPtr_ca97d389)getVertexAsset:(int)arg1;
- (id)drawPath:(id)arg1;
- (BOOL)drawDashed;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
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
- (int)getShapeSamplesX:(vector_b67dfe3a *)arg1 Y:(vector_b67dfe3a *)arg2 Z:(vector_b67dfe3a *)arg3 T:(vector_b67dfe3a *)arg4;
- (void)updateSpeedCurve;
- (void)disableSelected:(list_9b90a499 *)arg1;
- (void)deleteSelected:(list_9b90a499 *)arg1;
- (void)offsetTangentsSelected:(list_9b90a499 *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4;
- (BOOL)offsetSelected:(list_9b90a499 *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4 ignoreFirstVertex:(_Bool)arg5;
- (void)moveSelected:(list_9b90a499 *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4 ignoreFirstVertex:(_Bool)arg5;
- (BOOL)updateSelection:(list_9b90a499 *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4 ignoreFirstVertex:(_Bool)arg5 move:(_Bool)arg6;
- (BOOL)getRelatedHandlesForSelection:(list_9b90a499 *)arg1 handles:(vector_9e9b204a *)arg2 times:(vector_0821a7d5 *)arg3;
- (void)addVertexAtTime:(CDStruct_1b6d18a9)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4 handleX:(void **)arg5 handleY:(void **)arg6 handleZ:(void **)arg7;
- (PCVector3_457fd1f0)calculateOwnerOffset;
- (void)applyObjectTransform:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (CDStruct_1b6d18a9)getTimeOffset;
- (void)getWorldToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (struct OZChannelPosition3D *)getPosition;
- (struct OZObjectManipulator *)getObjectManipulator;
- (_Bool)getSamples:(const PCMatrix44Tmpl_e98c85ee *)arg1;
- (BOOL)shouldShowSpeed;
- (struct OZSceneNode *)getAssociatedSceneNode;
- (struct OZSceneNode *)getSceneNode;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

