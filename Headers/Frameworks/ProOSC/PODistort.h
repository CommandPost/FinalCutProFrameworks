//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@class NSColor;

@interface PODistort : POOnScreenControl
{
    PCVector2_79efa81a _startCorner;
    PCVector3_457fd1f0 _mousePos;
    PCRect_b601f9f3 _snapStartBounds;
    double _startX;
    double _startY;
    struct POLayeredAsset _handleOutline[2];
    PCPtr_ca909b16 _handleFill[2];
    NSColor *_playerStatusText;
    NSColor *_playerStatusTextUnit;
    PCVector2_79efa81a _handles[8];
    BOOL _moving;
}

+ (BOOL)validate:(id)arg1;
- (void)_init;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (PCVector2_79efa81a)getCorner:(unsigned int)arg1;
- (void)updateFourCorner:(unsigned int)arg1 change:(const PCVector2_79efa81a *)arg2;
- (void)updateShear:(unsigned int)arg1 change:(const PCVector2_79efa81a *)arg2;
- (void)move:(const PCVector3_457fd1f0 *)arg1;
- (PCMatrix44Tmpl_e98c85ee)calcFourCornerMatrix:(const PCRect_b601f9f3 *)arg1;
- (id)accessibilityHandleName;
- (void)updateInfoBarWithDelta:(const PCVector2_79efa81a *)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)flagsChanged:(id)arg1;
- (BOOL)isDependentOnBounds;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 viewBounds:(struct CGRect)arg3;
- (struct CGRect)activeHandleRect;
- (void)draw;
- (BOOL)postRedisplayOnActivePartChange;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
