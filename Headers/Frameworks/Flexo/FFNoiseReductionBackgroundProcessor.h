//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFBackgroundTaskTarget-Protocol.h>

@class FFBackgroundTask, NSCondition;

__attribute__((visibility("hidden")))
@interface FFNoiseReductionBackgroundProcessor : NSObject <FFBackgroundTaskTarget>
{
    struct list<std::__1::pair<FFMD5, void *>, std::__1::allocator<std::__1::pair<FFMD5, void *>>> _todo;
    int _awaitingU;
    int _awaitingFlatten;
    int _awaitingVPA;
    NSCondition *_cond;
    FFBackgroundTask *_uImgTask;
    FFBackgroundTask *_flatImgTask;
    FFBackgroundTask *_dTask[1];
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (id)copyJobsForLibrary:(void *)arg1;
- (id)copyFirstIncompleteWorkForLibrary:(void *)arg1;
- (void)addTask:(CDStruct_bdcb2b0d)arg1 forLibrary:(void *)arg2;
- (void)tokenStateChangeAdjustAwaitingUImg:(int)arg1 awaitingFlatten:(int)arg2 awaitingVPA:(int)arg3;
- (void)doDenoise:(id)arg1 onTask:(id)arg2;
- (void)doFlatImage:(id)arg1 onTask:(id)arg2;
- (void)doUImage:(id)arg1 onTask:(id)arg2;
- (_Bool)processNextJob:(int)arg1;
- (void)dealloc;
- (id)init;

@end

