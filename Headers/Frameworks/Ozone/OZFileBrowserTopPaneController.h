//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class NSOutlineView, OZFileBrowserModule;

@interface OZFileBrowserTopPaneController : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    OZFileBrowserModule *_controller;
    NSOutlineView *_topPaneView;
    int _ignoreSelectionChange;
}

- (id)initWithBrowserController:(id)arg1 outlineView:(id)arg2;
- (void)dealloc;
- (void)setIgnoreSelectionChange:(BOOL)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewSelectionChanged:(id)arg1;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (double)outlineView:(id)arg1 heightForItem:(id)arg2;

@end

