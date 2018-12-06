//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class FFSegmentStore, NSConditionLock;

__attribute__((visibility("hidden")))
@interface FFSegmentSample : NSOperation
{
    NSConditionLock *_lock;
    long long _offset;
    FFSegmentStore *_store;
    id _sample;
}

- (id)initWithOffset:(long long)arg1 store:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)waitForFinished;
- (id)sample;
- (void)cancel;
@property(readonly) long long offset; // @synthesize offset=_offset;

@end

