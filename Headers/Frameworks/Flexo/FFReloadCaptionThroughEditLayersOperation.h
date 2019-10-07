//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "TLKOperationPipingDestination.h"

@class PCChangeLog, TLKTimelineView;

__attribute__((visibility("hidden")))
@interface FFReloadCaptionThroughEditLayersOperation : NSOperation <TLKOperationPipingDestination>
{
    PCChangeLog *_inputChangeLog;
    TLKTimelineView *_timelineView;
    id <FFStoryline> _primaryStoryline;
}

+ (id)operationQueue;
@property(retain, nonatomic) id <FFStoryline> primaryStoryline; // @synthesize primaryStoryline=_primaryStoryline;
@property(retain, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
@property(copy) PCChangeLog *inputChangeLog; // @synthesize inputChangeLog=_inputChangeLog;
- (id)newPipeCaptionThroughEditsOperationWithFindOperation:(id)arg1 updateOperation:(id)arg2;
- (id)newUpdateThroughEditIndicatorsOperation;
- (BOOL)changeLogRecordIsChangedDataSyncItem:(id)arg1;
- (id)findChangedClipsFromChangeLog;
- (id)newFindCaptionThroughEditsOperation;
- (BOOL)changeLogContainsCaptions;
- (void)throwExceptionIfRequiredPropertiesNotSet;
- (void)main;
- (void)dealloc;

@end

