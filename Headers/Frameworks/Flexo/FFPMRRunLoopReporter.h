//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFPMRRunLoopReporter : NSObject
{
    struct __CFRunLoopObserver *mObserver;
    id <FFPMRRunLoopDelegate> mDelegate;
}

- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)callback:(unsigned long long)arg1;

@end

