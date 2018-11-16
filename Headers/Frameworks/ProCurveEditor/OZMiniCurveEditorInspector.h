//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProCurveEditor/OZMiniCurveEditor.h>

@class LKButton, LKScroller, LKSegmentedControl, LKZoomScroller;

@interface OZMiniCurveEditorInspector : OZMiniCurveEditor
{
    LKSegmentedControl *_modes;
    LKButton *_autoFit;
    LKScroller *_verticalScroller;
    LKZoomScroller *_horizontalZoomScroller;
    double _oldKnobProportionY;
    float _oldKnobValueY;
    unsigned int _controlFlags;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controlFlags:(unsigned int)arg2;
- (void)dealloc;
- (void)update;
- (void)setEnabled:(BOOL)arg1;
- (void)setMode:(id)arg1;
- (void)autoFit:(id)arg1;
- (void)verticalScroller:(id)arg1;
- (void)horizontalZoomScroller:(id)arg1;
- (void)updateVerticalZoomScroller;
- (void)updateHorizontalZoomScroller;
- (void)setChannel:(struct OZChannelBase *)arg1;
- (void)windowWasPanned:(double)arg1;
- (void)windowWasZoomed;

@end
