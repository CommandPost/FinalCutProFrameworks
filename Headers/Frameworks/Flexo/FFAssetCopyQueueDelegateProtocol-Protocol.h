//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FFAssetCopyQueue, FFAssetCopyRequest, NSArray;

@protocol FFAssetCopyQueueDelegateProtocol

@optional
- (void)taskFinished:(FFAssetCopyQueue *)arg1;
- (void)taskWasCancelled:(FFAssetCopyRequest *)arg1 queuedRequests:(NSArray *)arg2;
- (BOOL)canCancelTask;
@end

