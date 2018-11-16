//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@interface OZGeometricShapeOSC : POOnScreenControl
{
    struct OZShape *_shape;
    int _numHits;
    unsigned int _buffer[8192];
    unsigned int _draggedPart;
    struct CGPoint _mouseOrigin;
    struct CGPoint _lastMousePos;
    BOOL _isMouseDragged;
    BOOL _isMouseDown;
    PCVector3_457fd1f0 _priorRotHandlePos;
    double _rotHandleLength;
}

- (id).cxx_construct;
- (id)getCursorWithEvent:(id)arg1 addCursor:(BOOL)arg2;
- (id)getCursorWithEvent:(id)arg1;
- (void)translate:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (unsigned int)processHits;
- (int)hitCheck:(id)arg1;
- (void)drawShapeHandlesWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (void)drawOSCSpecificHandlesWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (void)drawOSCSpecificCurvesWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2 pick:(BOOL)arg3;
- (void)drawWithDrawProperties:(id)arg1;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 viewBounds:(struct CGRect)arg3;
- (struct OZShapeRenderState)makeShapeRenderState;
- (void)draw;
- (BOOL)postRedisplayOnActivePartChange;
- (BOOL)uses8PointSizeOSC;
- (struct CGPoint)getPointInFilmSpace:(id)arg1 x:(double)arg2 y:(double)arg3;
- (PCMatrix44Tmpl_e98c85ee)getViewTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1;
- (void)setShapeDimensionsAtTime:(CDStruct_1b6d18a9 *)arg1 dimensions:(struct CGSize)arg2;
- (struct CGSize)shapeDimensionsAtTime:(CDStruct_1b6d18a9 *)arg1;
- (struct OZShape *)getRotoshape;
- (void)setRotoshape:(struct OZShape *)arg1;
- (struct OZShape *)validate:(struct OZShape *)arg1;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

