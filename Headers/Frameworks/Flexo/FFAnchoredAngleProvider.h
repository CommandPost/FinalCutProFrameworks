//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

#import "FFModelLocking.h"

@class FFAnchoredAngle, FFAnchoredSequence, NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface FFAnchoredAngleProvider : FFProvider <FFModelLocking>
{
    FFAnchoredAngle *_anchoredObject;
    long long _effectCount;
    long long _toLane;
    long long _angleOffset;
    long long _angleCount;
    NSSet *_roles;
    FFAnchoredSequence *_retainedSequence;
    NSDictionary *_audioComponentsPlaybackInfo;
}

+ (id)extensions;
+ (id)utis;
- (id)anchoredObject;
- (BOOL)writerIsWaiting;
- (void)_readUnlock;
- (void)_readLock;
- (void)_writeUnlock;
- (void)_writeLock;
- (id)displayName;
- (void)_setupSources;
- (void)dealloc;
- (long long)toLane;
- (long long)effectCount;
- (id)object;
- (id)initWithAnchoredObject:(id)arg1 effectCount:(long long)arg2 toLane:(long long)arg3 roles:(id)arg4 angleOffset:(long long)arg5 angleCount:(long long)arg6 audioComponentsPlaybackInfo:(id)arg7;

@end

