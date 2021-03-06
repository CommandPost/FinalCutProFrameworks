//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSOpenGLView.h>

@interface OMOrthoView : NSOpenGLView
{
    _Bool fGLInit;
    struct {
        float panX;
        float panY;
        float zoom;
        int viewWidth;
        int viewHeight;
    } camera;
    _Bool _mouseDownHasBeenHandled;
    _Bool _spaceDown;
    _Bool _didSmoothZoom;
    int _orthManipTool;
}

+ (id)basicPixelFormat;
- (BOOL)holdSpaceForViewTransformShortcuts;
- (BOOL)isEnabled;
- (void)draw;
- (void)resizeGL;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)update;
- (void)drawRect:(struct CGRect)arg1;
- (void)lockFocus;
- (void)keyDown:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (BOOL)customKeyEquivalent:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)activateTool:(int)arg1;
- (void)resetCamera;
- (void)mousePan:(struct CGPoint)arg1;
- (void)mouseZoom:(struct CGPoint)arg1;
- (void)prepareOpenGL;

@end

