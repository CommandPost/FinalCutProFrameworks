//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerFilmListViewController.h>

#import "FFOrganizerFilmListOutlineViewDragging.h"

@class FFOrganizerFilmstripView, NSArray;

__attribute__((visibility("hidden")))
@interface FFImportOrganizerFilmListViewController : FFOrganizerFilmListViewController <FFOrganizerFilmListOutlineViewDragging>
{
    BOOL _isDragging;
    BOOL _showsClipLabels;
    BOOL _updatingSplitViewPosition;
    struct PCProcrastinatedDispatch_t _importProcrastinatedUpdateItemsString;
    NSArray *_redURLs;
    FFOrganizerFilmstripView *_retainedRemovedFilmStripView;
}

- (BOOL)shouldDisableRangeSelectionForObject:(id)arg1;
- (id)fileSystemRootNode;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)outlineView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)outlineView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (void)outlineView:(id)arg1 draggingDidEnd:(id)arg2;
- (void)outlineView:(id)arg1 draggingDidBegin:(id)arg2;
- (id)outlineView:(id)arg1 pasteboardWriterForItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)shouldEditTableColumn:(id)arg1 item:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)shouldSelectItem:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)isSecondaryREDURL:(id)arg1;
- (void)outlineDoubleClicked:(id)arg1;
- (void)outlineClicked:(id)arg1;
- (BOOL)removeObserversAndNotifications:(id)arg1;
- (BOOL)attachObserversAndNotifications:(id)arg1;
- (void)treeNodeChildNodesDidChange:(id)arg1;
- (void)takeContentLayoutDictionary:(id)arg1;
- (void)playPause;
- (void)setDeferRangeInvalidations:(BOOL)arg1;
- (void)activeSelectionDidChange;
- (BOOL)showsClipLabels;
- (void)setShowsClipLabels:(BOOL)arg1;
- (void)updateDataForFilmOutlineView;
- (void)syncVisibilityToFilteredRanges;
- (void)_selectSavedTreeNode;
- (void)selectRangeOfMedia:(id)arg1;
- (void)selectLastClip;
- (void)selectFirstClip;
- (id)fileNodeAfterNode:(id)arg1;
- (id)fileNodeBeforeNode:(id)arg1;
- (id)contextualMenuForTreeNode:(id)arg1;
- (id)folderContextualMenu;
- (id)fileContextualMenu;
- (BOOL)isDefaultColumn:(id)arg1;
- (void)setNeedsData:(BOOL)arg1;
- (void)reloadItemAndChildren:(id)arg1;
- (void)_contentDidChange;
- (void)_restoreExpandedNodes;
- (void)reloadData;
- (void)notificationHandler:(id)arg1;
- (id)expandedNodes;
- (id)scanChildrenForExpandedItems:(id)arg1;
- (void)removeUnsupportedColumnsForImportWindow;
- (void)removeUnsupportedColumns;
- (void)loadView;
- (void)dealloc;

@end

