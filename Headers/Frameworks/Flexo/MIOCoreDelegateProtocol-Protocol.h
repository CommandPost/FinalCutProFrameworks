//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSNotification;

@protocol MIOCoreDelegateProtocol

@optional
- (void)mioOutputDroppedFrames:(NSNotification *)arg1;
- (void)mioOutputEndOfData:(NSNotification *)arg1;
- (void)mioIngestError:(NSNotification *)arg1;
- (void)mioSegmentIngestDidComplete:(NSNotification *)arg1;
- (void)mioSegmentIngestDidBegin:(NSNotification *)arg1;
- (void)mioSegmentIngestLookingForMedia:(NSNotification *)arg1;
- (void)mioSegmentIngestWaitingForDevice:(NSNotification *)arg1;
- (void)mioSegmentIngestCueingDidBegin:(NSNotification *)arg1;
- (void)mioClipDidIngest:(NSNotification *)arg1;
- (void)mioClipWillIngest:(NSNotification *)arg1;
@end

