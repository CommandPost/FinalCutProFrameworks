//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/VHOutlineView.h>

@class NSMenu;

@interface OZLayerListOutlineView : VHOutlineView
{
    NSMenu *_objectMenu;
    NSMenu *_objectBlendMenu;
    long long _theEditingColumn;
    long long _theEditingRow;
    BOOL _isEditingName;
    BOOL _isEditingParameter;
    BOOL _isInMouseDown;
}

- (struct CGRect)shadowRect;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (void)setEditingRow:(long long)arg1;
- (long long)editingRow;
- (void)setEditingColumn:(long long)arg1;
- (long long)editingColumn;
- (void)setEditingParameter:(BOOL)arg1;
- (BOOL)isEditingParameter;
- (void)setEditingName:(BOOL)arg1;
- (BOOL)isEditingName;
- (id)getObjectMenu;
- (void)setObjectBlendMenu:(id)arg1;
- (void)setObjectMenu:(id)arg1;
- (void)editColumn:(long long)arg1 row:(long long)arg2 withEvent:(id)arg3 select:(BOOL)arg4;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (id)getRowColor:(int)arg1;
- (id)groupHeaderBackgroundFacet:(BOOL)arg1;
- (BOOL)shouldUseSecondaryHighlightColor;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)_hoverAreaIsSameAsLast:(id)arg1;

@end

