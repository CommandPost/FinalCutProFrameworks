//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHGAsyncJob.h>

@class FFHGAsyncQueue, NSConditionLock, NSObject<HGRQCustomJobProtocol>;

@interface FFHGAsyncCustomJob : FFHGAsyncJob
{
    NSConditionLock *_state;
    FFHGAsyncQueue *_assignedQueue;
    struct HGRenderJob *_renderJob;
    NSObject<HGRQCustomJobProtocol> *_cbObj;
    int _priority;
}

- (_Bool)cancel;
- (_Bool)enqueueToRenderLocation:(int)arg1 preferredLocation:(int)arg2 priority:(int)arg3 serializeLimit:(int)arg4;
- (_Bool)enqueueToRenderLocation:(int)arg1 priority:(int)arg2;
- (void)_jobFinished;
- (void)_runCallback:(struct HGRenderer *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

