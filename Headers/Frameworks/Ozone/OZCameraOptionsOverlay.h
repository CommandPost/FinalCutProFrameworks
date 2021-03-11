//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZOverlay.h>

#import <Ozone/POOnScreenControlMetalRendering-Protocol.h>

@class MDPResizableImage, MDPText, NSDictionary, NSMutableDictionary, NSString, OZTool;

@interface OZCameraOptionsOverlay : OZOverlay <POOnScreenControlMetalRendering>
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
    MDPText *_text;
    MDPResizableImage *_normalButton;
    MDPResizableImage *_pressedButton;
    NSDictionary *_textAttributes;
    NSMutableDictionary *_icons;
}

+ (void)updateCameraMenu:(id)arg1 forScene:(struct OZScene *)arg2 target:(id)arg3;
+ (id)newCameraPickerMenuForViewer:(id)arg1;
+ (id)addItemToMenu:(id)arg1 withTitle:(const struct PCString *)arg2 action:(SEL)arg3 tag:(int)arg4 target:(id)arg5;
- (id)iconForName:(id)arg1;
- (id)iconNameForState:(int)arg1;
- (id)buttonForState:(int)arg1 image:(id)arg2 rect:(struct CGRect)arg3;
- (id)buttonImageForState:(int)arg1;
- (void)resetToolTips;
- (id)newPrimitivesForContext:(id)arg1 userInfo:(id)arg2;
- (BOOL)needsRightMouseEvents;
- (id)getCursorWithEvent:(id)arg1;
- (id)hitTestResultWithEvent:(id)arg1 userInfo:(id)arg2;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

