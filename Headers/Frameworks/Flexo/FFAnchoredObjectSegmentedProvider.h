//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

#import "FFModelLocking.h"

@class FFAnchoredObject<FFSegmentedSourceProtocol>, FFAnchoredSequence, NSSet;

__attribute__((visibility("hidden")))
@interface FFAnchoredObjectSegmentedProvider : FFProvider <FFModelLocking>
{
    FFAnchoredObject<FFSegmentedSourceProtocol> *_anchoredObject;
    long long _effectCount;
    long long _angle;
    long long _toLane;
    FFAnchoredSequence *_retainedSequence;
    NSSet *_showOnlyObjects;
    NSSet *_roles;
}

+ (id)utis;
+ (id)extensions;
- (id)initWithAnchoredObject:(id)arg1 effectCount:(long long)arg2 angle:(long long)arg3 toLane:(long long)arg4 showOnlyObjects:(id)arg5 roles:(id)arg6;
- (id)object;
- (long long)effectCount;
- (long long)angle;
- (long long)toLane;
- (void)dealloc;
- (void)_setupSources;
- (id)displayName;
- (void)_writeLock;
- (void)_writeUnlock;
- (void)_readLock;
- (void)_readUnlock;
- (id)newSettingsModule;
- (id)newConfirmSettingsModule;
- (id)anchoredObject;

@end

