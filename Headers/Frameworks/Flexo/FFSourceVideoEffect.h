//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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
    NSMutableArray *_cachedSimplifiesInfo;
    struct FFSynchronizable *_qualityScaleLock;
    struct map<FFSVQualityEnum, double, std::__1::less<FFSVQualityEnum>, std::__1::allocator<std::__1::pair<const FFSVQualityEnum, double>>> *_cachedQualityToScale;
    struct FFSynchronizable *_videoPropsSynchronizable;
}

+ (Class)streamClass;
+ (void)initialize;
- (void)inputChangedNotification:(id)arg1;
- (void)channelChangedNotification:(id)arg1;
- (void)setNativeVideoProps:(id)arg1;
- (id)nativeVideoProps;
- (double)preferredScaleFactorForQuality:(int)arg1;
- (double)_internalPreferredScaleFactorForQuality:(int)arg1;
- (id)getPassThruAtTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 sampleDur:(CDStruct_1b6d18a9)arg3 context:(id)arg4 channelOffset:(CDStruct_1b6d18a9)arg5;
- (id)getPassThruStringAtTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 sampleDur:(CDStruct_1b6d18a9)arg3 context:(id)arg4 channelOffset:(CDStruct_1b6d18a9)arg5;
- (struct CGRect)_calcOpaqueBoundsForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)deepDescription;
- (id)deepDescriptionWithIndent:(long long)arg1;
- (id)description;
- (id)_newUncachedSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3 checkCancelBlock:(CDUnknownBlockType)arg4;
- (id)_newNonPassThroughInfo:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3 costSubSegment:(const CDStruct_e83c9415 *)arg4 checkCancelBlock:(CDUnknownBlockType)arg5;
- (BOOL)_calcCompositeSegmentForAllSources:(CDStruct_1b6d18a9)arg1 sd:(CDStruct_1b6d18a9)arg2 context:(id)arg3 inputOringFlags:(unsigned int *)arg4 inputAndingFlags:(unsigned int *)arg5 dataRate:(unsigned long long *)arg6 constantOverSubRange:(_Bool *)arg7 finalMD5Actual:(CDStruct_bdcb2b0d *)arg8 finalMD5Ideal:(CDStruct_bdcb2b0d *)arg9 localFullRange:(CDStruct_e83c9415 *)arg10 localSubRange:(CDStruct_e83c9415 *)arg11 inputCost:(float *)arg12 timeOffsetForSampleOffset:(CDStruct_1b6d18a9 *)arg13 flagDetails:(id *)arg14 checkCancelBlock:(CDUnknownBlockType)arg15;
- (void)formMD5ValuesFromSourceData:(CDStruct_e83c9415)arg1 ep:(id)arg2 sourceCount:(int)arg3 inputSources:(int)arg4 md5s:(CDStruct_bdcb2b0d *)arg5 md5sIdeal:(CDStruct_bdcb2b0d *)arg6 inputTimeZeroLocations:(CDStruct_1b6d18a9 *)arg7 inputOringFlags:(unsigned int *)arg8 inputAndingFlags:(unsigned int *)arg9 res:(BOOL)arg10 effectIDAndInputListString:(id)arg11 localExtentRange:(CDStruct_e83c9415)arg12 localSubRange:(CDStruct_e83c9415 *)arg13 extraMD5s:(int)arg14 finalMD5Actual:(CDStruct_bdcb2b0d *)arg15 finalMD5Ideal:(CDStruct_bdcb2b0d *)arg16 flagDetails:(id *)arg17 context:(id)arg18;
- (BOOL)_calcValueForKey:(id)arg1 ep:(id)arg2 sourceCount:(int)arg3 atTime:(CDStruct_1b6d18a9)arg4 sd:(CDStruct_1b6d18a9)arg5 context:(id)arg6 md5s:(CDStruct_bdcb2b0d *)arg7 md5sIdeal:(CDStruct_bdcb2b0d *)arg8 inputTimeZeroLocations:(CDStruct_1b6d18a9 *)arg9 inputCost:(float *)arg10 inputOringFlags:(unsigned int *)arg11 inputAndingFlags:(unsigned int *)arg12 dataRate:(unsigned long long *)arg13 constantOverSubRange:(_Bool *)arg14 localFullRange:(CDStruct_e83c9415 *)arg15 localSubRange:(CDStruct_e83c9415 *)arg16 localExtentRange:(CDStruct_e83c9415 *)arg17 flagDetails:(id *)arg18 checkCancelBlock:(CDUnknownBlockType)arg19;
- (void)_calcLocalSubRange:(id)arg1 subOffsetZeroTime:(CDStruct_1b6d18a9)arg2 inputOffset:(CDStruct_1b6d18a9)arg3 localFullRange:(CDStruct_e83c9415 *)arg4 localSubRange:(CDStruct_e83c9415 *)arg5 localExtentRange:(CDStruct_e83c9415 *)arg6;
- (void)_preformNonConstantSubRangeCalc:(CDStruct_e83c9415 *)arg1 localFullRange:(CDStruct_e83c9415 *)arg2 localSubRange:(CDStruct_e83c9415 *)arg3 sd:(CDStruct_1b6d18a9 *)arg4 context:(id)arg5;
- (id)_newPassThroughInfo:(id)arg1 passthruOffset:(CDStruct_1b6d18a9)arg2 sd:(CDStruct_1b6d18a9)arg3 atTime:(CDStruct_1b6d18a9)arg4 costSubSegment:(const CDStruct_e83c9415 *)arg5 context:(id)arg6 checkCancelBlock:(CDUnknownBlockType)arg7;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3 checkCancelBlock:(CDUnknownBlockType)arg4;
- (id)_newSubRangeForTooDeepEffect:(long long)arg1;
- (long long)_updateEffectDepth:(long long)arg1 withMutableData:(id)arg2;
- (id)_getEffectDepthPtr;
- (void)_addInfoToCache:(id)arg1 forSD:(const CDStruct_1b6d18a9 *)arg2 atTime:(const CDStruct_1b6d18a9 *)arg3 context:(id)arg4 contextCompareFlags:(unsigned int)arg5 successArray:(id)arg6 failureArray:(id)arg7;
- (id)_copySubRangeCachedInfoForSD:(const CDStruct_1b6d18a9 *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2 context:(id)arg3 contextCompareFlags:(unsigned int)arg4 retFailedRequest:(_Bool *)arg5 retCacheArray:(id *)arg6 retFailedRequestArray:(id *)arg7;
- (_Bool)_validSubRangeTimeRequest:(CDStruct_1b6d18a9)arg1;
- (unsigned int)nodeBasicMD5OringFlags;
- (CDStruct_e83c9415)timeRange;
- (struct CGRect)nativeBounds;
- (id)renderFormat:(id)arg1;
- (void)dealloc;
- (id)initWithProvider:(id)arg1;
- (void)_invalidateCachedMD5:(BOOL)arg1;

@end

