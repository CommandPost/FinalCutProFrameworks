//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

#import "FFModelLocking.h"

__attribute__((visibility("hidden")))
@interface FFMCSwitcherVideoSource : FFSourceVideo <FFModelLocking>
{
    FFSourceVideo *_chosen;
    long long _anglesCount;
    long long _anglesOffset;
    FFSourceVideo *_angles;
    int _providerRetainCount;
}

+ (Class)streamClass;
+ (void)initialize;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)_sendAngleCountNotification:(id)arg1;
@property(readonly, nonatomic) FFSourceVideo *chosen; // @synthesize chosen=_chosen;
- (void)_multiAngleOffsetOrCountHasChangedSelectorOnMainThread:(id)arg1;
- (BOOL)writerIsWaiting;
- (void)_readUnlock;
- (void)_readLock;
- (void)_writeUnlock;
- (void)_writeLock;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (long long)timecodeDisplayDropFrame;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)_newFieldPairMD5InfoWithBaseInfo:(id)arg1 firstFieldInfo:(id)arg2 secondFieldInfo:(id)arg3 frameRange:(CDStruct_e83c9415)arg4 sd:(CDStruct_1b6d18a9)arg5;
- (id)newContextForAnglesSource:(id)arg1;
- (id)angles;
- (long long)anglesOffset;
- (long long)anglesCount;
- (void)setAnglesCount:(long long)arg1 andOffset:(long long)arg2;
- (int)providerRetainCount;
- (void)dealloc;
- (id)initWithProvider:(id)arg1 chosenVideo:(id)arg2;
- (void)makeAnglesSource:(BOOL)arg1;
- (void)anglesVideoRangeInvalidated:(id)arg1;
- (void)videoRangeInvalidated:(id)arg1;
- (id)_copyUserInfoForAngleSide:(id)arg1;
- (id)renderFormat:(id)arg1;
- (id)nativeVideoProps;
- (CDStruct_1b6d18a9)magicFrameTime;
- (CDStruct_e83c9415)timeRange;
- (id)aosProvider;

@end

