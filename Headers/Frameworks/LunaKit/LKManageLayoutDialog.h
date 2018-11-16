//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDelegate.h"
#import "NSWindowDelegate.h"

@class NSArrayController, NSButton, NSTableView;

@interface LKManageLayoutDialog : NSWindowController <NSWindowDelegate, NSTableViewDelegate>
{
    NSTableView *_layoutTable;
    NSButton *_applyButton;
    NSArrayController *_arrayController;
    NSButton *_addLayoutButton;
    NSButton *_removeLayoutButton;
    void *_reserved4;
    void *_reserved5;
    void *_reserved6;
}

- (id)init;
- (void)awakeFromNib;
- (void)beginSheetForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (id)layoutManager;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (void)addLayout:(id)arg1;
- (void)removeLayout:(id)arg1;
- (void)applyLayout:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)editLayoutNameAtRow:(long long)arg1;
- (void)endEditing;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;

@end

