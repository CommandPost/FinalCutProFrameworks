//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTextFieldCell.h"

@interface TMHeaderCell : LKTextFieldCell
{
}

- (id)proTextAttributes;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)imageFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)textFrameForBounds:(struct CGRect)arg1;
- (int)textHeight;
- (BOOL)pointInText:(struct CGRect)arg1 inView:(id)arg2 event:(id)arg3;
- (BOOL)_allowsContextMenus;
- (void)setObjectValue:(id)arg1;
- (id)font;

@end

