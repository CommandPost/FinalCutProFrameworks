//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface FFPlayerDropTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_historyLock;
    struct list<CMTime, std::allocator<CMTime>> _dropHistory;
    struct OpaqueCMTimebase *_timebase;
    int _warningLimit;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_consolidateLock;
    NSMutableArray *_consolidatedCallbackInfo;
}

@property int warningLimit; // @synthesize warningLimit=_warningLimit;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)framesDropped:(CDStruct_1b6d18a9)arg1 count:(int)arg2 source:(id)arg3 sampleDur:(CDStruct_1b6d18a9)arg4 field:(unsigned int)arg5 rate:(float)arg6 asyncReportingBlock:(CDUnknownBlockType)arg7;
- (void)reset;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 warningLimit:(int)arg2;

@end

