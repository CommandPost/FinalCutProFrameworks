//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDataListModeViewController.h>

#import "FFRolesMenuDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class FFDataListTableView, LKSegmentedControl, NSMenu, NSView;

__attribute__((visibility("hidden")))
@interface FFDataListClipsViewController : FFDataListModeViewController <NSTableViewDelegate, NSTableViewDataSource, FFRolesMenuDelegate>
{
    FFDataListTableView *_tableView;
    NSView *_clipsItemTypesBar;
    LKSegmentedControl *_clipsItemTypesAllButton;
    LKSegmentedControl *_clipsItemTypesControl;
    NSMenu *_tableHeaderMenu;
}

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)validateMenuItem:(id)arg1;
- (void)autoSizeAllColumns:(id)arg1;
- (void)showAllColumns:(id)arg1;
- (void)hideAllColumns:(id)arg1;
- (void)toggleTimeColumn:(id)arg1;
- (void)togglRolesColumn:(id)arg1;
- (void)toggleNotesColumn:(id)arg1;
- (void)changeClipFilterType:(id)arg1;
- (void)reloadData;
- (id)columnForID:(id)arg1;
- (void)toggleColumnWithID:(id)arg1;
- (void)sizeColumnToFitData:(id)arg1;
- (void)syncToSelectedIndexes:(id)arg1;
- (void)syncToFilterType:(long long)arg1;
- (id)selectedIndexes;
- (void)displayDataListPlayheadAtIndex:(long long)arg1 andPosition:(int)arg2;
- (id)nameForItem:(id)arg1;
- (void)setName:(id)arg1 forItem:(id)arg2;
- (id)startTimecodeForItem:(id)arg1;
- (id)rolesStrForItem:(id)arg1;
- (id)notesForItem:(id)arg1;
- (void)setNotes:(id)arg1 forItem:(id)arg2;
- (id)imageForItem:(id)arg1;
- (id)valueForItem:(id)arg1 withKey:(id)arg2;
- (void)setValue:(id)arg1 forItem:(id)arg2 withKey:(id)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)adjustRolesCell:(id)arg1 forItem:(id)arg2;
- (BOOL)isValidIndex:(long long)arg1 forArray:(id)arg2;
- (id)anchoredObjectsForRolesMenuController:(id)arg1;
- (void)rolesMenuController:(id)arg1 shouldAddRole:(id)arg2 toAnchoredObjects:(id)arg3;
- (void)shouldEditRolesForRolesMenuController:(id)arg1;
@property(retain, nonatomic) NSMenu *tableHeaderMenu; // @synthesize tableHeaderMenu=_tableHeaderMenu;
@property(retain, nonatomic) LKSegmentedControl *clipsItemTypesControl; // @synthesize clipsItemTypesControl=_clipsItemTypesControl;
@property(retain, nonatomic) LKSegmentedControl *clipsItemTypesAllButton; // @synthesize clipsItemTypesAllButton=_clipsItemTypesAllButton;
@property(retain, nonatomic) NSView *clipsItemTypesBar; // @synthesize clipsItemTypesBar=_clipsItemTypesBar;
@property(retain, nonatomic) FFDataListTableView *tableView; // @synthesize tableView=_tableView;

@end

