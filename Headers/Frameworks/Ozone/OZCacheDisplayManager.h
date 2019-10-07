//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer, OZCanvasModule;

@interface OZCacheDisplayManager : NSObject
{
    OZCanvasModule *_pCanvas;
    struct OZFrameSet *_pFrames;
    NSTimer *_pTimer;
    NSMutableArray *_pDisplays;
    CDStruct_1b6d18a9 _checkTime;
    BOOL _isObserver;
    BOOL _grabbingLocks;
    struct PCMutex _cacheLocksMutex;
    struct map<CMTime, std::__1::pair<PCHash128, PCNSRef<id>>, std::__1::less<CMTime>, std::__1::allocator<std::__1::pair<const CMTime, std::__1::pair<PCHash128, PCNSRef<id>>>>> _cacheLocks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearBitmapLocks;
- (void)addBitmapLock:(const CDStruct_1b6d18a9 *)arg1 hash:(const struct PCHash128 *)arg2 lock:(const PCNSRef_32654a09 *)arg3;
- (BOOL)isCached:(CDStruct_1b6d18a9)arg1;
- (void)notify:(unsigned int)arg1;
- (void)timerAction:(id)arg1;
- (void)checkSomeFrames:(BOOL)arg1;
- (void)reacquireCacheLocks;
- (void)surrenderCacheLocks;
- (void)stopTimer;
- (void)resumeTimer;
- (void)startTimer;
- (void)removeFromOZObserver;
- (void)addToOZObserver;
- (void)updateSetup;
- (const struct OZFrameSet *)getFrames;
- (void)clearCached;
- (void)addCachedStart:(const CDStruct_1b6d18a9 *)arg1 end:(const CDStruct_1b6d18a9 *)arg2;
- (void)addCachedRange:(const struct PCTimeRange *)arg1;
- (void)tellDisplaysToUpdate;
- (void)removeDisplay:(id)arg1;
- (void)addDisplay:(id)arg1;
- (void)dealloc;
- (id)initWithCanvas:(id)arg1;

@end

