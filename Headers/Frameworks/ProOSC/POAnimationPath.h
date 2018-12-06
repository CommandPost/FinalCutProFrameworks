//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POMotionPathBase.h>

@interface POAnimationPath : POMotionPathBase
{
    _Bool _suppressPathDrawing;
    CDStruct_1b6d18a9 _minU;
    CDStruct_1b6d18a9 _maxU;
    PCMatrix44Tmpl_e98c85ee *_oldTrans;
    PCMatrix44Tmpl_e98c85ee *_oldViewTrans;
    BOOL _pathIsSinglePoint;
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (id)getCursorWithEvent:(id)arg1 addCursor:(BOOL)arg2;
- (unsigned int)getPathActivePart;
- (void)update;
- (struct POVertexAsset *)initAsset:(unsigned int)arg1 largeAssets:(_Bool)arg2;
- (id)motionPathOSCColor;
- (BOOL)okToDraw;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 viewBounds:(struct CGRect)arg3;
- (void)draw;
- (void)drawWithVertices:(BOOL)arg1;
- (void)clipPath:(vector_8d17e539 *)arg1 edges:(vector_8d17e539 *)arg2 visible:(vector_69938c0b *)arg3;
- (BOOL)sameKeyPoint:(struct POPathSelection *)arg1 keyPoint:(const struct POKeypoint *)arg2;
- (void)drawCurve:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2 keyPoints:(BOOL)arg3;
- (void)drawPath;
- (_Bool)getSamples:(const PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)getLocalToWorld:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)getWorldToLocal:(PCMatrix44Tmpl_e98c85ee *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (void)notify:(unsigned int)arg1;
- (void)addVertexAtTime:(CDStruct_1b6d18a9)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4 handleX:(void **)arg5 handleY:(void **)arg6 handleZ:(void **)arg7;
- (id)controlPointInfoString;
- (CDStruct_1b6d18a9)getVertexUInfo:(CDStruct_1b6d18a9)arg1;

@end

