//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSProSyntheticUIElementSupport.h"

@class LKContainerItemView, LKContainerNode, LKPaneCapView, NSDictionary, NSMutableArray, NSMutableDictionary, NSProWindow, NSString;

@interface LKContainerView : NSView <NSProSyntheticUIElementSupport>
{
    NSMutableArray *_containerItems;
    NSMutableArray *_newItems;
    LKContainerNode *_rootNode;
    id _representedModule;
    NSMutableArray *_draggingAreas;
    LKPaneCapView *_windowFooterView;
    NSMutableDictionary *_windowFooterAccessoryViews;
    NSDictionary *_seamDraggingInfos;
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
    LKContainerNode *_previousTransitioningNode;
    LKContainerNode *_transitioningNode;
    NSProWindow *_draggedContainerWindow;
    LKContainerView *_draggingContainerView;
    NSProWindow *_windowToClose;
    NSMutableDictionary *_layoutCustomizationOperation;
    unsigned int _highlightCurrentSeamArea:1;
    unsigned int _isDoingSeamDragging:1;
    unsigned int _useLayerBacking:1;
    unsigned int _isAnimating:1;
    unsigned int _canCustomizeLayout:1;
    unsigned int _isPerformingDrag:1;
}

+ (void)initialize;
+ (id)_firstKeyContainerView;
+ (id)_proContainerViewInView:(id)arg1;
+ (void)_setThemeVariant:(long long)arg1 recursivelyForView:(id)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)syntheticUIElementAttributeNames:(id)arg1;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_splitterChildren;
- (BOOL)accessibilityIsIgnored;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)_finishFrameChangesForNode:(id)arg1;
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
- (void)_resetSeamDraggingAreas;
- (void)_removeSeamDraggingAreas;
- (void)_computeSeamDraggingAreas;
- (void)_determineSeamDraggingAreasForNode:(id)arg1;
- (void)_redisplaySeamAreas;
- (void)_layoutNodes;
- (BOOL)mouseTracker:(id)arg1 didStopTrackingWithEvent:(id)arg2;
- (BOOL)mouseTracker:(id)arg1 shouldContinueTrackingWithEvent:(id)arg2;
- (void)_updateDraggingContainerWindowWithMouseTracker:(id)arg1;
- (void)_removeDraggedReplacementNode;
- (id)_containerViewAtScreenPoint:(struct CGPoint)arg1;
- (BOOL)mouseTracker:(id)arg1 shouldStartTrackingWithEvent:(id)arg2;
- (void)lookDidChangeNotification:(id)arg1;
@property BOOL canRearrangeLayout;
- (id)viewForIdentifier:(id)arg1;
- (void)removeContainerItemWithIdentifier:(id)arg1;
- (id)nodeOfItemWithIdentifier:(id)arg1;
- (id)moduleForIdentifier:(id)arg1;
- (void)hideContainerItemWithIdentifier:(id)arg1 revealStyle:(long long)arg2;
- (void)hideContainerItemWithIdentifier:(id)arg1;
- (void)showContainerItemWithIdentifier:(id)arg1 revealStyle:(long long)arg2;
- (void)showContainerItemWithIdentifier:(id)arg1;
- (void)startTrackingAt:(struct CGPoint)arg1 withModifierFlags:(unsigned int)arg2;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_normalizeSeamDraggingInfosForGrabbableModule:(id)arg1;
- (BOOL)_testSeam:(id)arg1 forGrabbableModule:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_selectItemViewIfNeeded:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)installViews;
- (id)layoutDictionary;
- (void)setLayoutDictionary:(id)arg1;
- (unsigned long long)containedItemCount;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
@property BOOL showWindowFooter;
@property BOOL useLayerBacking;
- (void)_firstResponderChanged:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_proAutomateLiveSeamDragging;
- (void)_updateNode1Size:(struct CGSize)arg1 node2Size:(struct CGSize)arg2;
- (void)updateItemViewFrames;
- (id)representedModule;
- (void)setRepresentedModule:(id)arg1;
- (id)_rootNode;
- (void)syncSublayoutWithDict:(id)arg1;
- (struct CGSize)_layoutNode:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_layoutSubnodesOf:(id)arg1 inRect:(struct CGRect)arg2;
- (BOOL)_nodeHasBottomViewOrderedBelow:(id)arg1;
- (BOOL)_nodeHasFirstViewOrderedBelow:(id)arg1;
- (void)_layoutWithParameters:(CDStruct_6cce754d *)arg1 count:(unsigned long long)arg2 newSize:(double)arg3;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)updatePropotionsForSubnodesOfNode:(id)arg1;
- (void)setLayoutNode:(id)arg1;
- (void)swapContainerItemWithIdentifier:(id)arg1 withContainerItemWithIdentifier:(id)arg2;
- (void)removeContainerItemView:(id)arg1;
- (void)addContainerItemView:(id)arg1;
- (void)createItemsForNode:(id)arg1;
- (void)setSeamDraggingInfos:(id)arg1;
- (id)focusedOnItem;
- (void)setFocusOnItem:(id)arg1;

@end

