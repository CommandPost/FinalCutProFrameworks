//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFBackgroundTaskTarget.h"

@class FFAnchoredObject, FFAudioMatchRequest, FFBackgroundTask, NSDictionary;

@interface FFAudioMatchTask : NSObject <FFBackgroundTaskTarget>
{
    FFAnchoredObject *_objectToModify;
    FFAudioMatchRequest *_pendingRequest;
    FFBackgroundTask *_backgroundTask;
    NSDictionary *_effectState;
    id _delegate;
}

@property(retain) id delegate; // @synthesize delegate=_delegate;
@property(retain) FFBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain) FFAudioMatchRequest *pendingRequest; // @synthesize pendingRequest=_pendingRequest;
@property(retain) FFAnchoredObject *objectToModify; // @synthesize objectToModify=_objectToModify;
- (id)projectsInUse;
- (id)assetRefsInUse;
- (void)kickoffBackgroundTask;
- (void)addRequest:(id)arg1;
- (void)_matchRunLoop:(id)arg1 onTask:(id)arg2;
- (void)match:(id)arg1 forPass:(int)arg2 onTask:(id)arg3;
- (void)_setMatchParameterOnChannelFolder:(id)arg1 templateLearn:(BOOL)arg2 materialLearn:(BOOL)arg3 materialMatch:(BOOL)arg4;
- (void)dealloc;
- (id)initWithObjectToModify:(id)arg1 withFirstRequest:(id)arg2;

@end

