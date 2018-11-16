//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface FFPlayerSchedTokenQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queueAccess;
    NSMutableArray *_toksToSchedule;
    NSObject<OS_dispatch_queue> *_processingQueue;
    _Bool _isShuttingDown;
    int _insertCounter;
}

- (void)waitForShutdownAck;
- (void)shutdown;
- (void)unscheduleAll;
- (void)addToken:(id)arg1;
- (void)_performScheduling;
- (void)dealloc;
- (id)init;
- (id)initWithQOS:(unsigned int)arg1 relative_pri:(int)arg2;

@end

