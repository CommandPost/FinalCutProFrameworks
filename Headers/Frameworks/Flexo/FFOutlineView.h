//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerHostView.h>

#import "FFOutlineViewLayoutManager.h"

@class CALayer, FFOutlineBackgroundView, FFOutlineViewLayout, FFOutlineViewReuseManager, LKSyntheticUIElement, NSArray, NSClipView, NSColor, NSDictionary, NSIndexPath, NSView;

@interface FFOutlineView : FFResponderLayerHostView <FFOutlineViewLayoutManager>
{
    FFOutlineViewLayout *_rootLayout;
    FFOutlineViewReuseManager *_reuseManager;
    id <FFOutlineViewDataSource> _dataSource;
    id <FFOutlineViewDelegate> _delegate;
    NSClipView *_observedClipView;
    struct CGRect _lastUpdatedVisibleRect;
    NSArray *_selectedIndexPaths;
    NSDictionary *_cachedVisibleCellsByIndexPath;
    NSArray *_cachedSortedIndexPaths;
    FFOutlineBackgroundView *_backgroundView;
    NSIndexPath *_lastSelectedRowIndexPath;
    NSIndexPath *_anchorRowIndexPath;
    NSIndexPath *_dragAnchorRowIndexPath;
    id _storedColor;
    NSIndexPath *_dropIndexPath;
    long long _dropChildInsertionIndex;
    NSArray *_draggedIndexPaths;
    struct CGPoint _mouseDownLocation;
    NSIndexPath *_requestedIndexPath;
    double _indentationPerLevel;
    NSColor *_backgroundColor;
    NSColor *_emphasizedBackgroundColor;
    int _currentDragType;
    BOOL _initialized;
    BOOL _needsToRestoreColor;
    BOOL _allowsMultipleSelection;
    BOOL _verticalMotionCanBeginDrag;
    BOOL _allowsEmptySelection;
    BOOL _shouldIndentIfFlat;
    BOOL _isKeyOrContainsKey;
}

