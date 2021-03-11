//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSPopoverDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class NSPopover, NSString, PEMenuTableView;
@protocol FFPlayerVideoScopesModuleDelegate;

@interface PEScopesSettingsViewController : NSViewController <NSWindowDelegate, NSTableViewDelegate, NSTableViewDataSource, NSPopoverDelegate>
{
    NSPopover *_popover;
    PEMenuTableView *_menuView;
    id <FFPlayerVideoScopesModuleDelegate> _delegate;
}

@property(readonly, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) id <FFPlayerVideoScopesModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_imageForMenuItemState:(long long)arg1;
- (long long)_stateForRowIndex:(long long)arg1;
- (id)_brightnessImage:(BOOL)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)selectedRow:(id)arg1;
- (void)_handlePressActionForRow:(long long)arg1;
- (BOOL)_shouldEnableRowIndex:(long long)arg1;
- (void)traceBrightnessChanged:(id)arg1;
- (void)windowDidResign:(id)arg1;
- (void)hideSettings;
- (void)popoverDidClose:(id)arg1;
- (void)showSettingsWithTargetRect:(struct CGRect)arg1 inParentView:(id)arg2;
- (void)viewWillAppear;
- (void)loadView;
- (id)_accessibilityDescriptionForButtonTag:(long long)arg1;
- (long long)_selectedTag;
- (long long)_tagFromMode:(long long)arg1 layoutScopesVertically:(BOOL)arg2;
- (id)_imageForButtonTag:(long long)arg1 selected:(BOOL)arg2;
- (void)_selectedLayout:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

