//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol FFSelectionHandler
- (id)contextRootObject;
- (void)setSelectedItems:(NSArray *)arg1;
- (NSArray *)selectedItems;

@optional
- (id)getFirstObjectInRect:(struct CGRect)arg1;
- (NSArray *)visibleItems;
- (NSArray *)itemsInRect:(struct CGRect)arg1;
- (id)itemAtPoint:(struct CGPoint)arg1 keepSelectionIfMultipleTextObjects:(BOOL)arg2;
- (id)itemAtPoint:(struct CGPoint)arg1;
@end

