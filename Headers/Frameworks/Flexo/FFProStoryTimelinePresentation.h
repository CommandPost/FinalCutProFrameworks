//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFStoryTimelinePresentation.h>

@class FFTimelineItemAppearanceTable, NSArray;

@interface FFProStoryTimelinePresentation : FFStoryTimelinePresentation
{
    long long _organizedMode;
    FFTimelineItemAppearanceTable *_precisionEditorAppearanceTable;
    NSArray *_oldAudioLanes;
}

- (BOOL)timelineIndexSimpleClipMode;
- (id)timelineItemAppearanceTable;
- (id)layerForLane:(id)arg1;
- (void)storyPresentationDidChange:(id)arg1;
- (id)verticalIndexValueForItemComponent:(id)arg1;
- (BOOL)canOpenSummariesForClip:(id)arg1;
- (BOOL)canCloseSummariesForClip:(id)arg1;
- (BOOL)canCloseComponentsForClip:(id)arg1;
- (BOOL)isMultiAngle;
- (long long)layoutRegionForItemComponent:(id)arg1;
- (id)presentedLaneForItemComponent:(id)arg1;
- (id)_findPresentedLaneForItemComponent:(id)arg1;
- (id)presentedStorylineForItemComponent:(id)arg1;
- (BOOL)shouldArrangeItemInConnectedStoryline:(id)arg1;
- (BOOL)shouldArrangeClipsInStoryline:(id)arg1;
- (BOOL)shouldArrangeComponentOutsideOfConnectedStoryline:(id)arg1;
- (BOOL)isAnyRoleInRoleListShowingComponents:(id)arg1;
- (BOOL)isAnyRoleInRoleListArranged:(id)arg1;
- (BOOL)isAnyRoleInMultiRoleListArranged:(id)arg1;
- (BOOL)shouldHidePrimaryComponentForItem:(id)arg1;
- (BOOL)shouldRedirectContainerForItemComponent:(id)arg1;
- (BOOL)shouldArrangeComponentsForClip:(id)arg1;
- (BOOL)clipHasMixedAudioComponent:(id)arg1;
- (BOOL)itemHasMultipleRoles:(id)arg1;
- (id)emptyAudioLanesInLanes:(id)arg1;
- (id)orderedChildLanesForLane:(id)arg1;
- (id)emptyLanesPredicate;
- (id)_emptyAudioLanesPredicate;
- (id)intrinsicLaneForItem:(id)arg1;
- (id)_orderedTopLevelLanes;
- (id)_itemLaneUIDsToFlatten;
- (void)addAudioSummaryIfOpenForItem:(id)arg1 toArray:(id)arg2;
- (BOOL)_showsAudioSummaryOrComponentsForItem:(id)arg1;
- (id)itemComponentsForItem:(id)arg1;
@property(nonatomic) long long organizedMode;
- (void)toggleAllAudioLanes;
- (void)setShowsComponentsState:(BOOL)arg1 forLanes:(id)arg2 wasArranged:(BOOL)arg3;
- (void)setExpandedState:(BOOL)arg1 forLanes:(id)arg2;
- (void)_setExpandedState:(BOOL)arg1 forLanes:(id)arg2;
- (id)captionLanesForCaptionRole:(id)arg1;
- (BOOL)hasVisibleCaptionLanes;
- (id)visibleCaptionLanes;
- (id)allCaptionLanes;
- (void)_populateAppearanceRulesPrecisionEditor;
- (void)_populateAppearanceRulesStandard;
- (void)_loadItemAppearanceRules;
- (void)dealloc;
- (id)initWithRootItem:(id)arg1 inSequence:(id)arg2;

@end

