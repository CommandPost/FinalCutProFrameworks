//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POOnScreenControl.h"

@interface TXGlyphMotionPathOnScreenControl : POOnScreenControl
{
    struct vector<TXGlyphAnimationPathOnScreenControl*, std::allocator<TXGlyphAnimationPathOnScreenControl*>> *_paths;
    struct vector<TXGlyphAnimationPathOnScreenControl*, std::allocator<TXGlyphAnimationPathOnScreenControl*>> *_selectedPaths;
    struct vector<TXGlyphAnimationPathOnScreenControl*, std::allocator<TXGlyphAnimationPathOnScreenControl*>> *_currentSelectedPaths;
    _Bool _startDrag;
    _Bool _selecting;
    struct TXDiscontinuousSelection _glyphSelection;
    struct POColor _playerOSCMotionPathFrame;
    struct POColor _playerOSCMotionPathStroke;
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (BOOL)flagsChanged:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (void)refreshMotionPaths;
- (struct TXTextLayout *)getTextLayout;
- (id)getCursorWithEvent:(id)arg1;
- (int)hitCheck:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)delete:(id)arg1;
- (void)draw;
- (void)getTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 forTextObject:(struct TXTextObject *)arg2 andState:(struct OZRenderState)arg3;
- (void)getInvTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 forTextObject:(struct TXTextObject *)arg2 andState:(struct OZRenderState)arg3;
- (void)getTransformMatrix:(PCMatrix44Tmpl_e98c85ee *)arg1 state:(struct OZRenderState)arg2;
- (id)menuForEvent:(id)arg1;
- (struct OZChannelPosition3D *)getOffsetChannel:(struct TXTextStyle *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

