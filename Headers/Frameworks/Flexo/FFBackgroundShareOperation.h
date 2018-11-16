//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKTranscodingOperationTranscodeOverrideDelegate.h"
#import "FFBackgroundTaskTarget.h"

@class CKTranscodingOperation, FFBackgroundShareOperationUserNotificationGroup, FFBackgroundTask, FFSharingSnapshot, NSConditionLock, NSError, NSString;

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
    NSError *_shareError;
    BOOL _notifySuccess;
    BOOL _addToShareHistory;
    BOOL _useTranscodeStatusForDisplayName;
    id <FFBackgroundShareOperationDelegate> _delegate;
    FFBackgroundShareOperationUserNotificationGroup *_group;
}

+ (id)shareOperationWithBatch:(id)arg1 andSnapshot:(id)arg2;
+ (BOOL)isSynchronousSource:(id)arg1 videoCodecType:(id)arg2;
+ (id)keyPathsForValuesAffectingBackgroundTask;
+ (id)shareOperationWithBatch:(id)arg1;
@property(retain) FFBackgroundShareOperationUserNotificationGroup *group; // @synthesize group=_group;
@property BOOL useTranscodeStatusForDisplayName; // @synthesize useTranscodeStatusForDisplayName=_useTranscodeStatusForDisplayName;
@property BOOL addToShareHistory; // @synthesize addToShareHistory=_addToShareHistory;
@property BOOL notifySuccess; // @synthesize notifySuccess=_notifySuccess;
@property(retain) NSError *shareError; // @synthesize shareError=_shareError;
@property id <FFBackgroundShareOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL cancelRequested; // @synthesize cancelRequested=_cancelRequested;
@property(retain) NSString *transcoderMessage; // @synthesize transcoderMessage=_transcoderMessage;
@property double percentDone; // @synthesize percentDone=_percentDone;
@property(retain) FFSharingSnapshot *snapshot; // @synthesize snapshot=_sequenceSnapshot;
@property(retain) CKTranscodingOperation *ckOperation; // @synthesize ckOperation=_transcodingOperation;
@property(retain) FFBackgroundTask *bgTask; // @synthesize bgTask=_bgTask;
- (BOOL)isSynchronousSource:(id)arg1 videoCodecType:(id)arg2;
- (id)_runExporters:(id)arg1;
- (id)transcodeSource:(id)arg1 withSetting:(id)arg2 toFile:(id)arg3;
- (id)message;
- (id)transcodeStateWithPercentDone:(double *)arg1;
- (double)taskWeightForTranscodeSource:(id)arg1 withSetting:(id)arg2;
- (void)cancelTranscode;
- (BOOL)canTranscodeSource:(id)arg1 withSetting:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)operation:(id)arg1 didFailWithError:(id)arg2;
- (void)operationStatusChanged:(id)arg1;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)queueBackgroundTaskWithDependency:(id)arg1;
- (void)queueBackgroundTask;
- (void)canceledTask:(id)arg1;
- (void)deliverUserNotification:(id)arg1;
- (id)shareVideoPath;
- (BOOL)didShareCompleteSuccessfully;
- (BOOL)didCancel;
- (Class)userNotificationFactoryClass;
- (id)newUserNotificationFactory;
- (id)newUserNotificationForSingleItemCase;
- (id)newUserNotificationForSingleItemCaseIfAppropriate;
- (id)newUserNotificationForGroupCaseIfAppropriate;
- (id)newUserNotificationIfAppropriate;
- (void)notifyUserIfAppropriate;
- (void)notifyGroupOfCancellation;
- (void)notifyGroupOfCompletion;
- (void)performShareOperation:(id)arg1 task:(id)arg2;
@property(readonly) FFBackgroundTask *backgroundTask;
- (void)dealloc;
- (id)initWithBatch:(id)arg1 andSnapshot:(id)arg2;

@end

