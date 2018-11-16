//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredObject.h>

__attribute__((visibility("hidden")))
@interface FFAudioComponentSource : FFAnchoredObject
{
}

+ (id)backingAnchoredObjectsForComponentSources:(id)arg1;
+ (id)clipsFromAudioComponentSources:(id)arg1 copyClips:(BOOL)arg2 removeVideo:(BOOL)arg3;
+ (id)clipFromAudioComponentSource:(id)arg1 copyClip:(BOOL)arg2 removeVideo:(BOOL)arg3;
+ (id)parentClipsForAudioComponentSources:(id)arg1;
- (id)selfAsAnchoredObject;
- (void)removeChannel:(id)arg1;
- (BOOL)canRemoveChannel:(id)arg1;
- (BOOL)reorderChannel:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)canReorderChannel:(id)arg1;
- (BOOL)containsChannel:(id)arg1 associatedModelObject:(id)arg2;
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)inspectorTabIdentifiers;
- (id)inspectorTabClassNames;
- (id)inspectorIdentifier;
- (id)inspectorClassName;
- (id)audioInfoInspectorText;
- (CDStruct_1b6d18a9)unclippedStart;
- (CDStruct_e83c9415)unclippedRange;
- (double)audioSampleRate;
- (CDStruct_e83c9415)localToContainerTimeRange:(CDStruct_e83c9415)arg1 container:(id)arg2;
- (CDStruct_1b6d18a9)localToContainerTime:(CDStruct_1b6d18a9)arg1 container:(id)arg2;
- (CDStruct_e83c9415)containerToLocalTimeRange:(CDStruct_e83c9415)arg1 container:(id)arg2;
- (CDStruct_1b6d18a9)containerToLocalTime:(CDStruct_1b6d18a9)arg1 container:(id)arg2;
- (BOOL)audioClippedRangeValid;
- (CDStruct_e83c9415)audioClippedRange;
- (CDStruct_e83c9415)clippedRangeInContainerSpace:(id)arg1;
- (CDStruct_e83c9415)clippedRange;
- (id)videoProps;
- (id)sequence;
- (id)container;
- (id)timelineDisplayName;
- (id)timelineContainer;
- (int)timelineItemType;
- (id)anchoredTimelineItems;
- (int)timelineAVContainmentType;
- (void)passEffectNotificationUpChain:(id)arg1 userInfo:(id)arg2 informParents:(BOOL)arg3;
- (void)invalidateStreamRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)invalidateSampleRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)invalidateSourceRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (unsigned long long)validateAndRepair:(BOOL)arg1 report:(int)arg2 error:(id *)arg3;
- (id)audioComponentsLayoutMap;
- (id)audioComponentSources:(int)arg1;
- (void)demandAudioComponentSources:(int)arg1;
- (BOOL)hasActiveAudioComponentSources;
- (id)onSpine;
- (void)setCachedSortedLocalizedRoles:(id)arg1;
- (id)cachedSortedLocalizedRoles;
- (id)transitionTimelineItemNext;
- (id)transitionTimelineItemPrevious;
- (id)modelLockingObject;
- (id)trackType;
- (id)mdTargetForKey:(id)arg1;
- (id)transitionObjectRight;
- (id)transitionObjectLeft;
- (void)_updateTrimFlag;
- (void)_updateRetimingFlags;
- (unsigned int)aoFlagsMask;
- (id)newProvider;
- (long long)nativeAudioChannelCount:(int)arg1;
- (id)audioEffects;
- (id)videoEffects;
- (BOOL)isMultiAngleGap;
- (BOOL)isAudioComponentSource;
- (BOOL)isComponent;
- (BOOL)hasAudio;
- (BOOL)supportsRoles;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)releaseEffectStackFromPersisting;
- (void)setEffectStackAsPersisting;
- (void)addRole:(id)arg1;
- (void)setRole:(id)arg1;
- (id)demandEffectStack;
- (id)effectStack;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
- (BOOL)isEquivalentToComponentSource:(id)arg1;
- (unsigned int)numSourceChannels;
- (id)layoutItemKey;
- (id)layoutKey;
- (struct NSObject *)skimmableObject;
- (id)backingAnchoredObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setParentItem:(id)arg1;

@end

