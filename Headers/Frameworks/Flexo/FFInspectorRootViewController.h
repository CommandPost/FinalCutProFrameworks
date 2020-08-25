//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "FFInspectorControllerRootDelegate.h"

@class FFInspectorController, FFInspectorControllerView, FFLibrary, NSArray, NSHashTable, NSMapTable, NSMutableArray, OZViewController;

__attribute__((visibility("hidden")))
@interface FFInspectorRootViewController : NSViewController <FFInspectorControllerRootDelegate>
{
    FFInspectorController *_rootController;
    FFInspectorControllerView *_rootControllerView;
    NSMapTable *_controllerViewMap;
    FFLibrary *_associatedLibrary;
    long long _updateScopeCount;
    NSMutableArray *_recalculateNumSegmentsControllers;
    NSArray *_draggedControllers;
    FFInspectorController *_draggingDropController;
    id <FFInspectorControllerSelecting> _selectionOwner;
    NSArray *_selectedControllers;
    id <FFInspectorControllerDragging> _draggingOwner;
    id <FFInspectorControllerDragging> _draggingReceiverOwner;
    NSHashTable *_registeredDraggingOwners;
    OZViewController *_ozParentViewController;
}

@property(retain, nonatomic) FFLibrary *associatedLibrary; // @synthesize associatedLibrary=_associatedLibrary;
@property(readonly, nonatomic) FFInspectorController *controller; // @synthesize controller=_rootController;
- (void)setOZParentViewController:(id)arg1;
- (void)_firstResponderChanged:(id)arg1;
- (BOOL)handleBottomLevelMouseDownEvent:(id)arg1 forController:(id)arg2;
- (BOOL)handleTopLevelMouseDownEvent:(id)arg1 forController:(id)arg2;
- (id)newControllerViewForController:(id)arg1 createOptions:(unsigned long long)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(id)arg4;
- (id)outlineView:(id)arg1 pasteboardWriterForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)_controllerForItem:(id)arg1;
- (void)inspectorOutlineView:(id)arg1 draggingEnded:(id)arg2;
- (void)inspectorOutlineView:(id)arg1 draggingExited:(id)arg2;
- (id)ozControllerRootForInspectorController:(id)arg1;
- (void)selectionStateChangedForInspectorController:(id)arg1;
- (id)draggedControllersForInspectorController:(id)arg1;
- (BOOL)isLocalDragForInspectorController:(id)arg1;
- (void)inspectorController:(id)arg1 setDraggingDropIndicatorsController:(id)arg2;
- (void)reloadInspectorController:(id)arg1 reloadChildren:(BOOL)arg2;
- (BOOL)isInspectorControllerLoaded:(id)arg1;
- (long long)childIndexForInspectorController:(id)arg1;
- (void)viewHeightChangedForInspectorController:(id)arg1;
- (void)inspectorController:(id)arg1 setExpanded:(BOOL)arg2;
- (BOOL)isExpandedForInspectorController:(id)arg1;
- (void)_endReceivingDraggedItems;
- (void)_beginReceivingDraggedItemsForOwner:(id)arg1;
- (void)_enumerateDescendantsOfController:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_updateSelectionState;
- (void)_setSelectionOwner:(id)arg1 selectedControllers:(id)arg2;
- (void)_updateControllerSelection:(id)arg1;
- (void)_notifyNumDrawSegmentsChangedForController:(id)arg1;
- (void)_resetDraggingDropController;
- (void)_updateDraggingDropController:(id)arg1;
- (void)_setupController:(id)arg1;
- (void)clearSelection;
- (void)deleteSelection;
- (BOOL)hasSelection;
- (void)enumerateControllersUsingBlock:(CDUnknownBlockType)arg1;
- (void)appendChildrenForInspectorController:(id)arg1 toParentControllerView:(id)arg2;
- (void)appendInspectorController:(id)arg1 toParentControllerView:(id)arg2;
- (id)_controllerViewForController:(id)arg1;
- (void)applyDefaultExpandStateToControllers;
- (void)loadView;
- (id)view;
- (id)init;
- (void)dealloc;
- (id)initWithRootInspectorController:(id)arg1;

@end

