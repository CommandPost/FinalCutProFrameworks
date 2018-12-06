//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@class LKColorWell, NSMenu;

@interface OZChannelGradientPositionedOSC : POOnScreenControl
{
    NSMenu *_pMenu;
    NSMenu *_pColorInterpolationMenu;
    NSMenu *_pOpacityInterpolationMenu;
    NSMenu *_pPresetsMenu;
    vector_fea2fb38 *_pPositions;
    PCVector2_79efa81a *_pStart;
    PCVector2_79efa81a *_pEnd;
    struct OZChannelGradientSample *_pSample;
    struct OZChannelEnum *_pColorInterpolation;
    struct OZChannelEnum *_pOpacityInterpolation;
    LKColorWell *_pTransientColorWell;
    double _sampleOffsetStart;
    double _mouseDownX;
    double _mouseDownY;
    int _moving;
    int _movingIndex;
    BOOL _deleteUndoHandled;
}

+ (void)findChannelGradientPositioned:(struct OZChannelFolder *)arg1 foundChannels:(vector_fea2fb38 *)arg2;
+ (BOOL)hasChannelGradientPositioned:(struct OZChannelFolder *)arg1;
+ (BOOL)validate:(struct OZChannelBase *)arg1;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (id)getDefaultCursor;
- (struct OZChannelGradientSample *)findSample:(int)arg1 from:(struct OZChannelGradientFolder *)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)setupFromEvent:(id)arg1;
- (double)distanceFromStart:(double)arg1 y:(double)arg2;
- (void)mouseDown:(id)arg1;
- (double)distanceFromLineStart:(double)arg1 y:(double)arg2 end:(double)arg3 y:(double)arg4 toMouse:(double)arg5 y:(double)arg6;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)color;
- (void)takeColorFromTransientColorPicker:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (BOOL)flagsChanged:(id)arg1;
- (void)buildPresetMenu;
- (void)menuAction:(id)arg1;
- (struct OZChannelGradientSample *)findSampleRangeContaining:(double)arg1 from:(struct OZChannelGradientFolder *)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)setColorInterpolation:(id)arg1;
- (void)setOpacityInterpolation:(id)arg1;
- (void)fillInterpolationMenu:(id)arg1 from:(struct OZChannelGradientFolder *)arg2 interpolation:(struct OZChannelEnum **)arg3 at:(double)arg4 time:(CDStruct_1b6d18a9)arg5 action:(SEL)arg6;
- (id)menuForEvent:(id)arg1;
- (void)drawTags:(map_ebcf14c8)arg1 color:(BOOL)arg2 renderMode:(int)arg3 start:(const PCVector3_457fd1f0 *)arg4 end:(const PCVector3_457fd1f0 *)arg5 matrix:(const PCMatrix44Tmpl_e98c85ee *)arg6 state:(const struct OZRenderState *)arg7 direction:(PCVector2_79efa81a)arg8 perpendicular:(PCVector2_79efa81a)arg9 handle:(int *)arg10;
- (void)draw;
- (BOOL)postRedisplayOnActivePartChange;
- (BOOL)needsRightMouseEvents;

@end

