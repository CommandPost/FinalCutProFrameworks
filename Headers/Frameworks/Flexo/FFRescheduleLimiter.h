//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFOperationQueue, FFRescheduleOperation, NSLock, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface FFRescheduleLimiter : NSObject
{
    FFOperationQueue *_queueToKick;
    NSOperationQueue *_privateQueue;
    NSLock *_lock;
    FFRescheduleOperation *_lastHighPriority;
    FFRescheduleOperation *_lastLowPriority;
}

- (id)initWithFFQueue:(id)arg1 privateQueue:(id)arg2;
- (void)dealloc;
- (void)_releaseFinished;
- (void)generateHighPriorityKick:(id)arg1;
- (void)generateLowPriorityKick:(id)arg1;

@end

