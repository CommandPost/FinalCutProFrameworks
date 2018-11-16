//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTextFieldCell.h"

@class OZAnimStatusCell, OZViewController;

@interface OZLabelAnimMenuTextFieldCell : LKTextFieldCell
{
    BOOL _isHUD;
    BOOL _isBold;
    BOOL _shouldDoMenu;
    OZViewController *_pViewCtlr;
    OZAnimStatusCell *_pAnimStatusCell;
}

- (void)setFont:(id)arg1;
- (void)rightMouseDown:(id)arg1 inView:(id)arg2;
- (void)setIsBold:(BOOL)arg1;
- (void)setAnimStatusClass:(Class)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(int)arg5 length:(int)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGRect)adjustTextFrame:(struct CGRect)arg1;
- (void)setShouldDoMenu:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (void)dealloc;
- (id)initTextCell:(id)arg1 isHUD:(BOOL)arg2 animStatusCellClass:(Class)arg3 context:(id)arg4;

@end

