//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

@class FFVideoProps, NSLock, NSMutableArray, NSObject;

__attribute__((visibility("hidden")))
@interface FFSourceVideoEffect : FFSourceVideo
{
    FFVideoProps *_videoProps;
    NSObject *_observedFolder;
    NSLock *_subRangeInfosLock;
    NSMutableArray *_cachedSubrangeInfos;
    NSMutableArray *_failedSubRangeInfos;
    CDStruct_bdcb2b0d _cacheChannelMD5;
}

+ (Class)streamClass;
- (void)_invalidateCachedMD5:(BOOL)arg1;
- (id)initWithProvider:(id)arg1;
- (void)dealloc;
- (struct CGRect)nativeBounds;
- (CDStruct_e83c9415)timeRange;
- (_Bool)_validSubRangeTimeRequest:(CDStruct_1b6d18a9)arg1;
- (id)_copySubRangeCachedInfoForSD:(const CDStruct_1b6d18a9 *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2 context:(id)arg3 retFailedRequest:(_Bool *)arg4 retCacheArray:(id *)arg5 retFailedRequestArray:(id *)arg6;
- (void)_addInfoToCache:(id)arg1 forSD:(const CDStruct_1b6d18a9 *)arg2 atTime:(const CDStruct_1b6d18a9 *)arg3 context:(id)arg4 successArray:(id)arg5 failureArray:(id)arg6;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)_calcPasssThrough:(id)arg1 passthruOffset:(CDStruct_1b6d18a9)arg2 sd:(CDStruct_1b6d18a9)arg3 atTime:(CDStruct_1b6d18a9)arg4 costSubSegment:(const CDStruct_e83c9415 *)arg5 context:(id)arg6;
- (void)_preformNonConstantSubRangeCalc:(CDStruct_e83c9415 *)arg1 localFullRange:(CDStruct_e83c9415 *)arg2 localSubRange:(CDStruct_e83c9415 *)arg3 sd:(CDStruct_1b6d18a9 *)arg4 context:(id)arg5;
- (void)_calcLocalSubRange:(id)arg1 subOffsetZeroTime:(CDStruct_1b6d18a9)arg2 inputOffset:(CDStruct_1b6d18a9)arg3 localFullRange:(CDStruct_e83c9415 *)arg4 localSubRange:(CDStruct_e83c9415 *)arg5 localExtentRange:(CDStruct_e83c9415 *)arg6;
- (BOOL)_calcValueForKey:(id)arg1 ep:(id)arg2 sourceCount:(int)arg3 atTime:(CDStruct_1b6d18a9)arg4 sd:(CDStruct_1b6d18a9)arg5 context:(id)arg6 md5s:(CDStruct_60067b7e *)arg7 md5sIdeal:(CDStruct_60067b7e *)arg8 inputTimeZeroLocations:(CDStruct_1b6d18a9 *)arg9 inputCost:(float *)arg10 inputOringFlags:(unsigned int *)arg11 inputAndingFlags:(unsigned int *)arg12 constantOverSubRange:(_Bool *)arg13 localFullRange:(CDStruct_e83c9415 *)arg14 localSubRange:(CDStruct_e83c9415 *)arg15 localExtentRange:(CDStruct_e83c9415 *)arg16;
- (void)formMD5ValuesFromSourceData:(CDStruct_e83c9415)arg1 ep:(id)arg2 sourceCount:(int)arg3 inputSources:(int)arg4 md5s:(CDStruct_60067b7e *)arg5 md5sIdeal:(CDStruct_60067b7e *)arg6 inputTimeZeroLocations:(CDStruct_1b6d18a9 *)arg7 inputOringFlags:(unsigned int *)arg8 inputAndingFlags:(unsigned int *)arg9 res:(BOOL)arg10 effectIDAndInputListString:(id)arg11 localExtentRange:(CDStruct_e83c9415)arg12 extraMD5s:(int)arg13 finalMD5Actual:(CDStruct_60067b7e *)arg14 finalMD5Ideal:(CDStruct_60067b7e *)arg15;
- (BOOL)_calcCompositeSegmentForAllSources:(CDStruct_1b6d18a9)arg1 sd:(CDStruct_1b6d18a9)arg2 context:(id)arg3 inputOringFlags:(unsigned int *)arg4 inputAndingFlags:(unsigned int *)arg5 constantOverSubRange:(_Bool *)arg6 finalMD5Actual:(CDStruct_60067b7e *)arg7 finalMD5Ideal:(CDStruct_60067b7e *)arg8 localFullRange:(CDStruct_e83c9415 *)arg9 localSubRange:(CDStruct_e83c9415 *)arg10 inputCost:(float *)arg11 timeOffsetForSampleOffset:(CDStruct_1b6d18a9 *)arg12;
- (id)_calcNonPassThrough:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3 costSubSegment:(const CDStruct_e83c9415 *)arg4;
- (id)_newUncachedSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)description;
- (id)deepDescriptionWithIndent:(long long)arg1;
- (id)deepDescription;
- (struct CGRect)_calcOpaqueBoundsForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)getPassThruAtTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 sampleDur:(CDStruct_1b6d18a9)arg3 context:(id)arg4 channelOffset:(CDStruct_1b6d18a9)arg5;
- (id)nativeVideoProps;
- (void)setNativeVideoProps:(id)arg1;
- (void)channelChangedNotification:(id)arg1;
- (void)inputChangedNotification:(id)arg1;

@end

