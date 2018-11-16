//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POParametricMotionPath.h>

@interface POCustomMotionPath : POParametricMotionPath
{
    PCPtr_df275998 _handlesTexture;
    PCVector3_457fd1f0 _invOffset;
    struct PCMutex _samplesLock;
}

+ (void)maybeInitResources;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (unsigned int)getPathActivePart;
- (id)getCursorWithEvent:(id)arg1 addCursor:(BOOL)arg2;
- (id)menuForEvent:(id)arg1;
- (BOOL)canAddVertex;
- (void)processHits;
- (void)drawVertexHandleInViewCoords:(const PCMatrix44Tmpl_e98c85ee *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4 texture:(const PCPtr_df275998 *)arg5;
- (void)drawVertices:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (int)getShapeSamplesX:(vector_419cd555 *)arg1 Y:(vector_419cd555 *)arg2 Z:(vector_419cd555 *)arg3 T:(vector_419cd555 *)arg4;
- (void)drawPath;
- (void)drawCurve:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2 keyPoints:(BOOL)arg3;
- (void)deleteSelected:(list_5245b10b *)arg1;
- (void)moveSelected:(list_5245b10b *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4 ignoreFirstVertex:(_Bool)arg5;
- (_Bool)useControlPolygon;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (_Bool)projectPointOnObjectZPlane:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (struct OZChannelPosition *)getEndPointChan;
- (struct OZChanRotoshapeRefWithPicker *)getGeometryChan;
- (struct OZChannelPercent *)getOffsetChan;
- (struct OZChannel2D *)getRadiusChan;
- (struct OZChannel2D *)getRectSizeChan;
- (struct OZChannelDouble *)getWaveAmplitudeChan;
- (struct OZChannelDouble *)getWaveFrequencyChan;
- (struct OZChannelAngle *)getWavePhaseChan;
- (struct OZChannelDouble *)getWaveDampingChan;
- (unsigned int)getShape;
- (_Bool)transformPath;
- (BOOL)allowsCurveOffset;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

