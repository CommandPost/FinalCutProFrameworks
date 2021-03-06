//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKTextFieldCell.h>

@class LKImageCell, NSObject;

@interface TMCell : LKTextFieldCell
{
    LKImageCell *_imageCell;
    NSObject *_object;
    int _gradientHeight;
}

- (id)proTextAttributes;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)imageFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)textFrameForBounds:(struct CGRect)arg1;
- (int)textHeight;
- (BOOL)pointInText:(struct CGRect)arg1 inView:(id)arg2 event:(id)arg3;
- (BOOL)pointInImage:(struct CGRect)arg1 inView:(id)arg2 event:(id)arg3;
- (BOOL)_allowsContextMenus;
- (void)setObjectValue:(id)arg1;
- (void)setImageAndText:(id)arg1;
- (id)highlightColorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)font;
- (id)cellImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

