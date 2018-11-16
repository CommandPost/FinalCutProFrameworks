//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class LKContainerItemView, LKContainerNode, LKPaneCapView, LKWindow, NSColor, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface LKContainerView : NSView
{
    NSDictionary *_seamDraggingInfos;
    unsigned int _isDoingSeamDragging:1;
    NSMutableArray *_draggingAreas;
    NSMutableArray *_containerItems;
    NSMutableArray *_newItems;
    LKContainerNode *_rootNode;
    id _representedModule;
    LKPaneCapView *_windowFooterView;
    NSMutableDictionary *_windowFooterAccessoryViews;
    LKContainerNode *_resizedNode1;
    LKContainerNode *_resizedNode2;
    struct CGSize _resizedNode1OriginalSize;
    struct CGSize _resizedNode2OriginalSize;
    struct CGPoint _seamDraggingStartPoint;
    int _seamDraggingDirection;
    LKContainerItemView *_clickedOnItemView;
    struct CGRect _currentSeamTrackingAreaRect;
    int _currentSeamTrackingOrientation;
    struct CGPoint _dragOffset;
    LKContainerNode *_previousDraggingNode;
    NSString *_previousDraggingOperation;
    LKContainerNode *_draggedReplacementNode;
    LKContainerNode *_draggedNode;
    LKContainerItemView *_draggedItemView;
    LKWindow *_draggedContainerWindow;
    LKContainerView *_draggingContainerView;
    LKWindow *_windowToClose;
    NSMutableDictionary *_layoutCustomizationOperation;
    NSColor *_backgroundColor;
    unsigned int _highlightCurrentSeamArea:1;
    unsigned int _useLayerBacking:1;
    unsigned int _isAnimating:1;
    unsigned int _canCustomizeLayout:1;
    unsigned int _isPerformingDrag:1;
    BOOL _delegate_implements_backgroundColor;
    BOOL _delegate_implements_inactive_backgroundColor;
    id _appearanceDelegate;
    long long _focusDisabled;
}

+ (void)initialize;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)syntheticUIElementAttributeNames:(id)arg1;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_splitterChildren;
- (BOOL)accessibilityIsIgnored;
- (void)_animationFinished:(id)arg1;
- (id)_layoutCustomizationOperationForPoint:(struct CGPoint)arg1;
- (void)_moveSubmodulesInNode:(id)arg1 fromContainerView:(id)arg2 toContainerView:(id)arg3;
- (void)_addSubmodulesFromNode:(id)arg1 toContainerView:(id)arg2;
- (BOOL)_detachAndDragNode:(id)arg1 withTracker:(id)arg2 andEvent:(id)arg3;
- (id)_itemViewAtPoint:(struct CGPoint)arg1;
- (void)_updatePropotionsForSubnodesOfNode:(id)arg1;
- (void)_initalizeProportions:(id)arg1;
- (id)_flexibleSizeSubnodesForNode:(id)arg1;
- (void)_computeNodesToResize;
- (void)_updateWindowFooterViews;
- (void)_updateWindowFooterViewsForNode:(id)arg1;
- (void)_updateItemViews;
- (void)_cleanUpNodes;
- (void)_removeUnNeededNodes:(id)arg1;
- (void)_recomputeResizingZones;
- (void)_resetSeamDraggingAreas;
- (void)_removeSeamDraggingAreas;
- (void)_computeSeamDraggingAreas;
- (void)_determineSeamDraggingAreasForNode:(id)arg1;
- (void)_redisplaySeamAreas;
- (BOOL)mouseTracker:(id)arg1 didStopTrackingWithEvent:(id)arg2;
- (BOOL)mouseTracker:(id)arg1 shouldContinueTrackingWithEvent:(id)arg2;
- (void)_updateDraggingContainerWindowWithMouseTracker:(id)arg1;
- (void)_removeDraggedReplacementNode;
- (id)_containerViewAtScreenPoint:(struct CGPoint)arg1;
- (BOOL)mouseTracker:(id)arg1 shouldStartTrackingWithEvent:(id)arg2;
@property BOOL canRearrangeLayout;
- (id)viewForIdentifier:(id)arg1;
- (void)removeContainerItemWithIdentifier:(id)arg1;
- (id)rootNode;
- (id)nodeOfItemWithIdentifier:(id)arg1;
- (id)moduleForIdentifier:(id)arg1;
- (void)nodeWithIdentifier:(id)arg1 didChangeMaxSize:(struct CGSize)arg2;
- (void)nodeWithIdentifier:(id)arg1 didChangeMinSize:(struct CGSize)arg2;
- (id)_flexibleSiblingsOfNode:(id)arg1 orientation:(int)arg2;
- (void)hideContainerItemWithIdentifier:(id)arg1 revealStyle:(unsigned long long)arg2;
- (void)hideContainerItemWithIdentifier:(id)arg1;
- (void)showContainerItemWithIdentifier:(id)arg1 revealStyle:(unsigned long long)arg2;
- (void)showContainerItemWithIdentifier:(id)arg1;
- (void)startTrackingAt:(struct CGPoint)arg1 withModifierFlags:(unsigned int)arg2;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)_normalizeSeamDraggingInfosForGrabbableModule:(id)arg1;
- (BOOL)_testSeam:(id)arg1 forGrabbableModule:(id)arg2 againstNode:(id)arg3;
- (BOOL)_testSeam:(id)arg1 forGrabbableModule:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_selectItemViewIfNeeded:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (id)_seamInfoForDraggingAreaOfEvent:(id)arg1;
- (void)installViews;
- (id)layoutDictionary;
- (void)setLayoutDictionary:(id)arg1;
- (unsigned long long)containedItemCount;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
@property BOOL showWindowFooter;
@property BOOL useLayerBacking;
- (void)_updateFocus;
- (void)_enableFocusUpdate:(id)arg1;
- (void)_disableFocusUpdate:(id)arg1;
- (void)_firstResponderChanged:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateNode1Size:(struct CGSize)arg1 node2Size:(struct CGSize)arg2;
- (void)updateItemViewFrames;
- (id)representedModule;
- (void)_setAppareanceDelegate:(id)arg1;
- (void)setRepresentedModule:(id)arg1;
- (id)_rootNode;
- (void)syncSublayoutWithDict:(id)arg1;
- (struct CGSize)_layoutNode:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_layoutSubnodesOf:(id)arg1 inRect:(struct CGRect)arg2;
- (BOOL)_nodeHasBottomViewOrderedBelow:(id)arg1;
- (BOOL)_nodeHasFirstViewOrderedBelow:(id)arg1;
- (void)_layoutWithParameters:(CDStruct_d212b10b *)arg1 count:(unsigned long long)arg2 newSize:(double)arg3;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)updatePropotionsForSubnodesOfNode:(id)arg1;
- (void)setLayoutNode:(id)arg1;
- (void)moveContainerItemWithIdentifier:(id)arg1 before:(BOOL)arg2 siblingItemWithIdentififier:(id)arg3;
- (void)swapContainerItemWithIdentifier:(id)arg1 withContainerItemWithIdentifier:(id)arg2;
- (void)removeContainerItemView:(id)arg1;
- (void)addContainerItemView:(id)arg1;
- (void)createItemsForNode:(id)arg1;
- (void)setSeamDraggingInfos:(id)arg1;
- (id)focusedOnItem;
- (void)setFocusOnItem:(id)arg1;
- (void)_layoutNodes;

@end

