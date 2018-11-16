//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

@class FFAnchoredAngle, FFSource, NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface FFAnchoredAngleVideoSource : FFSourceVideo
{
    NSMutableArray *_openStreams;
    FFSource *_source;
    long long _effectCount;
    long long _angleOffset;
    long long _angleCount;
    NSSet *_roles;
    FFAnchoredAngle *_anchoredAngle;
    BOOL _removeAngleObserver;
}

+ (Class)streamClass;
- (id)initWithProvider:(id)arg1 effectCount:(long long)arg2 roles:(id)arg3 angleOffset:(long long)arg4 angleCount:(long long)arg5;
- (void)dealloc;
- (id)anchoredObject;
- (long long)effectCount;
- (CDStruct_e83c9415)timeRange;
- (id)nativeVideoProps;
- (void)_invalidateSourceCacheForRange:(CDStruct_e83c9415)arg1;
- (id)_source;
- (void)_removeStreamFromOpenStreamsList:(id)arg1;
- (void)rangeInvalidated:(id)arg1;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)newStream:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;
- (id)displayName;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (long long)timecodeDisplayDropFrame;
- (double)preferredScaleFactorForQuality:(int)arg1;
- (void)setAnglesCount:(long long)arg1 andOffset:(long long)arg2;
- (void)_multiAngleOffsetOrCountHasChangedSelectorOnMainThread:(id)arg1;

@end

