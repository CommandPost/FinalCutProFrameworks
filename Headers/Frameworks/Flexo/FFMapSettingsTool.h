//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAdjustmentTool.h>

#import "NSWindowDelegate.h"

@class FFChannelChangeController, LKPopOverWindow, NSButton, NSMatrix, NSView;

@interface FFMapSettingsTool : FFAdjustmentTool <NSWindowDelegate>
{
    NSView *_adjustmentToolbarView;
    NSButton *_startLocationButton;
    NSButton *_endLocationButton;
    NSButton *_switchLocationsButton;
    NSButton *_showMapOptionsButton;
    LKPopOverWindow *_mapOptionsPopover;
    NSView *_mapOptionsView;
    NSMatrix *_mapStyleMatrix;
    NSView *_globeOptionsView;
    NSButton *_showRouteLinesButton;
    NSButton *_zoomInButton;
    NSButton *_showCloudsButton;
    FFChannelChangeController *_changeController;
}

+ (id)toolbarFacetSelected;
+ (id)toolbarFacet;
+ (id)toolTip;
+ (id)displayName;
+ (id)groups;
+ (void)initialize;
- (void)resetTool:(id)arg1;
- (void)popoverDidResignKey:(id)arg1;
- (void)showCloudsAction:(id)arg1;
- (void)zoomInAction:(id)arg1;
- (void)showRouteLinesAction:(id)arg1;
- (void)mapStyleAction:(id)arg1;
- (void)mapOptionsDoneAction:(id)arg1;
- (void)showMapOptionsAction:(id)arg1;
- (void)switchLocationsAction:(id)arg1;
- (void)endLocationAction:(id)arg1;
- (void)startLocationAction:(id)arg1;
- (void)chooseLocation:(BOOL)arg1;
- (void)resetChannelsForObject:(id)arg1;
- (void)setAdjustmentStateFromDictionary:(id)arg1;
- (id)newAdjustmentDictionaryForSelection:(id)arg1;
- (void)_modifyChannel:(unsigned int)arg1 withCheckbox:(id)arg2;
- (void)_modifyValueWithBlock:(CDUnknownBlockType)arg1;
- (void)_updatePopOverLayoutWithFolder:(id)arg1;
- (void)_updateMapOptionsButtonForEffect:(id)arg1;
- (void)_updateCheckbox:(id)arg1 withChannelID:(unsigned int)arg2 inFolder:(id)arg3;
- (void)_updateUIWithValue:(id)arg1;
- (void)popOverWindowDidCancel:(id)arg1;
- (id)adjustmentsToolbarView;
- (BOOL)supportsMultipleSelection;
- (BOOL)handlesSelection;
- (void)dealloc;
- (id)init;

@end

