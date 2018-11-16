//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFModalTool.h>

#import "FFAutoMatchColorSubTool.h"

@class FFContext, FFFaceSelectionOSC, FFSwitch, LKButton, NSView;

@interface FFFaceSelectionTool : FFModalTool <FFAutoMatchColorSubTool>
{
    NSView *_adjustmentToolbarView;
    LKButton *_cancelButton;
    LKButton *_acceptButton;
    FFFaceSelectionOSC *_faceOSC;
    FFSwitch *_effectSwitch;
    FFContext *_context;
}

+ (id)cursor;
+ (id)toolTip;
+ (id)toolbarFacetSelectedImageMixed;
+ (id)toolbarFacetImageMixed;
+ (id)toolbarFacetSelectedImageOff;
+ (id)toolbarFacetImageOff;
+ (id)toolbarFacetSelectedImageOn;
+ (id)toolbarFacetImageOn;
+ (id)displayName;
+ (id)groups;
+ (void)initialize;
@property(nonatomic) FFSwitch *effectSwitch; // @synthesize effectSwitch=_effectSwitch;
@property(retain, nonatomic) LKButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) LKButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSView *adjustmentToolbarView; // @synthesize adjustmentToolbarView=_adjustmentToolbarView;
- (void)selectedItemsChanged:(id)arg1 forParentTool:(id)arg2;
- (void)timeRateChangedForContext:(id)arg1;
- (BOOL)_timeInRangeOfCurrentItems:(CDStruct_1b6d18a9)arg1;
- (void)setCurrentContext:(id)arg1;
- (void)toggleEffectEnabled:(id)arg1;
- (void)acceptSelection:(id)arg1;
- (void)cancelSelection:(id)arg1;
- (void)selectedItemsChanged:(id)arg1;
- (void)awakeFromNib;
- (id)onScreenControlsForTool;
- (id)adjustmentsToolbarView;
- (void)resignActiveTool;
- (void)becomeActiveTool;
- (BOOL)supportsMultipleSelection;
- (BOOL)allowsEffectOSCs;
- (BOOL)handlesSelection;
- (void)dealloc;
- (id)init;

@end