@property(retain, nonatomic) NSColor *emphasizedBackgroundColor; // @synthesize emphasizedBackgroundColor=_emphasizedBackgroundColor;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double indentationPerLevel; // @synthesize indentationPerLevel=_indentationPerLevel;
@property(retain, nonatomic) NSIndexPath *requestedIndexPath; // @synthesize requestedIndexPath=_requestedIndexPath;
@property(nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
@property(nonatomic) BOOL verticalMotionCanBeginDrag; // @synthesize verticalMotionCanBeginDrag=_verticalMotionCanBeginDrag;
@property(retain, nonatomic) NSArray *draggedIndexPaths; // @synthesize draggedIndexPaths=_draggedIndexPaths;
@property(retain, nonatomic) NSIndexPath *dropIndexPath; // @synthesize dropIndexPath=_dropIndexPath;
@property(retain, nonatomic) id storedColor; // @synthesize storedColor=_storedColor;
@property(retain, nonatomic) NSIndexPath *dragAnchorRowIndexPath; // @synthesize dragAnchorRowIndexPath=_dragAnchorRowIndexPath;
@property(retain, nonatomic) NSIndexPath *anchorRowIndexPath; // @synthesize anchorRowIndexPath=_anchorRowIndexPath;
@property(retain, nonatomic) NSIndexPath *lastSelectedRowIndexPath; // @synthesize lastSelectedRowIndexPath=_lastSelectedRowIndexPath;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(retain, nonatomic) NSArray *cachedSortedIndexPaths; // @synthesize cachedSortedIndexPaths=_cachedSortedIndexPaths;
@property(retain, nonatomic) NSDictionary *cachedVisibleCellsByIndexPath; // @synthesize cachedVisibleCellsByIndexPath=_cachedVisibleCellsByIndexPath;
@property(readonly, copy, nonatomic) NSArray *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
@property(nonatomic) id <FFOutlineViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <FFOutlineViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(readonly, nonatomic) BOOL isExpanded;
- (double)indentationForLayout:(id)arg1;
- (double)yOriginOfLayout:(id)arg1;
@property(readonly, nonatomic) FFOutlineView *outlineView;
@property(readonly, nonatomic) struct CGRect visibleRectForLayout;
@property(readonly, nonatomic) NSView *layoutView;
@property(readonly, nonatomic) FFOutlineViewReuseManager *reuseManager;
- (void)scrollIndexPathsToVisible:(id)arg1;
- (void)scrollIndexPathToVisible:(id)arg1;
- (void)removeAllReusableCells;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (id)dataSourceCellForRowAtIndexPath:(id)arg1;
- (id)allCells;
@property(readonly, nonatomic) double preferredContentHeight;
@property(readonly, nonatomic) double defaultRowHeight;
@property(readonly, nonatomic) NSDictionary *visibleCellsByIndexPath;
- (void)rebuildHierarchy;
- (void)reloadData;
- (void)expandAncestorsForRowAtIndexPath:(id)arg1;
- (BOOL)ancestorsExpandedForRowAtIndexPath:(id)arg1;
- (void)toggleExpandedForRowAtIndexPath:(id)arg1 matchChildren:(BOOL)arg2 informDelegate:(BOOL)arg3;
- (void)_enumerateSubRowsAtIndexPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)updateVisibleRect;
- (void)updateFrameSizeIfNeeded;
- (void)setOutlineViewNeedsLayout;
- (void)collapseSelectionRecursive:(BOOL)arg1;
- (void)collapseSelectionAndChildren:(id)arg1;
- (void)collapseSelection:(id)arg1;
- (void)expandSelectionRecursive:(BOOL)arg1;
- (void)expandSelectionAndChildren:(id)arg1;
- (void)expandSelection:(id)arg1;
- (void)collapseRowsAtIndexPaths:(id)arg1 collapseChildren:(BOOL)arg2;
- (void)collapseRowAtIndexPath:(id)arg1 collapseChildren:(BOOL)arg2 informDelegate:(BOOL)arg3;
- (void)expandRowsAtIndexPaths:(id)arg1 expandChildren:(BOOL)arg2;
- (void)expandRowAtIndexPath:(id)arg1 expandChildren:(BOOL)arg2 informDelegate:(BOOL)arg3;
@property(copy, nonatomic) NSArray *collapsedRowsIndexPaths;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)gotoEnd:(id)arg1;
- (void)gotoStart:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveAndModifySelectionByGoingUp:(BOOL)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)editSelectedItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)_startDragging:(id)arg1;
- (BOOL)_startDraggingRows:(id)arg1;
- (BOOL)_startDraggingSelection:(id)arg1;
- (void)_continueDraggingSelection:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)maintainFirstResponder;
- (BOOL)viewIsInResponderChain:(id)arg1;
- (void)mouseUpForSelection:(id)arg1;
- (void)unhandledMouseDown:(id)arg1;
- (BOOL)_startTrackingMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)commitAndEndEditing;
- (id)filterIndexPathsByRemovingInvisible:(id)arg1;
- (void)getDraggingImage:(id *)arg1 offset:(struct CGSize *)arg2 forVisibleRowsAtIndexPaths:(id)arg3 mouseDownLocation:(struct CGPoint)arg4;
- (BOOL)canDrag;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)_validateAction:(SEL)arg1;
- (void)setFieldEditorString:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)fieldEditorStringForRowAtIndexPath:(id)arg1;
- (void)setEditing:(BOOL)arg1 rowAtIndexPath:(id)arg2 animated:(BOOL)arg3;
- (BOOL)isEditingRowAtIndexPath:(id)arg1;
- (void)cellWillGoToReuseQueue:(id)arg1;
- (void)cancelEditingForCell:(id)arg1;
- (void)commitEditingForCell:(id)arg1;
- (void)cellWillStopEditing:(id)arg1;
- (void)cellDidStartEditing:(id)arg1;
- (void)cellWillStartEditing:(id)arg1;
- (BOOL)canStartEditingForCell:(id)arg1 withEvent:(id)arg2;
- (BOOL)canEditRowAtIndexPath:(id)arg1;
- (BOOL)indexPathIsValid:(id)arg1;
- (unsigned long long)globalIndexFromIndexPath:(id)arg1;
- (id)indexPathFromGlobalIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSIndexPath *lastIndexPath;
@property(readonly, nonatomic) NSArray *sortedIndexPaths;
- (id)visibleIndexPaths;
- (id)visibleCellForIndexPath:(id)arg1;
- (id)indexPathForVisibleCell:(id)arg1;
@property(readonly, nonatomic) BOOL shouldIndentRows;
@property(nonatomic) BOOL shouldIndentIfFlat;
@property(readonly, nonatomic) BOOL hasExpandableRows;
- (id)indexPathForNonCollapsedRowAboveIndexPath:(id)arg1;
- (id)indexPathForNonCollapsedRowBelowIndexPath:(id)arg1;
- (void)setHighlightedForEventTargets:(BOOL)arg1 forRowAtIndexPath:(id)arg2;
- (void)setAllowsEmptySelection:(BOOL)arg1 animated:(BOOL)arg2;
- (void)establishNonEmptySelectionIfNeededAnimated:(BOOL)arg1 informDelegate:(BOOL)arg2;
- (void)deselectRowsInclusiveFromIndex:(id)arg1 toIndex:(id)arg2 byExtendingSelection:(BOOL)arg3 animated:(BOOL)arg4 informDelegate:(BOOL)arg5;
- (void)selectRowsInclusiveFromIndex:(id)arg1 toIndex:(id)arg2 byExtendingSelection:(BOOL)arg3 animated:(BOOL)arg4;
- (void)changeSelectedStatusForRowsInclusiveFromIndex:(id)arg1 toIndex:(id)arg2 select:(BOOL)arg3 byExtendingSelection:(BOOL)arg4 animated:(BOOL)arg5 informDelegate:(BOOL)arg6 force:(BOOL)arg7;
- (void)_setSelectedIndexPaths:(id)arg1 deselectedIndexPaths:(id)arg2 byExtendingSelection:(BOOL)arg3 animated:(BOOL)arg4 informDelegate:(BOOL)arg5 force:(BOOL)arg6;
- (BOOL)willEmptySelectionBySelectingIndexPaths:(id)arg1 andDeselectingIndexPaths:(id)arg2 byExtendingSelection:(BOOL)arg3;
- (void)selectIndexPaths:(id)arg1 byExtendingSelection:(BOOL)arg2 animated:(BOOL)arg3 informDelegate:(BOOL)arg4;
- (void)deselectIndexPaths:(id)arg1 animated:(BOOL)arg2;
- (void)selectIndexPaths:(id)arg1 byExtendingSelection:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setCellAtIndexPath:(id)arg1 selected:(BOOL)arg2 animated:(BOOL)arg3;
- (id)indexPathForRowAtPoint:(struct CGPoint)arg1;
- (id)rowAtIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic, getter=isKey) BOOL key;
- (void)_firstResponderChanged:(id)arg1;
- (void)_windowDidResignKey:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (id)menuForEvent:(id)arg1;
- (id)menuForRowAtIndexPath:(id)arg1 withEvent:(id)arg2;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)viewDidMoveToSuperview;
- (void)checkIfScrollViewWantsLayer;
- (void)setObservedClipView:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameSizeWithoutUpdate:(struct CGSize)arg1;
- (void)clipViewFrameDidChangeNotification:(id)arg1;
- (void)clipViewBoundsDidChangeNotification:(id)arg1;
- (BOOL)isFlipped;
@property(readonly, nonatomic) CALayer *backgroundLayer;
@property(readonly, nonatomic) FFOutlineBackgroundView *backgroundView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)perfomInitOnce;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)syntheticUIElementAttributeNames:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)ownAttributeNames;
@property(readonly, nonatomic) LKSyntheticUIElement *headerElement;
@property(readonly, nonatomic) NSArray *columnElements;
@property(readonly, nonatomic) NSArray *elementsForSelectedRows;
@property(readonly, nonatomic) NSArray *elementsForVisibleRows;
@property(readonly, nonatomic) NSArray *elementsForRows;
- (id)elementsForRowPaths:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)unhighlightForDragging;
- (void)highlightForDragging;
- (unsigned long long)updateForDraggingInfo:(id)arg1;
- (void)setDraggingRow:(id)arg1 childInsertionIndex:(long long)arg2;
- (void)setDropIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)setCellAtIndexPath:(id)arg1 highlightedForDrop:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)ignoreModifierKeysWhileDragging;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;

@end

