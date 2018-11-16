//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferencesModule.h"

#import "NSOutlineViewDataSource.h"

@class LKButton, LKImageView, LKTileView, NSArray, NSMutableArray, NSTreeController, NSUndoManager, PEAPPSharePreferencesFooterView, PEAppSharePreferencesOutlineView;

@interface PEAppSharePreferencesModule : NSProPreferencesModule <NSOutlineViewDataSource>
{
    NSTreeController *_destinationsController;
    PEAppSharePreferencesOutlineView *_destinationsView;
    LKTileView *_destinationTilesView;
    PEAPPSharePreferencesFooterView *_footerView;
    LKImageView *_separator1;
    LKImageView *_separator2;
    LKButton *_addBtn;
    LKButton *_removeBtn;
    NSArray *_draggedFilePaths;
    BOOL _draggedFilePathsIncludesBundle;
    NSMutableArray *_destinations;
    NSMutableArray *_destinationViewControllers;
    NSUndoManager *_undoManager;
}

@property(retain, nonatomic) NSMutableArray *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) NSTreeController *destinationsController; // @synthesize destinationsController=_destinationsController;
- (void)userShareDestinationsDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (void)_dropDestinations:(id)arg1 onItem:(id)arg2 childIndex:(long long)arg3;
- (void)_dropDestinationTypes:(id)arg1 onItem:(id)arg2 childIndex:(long long)arg3;
- (void)_copyIndexPaths:(id)arg1 onItem:(id)arg2 childIndex:(long long)arg3;
- (void)_moveIndexPaths:(id)arg1 onItem:(id)arg2 childIndex:(long long)arg3;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)_draggedFilePathsIncludesBundle:(id)arg1;
- (void)_setDraggedFilePaths:(id)arg1 includesBundle:(BOOL)arg2;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedItems:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_targetedIndexPaths:(id *)arg1;
- (id)_targetedNodes:(id *)arg1;
- (void)_updateRemoveButtonEnabledState;
- (void)selectAddDestination:(id)arg1;
- (void)moveToTrash:(id)arg1;
- (void)makeSelectedDestinationDefault:(id)arg1;
- (void)_setDefaultDestinationToNode:(id)arg1;
- (void)newBundleWithSelectedDestinations:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)resetSelectedDestinations:(id)arg1;
- (void)restoreDefaultDestinations:(id)arg1;
- (void)_endUndoGroupPreservingSelectionWithNewSelectedIndexPath:(id)arg1;
- (void)_endUndoGroupPreservingSelectionWithNewSelectedIndexPaths:(id)arg1;
- (void)_endUndoGroupPreservingSelection;
- (void)_beginUndoGroupPreservingSelection;
- (void)_action_renameDestinationAtIndexPath:(id)arg1 newName:(id)arg2 oldName:(id)arg3;
- (void)_action_replaceDestinationsAtIndexPaths:(id)arg1 withDestinations:(id)arg2;
- (void)_action_moveDestinationNodes:(id)arg1 toIndexPath:(id)arg2;
- (void)_action_moveDestinationAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)_action_removeDestinationAtIndexPath:(id)arg1;
- (void)_action_removeDestinationsAtIndexPaths:(id)arg1;
- (void)_action_insertDestination:(id)arg1 atIndexPath:(id)arg2;
- (void)_action_insertDestinations:(id)arg1 atIndexPaths:(id)arg2;
- (void)addDestinationsWithTypes:(id)arg1 toBundleNode:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addDestinationWithTypesToSelectedBundle:(id)arg1;
- (void)addDestinationToSelectedBundle:(id)arg1;
- (void)addDestinations:(id)arg1 toBundleNode:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)showAnyPanels;
- (void)compressorRequiredlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_addCompressorDestinationsToBundleNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_addDestination:(id)arg1 toBundleNode:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_selectedBundleNode;
- (id)_uniqueDestinationName:(id)arg1 forBundle:(id)arg2;
- (id)_uniqueDuplicateDestinationName:(id)arg1 forBundle:(id)arg2;
- (void)_configureTileViewForCurrentSelection;
- (void)_configureTileViewForDestinations:(id)arg1;
- (long long)_addDestinationRowIndex;
- (long long)_addDestinationNodeIndex;
- (id)_destinationsAtIndexPaths:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (id)titleForIdentifier:(id)arg1;
- (BOOL)isResizable;
- (void)saveChanges;
- (id)preferencesNibName;
- (void)dealloc;
- (void)awakeFromNib;

@end

