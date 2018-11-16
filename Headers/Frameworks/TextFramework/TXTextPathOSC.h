//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POCustomMotionPath.h"

#import "OZObjCObserver.h"

@interface TXTextPathOSC : POCustomMotionPath <OZObjCObserver>
{
    struct PCPtr<POMultiResTexture> _textPathHandlesTexture;
    struct OZChannelRef *_pChannelRef;
}

+ (void)maybeInitResources;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (double)getPixelAspectRatio;
- (PCPtr_fc939811)getVertexAsset:(int)arg1;
- (void)draw;
- (id)motionPathOSCColor;
- (id)motionPathLockedColor;
- (void)drawCurve:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2 keyPoints:(BOOL)arg3;
- (void)drawPath;
- (void)drawVertices:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (void)notify:(unsigned int)arg1;
- (BOOL)offsetSelected:(list_5245b10b *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4 ignoreFirstVertex:(_Bool)arg5;
- (void)moveSelected:(list_5245b10b *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4 ignoreFirstVertex:(_Bool)arg5;
- (void)addVertexAtTime:(CDStruct_1b6d18a9)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4 handleX:(void **)arg5 handleY:(void **)arg6 handleZ:(void **)arg7;
- (BOOL)selectAll:(id)arg1;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (struct OZSceneNode *)getSceneNode;
- (struct OZSceneNode *)getAssociatedSceneNode;
- (struct OZObjectManipulator *)getObjectManipulator;
- (struct OZChannelPosition3D *)getPosition;
- (CDStruct_1b6d18a9)getTimeOffset;
- (void)applyObjectTransform:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (int)getShapeSamplesX:(vector_419cd555 *)arg1 Y:(vector_419cd555 *)arg2 Z:(vector_419cd555 *)arg3 T:(vector_419cd555 *)arg4;
- (struct OZChannelPosition *)getStartPointChan;
- (struct OZChannelPosition *)getEndPointChan;
- (struct OZChanRotoshapeRefWithPicker *)getGeometryChan;
- (struct OZChannelPercent *)getOffsetChan;
- (struct OZChannel2D *)getRadiusChan;
- (struct OZChannel2D *)getRectSizeChan;
- (struct OZChannelDouble *)getWaveAmplitudeChan;
- (struct OZChannelDouble *)getWaveFrequencyChan;
- (struct OZChannelDouble *)getWaveDampingChan;
- (struct OZChannelAngle *)getWavePhaseChan;
- (unsigned int)getShape;
- (_Bool)transformPath;
- (void)flipPointNormal:(id)arg1;
- (void)flipCurveNormal:(id)arg1;
- (void)buildPointMenu;
- (void)buildCurveMenu;
- (id)returnPointMenu:(id)arg1;
- (id)returnCurveMenu:(id)arg1;
- (struct TXTextLayout *)getTextLayout;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

