//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@interface POMultiCam : POOnScreenControl
{
    struct PCPtr<POMultiResStringTexture> _cameraMessage[16];
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)postRedisplayOnActivePartChange;
- (void)draw;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 viewBounds:(struct CGRect)arg3;
- (BOOL)isDependentOnBounds;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

