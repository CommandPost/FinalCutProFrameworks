//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProCurveEditor/OZCurveEditorViewBase.h>

@class OZMiniCurveEditor;

@interface OZMiniCurveEditorView : OZCurveEditorViewBase
{
    OZMiniCurveEditor *_curveEditor;
    BOOL _isHUD;
    BOOL _isEnabled;
}

- (void)panWithPage:(double)arg1 y:(double)arg2;
- (void)pan:(double)arg1 y:(double)arg2;
- (void)zoomWithFactor:(double)arg1 y:(double)arg2;
- (void)zoom:(double)arg1 y:(double)arg2;
- (void)drawGrid;
- (struct CGRect)getOriginalViewVolume;
- (struct CGRect)getCurrentViewVolume;
- (void)setCurrentViewVolume:(struct CGRect)arg1;
- (id)menuForEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)reset;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)setAutoZoom:(BOOL)arg1;
- (void)update;
- (void)HUDifyView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

