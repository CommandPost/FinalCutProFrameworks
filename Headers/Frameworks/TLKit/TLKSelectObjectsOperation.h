//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, TLKDragContext, TLKTimelineView;

@interface TLKSelectObjectsOperation : NSOperation
{
    BOOL _shouldRecalcInvertsSelection;
    BOOL _invertsSelection;
    TLKTimelineView *_timelineView;
    unsigned long long _modifierFlags;
    NSArray *_initialSelection;
    TLKDragContext *_dragContext;
    struct CGRect _selectionRect;
}

@property BOOL invertsSelection; // @synthesize invertsSelection=_invertsSelection;
@property BOOL shouldRecalcInvertsSelection; // @synthesize shouldRecalcInvertsSelection=_shouldRecalcInvertsSelection;
@property(retain, nonatomic) TLKDragContext *dragContext; // @synthesize dragContext=_dragContext;
@property(retain) NSArray *initialSelection; // @synthesize initialSelection=_initialSelection;
@property(readonly, nonatomic) unsigned long long modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(readonly, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
@property(nonatomic) struct CGRect selectionRect; // @synthesize selectionRect=_selectionRect;
- (id)_clickedItemComponentFragment;
- (void)_selectItemsAtPoint;
- (void)main;
- (void)_updateSelectionForItems:(id)arg1;
- (id)_selectableItemsFromArray:(id)arg1;
- (BOOL)_canSelectItem:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)_itemComponentsForShiftClickedItem:(id)arg1;
- (id)findItemComponentsIntersectingRect:(struct CGRect)arg1;
- (struct CGRect)_clipTransitionsFromRect:(struct CGRect)arg1 ofItem:(id)arg2;
- (id)selectedItemsIncludingEntireRangesWithClickedItem:(id)arg1;
- (void)_updateDragContext:(id)arg1 withClickedItemComponentFragment:(id)arg2;
- (id)_selectedItemComponents;
@property(readonly, nonatomic) struct CGPoint point;
- (void)dealloc;
- (id)initWithRect:(struct CGRect)arg1 inTimelineView:(id)arg2 modifierFlags:(unsigned long long)arg3;
- (id)initWithPoint:(struct CGPoint)arg1 inTimelineView:(id)arg2 modifierFlags:(unsigned long long)arg3;

@end

