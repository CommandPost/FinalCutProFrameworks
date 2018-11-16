//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMatchTool.h>

#import "FFAutoMatchColorSubTool.h"

@class FFSwitch, LKButton, NSView;

@interface FFColorMatchTool : FFMatchTool <FFAutoMatchColorSubTool>
{
    NSView *_adjustmentToolbarView;
    LKButton *_cancelButton;
    LKButton *_acceptButton;
    FFSwitch *_effectSwitch;
}

+ (id)cursorForOrganizer;
+ (id)cursor;
+ (id)toolbarFacetSelectedImageMixed;
+ (id)toolbarFacetImageMixed;
+ (id)toolbarFacetSelectedImageOff;
+ (id)toolbarFacetImageOff;
+ (id)toolbarFacetSelectedImageOn;
+ (id)toolbarFacetImageOn;
+ (id)displayName;
+ (void)initialize;
+ (BOOL)terminatesModalModeAsCompletion;
+ (BOOL)globalTransactionResignsTool;
+ (id)TLKEventHandlerID;
@property(retain, nonatomic) FFSwitch *effectSwitch; // @synthesize effectSwitch=_effectSwitch;
@property(retain, nonatomic) LKButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) LKButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSView *adjustmentToolbarView; // @synthesize adjustmentToolbarView=_adjustmentToolbarView;
- (void)_enableApplyButton:(BOOL)arg1;
- (void)selectedItemsChanged:(id)arg1 forParentTool:(id)arg2 contextTime:(CDStruct_1b6d18a9)arg3;
- (void)toggleEffectEnabled:(id)arg1;
- (void)acceptMatch:(id)arg1;
- (void)cancelMatch:(id)arg1;
- (void)awakeFromNib;
- (id)adjustmentsToolbarView;
- (void)dealloc;
- (void)resignActiveTool;
- (void)becomeActiveTool;
- (void)didRemoveAsHandlerForTimeline:(id)arg1;
- (void)willSetAsHandlerForTimeline:(id)arg1;

@end

