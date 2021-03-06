//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Flexo/NSOutlineViewDataSource-Protocol.h>
#import <Flexo/NSOutlineViewDelegate-Protocol.h>

@class LKScrollView, LKScroller, NSArray, NSImageView, NSOutlineView, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface FFShareSourcesListViewController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    NSArray *_sources;
    LKScrollView *_scrollView;
    LKScroller *_verticalScroller;
    LKScroller *_horizontalScroller;
    NSOutlineView *_outlineView;
    NSTextField *_titleLabel;
    NSImageView *_titleGlyph;
    NSView *_gradientView;
    NSView *_separator;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSView *separator; // @synthesize separator=_separator;
@property(nonatomic) NSView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) NSImageView *titleGlyph; // @synthesize titleGlyph=_titleGlyph;
@property(nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) LKScroller *horizontalScroller; // @synthesize horizontalScroller=_horizontalScroller;
@property(nonatomic) LKScroller *verticalScroller; // @synthesize verticalScroller=_verticalScroller;
@property(nonatomic) LKScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (long long)itemTypeForSource:(id)arg1;
- (void)update;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

