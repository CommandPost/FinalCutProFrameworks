//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFBackgroundTaskTarget.h"

@class FFBackgroundLoadRequest, FFBackgroundTask, NSConditionLock, NSMutableArray, NSRecursiveLock;

@interface FFBackgroundLoadManager : NSObject <FFBackgroundTaskTarget>
{
    NSMutableArray *_requests;
    FFBackgroundLoadRequest *_inFlightRequest;
    NSConditionLock *_inFlightRequestBlocker;
    NSRecursiveLock *_requestsLock;
    FFBackgroundTask *_task;
}

+ (id)taskSerializationGroup;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)cancelRequestsUsingFilterBlock:(CDUnknownBlockType)arg1;
- (void)_internalCancelRequestsUsingFilterBlock:(CDUnknownBlockType)arg1;
- (void)moveRequestToFrontOfQueue:(id)arg1;
- (void)enqueueRequest:(id)arg1;
- (void)_waitForBGTaskToFinish;
- (void)_cancelBGTask;
- (void)_restartBackgroundTask;
- (int)backgroundTaskType;
- (id)newBackgroundTask;
- (void)_backgroundTask:(id)arg1 onTask:(id)arg2;
- (id)taskLoadingFormatString;
- (void)dealloc;
- (id)init;

@end

