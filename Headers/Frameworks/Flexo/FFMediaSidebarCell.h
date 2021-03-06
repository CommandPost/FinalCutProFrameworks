//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKTextFieldCell.h>

@class PCWeakPointerValue;

__attribute__((visibility("hidden")))
@interface FFMediaSidebarCell : LKTextFieldCell
{
    int _lastEditableState;
    PCWeakPointerValue *_node;
}

- (void)showDefinitionForAttributedString:(id)arg1 range:(struct _NSRange)arg2 options:(id)arg3 baselineOriginProvider:(CDUnknownBlockType)arg4;
- (void)_drawRolloverAdornment:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawAdornment:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawAdornmentImage:(id)arg1 inFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)_drawRolloverIcon:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawIcon:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawIconImage:(id)arg1 inFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_adornmentFrameInCell:(struct CGRect)arg1;
- (struct CGRect)_textFrameInCell:(struct CGRect)arg1;
- (struct CGRect)_iconFrameInCell:(struct CGRect)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (int)cellSubPartForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)_onlyDisplaysText;
- (id)_adornmentRolloverImage;
- (id)_adornmentImage;
- (double)_adornmentWidth;
- (BOOL)_displaysAdornment;
- (id)_iconRolloverImage;
- (id)_iconImage;
- (double)_iconWidth;
- (BOOL)_displaysIcon;
- (id)node;
- (void)setNode:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

