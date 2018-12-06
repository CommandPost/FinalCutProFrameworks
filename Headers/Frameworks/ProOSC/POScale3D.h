//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POScaleControl.h>

@interface POScale3D : POScaleControl
{
    struct POScale3DImpl *_pImpl;
    BOOL _mouseDown;
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (void)updateInfoBarWithScale:(const PCVector3_457fd1f0 *)arg1 andChange:(const PCVector3_457fd1f0 *)arg2;
- (void)updateInfoBarWithScale;
- (BOOL)isDependentOnBounds;
- (BOOL)hasFocus;
- (void)draw;
- (void)updateScale:(const PCVector3_457fd1f0 *)arg1 translate:(const PCVector3_457fd1f0 *)arg2;
- (id)getCursor;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)postRedisplayOnActivePartChange;

@end

