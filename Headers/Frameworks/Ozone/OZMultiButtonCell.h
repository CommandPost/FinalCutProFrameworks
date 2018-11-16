//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCell.h"

@class NSMutableArray;

@interface OZMultiButtonCell : NSCell
{
    NSMutableArray *_buttonCells;
    int _type;
}

- (void)addButtonCell:(id)arg1;
- (id)initCell:(unsigned long long)arg1 atom:(union _themeatom_union)arg2 type:(int)arg3;
- (void)setButtonIcon:(unsigned long long)arg1 imageSrc:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setEnabled:(BOOL)arg1;
- (void)setTransparentValues:(unsigned int)arg1;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (struct CGSize)singleButtonSize;
- (struct CGRect)singleButtonRect:(struct CGRect)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (id)menuForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (long long)pointInButton:(struct CGRect)arg1 inView:(id)arg2 event:(id)arg3;

@end

