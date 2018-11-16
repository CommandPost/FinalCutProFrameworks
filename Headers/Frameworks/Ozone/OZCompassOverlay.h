//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZOverlay.h>

@class NSTimer, PGDrawableTexture;

@interface OZCompassOverlay : OZOverlay
{
    double _compassSize;
    unsigned int _framebuffer;
    unsigned int _texture;
    unsigned int _depth_rb;
    float _lineWidth;
    float _lineWidth2;
    NSTimer *_timer;
    int _lastActivePart;
    int _cameraAnimFrameCounter;
    _Bool _cameraAnimDone;
    _Bool _cameraAnimFW;
    float _cameraAnimRatio;
    int _cameraNeutralAnimFrameCounter;
    _Bool _cameraNeutralAnimDone;
    float _cameraNeutralAnimRatio;
    _Bool _cameraNeutralPosition;
    _Bool _cameraNeutralPositionAnim;
    PGDrawableTexture *_cameraNameTexture;
    struct CompassSceneDescriptor _lastSceneDescriptor;
    unsigned long long _lastTimeRenderTextureCalled;
    _Bool _bUsePBUFFER;
    struct PGSimplePBuffer *_renderBuffer;
    int _textureSize;
    int _xOffset;
    int _yOffset;
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (int)getDrawingOrder;
- (BOOL)is3DOSC;
- (void)dealloc;
- (void)draw;
- (void)updateTip;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (BOOL)flagsChanged:(id)arg1;
- (id)getCursorWithEvent:(id)arg1;
- (BOOL)postRedisplayOnActivePartChange;
- (BOOL)isActivePartClosestObjectPicked;
- (void)drawCompass:(int)arg1;
- (void)getCameraRotation_xRot:(float *)arg1 yRot:(float *)arg2 zRot:(float *)arg3;
- (void)setCameraTransformation;
- (void)animate:(id)arg1;
- (void)animateNeutralCamera:(id)arg1;
- (void)drawTitleWithText:(id)arg1 offsetAdjust:(float)arg2;
- (void)drawTitle;
- (void)setCurrentSceneDescriptor:(struct CompassSceneDescriptor *)arg1;
- (_Bool)renderTexture;
- (void)setDisplayOffsetX:(int)arg1 andY:(int)arg2;
- (BOOL)needsRightMouseEvents;

@end
