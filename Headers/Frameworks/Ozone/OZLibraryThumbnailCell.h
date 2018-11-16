//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTextFieldCell.h"

@class OZLibraryEntry;

@interface OZLibraryThumbnailCell : LKTextFieldCell
{
    OZLibraryEntry *_entry;
    int _thumbnailSize;
}

- (BOOL)_shouldDrawHighlightRect;
- (BOOL)_allowsContextMenus;
- (BOOL)acceptsFirstResponder;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (struct CGPoint)getIconOffsetInCell:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_shouldUseSecondaryHighlightColor:(id)arg1;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)pointInIcon:(struct CGRect)arg1 inView:(id)arg2 point:(struct CGPoint)arg3;
- (BOOL)pointInText:(struct CGRect)arg1 inView:(id)arg2 event:(id)arg3;
- (struct CGRect)getImageFrame:(struct CGRect)arg1;
- (struct CGRect)getTextFrame:(struct CGRect)arg1;
- (int)getTextHeight;
- (int)getThumbnailSize;
- (void)setThumbnailSize:(int)arg1;
- (id)getEntry;
- (void)setEntry:(id)arg1;
- (void)dealloc;
- (id)initTextCell:(id)arg1;

@end

