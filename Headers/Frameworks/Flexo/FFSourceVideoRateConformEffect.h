//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFSourceVideoEffect.h>

__attribute__((visibility("hidden")))
@interface FFSourceVideoRateConformEffect : FFSourceVideoEffect
{
}

- (id)_newUncachedSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (struct CGRect)_calcOpaqueBoundsForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (CDStruct_e83c9415)getFlowVectorRangeFor:(CDStruct_1b6d18a9)arg1 sampleDuration:(CDStruct_1b6d18a9)arg2 mode:(long long)arg3 mediaStartTime:(CDStruct_1b6d18a9)arg4 idealMD5:(CDStruct_bdcb2b0d)arg5 fullRangeStart:(CDStruct_1b6d18a9)arg6 retHasData:(char *)arg7;
- (CDStruct_1b6d18a9)mapTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)timeRange;
- (CDStruct_1b6d18a9)srcEnd;
- (CDStruct_1b6d18a9)srcStart;

@end

