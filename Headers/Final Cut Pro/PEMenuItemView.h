//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@interface PEMenuItemView : NSTableRowView
{
    BOOL _isSeparator;
}

+ (id)separatorItem;
@property(readonly, getter=isSeparator) BOOL separator; // @synthesize separator=_isSeparator;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)_initAsSeparator:(BOOL)arg1;

@end

