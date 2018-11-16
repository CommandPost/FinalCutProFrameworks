//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSPopoverDelegate.h"

@class NSArray, NSPopover, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface FFTransitionAttributesPopoverController : NSViewController <NSPopoverDelegate>
{
    NSPopover *_popover;
    BOOL _preventDismissDuringModelChange;
    BOOL _isAnimating;
    BOOL _isDismissing;
    id <FFTransitionAttributesPopoverControllerDelegate> _delegate;
    NSView *_popoverView;
    NSTextField *_durationTextField;
    NSTextField *_nameTextField;
    NSArray *_selectedItems;
}

@property(nonatomic) BOOL isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) BOOL preventDismissDuringModelChange; // @synthesize preventDismissDuringModelChange=_preventDismissDuringModelChange;
@property(retain, nonatomic) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(nonatomic) NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(nonatomic) NSTextField *durationTextField; // @synthesize durationTextField=_durationTextField;
@property(retain, nonatomic) NSView *popoverView; // @synthesize popoverView=_popoverView;
@property(nonatomic) id <FFTransitionAttributesPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSPopover *popover; // @synthesize popover=_popover;
- (id)_currentTransitionEffectID;
- (id)_currentTransitionName;
- (BOOL)_setTransitionDurations:(id)arg1;
- (CDStruct_1b6d18a9)_transitionMaxDuration:(id)arg1;
- (CDStruct_1b6d18a9)_maxAnchorsCanMove:(id)arg1 toLeft:(BOOL)arg2 editingFrameDuration:(CDStruct_1b6d18a9)arg3;
- (void)_updateTransitionNameUI;
- (void)_updateTransitionDurationUI;
- (void)applyToAllTransitions:(id)arg1;
- (void)updateTransitionDuration:(id)arg1;
- (void)_popoverDidDismiss;
- (void)dismiss;
- (void)_dismissPopoverAnimated:(BOOL)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)presentWithTargetRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)nibBundle;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

