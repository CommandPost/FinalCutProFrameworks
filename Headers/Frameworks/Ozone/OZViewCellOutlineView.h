//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKOutlineView.h>

@interface OZViewCellOutlineView : LKOutlineView
{
}

- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstResponder;
- (void)removeTableColumn:(id)arg1;
- (void)reloadData;
- (void)noteNumberOfRowsChanged;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)didReorderOrResizeNotification:(id)arg1;
- (void)workaroundReorderResizeProblem;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

