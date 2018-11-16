//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFTranscodingOperationQueue : NSObject
{
    NSMutableArray *_operations;
}

+ (id)mainQueue;
+ (void)releaseSharedInstance;
+ (id)keyPathsForValuesAffectingOperationCount;
- (id)init;
- (void)dealloc;
- (void)addOperation:(id)arg1;
- (void)removeOperation:(id)arg1;
- (id)operations;
- (unsigned long long)operationCount;
- (void)cancelAllOperations;
- (void)startObservingOperation:(id)arg1;
- (void)stopObservingOperation:(id)arg1;
- (void)operationDidFailNotification:(id)arg1;
- (void)operationDidFinishNotification:(id)arg1;
- (void)insertObject:(id)arg1 inOperationsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromOperationsAtIndex:(unsigned long long)arg1;

@end

