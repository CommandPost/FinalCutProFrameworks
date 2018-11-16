//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKPanel.h"

@class NSTimer, NSWindow;

@interface FFCurtainPanel : LKPanel
{
    NSTimer *_timer;
    float _maxAlpha;
    float _percent;
    float _step;
    BOOL _shouldAnimate;
    NSWindow *_parent;
}

@property NSWindow *parent; // @synthesize parent=_parent;
@property BOOL shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
- (id)initWithWindow:(id)arg1;
- (void)dealloc;
- (struct CGRect)fullscreenFrameForParentWindow:(id)arg1;
- (void)updateFrameForFullscreenParentWindow;
- (void)parentWindowDidResize:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)teardown;
- (void)orderFront:(id)arg1;
- (void)setupAnimation:(BOOL)arg1;
- (void)timer;
- (void)stopTimer;

@end

