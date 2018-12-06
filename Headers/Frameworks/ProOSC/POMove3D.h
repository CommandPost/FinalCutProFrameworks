//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@interface POMove3D : POOnScreenControl
{
    struct POMove3DImpl *_pImpl;
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (void)updateInfoBarWithPosition:(const PCVector3_457fd1f0 *)arg1 andChange:(const PCVector3_457fd1f0 *)arg2;
- (void)updateInfoBarWithPosition;
- (void)updateInfoBarWith2DPosition;
- (BOOL)translating;
- (void)enableAxes:(unsigned int)arg1;
- (unsigned int)freeMoveHandle;
- (PCVector3_457fd1f0)getDraggingAxis;
- (void)draw;
- (void)updateTranslation:(const PCVector3_457fd1f0 *)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)postRedisplayOnActivePartChange;

@end

