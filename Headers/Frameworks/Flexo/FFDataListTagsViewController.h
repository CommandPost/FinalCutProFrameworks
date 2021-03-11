//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFDataListModeViewController.h>

#import <Flexo/NSTableViewDataSource-Protocol.h>
#import <Flexo/NSTableViewDelegate-Protocol.h>

@class FFDataListTableView, LKSegmentedControl, NSMenu, NSString, NSView;

__attribute__((visibility("hidden")))
@interface FFDataListTagsViewController : FFDataListModeViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    FFDataListTableView *_tableView;
    NSView *_tagsItemTypesBar;
    LKSegmentedControl *_tagsItemTypesAllButton;
    LKSegmentedControl *_tagsItemTypesControl;
    NSMenu *_tableHeaderMenu;
    BOOL _disableScrollToSelection;
}

@property(nonatomic) BOOL disableScrollToSelection; // @synthesize disableScrollToSelection=_disableScrollToSelection;
@property(retain, nonatomic) NSMenu *tableHeaderMenu; // @synthesize tableHeaderMenu=_tableHeaderMenu;
@property(retain, nonatomic) LKSegmentedControl *tagsItemTypesControl; // @synthesize tagsItemTypesControl=_tagsItemTypesControl;
@property(retain, nonatomic) LKSegmentedControl *tagsItemTypesAllButton; // @synthesize tagsItemTypesAllButton=_tagsItemTypesAllButton;
@property(retain, nonatomic) NSView *tagsItemTypesBar; // @synthesize tagsItemTypesBar=_tagsItemTypesBar;
@property(retain, nonatomic) FFDataListTableView *tableView; // @synthesize tableView=_tableView;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (double)tableView:(id)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setValue:(id)arg1 forItem:(id)arg2 withKey:(id)arg3;
- (id)valueForItem:(id)arg1 withKey:(id)arg2;
- (id)imageForItem:(id)arg1;
- (void)setNotes:(id)arg1 forItem:(id)arg2;
- (id)notesForItem:(id)arg1;
- (id)startTimecodeForItem:(id)arg1;
- (void)setName:(id)arg1 forItem:(id)arg2;
- (id)nameForItem:(id)arg1;
- (void)displayDataListPlayheadAtIndex:(long long)arg1 andPosition:(int)arg2 animate:(BOOL)arg3;
- (id)selectedKeywordMarkers;
- (BOOL)isRowSelected:(long long)arg1;
- (id)selectedIndexes;
- (void)resetScrollToSelection;
- (BOOL)handledMouseDownInTable:(id)arg1 atRow:(long long)arg2;
- (BOOL)mouseDownInImageOfRow:(long long)arg1;
- (void)syncToDisplayedItemsType:(long long)arg1;
- (void)syncToSelectedIndexes:(id)arg1;
- (void)sizeColumnToFitData:(id)arg1;
- (void)toggleColumnWithID:(id)arg1;
- (id)columnForID:(id)arg1;
- (BOOL)rowIsToDoMarker:(long long)arg1;
- (void)reloadData;
- (void)tableDoubleClickAction:(id)arg1;
- (void)tableClickAction:(id)arg1;
- (void)changeTagFilterType:(id)arg1;
- (void)toggleNotesColumn:(id)arg1;
- (void)toggleTimeColumn:(id)arg1;
- (void)hideAllColumns:(id)arg1;
- (void)showAllColumns:(id)arg1;
- (void)autoSizeAllColumns:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

