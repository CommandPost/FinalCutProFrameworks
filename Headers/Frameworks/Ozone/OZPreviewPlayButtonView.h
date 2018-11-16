//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKImageView.h"

@class CALayer, NSImage, NSObject<OZPreviewModule>, NSTimer;

@interface OZPreviewPlayButtonView : LKImageView
{
    BOOL _mouseOver;
    BOOL _mouseDown;
    NSImage *_playImageNormal;
    NSImage *_playImagePressed;
    NSImage *_pauseImageNormal;
    NSImage *_pauseImagePressed;
    double _playButtonOpacity;
    NSTimer *_animationTimer;
    CALayer *_playButtonLayer;
    NSObject<OZPreviewModule> *_owner;
    BOOL _showPauseButton;
}

@property(nonatomic) NSObject<OZPreviewModule> *owner; // @synthesize owner=_owner;
@property(nonatomic) CALayer *playButtonLayer; // @synthesize playButtonLayer=_playButtonLayer;
- (void)updatePlayButtonOpacity;
- (void)_stopAnimationTimer;
- (void)_startAnimationTimer;
- (void)_addTrackingArea;
- (void)setShowPauseButton:(BOOL)arg1;
- (BOOL)showPauseButton;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)resetMouseState;
- (void)dealloc;
- (void)_init;

@end

