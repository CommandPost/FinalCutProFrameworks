//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FFPMRRunLoopDelegate;

__attribute__((visibility("hidden")))
@interface FFPMRRunLoopReporter : NSObject
{
    struct __CFRunLoopObserver *mObserver;
    id <FFPMRRunLoopDelegate> mDelegate;
}

- (void)callback:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

