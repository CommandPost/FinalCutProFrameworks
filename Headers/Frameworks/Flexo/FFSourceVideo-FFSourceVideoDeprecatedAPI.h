//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

@interface FFSourceVideo (FFSourceVideoDeprecatedAPI)
- (BOOL)actualSegmentMD5:(CDStruct_60067b7e *)arg1 idealMD5:(CDStruct_60067b7e *)arg2 sampleOffset:(long long *)arg3 fullRange:(CDStruct_e83c9415 *)arg4 subRange:(CDStruct_e83c9415 *)arg5 sampleOffsetBaseTime:(CDStruct_1b6d18a9 *)arg6 forSampleDuration:(CDStruct_1b6d18a9)arg7 atTime:(CDStruct_1b6d18a9)arg8 context:(id)arg9;
- (float)segmentCostAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2;
- (BOOL)imageIsConstantOverRange:(CDStruct_e83c9415)arg1 context:(id)arg2;
@end

