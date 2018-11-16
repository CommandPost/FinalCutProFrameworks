//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCell.h"

@class NSView;

@interface OZViewCell : NSCell
{
    NSView *view;
    BOOL forceImmediateViewCellDisplay;
}

+ (BOOL)needsToRemainInViewHierarchy;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)instantiateView;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (void)removeViewFromSuperview;
- (void)setView:(id)arg1;
- (id)view;
- (void)setViewFrame:(struct CGRect)arg1 inCellFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;

@end
