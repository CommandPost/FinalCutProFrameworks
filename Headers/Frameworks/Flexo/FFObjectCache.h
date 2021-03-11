//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFObjectCacheEntry, NSHashTable, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface FFObjectCache : NSObject
{
    NSRecursiveLock *_cacheLock;
    int _purgesInProgress;
    _Bool _respondToMemoryPressure;
    unsigned long long _currentSize;
    unsigned long long _setSize;
    unsigned long long _maxSize;
    unsigned long long _reservedMemory;
    unsigned long long _numberOfCalls;
    float _responseRate;
    float _decayRate;
    float _penalty;
    NSHashTable *_hashTable;
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _hashTableCallbacks;
    FFObjectCacheEntry *_localEntryForLookups;
    _Bool _isShuttingDown;
    NSObject<OS_dispatch_queue> *_maintQueue;
    unsigned int _unstartedAsyncOp;
    NSMutableDictionary *_groupInfos;
    float _syncPurgeThreshhold;
    int _ariadneID;
    NSString *_debugLabel;
}

+ (BOOL)recentlyUnderVMPressure;
+ (BOOL)currentlyUnderVMPressure;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property _Bool respondToMemoryPressure; // @synthesize respondToMemoryPressure=_respondToMemoryPressure;
- (void)setSynchronousPurgeThreshhold:(float)arg1;
- (void)reserveCacheMemory:(long long)arg1;
- (int)purgeCacheEntries:(id)arg1;
- (int)purgeCacheEntriesOperation:(id)arg1;
- (void)synchronousPurge;
- (void)startAsyncPurgeIfNeeded;
- (void)startPurgeIfNeeded:(_Bool)arg1;
- (id)newObjectCacheSummary;
- (void)clearCache;
- (id)copyFFImageForKey:(CDStruct_bdcb2b0d)arg1 cost:(double *)arg2;
- (id)copyFFImageForSegment:(CDStruct_bdcb2b0d)arg1 sampleNumber:(long long)arg2 cost:(double *)arg3;
- (void)removeObjectIfPurgeable:(CDStruct_bdcb2b0d)arg1;
- (void)removeObjectForKey:(CDStruct_bdcb2b0d)arg1;
- (id)copyObjectForKeyDontUpdateAccessTime:(CDStruct_bdcb2b0d)arg1 cost:(double *)arg2;
- (id)copyObjectForKey:(CDStruct_bdcb2b0d)arg1 cost:(double *)arg2;
- (id)copyObjectForKeyImpl:(CDStruct_bdcb2b0d)arg1 cost:(double *)arg2 updateLastAccess:(BOOL)arg3;
- (id)copyObjectForSegment:(CDStruct_bdcb2b0d)arg1 sampleNumber:(long long)arg2 cost:(double *)arg3;
- (int)replaceObjectWithKey:(CDStruct_bdcb2b0d)arg1 oldObj:(id)arg2 replacementObj:(id)arg3 size:(unsigned long long)arg4 cost:(double)arg5;
- (int)addObject:(id)arg1 cacheKey:(CDStruct_bdcb2b0d)arg2 size:(unsigned long long)arg3 cost:(double)arg4;
- (int)addObject:(id)arg1 cacheKey:(CDStruct_bdcb2b0d)arg2 size:(unsigned long long)arg3 cost:(double)arg4 retDidAddObject:(char *)arg5;
- (int)addObject:(id)arg1 forSegment:(CDStruct_bdcb2b0d)arg2 sampleNumber:(long long)arg3 size:(unsigned long long)arg4 cost:(double)arg5;
- (int)addObject:(id)arg1 forSegment:(CDStruct_bdcb2b0d)arg2 sampleNumber:(long long)arg3 size:(unsigned long long)arg4 cost:(double)arg5 retDidAddObject:(char *)arg6;
- (void)setCacheSize:(unsigned long long)arg1;
- (unsigned long long)getCacheSize;
- (unsigned long long)getCacheMemoryUsed;
- (void)shutdownCache;
- (unsigned long long)currentSize;
- (unsigned long long)reservedMemorySize;
- (void)dealloc;
- (id)initWithCacheSize:(double)arg1 label:(const char *)arg2;

@end

