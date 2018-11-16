//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface FFAnchoredObjectSegmentedVideoSource : FFSourceVideo
{
    struct list<PEObjectSegmentedVideoStreamUtils::SegmentSourceCacheItem*, std::allocator<PEObjectSegmentedVideoStreamUtils::SegmentSourceCacheItem*>> _segmentSourceCache;
    struct list<PEObjectSegmentedVideoStreamUtils::SegmentMD5InfoCacheItem*, std::allocator<PEObjectSegmentedVideoStreamUtils::SegmentMD5InfoCacheItem*>> _segmentMD5InfoCache;
    struct vector<FFAnchoredObjectSegmentedVideoStream*, std::allocator<FFAnchoredObjectSegmentedVideoStream*>> _openStreams;
    long long _effectCount;
    long long _angle;
    long long _toLane;
    NSSet *_showOnlyObjects;
    NSSet *_roles;
}

+ (Class)streamClass;
- (id)anchoredObject;
- (CDStruct_e83c9415)timeRange;
- (id)_videoProps;
- (id)nativeVideoProps;
- (double)preferredScaleFactorForQuality:(int)arg1;
- (void)rangeInvalidated:(id)arg1;
- (id)initWithProvider:(id)arg1 effectCount:(long long)arg2 angle:(long long)arg3 toLane:(long long)arg4 showOnlyObjects:(id)arg5 roles:(id)arg6;
- (long long)effectCount;
- (void)dealloc;
- (id)newStream:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;
- (void)_removeStreamFromOpenStreamsList:(id)arg1;
- (id)_newSubRangeMD5InfoFromCacheForSDandQualitySettings:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (void)_addSubRangeMD5InfoToCache:(id)arg1 forSD:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)_dumpCache;
- (id)_newSegmentSourceAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2 offset:(CDStruct_1b6d18a9 *)arg3 range:(CDStruct_e83c9415 *)arg4 streamid:(id *)arg5;
- (void)_invalidateSegmentMD5InfoCacheForRange:(const CDStruct_e83c9415 *)arg1;
- (void)_invalidateSegmentSourceCacheForRange:(const CDStruct_e83c9415 *)arg1;
- (CDStruct_1b6d18a9)magicFrameTime;
- (id)deepDescriptionWithIndent:(long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

