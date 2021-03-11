//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Ozone/NSTableViewDataSource-Protocol.h>

@class NSArray, NSButton, NSString, NSTableView, NSWindow;

@interface OZLegacyPluginController : NSWindowController <NSTableViewDataSource>
{
    NSTableView *_legacyPluginsTableView;
    NSButton *_OKButton;
    NSArray *_legacyPlugins;
    NSWindow *_parentWindow;
}

+ (void)showLegacyPluginDialogInWindow:(id)arg1;
+ (void)showLegacyPluginDialog;
+ (id)nibName;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)toggleDontShowCheckbox:(id)arg1;
- (void)okNotify:(id)arg1;
- (void)showDialogInWindow:(id)arg1;
- (void)showDialog;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

