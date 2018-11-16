//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFComponentOSC.h>

@class FFChannelChangeController, FFHeXForm3DEffect, FFProOSC;

__attribute__((visibility("hidden")))
@interface FFDragObjectOSC : FFComponentOSC
{
    FFProOSC *_proOSC;
    FFProOSC *_resignOnMouseUpToOSC;
    FFChannelChangeController *_changeController;
    struct CGPoint _mouseLast;
    long long _dragCount;
    BOOL _mouseIsDown;
    FFHeXForm3DEffect *_xformEffect;
}

- (id).cxx_construct;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)oscHandlesScroll;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (struct CGPoint)mousePointInFilm:(id)arg1;
- (id)_actionName;
- (void)_moveObjectFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 xformEffect:(id)arg3;
- (PCRay3_021fa152)_computeRay:(const PCVector3_515d8d1c *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_93ed1289 *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_offsetPosition:(const PCVector3_515d8d1c *)arg1 atTime:(CDStruct_1b6d18a9)arg2 xformEffect:(id)arg3;
- (BOOL)supportsTool:(Class)arg1;
- (void)dealloc;
- (id)initWithHeXFormEffect:(id)arg1 effectStack:(id)arg2 proOSC:(id)arg3 resignOnMouseUpToOSC:(id)arg4;

@end

