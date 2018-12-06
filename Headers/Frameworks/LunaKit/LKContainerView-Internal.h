//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LunaKit/LKContainerView.h>

@interface LKContainerView (Internal)
+ (void)_setThemeVariant:(long long)arg1 recursivelyForView:(id)arg2;
- (void)setFocusOnItem:(id)arg1;
- (id)focusedOnItem;
- (void)setSeamDraggingInfos:(id)arg1;
- (void)createItemsForNode:(id)arg1;
- (void)addContainerItemView:(id)arg1;
- (void)removeContainerItemView:(id)arg1;
- (void)swapContainerItemWithIdentifier:(id)arg1 withContainerItemWithIdentifier:(id)arg2;
- (id)nodeOfItemWithIdentifier:(id)arg1;
- (void)setLayoutNode:(id)arg1;
- (void)updatePropotionsForSubnodesOfNode:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void)_layoutWithParameters:(CDStruct_6cce754d *)arg1 count:(unsigned long long)arg2 newSize:(double)arg3;
- (BOOL)_nodeHasFirstViewOrderedBelow:(id)arg1;
- (BOOL)_nodeHasBottomViewOrderedBelow:(id)arg1;
- (void)_layoutSubnodesOf:(id)arg1 inRect:(struct CGRect)arg2;
- (struct CGSize)_layoutNode:(id)arg1 inRect:(struct CGRect)arg2;
- (void)syncSublayoutWithDict:(id)arg1;
- (id)_rootNode;
- (void)setRepresentedModule:(id)arg1;
- (id)representedModule;
- (void)updateItemViewFrames;
@end

