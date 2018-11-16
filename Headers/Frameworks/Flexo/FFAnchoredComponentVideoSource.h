//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

@class FFAnchoredComponent, FFSource, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFAnchoredComponentVideoSource : FFSourceVideo
{
    NSMutableArray *_openStreams;
    FFSource *_source;
    FFAnchoredComponent *_component;
    long long _effectCount;
}

+ (Class)streamClass;
- (id)initWithProvider:(id)arg1 component:(id)arg2 effectCount:(long long)arg3;
- (void)dealloc;
- (CDStruct_e83c9415)timeRange;
- (id)nativeVideoProps;
- (void)_invalidateSourceCacheForRange:(CDStruct_e83c9415)arg1;
- (id)_source;
- (id)_component;
- (void)_removeStreamFromOpenStreamsList:(id)arg1;
- (void)rangeInvalidated:(id)arg1;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)newStream:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;
- (id)displayName;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (long long)timecodeDisplayDropFrame;
- (double)preferredScaleFactorForQuality:(int)arg1;

@end

