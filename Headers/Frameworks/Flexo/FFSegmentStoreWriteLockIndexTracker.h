//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FFSegmentStoreWriteLockIndexTracker : NSObject
{
    NSMutableDictionary *_theCache;
    NSObject<OS_dispatch_queue> *_needsUpdateLock;
    NSMutableDictionary *_needsUpdateList;
}

- (id)copyAndPopKeysNeedingUpdate;
- (_Bool)recordOffsetNeedingUpdate:(unsigned long long)arg1 forKey:(id)arg2;
- (_Bool)flushAll:(BOOL)arg1;
- (void)invalKey:(id)arg1;
- (_Bool)setIndexSet:(id)arg1 forKey:(id)arg2;
- (BOOL)hasIndex:(long long)arg1 forKey:(id)arg2 retNeedsCheck:(_Bool *)arg3;
- (id)copyIndexSetForKey:(id)arg1;
- (void)checkWriteLockScope;
- (void)checkReadLockScope;
- (void)dealloc;
- (id)init;

@end

