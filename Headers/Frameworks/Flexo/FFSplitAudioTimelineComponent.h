//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredObject;

@interface FFSplitAudioTimelineComponent : NSObject
{
    FFAnchoredObject *_timelineItem;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
@property(nonatomic) FFAnchoredObject *timelineItem; // @synthesize timelineItem=_timelineItem;
- (BOOL)isStorylineClip;
- (BOOL)isAudioOnly;
- (BOOL)isVideoOnly;
- (BOOL)isPrimaryComponent;
- (id)primaryItemComponent;
- (id)anchoredToStoryItem;
- (id)storylineClip;
- (id)parentStoryItem;
- (BOOL)isSecondaryComponent;
- (unsigned long long)contentsMask;
- (unsigned long long)storyItemSubType;
- (unsigned long long)storyItemType;
- (id)valueForUndefinedKey:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setDisabledRanges:(id)arg1;
- (id)disabledRanges;
- (long long)verticalIndex;
- (void)setVerticalIndex:(long long)arg1;
- (void)setAnchoredLane:(long long)arg1;
- (long long)anchoredLane;
- (long long)actualAnchoredLane;
- (long long)timelineVerticalIndex;
- (id)storyline;
- (id)markerAnchoredItems;
- (id)transitionObjectRight;
- (id)transitionObjectLeft;
- (BOOL)isTransition;
- (CDStruct_e83c9415)clippedRangeInContainerSpace:(id)arg1;
- (BOOL)audioClippedRangeValid;
- (id)parentItem;
- (BOOL)hasAnchoredItemsObject:(id)arg1;
- (BOOL)isAudioComponentSource;
- (id)container;
- (id)onSpine;
- (id)rolesWithPlayEnable:(int)arg1;
- (id)library;
- (id)audioRoleIdentifiers;
- (BOOL)supportsRoles;
- (BOOL)isAnchored;
- (int)timelineItemType;
- (void)_writeUnlock:(const char *)arg1;
- (void)_writeLock:(const char *)arg1 file:(const char *)arg2 line:(unsigned int)arg3;
- (void)_readUnlock:(const char *)arg1;
- (void)_readUnlock;
- (void)_readLock;
- (void)_readLock:(const char *)arg1 file:(const char *)arg2 line:(unsigned int)arg3;
- (void)setTimeRangeInAsset:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)timeRangeInAsset;
- (BOOL)isMultiAngle;
- (BOOL)isSpine;
- (CDStruct_e83c9415)timelineRange;
- (CDStruct_e83c9415)timelineRangeInContainerSpace:(id)arg1;
- (CDStruct_e83c9415)timeRangeInContainerSpace:(id)arg1;
- (int)cachedAVContainmentType;
- (id)usedRangesMediaIdentifier;
- (id)displayName;
- (BOOL)shouldApplyImplicitAudioTransitionToLeftEdge:(BOOL)arg1 timeRange:(CDStruct_e83c9415 *)arg2;
- (BOOL)isAngle;
- (BOOL)isMarker;
- (BOOL)isGap;
- (BOOL)isStill;
- (BOOL)isGenerator;
- (CDStruct_e83c9415)clippedAudioRangeInContainerSpace:(id)arg1;
- (unsigned long long)storylineRegion;
- (CDStruct_e83c9415)unclippedRangeInContainerSpace:(id)arg1;
- (CDStruct_e83c9415)localToContainerTimeRange:(CDStruct_e83c9415)arg1 container:(id)arg2;
- (CDStruct_e83c9415)containerToLocalTimeRange:(CDStruct_e83c9415)arg1 container:(id)arg2;
- (CDStruct_e83c9415)combinedAudioVideoClippedRangeInContainerSpace:(id)arg1;
- (CDStruct_e83c9415)timeRange;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (id)debugDescription;
- (BOOL)isAudioSummary;
- (void)trimLeadingEdgeByOffset:(CDStruct_1b6d18a9)arg1;

@end

