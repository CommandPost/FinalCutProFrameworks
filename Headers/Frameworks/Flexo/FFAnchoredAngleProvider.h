//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

#import "FFModelLocking.h"

@class FFAnchoredAngle, FFAnchoredSequence, NSSet;

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
    NSSet *_showOnlyObjects;
}

+ (id)utis;
+ (id)extensions;
- (id)initWithAnchoredObject:(id)arg1 effectCount:(long long)arg2 toLane:(long long)arg3 showOnlyObjects:(id)arg4 roles:(id)arg5 angleOffset:(long long)arg6 angleCount:(long long)arg7;
- (id)object;
- (long long)effectCount;
- (long long)toLane;
- (void)dealloc;
- (void)_setupSources;
- (id)displayName;
- (void)_writeLock;
- (void)_writeUnlock;
- (void)_readLock;
- (void)_readUnlock;
- (id)newSettingsModule;
- (id)anchoredObject;

@end
