//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FigTimeRangeAndObject.h"

#import "FFModelLocking.h"

@interface FFAdjustmentToolFigTimeRangeAndObject : FigTimeRangeAndObject <FFModelLocking>
{
}

+ (id)newArrayOfAdjustmentToolRangeAndObjectFromArray:(id)arg1;
+ (id)adjustmentToolRangeAndObjectWithRangeAndObject:(id)arg1;
- (BOOL)writerIsWaiting;
- (void)_writeUnlock;
- (void)_writeLock;
- (void)_readUnlock;
- (void)_readLock;
- (id)valueForUndefinedKey:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithFigTimeRangeAndObject:(id)arg1;

@end

