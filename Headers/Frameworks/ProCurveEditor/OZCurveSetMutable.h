//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProCurveEditor/OZCurveSet.h>

@interface OZCurveSetMutable : OZCurveSet
{
}

- (void)clear;
- (void)setItem:(id)arg1;
- (_Bool)removeSelectedItem;
- (_Bool)removeItemNotInList:(id)arg1;
- (void)insertItem:(id)arg1 beforeItem:(unsigned int)arg2;
- (void)appendItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCurveSet:(id)arg1;
- (id)initWithName:(id)arg1 appDelegate:(id)arg2;

@end

