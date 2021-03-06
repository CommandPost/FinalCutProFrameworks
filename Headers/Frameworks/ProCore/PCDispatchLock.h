//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProCore/PCDispatchLocking-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PCDispatchLock : NSObject <PCDispatchLocking>
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

- (id)synchronizationQueue;
- (void)lockForWritingUsingBlock:(CDUnknownBlockType)arg1;
- (void)lockForReadingUsingBlock:(CDUnknownBlockType)arg1;
- (void)requireWriteLock;
- (void)requireReadLock;
- (void)dealloc;
- (id)newDispatchQueueLabel;
- (id)newDispatchQueueWithConcurrentReadAccess:(BOOL)arg1;
- (id)initForConcurrentReadAccess:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

