//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@interface POColorIsolation : POOnScreenControl
{
    PCVector3_457fd1f0 _mousePos;
    BOOL _moving;
}

+ (BOOL)validate:(id)arg1;
- (void)_init;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (void)move:(const PCVector3_457fd1f0 *)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)flagsChanged:(id)arg1;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 viewBounds:(struct CGRect)arg3;
- (void)draw;
- (BOOL)postRedisplayOnActivePartChange;
- (id).cxx_construct;

@end
