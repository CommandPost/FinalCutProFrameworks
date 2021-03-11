//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKSelectObjectsOperation.h>

@interface TLKSelectObjectsAtPointOperation : TLKSelectObjectsOperation
{
    struct CGPoint _point;
}

@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)_clickedItemComponentFragment;
- (id)_selectableItemsFromArray:(id)arg1;
- (BOOL)_canSelectItem:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)selectedItemsIncludingEntireRangesWithClickedItem:(id)arg1;
- (id)_itemComponentsForShiftClickedItem:(id)arg1;
- (id)_selectedItemComponents;
- (void)_updateDragContext:(id)arg1 withClickedItemComponentFragment:(id)arg2;
- (void)_selectItemsAtPoint;
- (void)main;
- (id)initWithTimelineView:(id)arg1 modifierFlags:(unsigned long long)arg2;

@end

