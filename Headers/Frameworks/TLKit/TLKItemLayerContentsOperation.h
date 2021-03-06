//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <TLKit/TLKOperationPipingDestination-Protocol.h>
#import <TLKit/TLKOperationPipingSource-Protocol.h>

@class PCChangeLog, TLKLayoutDatabase, TLKTimelineView;

@interface TLKItemLayerContentsOperation : NSOperation <TLKOperationPipingSource, TLKOperationPipingDestination>
{
    PCChangeLog *_inputChangeLog;
    PCChangeLog *_outputChangeLog;
    TLKLayoutDatabase *_database;
    TLKTimelineView *_timelineView;
}

@property(nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
@property(retain, nonatomic) TLKLayoutDatabase *database; // @synthesize database=_database;
@property(readonly) PCChangeLog *outputChangeLog; // @synthesize outputChangeLog=_outputChangeLog;
@property(copy) PCChangeLog *inputChangeLog; // @synthesize inputChangeLog=_inputChangeLog;
- (void)main;
- (id)_expandItemsToItemFragments:(id)arg1;
- (id)_allItemFragmentsWithUpdatedItems:(id)arg1;
- (id)modifiedItemFragments;
- (void)_findThroughEditDependenciesForItems:(id)arg1 intoSet:(id)arg2;
- (void)dealloc;
- (id)init;

@end

