//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Flexo/NSTableViewDataSource-Protocol.h>
#import <Flexo/NSTokenFieldDelegate-Protocol.h>
#import <Flexo/NSWindowDelegate-Protocol.h>

@class FFMetadataProxy, LKTableView, LKTextField, LKTokenField, NSArray, NSArrayController, NSMutableArray, NSString;

@interface FFSharingFieldWindowController : NSWindowController <NSWindowDelegate, NSTableViewDataSource, NSTokenFieldDelegate>
{
    NSArrayController *_fieldsArrayController;
    LKTableView *_fieldsTableView;
    LKTextField *_sampleNameTextField;
    LKTokenField *_formatTokenField;
    LKTextField *_customStringTextField;
    NSMutableArray *_shareFields;
    NSArray *_sharingTokens;
    NSString *_sampleName;
    FFMetadataProxy *_proxyObj;
}

@property(retain) NSString *sampleName; // @synthesize sampleName=_sampleName;
@property(retain) NSArrayController *fieldsArrayController; // @synthesize fieldsArrayController=_fieldsArrayController;
- (void)controlTextDidChange:(id)arg1;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (long long)runModalWithProxy:(id)arg1;
- (void)saveFields;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbind;
- (void)bind;
- (void)initShareMetadataArray;
- (void)stopModal:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

