//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FFPlayerDropTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_historyLock;
    struct list<CMTime, std::__1::allocator<CMTime>> _dropHistory;
    struct OpaqueCMTimebase *_timebase;
    int _warningLimit;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_consolidateLock;
    NSMutableArray *_consolidatedCallbackInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property int warningLimit; // @synthesize warningLimit=_warningLimit;
- (void)framesDropped:(CDStruct_1b6d18a9)arg1 count:(int)arg2 source:(id)arg3 sampleDur:(CDStruct_1b6d18a9)arg4 field:(unsigned int)arg5 rate:(float)arg6 asyncReportingBlock:(CDUnknownBlockType)arg7;
- (void)reset;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 warningLimit:(int)arg2;

@end

