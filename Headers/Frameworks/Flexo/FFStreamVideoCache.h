//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFStreamVideoCache : NSObject
{
    NSMutableArray *_list;
    long long _size;
    NSLock *_cacheLock;
}

- (void)addStream:(id)arg1;
- (id)findStream:(id)arg1 flags:(long long)arg2 context:(id)arg3 options:(id)arg4;
- (id)copyStreamIfFound:(id)arg1 flags:(long long)arg2 context:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (id)initWithLimit:(long long)arg1;

@end

