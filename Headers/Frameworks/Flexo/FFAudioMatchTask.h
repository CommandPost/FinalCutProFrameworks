//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFBackgroundTaskTarget-Protocol.h>

@class FFAnchoredObject, FFAudioMatchRequest, FFAudioUnitAnalyzingEffect, NSDictionary, NSMutableArray, NSMutableSet;

@interface FFAudioMatchTask : NSObject <FFBackgroundTaskTarget>
{
    FFAnchoredObject *_object;
    NSMutableArray *_pendingRequests;
    NSMutableSet *_cancelledRequests;
    FFAudioMatchRequest *_currentRequest;
    FFAudioMatchRequest *_currentObjectToMatchRequest;
    BOOL _taskRunning;
    BOOL _taskCancelled;
    CDUnknownBlockType _completionBlock;
    NSDictionary *_matchEffectStateForObject;
    FFAudioUnitAnalyzingEffect *_analyzedMatchEffect;
}

@property(readonly, nonatomic) FFAnchoredObject *object; // @synthesize object=_object;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)canceledTask:(id)arg1;
- (id)_taskObjects;
- (void)_backgroundTaskCompleted;
- (void)_dispatchBackgroundTask;
- (BOOL)_isCurrentRequestCancelled;
- (BOOL)_isRequestCancelled:(id)arg1;
- (id)popRequest;
- (void)_addRequest:(id)arg1;
- (void)_performCompletionBlock;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)isMatchingForEffectStack:(id)arg1;
- (void)setObjectToMatch:(id)arg1;
- (void)_matchRunLoop:(id)arg1 onTask:(id)arg2;
- (void)match:(id)arg1 forPass:(int)arg2 onTask:(id)arg3;
- (void)_setMatchParameterOnChannelFolder:(id)arg1 templateLearn:(BOOL)arg2 materialLearn:(BOOL)arg3 materialMatch:(BOOL)arg4;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

