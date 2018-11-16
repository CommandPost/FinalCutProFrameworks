//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSAttributedString, NSTextView;

@interface TLKStringEditorView : NSView
{
    id _delegate;
    id _editCell;
    NSView *_viewEditor;
    NSTextView *_textEditor;
    struct CGRect _textFrame;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    struct CGPoint _anchorPoint;
    struct CGSize _previousSize;
    NSAttributedString *_initialValue;
    struct _sevFlags {
        unsigned int didChange:1;
        unsigned int respondsToDidEndEditing:1;
        unsigned int respondsToDidChange:1;
        unsigned int reserved:29;
    } _sevFlags;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (BOOL)isFlipped;
- (id)font;
- (void)setFont:(id)arg1;
- (unsigned long long)alignment;
- (void)setAlignment:(unsigned long long)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (id)attributedStringValue;
- (void)setAttributedStringValue:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)editor;
- (void)mouseDown:(id)arg1;
- (void)setEditor:(id)arg1;
- (struct CGSize)minimumSize;
- (void)setMinimumSize:(struct CGSize)arg1;
- (struct CGSize)maximumSize;
- (void)setMaximumSize:(struct CGSize)arg1;
- (struct CGRect)_alignedRectWithSize:(struct CGSize)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)_editOneLine:(id)arg1;
- (void)_edit:(id)arg1 inRect:(struct CGRect)arg2 ofViewEditor:(id)arg3 contextView:(id)arg4;
- (struct CGRect)_clipFrameWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_textFrameDidChange:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)_boundsChanged:(id)arg1;
- (struct CGRect)textFrame;
- (void)editInRect:(struct CGRect)arg1 ofView:(id)arg2 event:(id)arg3;
- (BOOL)textDidChange;
- (void)setInitialValue:(id)arg1;
- (id)initialValue;

@end
