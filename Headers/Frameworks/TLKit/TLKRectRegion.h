//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TLKit/NSCopying-Protocol.h>

@interface TLKRectRegion : NSObject <NSCopying>
{
    struct TLKCRectArray *_rectArray;
    struct CGRect _bounds;
}

- (id)pointsOnEdge:(unsigned int)arg1;
- (void)insetRectEdge:(unsigned int)arg1 byAmount:(double)arg2;
- (void)unionRect:(struct CGRect)arg1;
- (unsigned long long)splitAtLocation:(double)arg1;
- (struct CGRect)appendRect:(struct CGRect)arg1 toEdge:(unsigned int)arg2;
- (struct _NSRange)_rangeOfRectsInLocationRange:(struct _TLKRange)arg1;
- (unsigned long long)_insertionIndexOfRectAtLocation:(double)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)removeAllRects;
- (void)replaceRectAtIndex:(unsigned long long)arg1 withRect:(struct CGRect)arg2;
- (void)insertRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfRectAtLocation:(double)arg1;
- (struct CGRect)rectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)_invalidateBounds;
- (void)_setBounds:(struct CGRect)arg1;
@property(readonly) struct CGRect bounds;
- (struct CGRect)_calculatedBoundsInRange:(struct _NSRange)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

