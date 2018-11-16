//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class NSDictionary, NSOutlineView, NSScrollView;

__attribute__((visibility("hidden")))
@interface FFXMLDisplayWarningsController : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    NSDictionary *_errorsDict;
    NSScrollView *_scrollView;
    NSOutlineView *_outlineView;
}

- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)_stringValueForItem:(id)arg1;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)view;
- (void)dealloc;
- (id)initWithErrors:(id)arg1;

@end

