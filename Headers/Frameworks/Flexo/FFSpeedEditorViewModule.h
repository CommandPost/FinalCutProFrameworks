//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "NSTextFieldDelegate.h"

@class LKButton, LKTextField, NSArray, NSMatrix, NSMutableArray, NSString, NSView;

@interface FFSpeedEditorViewModule : LKViewModule <NSTextFieldDelegate>
{
    NSArray *_objects;
    NSArray *_objectsAndRanges;
    int _segmentIndex;
    NSMutableArray *_objectsToObserve;
    LKTextField *rateField;
    LKTextField *percentField;
    LKTextField *durationField;
    NSView *directionGroup;
    NSView *setSpeedGroup;
    NSView *automaticGroup;
    NSMatrix *directionMatrix;
    LKButton *resizeClipButton;
    LKTextField *untimedDurationField;
    LKButton *resetButton;
    LKButton *reverseButton;
    NSMatrix *retimeMatrix;
    id <FFSpeedEditorDelegate> _speedEditorDelegate;
    CDStruct_1b6d18a9 _initialDuration;
    double _initialRate;
}

@property(nonatomic) id <FFSpeedEditorDelegate> speedEditorDelegate; // @synthesize speedEditorDelegate=_speedEditorDelegate;
- (void)updateUI:(id)arg1;
- (void)_removeObserversForRetimeChannels;
- (void)_addObserversForRetimedObjects;
- (void)_getRetimeChannelsToObserve;
- (id)_getRetimeChannelsToObserveForObject:(id)arg1;
- (void)resetRetime:(id)arg1;
- (void)durationEntered:(id)arg1;
- (void)rateEntered:(id)arg1;
- (void)retimeWithRate:(double)arg1;
- (BOOL)_constantRetimingWithRate:(double)arg1;
- (BOOL)_variableRetimingOnSegmentWithRate:(double)arg1;
- (BOOL)_variableRetimingOnRangeSelectionWithRate:(double)arg1;
- (id)timelineModule;
- (BOOL)_computeRateFromDuration:(double *)arg1;
- (CDStruct_1b6d18a9)_computeDeltaFromDuration;
- (void)resizeClipButtonPressed:(id)arg1;
- (void)changeDirection:(id)arg1;
- (void)changeRetimeMethod:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)dealloc;
- (void)close:(id)arg1;
- (void)windowDidShow;
- (void)moduleViewWasInstalled:(id)arg1;
- (BOOL)showAutomatic;
- (BOOL)_showAutomaticForObject:(id)arg1;
- (void)setAutomaticRowHidden:(BOOL)arg1;
- (void)setDirectionGroupHidden:(BOOL)arg1;
- (BOOL)isConstantRetime;
- (void)_fillRateField;
- (void)_fillDurationField;
- (void)awakeFromNib;
- (id)initWithObjects:(id)arg1 orObjectsAndRanges:(id)arg2 segmentIndex:(int)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

