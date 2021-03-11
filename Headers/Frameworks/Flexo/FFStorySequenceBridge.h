//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFOrganizedLaneObserving-Protocol.h>

@class FFAnchoredSequence, FFOrganizedLaneManager, FFStoryTimelinePresentation, NSDictionary, NSString;

@interface FFStorySequenceBridge : NSObject <FFOrganizedLaneObserving>
{
    BOOL _isObservingSequence;
    FFStoryTimelinePresentation *_storyPresentation;
    FFAnchoredSequence *_sequence;
    NSDictionary *_sequenceChangeDictionary;
    FFOrganizedLaneManager *_laneManager;
}

@property(retain, nonatomic) FFOrganizedLaneManager *laneManager; // @synthesize laneManager=_laneManager;
@property(nonatomic) BOOL isObservingSequence; // @synthesize isObservingSequence=_isObservingSequence;
@property(copy, nonatomic) NSDictionary *sequenceChangeDictionary; // @synthesize sequenceChangeDictionary=_sequenceChangeDictionary;
@property(retain, nonatomic) FFAnchoredSequence *sequence; // @synthesize sequence=_sequence;
@property(readonly, nonatomic) FFStoryTimelinePresentation *storyPresentation; // @synthesize storyPresentation=_storyPresentation;
- (void)postSequenceChanged:(id)arg1;
- (void)notifyLaneChanges:(id)arg1 itemChanges:(id)arg2;
- (void)audioVideoRoleEnablesHaveChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mergeChangesForKey:(id)arg1 fromDictionary:(id)arg2 toDictionary:(id)arg3;
- (void)mergeSequenceChangesFromDictionary:(id)arg1;
- (BOOL)sequenceChangeDictionaryContainsModifiedClipsNestedInsideCompoundClips;
- (BOOL)needsWorkaroundForRadar68942864;
- (void)_notifySequenceEdited:(id)arg1;
- (void)stopListeningToSequence;
- (void)startListeningToSequence;
- (void)dealloc;
- (id)initWithStoryPresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

