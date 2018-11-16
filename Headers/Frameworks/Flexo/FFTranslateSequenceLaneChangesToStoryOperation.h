//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class FFOrganizedLaneManager, FFStoryTimelinePresentation, NSDictionary;

__attribute__((visibility("hidden")))
@interface FFTranslateSequenceLaneChangesToStoryOperation : NSOperation
{
    FFStoryTimelinePresentation *_storyPresentation;
    FFOrganizedLaneManager *_laneManager;
    NSDictionary *_laneChanges;
    NSDictionary *_itemChanges;
}

@property(copy, nonatomic) NSDictionary *itemChanges; // @synthesize itemChanges=_itemChanges;
@property(copy, nonatomic) NSDictionary *laneChanges; // @synthesize laneChanges=_laneChanges;
@property(retain, nonatomic) FFOrganizedLaneManager *laneManager; // @synthesize laneManager=_laneManager;
@property(retain, nonatomic) FFStoryTimelinePresentation *storyPresentation; // @synthesize storyPresentation=_storyPresentation;
- (BOOL)shouldMarkLaneAsDeleted:(id)arg1;
- (void)_markEmptyCaptionLanesAsDeletedInChangeLog:(id)arg1;
- (void)_logNotification:(id)arg1 forItems:(id)arg2;
- (void)_logNotification:(id)arg1 forLanes:(id)arg2;
- (void)_doMonolithicTranslationThatNeedsRefactoring;
- (void)main;
- (void)dealloc;
- (id)initWithStoryPresentation:(id)arg1 laneChanges:(id)arg2 itemChanges:(id)arg3;

@end

