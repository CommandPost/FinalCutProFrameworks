//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKButtonCell.h"

@interface _ScopesViewButtonCell : LKButtonCell
{
    struct {
        unsigned int mouseInside:1;
    } _cvb_flags;
}

- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (id)_textColorInView:(id)arg1;
- (long long)_themeStateInView:(id)arg1;
- (id)_sharedTextCell;
- (id)font;
- (id)_baseFacet;
@property(getter=isMouseInside) BOOL mouseInside; // @dynamic mouseInside;

@end
