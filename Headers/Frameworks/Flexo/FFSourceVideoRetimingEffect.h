//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideoEffect.h>

__attribute__((visibility("hidden")))
@interface FFSourceVideoRetimingEffect : FFSourceVideoEffect
{
}

+ (Class)streamClass;
- (CDStruct_1b6d18a9)srcStart;
- (CDStruct_1b6d18a9)srcEnd;
- (CDStruct_e83c9415)timeRange;
- (CDStruct_1b6d18a9)mapTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)flowVectorRangeFor:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2 sampleDuration:(CDStruct_1b6d18a9)arg3 hasVectors:(char *)arg4;
- (struct CGRect)_calcOpaqueBoundsForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)_newUncachedSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;

@end
