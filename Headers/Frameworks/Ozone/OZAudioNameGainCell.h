//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCell.h"

#import "NSCopying.h"

@class LKSliderCell, LKTextFieldCell, NSView;

@interface OZAudioNameGainCell : NSCell <NSCopying>
{
    LKTextFieldCell *_nameField;
    LKSliderCell *_slider;
    LKTextFieldCell *_textField;
    NSView *_controlView;
    long long _trackingRow;
    long long _trackingColumn;
}

+ (BOOL)prefersTrackingUntilMouseUp;
- (id)initTextCell:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (void)setNameEnabled:(BOOL)arg1;
- (void)setGainEnabled:(BOOL)arg1;
- (void)setNameValue:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (struct CGRect)topHalfCellRect:(struct CGRect)arg1;
- (struct CGRect)nameFieldCellRect:(struct CGRect)arg1;
- (struct CGRect)sliderCellRect:(struct CGRect)arg1;
- (struct CGRect)textFieldCellRect:(struct CGRect)arg1;
- (BOOL)pointInName:(struct CGRect)arg1 inView:(id)arg2 event:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)startSliderAction:(id)arg1;
- (void)endSliderAction:(id)arg1;
- (void)changeSliderValue:(id)arg1;
- (void)setValueInTableWhileTracking:(id)arg1;

@end

