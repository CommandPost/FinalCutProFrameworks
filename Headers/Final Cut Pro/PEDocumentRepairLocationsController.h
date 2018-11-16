//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface PEDocumentRepairLocationsController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    struct PCProcrastinatedDispatch_t _dispatch;
    BOOL _validatePending;
}

+ (void)initialize;
+ (void)checkAndRepairLocations;
+ (id)defaultController;
- (void)notifyKeyWindowChanged:(id)arg1;
- (void)notifyAppActivated:(id)arg1;
- (void)notifyDocumentAdded:(id)arg1;
- (void)validateLocations:(id)arg1 description:(id)arg2 canCancel:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)checkAndRepairLocationsForLibrary:(id)arg1 description:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)checkAndRepairLocationsForLibrary:(id)arg1;
- (void)checkAndRepairLocations;
- (id)copyLocationsForLibrary:(id)arg1;
- (void)dealloc;
- (id)init;

@end

