//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDataSource.h"
#import "NSTokenFieldDelegate.h"

@class FFNamingPresetManager, LKEmptyDFRController, LKPopUpButton, LKSegmentedControl, LKTableView, LKTextField, LKTokenField, NSArray, NSArrayController, NSString;

@interface FFNamingPresetWindowController : NSWindowController <NSTableViewDataSource, NSTokenFieldDelegate>
{
    NSArrayController *_presetsArrayController;
    LKSegmentedControl *_viewsetsSegmentControl;
    LKTableView *_presetsTableView;
    LKTextField *_sampleNameTextField;
    LKTokenField *_formatTokenField;
    LKTextField *_customStringTextField;
    LKTextField *_startingCounterNumberTextField;
    LKPopUpButton *_minimumNumberOfDigitsPopUpButton;
    FFNamingPresetManager *_namingPresetManager;
    NSArray *_namingTokens;
    LKEmptyDFRController *_dfrController;
}

- (void)controlTextDidChange:(id)arg1;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (long long)runModalWithNewPreset:(BOOL)arg1;
- (void)unbind;
- (void)bind;
- (void)duplicatePreset:(id)arg1;
- (void)addNewPreset:(id)arg1;
- (void)stopModal:(id)arg1;
- (void)viewSetsControlAction:(id)arg1;
- (id)touchBar;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

