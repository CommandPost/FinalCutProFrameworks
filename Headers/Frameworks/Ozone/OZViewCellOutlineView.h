//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKOutlineView.h"

@interface OZViewCellOutlineView : LKOutlineView
{
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)workaroundReorderResizeProblem;
- (void)didReorderOrResizeNotification:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)noteNumberOfRowsChanged;
- (void)reloadData;
- (void)removeTableColumn:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;

@end
