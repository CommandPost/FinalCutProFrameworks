//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMatrix.h"

@class NSCell, NSEvent, NSString, OZLibraryEntry;

@interface OZLibraryThumbnailMatrix : NSMatrix
{
    NSEvent *_downEvent;
    int _hitRow;
    int _hitColumn;
    _Bool _editingText;
    _Bool _didDrag;
    OZLibraryEntry *_editingEntry;
    NSCell *_editingCell;
    NSString *_oldName;
    NSString *_oldDisplayName;
    NSString *_oldPath;
    NSCell *_dragHighlightedCell;
}

- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)cancel:(id)arg1;
- (id)getEditingEntry;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)menuForEvent:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)acceptsFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)isOpaque;
- (void)setDownEvent:(id)arg1;
- (id)downEvent;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)editColumn:(int)arg1 row:(int)arg2;
- (void)startEdit:(id)arg1;
- (void)startDrag:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)dealloc;

@end

