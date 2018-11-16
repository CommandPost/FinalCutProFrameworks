//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POOnScreenControl.h"

#import "FxOnScreenControlAPI_v2.h"
#import "FxOnScreenControlAPI_v3.h"
#import "PROAPIObject.h"

@class NSProCursor;

@interface OZFxPlugOnscreenControl : POOnScreenControl <PROAPIObject, FxOnScreenControlAPI_v2, FxOnScreenControlAPI_v3>
{
    PCMatrix44Tmpl_e98c85ee _viewTransformation;
    const struct OZRenderState *_state;
    PCRect_b601f9f3 _bounds;
    void *_plugin;
    unsigned long long _curModifiers;
    NSProCursor *_cursor;
    struct OZChannel *_trackChannel;
    int _startCaptureModifiedChannels;
}

+ (BOOL)validate:(struct OZChannelBase *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)menuAddTrack:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (double)backingScaleFactor;
- (void)setCursor:(id)arg1;
- (id)getDefaultCursor;
- (id)objectToScreenTransform;
- (BOOL)postRedisplayOnActivePartChange;
- (void)inputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 pixelAspectRatio:(double *)arg3;
- (double)pixelAspectRatio;
- (struct CGRect)inputBounds;
- (struct CGRect)objectBounds;
- (void)objectWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 pixelAspectRatio:(double *)arg3;
- (double)canvasPixelAspectRatio;
- (double)canvasZoom;
- (void)convertPointFromSpace:(unsigned long long)arg1 fromX:(double)arg2 fromY:(double)arg3 toSpace:(unsigned long long)arg4 toX:(double *)arg5 toY:(double *)arg6;
- (int)getActivePart;
- (BOOL)oscFlagsChanged:(id)arg1;
- (BOOL)keyUpOSC:(id)arg1;
- (BOOL)keyDownOSC:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (double)_getFxPlugTime;
- (void)unlockCustomParameters;
- (void)lockCustomParameters;
- (void)finishEvent:(id)arg1 update:(BOOL)arg2;
- (BOOL)setupEvent:(id)arg1 x:(double *)arg2 y:(double *)arg3 modifiers:(unsigned long long *)arg4;
- (void)draw;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

