//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FFAnchoredSequence, FFStoryTimelinePresentation, NSDictionary, NSMutableSet, NSSet, PCChangeLog;

__attribute__((visibility("hidden")))
@interface FFTranslateSequenceItemChangesToStoryOperation : NSOperation
{
    NSDictionary *_sequenceChangeDictionary;
    PCChangeLog *_storyChangeLog;
    FFAnchoredSequence *_sequence;
    id _rootItem;
    FFStoryTimelinePresentation *_storyTimelinePresentation;
    NSSet *_rawAddedItems;
    NSSet *_rawModifiedItems;
    NSSet *_rawRemovedItems;
    NSSet *_rawRippledItems;
    NSMutableSet *_addedItems;
    NSMutableSet *_modifiedItems;
    NSMutableSet *_removedItems;
    NSMutableSet *_rippledItems;
    NSSet *_previouslyLoadedTimelineItems;
}

@property(copy, nonatomic) NSSet *previouslyLoadedTimelineItems; // @synthesize previouslyLoadedTimelineItems=_previouslyLoadedTimelineItems;
@property(retain, nonatomic) NSMutableSet *rippledItems; // @synthesize rippledItems=_rippledItems;
@property(retain, nonatomic) NSMutableSet *removedItems; // @synthesize removedItems=_removedItems;
@property(retain, nonatomic) NSMutableSet *modifiedItems; // @synthesize modifiedItems=_modifiedItems;
@property(retain, nonatomic) NSMutableSet *addedItems; // @synthesize addedItems=_addedItems;
@property(retain, nonatomic) NSSet *rawRippledItems; // @synthesize rawRippledItems=_rawRippledItems;
@property(retain, nonatomic) NSSet *rawRemovedItems; // @synthesize rawRemovedItems=_rawRemovedItems;
@property(retain, nonatomic) NSSet *rawModifiedItems; // @synthesize rawModifiedItems=_rawModifiedItems;
@property(retain, nonatomic) NSSet *rawAddedItems; // @synthesize rawAddedItems=_rawAddedItems;
@property(readonly, nonatomic) FFStoryTimelinePresentation *storyTimelinePresentation; // @synthesize storyTimelinePresentation=_storyTimelinePresentation;
@property(readonly, nonatomic) id rootItem; // @synthesize rootItem=_rootItem;
@property(readonly, nonatomic) FFAnchoredSequence *sequence; // @synthesize sequence=_sequence;
@property(readonly, nonatomic) PCChangeLog *storyChangeLog; // @synthesize storyChangeLog=_storyChangeLog;
@property(readonly, nonatomic) NSDictionary *sequenceChangeDictionary; // @synthesize sequenceChangeDictionary=_sequenceChangeDictionary;
- (void)_commitChangesToOutputChangeLog;
- (void)_addLayoutDependenciesForUpdatedItems;
- (void)_pruneSecondaryComponentsFromChangeLists;
- (void)_markThroughEditCandidatesAsModified;
- (void)_remapMediaComponentsAndOtherNestedObjects;
- (id)_findConnectedStorylineItemsPresentedInPrimaryStorylineForItems:(id)arg1;
- (void)_recursivelyAddAnchorsFromItem:(id)arg1 toSet:(id)arg2;
- (id)_findLayoutDependenciesForItems:(id)arg1;
- (void)_markAnchorsOfModifiedItemsAsPositionChanged;
- (void)_markAudioComponentsPresentedOutsideOfConnectedStorylinesAsModified;
- (void)_markItemsOfUpdatedAudioComponentsAsModified;
- (void)_updateChangeDictionariesForMultiangle;
- (void)_filterOrphanedStackedAnchorsForModifiedItems:(id)arg1 removedAnchors:(id *)arg2 addedAnchors:(id *)arg3;
- (void)_applySpecialRulesForAuditionChanges;
- (id)sequenceTracks;
- (BOOL)_isVisibleStorylineItem:(id)arg1;
- (void)_translateRemovedItems;
- (void)_translateModifiedItems;
- (void)_translateAddedItems;
- (void)_processTracks;
- (void)main;
- (void)dealloc;
- (id)initWithChangeDictionary:(id)arg1 forSequence:(id)arg2 rootItem:(id)arg3 storyPresentation:(id)arg4 toChangeLog:(id)arg5 timelineDelegate:(id)arg6;

@end

