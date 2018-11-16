//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKOutlineView.h"

@interface OZLibraryOutlineView : LKOutlineView
{
    int _hitRow;
    int _hitColumn;
    BOOL _didDrag;
}

- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)delete:(id)arg1;
- (void)libraryDelete:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)startEdit:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)awakeFromNib;

@end

