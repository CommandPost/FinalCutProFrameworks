//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKTranscodingOperationTranscodeOverrideDelegate.h"
#import "FFBackgroundTaskTarget.h"

@class CKTranscodingOperation, FFBackgroundTask, FFSharingSnapshot, NSConditionLock, NSString;

@interface FFBackgroundShareOperation : NSObject <FFBackgroundTaskTarget, CKTranscodingOperationTranscodeOverrideDelegate>
{
    FFBackgroundTask *_bgTask;
    CKTranscodingOperation *_transcodingOperation;
    FFSharingSnapshot *_sequenceSnapshot;
    NSConditionLock *_jobBusy;
    double _percentDone;
    NSString *_transcoderMessage;
    BOOL _doingDelegateTranscode;
    BOOL _cancelRequested;
}

+ (id)shareOperationWithBatch:(id)arg1 andSnapshot:(id)arg2;
+ (id)shareOperationWithBatch:(id)arg1;
@property BOOL cancelRequested; // @synthesize cancelRequested=_cancelRequested;
@property(retain) NSString *transcoderMessage; // @synthesize transcoderMessage=_transcoderMessage;
@property double percentDone; // @synthesize percentDone=_percentDone;
@property(retain) FFSharingSnapshot *snapshot; // @synthesize snapshot=_sequenceSnapshot;
@property(retain) CKTranscodingOperation *ckOperation; // @synthesize ckOperation=_transcodingOperation;
@property(retain) FFBackgroundTask *bgTask; // @synthesize bgTask=_bgTask;
- (id)transcodeSource:(id)arg1 withSetting:(id)arg2 toFile:(id)arg3;
- (id)message;
- (id)transcodeStateWithPercentDone:(double *)arg1;
- (void)cancelTranscode;
- (BOOL)canTranscodeSource:(id)arg1 withSetting:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)operation:(id)arg1 didFailWithError:(id)arg2;
- (void)operationStatusChanged:(id)arg1;
- (id)projectsInUse;
- (id)assetRefsInUse;
- (void)queueBackgroundTask;
- (void)canceledTask:(id)arg1;
- (void)performShareOperation:(id)arg1 task:(id)arg2;
- (void)dealloc;
- (id)initWithBatch:(id)arg1 andSnapshot:(id)arg2;

@end
