//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerHostView.h>

#import "NSDraggingDestination.h"

@class CALayer, CIContext, FFImageBrowserCell, FFSkimmingModule, NSArray, NSIndexSet, NSMutableArray, NSMutableDictionary, NSString, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface FFImageBrowserView : FFResponderLayerHostView <NSDraggingDestination>
{
    id <FFImageBrowserDataSource> _dataSource;
    id <FFImageBrowserDelegate> _delegate;
    id <NSDraggingDestination> _draggingDestinationDelegate;
    CALayer *_gridLayer;
    CALayer *_marqueeSelectionLayer;
    CALayer *_dragFocusRingLayer;
    NSMutableDictionary *_cellsKeyedByUID;
    NSMutableArray *_arrangedCells;
    NSArray *_sections;
    struct CGSize _imageSize;
    struct CGSize _intercellSpacing;
    long long _numberOfRows;
    long long _numberOfColumns;
    NSIndexSet *_selectionIndexes;
    long long _lastSelectedIndex;
    struct CGPoint _marqueeSelectionStartPoint;
    BOOL _animates;
    BOOL _allowsMultipleSelection;
    BOOL _allowsEmptySelection;
    BOOL _allowsReordering;
    BOOL _useHighQualityScaling;
    struct PCProcrastinatedDispatch_t _procrastinatedUpdateVisibleCells;
    int _cellStyleMask;
    CDStruct_83cd8af5 _margin;
    FFSkimmingModule *_skimmingModule;
    FFImageBrowserCell *_persistentPlayheadCell;
    CDStruct_1b6d18a9 _persistentPlayheadTime;
    NSTrackingArea *_skimmingTrackingArea;
    BOOL _isDragging;
    CIContext *_highQualityScalingContext;
}

@property(nonatomic) struct CGPoint marqueeSelectionStartPoint; // @synthesize marqueeSelectionStartPoint=_marqueeSelectionStartPoint;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) CIContext *highQualityScalingContext; // @synthesize highQualityScalingContext=_highQualityScalingContext;
@property(nonatomic) BOOL useHighQualityScaling; // @synthesize useHighQualityScaling=_useHighQualityScaling;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) CDStruct_83cd8af5 margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSTrackingArea *skimmingTrackingArea; // @synthesize skimmingTrackingArea=_skimmingTrackingArea;
@property(nonatomic) CDStruct_1b6d18a9 persistentPlayheadTime; // @synthesize persistentPlayheadTime=_persistentPlayheadTime;
@property(nonatomic) FFImageBrowserCell *persistentPlayheadCell; // @synthesize persistentPlayheadCell=_persistentPlayheadCell;
@property(retain, nonatomic) FFSkimmingModule *skimmingModule; // @synthesize skimmingModule=_skimmingModule;
@property(nonatomic) int cellStyleMask; // @synthesize cellStyleMask=_cellStyleMask;
@property(nonatomic) long long lastSelectedIndex; // @synthesize lastSelectedIndex=_lastSelectedIndex;
@property(nonatomic) BOOL animates; // @synthesize animates=_animates;
@property(nonatomic) BOOL allowsReordering; // @synthesize allowsReordering=_allowsReordering;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
@property(retain, nonatomic) NSIndexSet *selectionIndexes; // @synthesize selectionIndexes=_selectionIndexes;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(retain, nonatomic) CALayer *dragFocusRingLayer; // @synthesize dragFocusRingLayer=_dragFocusRingLayer;
@property(retain, nonatomic) CALayer *marqueeSelectionLayer; // @synthesize marqueeSelectionLayer=_marqueeSelectionLayer;
@property(retain, nonatomic) CALayer *gridLayer; // @synthesize gridLayer=_gridLayer;
@property(nonatomic) id <NSDraggingDestination> draggingDestinationDelegate; // @synthesize draggingDestinationDelegate=_draggingDestinationDelegate;
@property(nonatomic) id <FFImageBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <FFImageBrowserDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct CGSize intercellSpacing; // @synthesize intercellSpacing=_intercellSpacing;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSMutableArray *arrangedCells; // @synthesize arrangedCells=_arrangedCells;
@property(retain, nonatomic) NSMutableDictionary *cellsKeyedByUID; // @synthesize cellsKeyedByUID=_cellsKeyedByUID;
- (id)sectionUIElementForSection:(unsigned long long)arg1;
- (struct CGRect)_accessibilityBoundsForSectionAtIndex:(long long)arg1;
- (id)accessibilityParentForCell:(id)arg1;
- (void)syntheticUIElement:(id)arg1 setValue:(id)arg2 forAttribute:(id)arg3;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (BOOL)syntheticUIElement:(id)arg1 isAttributeSettable:(id)arg2;
- (id)syntheticUIElementAttributeNames:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)_movePlayerToPersistentPlayheadWithLocationInImageLayer:(struct CGPoint)arg1;
- (void)clearPersistentPlayhead;
- (void)continuePlaybackWithNextCell;
- (void)movePlayerToPersistentPlayhead;
- (void)movePersistentPlayheadToCell:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (id)draggingImageForImageBrowserCell:(id)arg1;
- (id)draggingImageForItemsAtIndexes:(id)arg1 withEvent:(id)arg2 offset:(struct CGPoint *)arg3;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)removeSelectedItems:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)unhandledMouseDown:(id)arg1;
- (void)selectCell:(id)arg1 eventModifierFlags:(unsigned long long)arg2;
- (void)setSelectionIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)deselectCell:(id)arg1;
- (void)selectCell:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)selectedCells;
- (void)_recalculateVisibleCells;
- (double)_neededHeightForCurrentLayout;
- (void)_updateGridConstraintsForResize:(BOOL)arg1 unhiddenCells:(id)arg2;
- (void)_updateGridConstraintsForResize:(BOOL)arg1;
- (long long)numberOfColumnsForBounds:(struct CGRect)arg1;
- (id)_sectionForIndex:(long long)arg1 previousCombinedSectionHeaderHeight:(double *)arg2 firstVisibleIndex:(unsigned long long *)arg3 lastVisibleIndex:(unsigned long long *)arg4;
- (void)_updateSections;
- (void)_updateCells;
- (void)_addAnimationsForRemovedCell:(id)arg1;
- (void)_addAnimationsForNewCell:(id)arg1;
@property(readonly, nonatomic) struct CGSize cellSize;
- (void)scrollIndexToVisible:(long long)arg1 animate:(BOOL)arg2;
- (void)scrollIndexToVisible:(long long)arg1;
- (void)scrollCellToVisible:(id)arg1 animate:(BOOL)arg2;
- (void)scrollCellToVisible:(id)arg1;
- (id)cells;
- (id)visibleCells;
- (id)cellsInRect:(struct CGRect)arg1;
- (id)cellAtPoint:(struct CGPoint)arg1;
- (void)getRow:(long long *)arg1 column:(long long *)arg2 forCell:(id)arg3;
- (id)cellAtRow:(long long)arg1 column:(long long)arg2;
- (long long)indexForCell:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)cellForRepresentedItem:(id)arg1;
- (id)_internalNewCellForRepresentedItem:(id)arg1;
- (id)newCellForRepresentedItem:(id)arg1;
- (void)reloadData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingCells:(id)arg1;
- (void)_startObservingCells:(id)arg1;
- (void)_didScroll:(id)arg1;
- (void)_frameChanged:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)viewDidChangeBackingProperties;
- (BOOL)isFlipped;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

