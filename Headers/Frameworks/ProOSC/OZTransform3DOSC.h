//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POOnScreenControl.h>

@class POMove3D, PORotate3D, POScaleControl;

@interface OZTransform3DOSC : POOnScreenControl
{
    POMove3D *_translationOSC;
    PORotate3D *_rotationOSC;
    POScaleControl *_scaleOSC;
    BOOL _translateToolActive;
    BOOL _rotateToolActive;
    BOOL _scaleToolActive;
    BOOL _dragging;
    BOOL _cmdKeyDown;
    BOOL _altKeyDown;
}

+ (BOOL)validate:(id)arg1;
- (_Bool)isTranslateHandleActive:(int)arg1;
- (_Bool)isRotateHandleActive:(int)arg1;
- (_Bool)isFreeMoveHandleActive:(int)arg1;
- (void)setActivePart:(int)arg1;
- (BOOL)is3DOSC;
- (BOOL)postRedisplayOnActivePartChange;
- (BOOL)acceptPassiveEvent:(id)arg1;
- (struct CGRect)getBounds;
- (BOOL)oscFlagsChanged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)getCursorWithEvent:(id)arg1;
- (id)getDefaultCursor;
- (void)snapshotState;
- (void)updateScale:(const PCVector3_457fd1f0 *)arg1 translate:(const PCVector3_457fd1f0 *)arg2;
- (void)updateScale:(const PCVector3_457fd1f0 *)arg1 scaleFromCentre:(_Bool)arg2 hitPart:(int)arg3;
- (void)updateRotation:(const PCQuat_de30948b *)arg1;
- (void)updateTranslation:(const PCVector3_457fd1f0 *)arg1;
- (BOOL)toggleToolScale:(id)arg1;
- (BOOL)toggleToolRotate:(id)arg1;
- (BOOL)toggleToolTranslate:(id)arg1;
- (void)setOSCStateTranslate:(BOOL)arg1 rotate:(BOOL)arg2 scale:(BOOL)arg3;
- (void)draw;
- (BOOL)showTranslationOSC;
- (BOOL)showRotationOSC;
- (BOOL)showScaleOSC;
- (BOOL)isDependentOnBounds;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

