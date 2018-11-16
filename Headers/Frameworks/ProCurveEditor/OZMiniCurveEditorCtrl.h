//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProCurveEditor/OZCurveEditorCtrlBase.h>

@interface OZMiniCurveEditorCtrl : OZCurveEditorCtrlBase
{
}

- (id)initWithView:(id)arg1 andChannel:(struct OZChannelBase *)arg2;
- (void)dealloc;
- (void)buildDefaultMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateDefaultMenuItem:(id)arg1;
- (void)menuSetCurvePreExtrapolation:(id)arg1;
- (void)menuSetCurvePostExtrapolation:(id)arg1;
- (void)menuLockChannel:(id)arg1 channel:(struct OZChannel *)arg2;
- (void)menuSetCurveInterpolation:(id)arg1 channel:(struct OZChannel *)arg2;
- (void)selectionChangedTo:(id)arg1;
- (BOOL)hasSelection;
- (id)sketchedChannels;
- (unsigned int)numberOfSketchedChannels;
- (void)moveSelectedInY:(id)arg1 y:(double)arg2;
- (void)moveSelectedInX:(id)arg1 x:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)getSelectedValueX;
- (double)getSelectedValueY;
- (void)update;

@end

