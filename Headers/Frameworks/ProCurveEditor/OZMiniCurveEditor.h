//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProView.h"

@class LKTextField, OZMiniCurveEditorCtrl, OZMiniCurveEditorView;

@interface OZMiniCurveEditor : NSProView
{
    NSProView *_masterView;
    OZMiniCurveEditorView *_curveEditorView;
    LKTextField *_axisX;
    LKTextField *_axisY;
    OZMiniCurveEditorCtrl *_curveEditorCtrl;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)createController:(struct OZChannelBase *)arg1;
- (BOOL)manageSubview:(id)arg1 on:(BOOL)arg2;
- (void)update;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setChannel:(struct OZChannelBase *)arg1;
- (void)setTotalRange:(const CDStruct_1b6d18a9 *)arg1 duration:(const CDStruct_1b6d18a9 *)arg2;
- (void)setDisplayRange:(const CDStruct_1b6d18a9 *)arg1 duration:(const CDStruct_1b6d18a9 *)arg2;
- (void)HUDifyUI:(id)arg1;
- (void)windowWasPanned:(double)arg1;
- (void)windowWasZoomed;
- (CDStruct_1b6d18a9)getSelectedValueX;
- (double)getSelectedValueY;
- (BOOL)hasSelection;
- (void)setSelectedValueY:(double)arg1;
- (void)setSelectedValueX:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)getSelectedValueXForChannel:(struct OZChannelBase *)arg1;
- (double)getSelectedValueYForChannel:(struct OZChannelBase *)arg1;
- (void)setSelectedValueY:(double)arg1 forChannel:(struct OZChannelBase *)arg2;
- (void)setSelectedValueX:(CDStruct_1b6d18a9)arg1 forChannel:(struct OZChannelBase *)arg2;
- (void)didEndModifyingSelectedX;
- (CDStruct_1b6d18a9)currentTime;
- (id)appDelegate;

@end
