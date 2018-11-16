//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POOnScreenControl.h"

@class NSTimer;

@interface TXParagraphOverlay : POOnScreenControl
{
    unsigned int _fadeState;
    NSTimer *_fadeTimer;
    struct timeval _switchTime;
    struct timeval _currentTime;
    float _globalAlpha;
    _Bool _overlayIsOn;
    struct OZChannelBase *_overlayChan;
}

- (double)calcScaleFactorForPoint:(PCVector3_457fd1f0 *)arg1 objToView:(PCMatrix44Tmpl_93ed1289 *)arg2;
- (double)getSecondsSince:(struct timeval *)arg1;
- (void)stopAlphaTimer;
- (void)startAlphaTimer;
- (void)setAlphaOfElements;
- (_Bool)getOverlayIsOn;
- (struct TXTextLayout *)getTextLayout;
- (void)setNewObjectDelegateForSceneNode:(struct OZSceneNode *)arg1;
- (void)setText:(struct TXTextLayout *)arg1;
- (int)getDrawingOrder;
- (void)dealloc;
- (void)setOverlayChan:(struct OZChannelBase *)arg1;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

