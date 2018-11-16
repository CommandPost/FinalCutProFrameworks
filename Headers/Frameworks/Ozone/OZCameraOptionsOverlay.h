//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZOverlay.h>

@class NSString, OZTool;

@interface OZCameraOptionsOverlay : OZOverlay
{
    long long _viewControlToolTips[4];
    OZTool *_activeTool;
    int _hitPart;
    NSString *_titleText;
    int _titleWidth;
    int _titleHeight;
    int _titleState;
    int _lastViewW;
    int _lastViewH;
}

+ (void)updateCameraMenu:(id)arg1 forScene:(struct OZScene *)arg2 target:(id)arg3;
+ (id)newCameraPickerMenuForViewer:(id)arg1;
+ (id)addItemToMenu:(id)arg1 withTitle:(const struct PCString *)arg2 action:(SEL)arg3 tag:(int)arg4 target:(id)arg5;
- (BOOL)needsRightMouseEvents;
- (id)getCursorWithEvent:(id)arg1;
- (int)hitCheck:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)displayMenu:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateTip;
- (void)draw;
- (BOOL)postRedisplayOnActivePartChange;
- (BOOL)is3DOSC;
- (int)getDrawingOrder;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

