//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFCurveUIObject.h>

__attribute__((visibility("hidden")))
@interface FFCurveSegmentObject : FFCurveUIObject
{
}

- (void)setAssets:(id)arg1;
- (void)setPatternColor:(struct CGColor *)arg1 size:(struct CGSize)arg2;
- (double)width;
- (void)setLocation:(struct CGPoint)arg1 andWidth:(double)arg2;
- (void)setWidth:(double)arg1;
- (void)setLocation:(struct CGPoint)arg1;
- (id)initWithLocation:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2 width:(double)arg3 pattern:(struct CGColor *)arg4 patternSize:(struct CGSize)arg5 parentLayer:(id)arg6 belowLayer:(id)arg7 timeline:(id)arg8;
- (id)initWithLocation:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2 width:(double)arg3 assets:(id)arg4 parentLayer:(id)arg5 belowLayer:(id)arg6 timeline:(id)arg7;

@end

