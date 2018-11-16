//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredObject.h>

@class NSArray, NSMutableArray;

@interface FFAnchoredStack : FFAnchoredObject
{
    NSMutableArray *_stackItems;
    FFAnchoredObject *_activeVariant;
}

+ (id)copyClassDescription;
@property(retain, nonatomic) FFAnchoredObject *activeVariant; // @synthesize activeVariant=_activeVariant;
@property(retain, nonatomic) NSArray *stackItems; // @synthesize stackItems=_stackItems;
- (id)createUsedRangesMediaIdentifier;
- (BOOL)validateValue:(id *)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)mdTargetForKey:(id)arg1;
- (void)updateEffectiveDurationForMD5;
- (double)autoSlowRateInContainer:(id)arg1;
- (double)retimeRateForObject:(CDStruct_e83c9415)arg1;
- (id)audioChannelRoutingMap;
- (BOOL)removeAnchoredMarker:(id)arg1;
- (void)addAnchoredMarker:(id)arg1;
- (BOOL)hasFade:(BOOL)arg1;
- (void)setMixdownRoleGroupUID:(id)arg1;
- (id)mixdownRoleGroupUID;
- (void)setMixdownRoleGroup:(id)arg1;
- (id)mixdownRoleGroup;
- (id)anchoredObjectsForAudioComponentsLayoutKey:(id)arg1;
- (id)activeAudioComponentsLayoutKeys;
- (id)audioComponentsLayoutMap;
- (void)resolveAudioComponentRangesAgainstAudioRange;
- (id)audioComponentSources:(unsigned int)arg1 options:(unsigned int)arg2;
- (BOOL)hasActiveAudioComponentSources;
- (BOOL)supportsRoles;
- (id)rolesWithPlayEnable:(int)arg1;
- (BOOL)contributesToCompoundClip;
- (BOOL)isStack;
- (void)ensureUniqueDisplayNames:(id)arg1;
- (id)variantDisplayNames;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)sampleDuration;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
- (double)nativeAudioSampleRate;
- (double)videoAspectRatio;
- (unsigned int)nativeAudioChannelCount:(int)arg1;
- (void)setStartingTimecode:(CDStruct_1b6d18a9)arg1;
- (void)setVideoProps:(id)arg1;
- (id)videoProps;
- (void)setTimecodeDisplayDropFrame:(long long)arg1;
- (long long)timecodeDisplayDropFrame;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (CDStruct_1b6d18a9)editingFrameDuration;
- (CDStruct_1b6d18a9)timeOffset;
- (CDStruct_e83c9415)mediaRange;
- (id)newProviderWithOptions:(id)arg1;
- (id)newProviderWithEffectCount:(long long)arg1;
- (id)newProvider;
- (id)newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (CDStruct_1b6d18a9)localToRateConformedTime:(CDStruct_1b6d18a9)arg1 withTargetSampleDuration:(CDStruct_1b6d18a9)arg2;
- (BOOL)hasTrimEffect;
- (BOOL)hasRateConformScale;
- (BOOL)hasRateConform;
- (BOOL)hasArtisticRetime;
- (BOOL)canBeRetimed;
- (CDStruct_e83c9415)untimedAudioClippedRange;
- (CDStruct_e83c9415)untimedClippedRange;
- (CDStruct_e83c9415)untimedUnclippedRange;
- (CDStruct_e83c9415)untimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1;
- (BOOL)isRetimed;
- (void)setAudioLaneIndex:(long long)arg1;
- (void)setAnchoredLane:(long long)arg1;
- (CDStruct_1b6d18a9)childToParentOffsetForChildCachingSiblings:(id)arg1;
- (void)clearAudioClippedRange;
- (void)clearClippedRange;
- (BOOL)audioClippedRangeEndValidIncludeTransitions:(BOOL)arg1;
- (BOOL)audioClippedRangeStartValidIncludeTransitions:(BOOL)arg1;
- (BOOL)audioClippedRangeValid;
- (CDStruct_e83c9415)combinedAudioVideoClippedRange;
- (CDStruct_e83c9415)anchoredItemsRange;
- (CDStruct_1b6d18a9)unclippedStart;
- (CDStruct_e83c9415)unclippedRange;
- (void)setClippedRangeAudio:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)audioClippedRange;
- (void)setClippedRange:(CDStruct_e83c9415)arg1;
- (id)media;
- (CDStruct_e83c9415)clippedRange;
- (BOOL)hasInvalidClippedRange;
- (void)informParentEffectsChanged;
- (void)removeChannel:(id)arg1;
- (BOOL)canRemoveChannel:(id)arg1;
- (BOOL)reorderChannel:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)canReorderChannel:(id)arg1;
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (id)tabSplitIdentifiersForInspectorTabIdentifier:(id)arg1;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)classNameForInspectorTabIdentifier:(id)arg1;
- (id)inspectorTabIdentifiers;
- (id)inspectorIdentifier;
- (id)inspectorClassName;
- (BOOL)canBePlacedInSpine;
- (BOOL)audioPlayEnable;
- (BOOL)videoPlayEnable;
- (void)setPlayEnable:(int)arg1;
- (int)playEnable;
- (void)_clearDeferredUpdates;
- (void)_processDeferredUpdates;
- (BOOL)_deferUpdates;
- (void)_setDeferUpdates:(BOOL)arg1;
- (id)supportedLogProcessingModes;
- (BOOL)supportsLogProcessing;
- (id)supportedColorSpaceOverrides;
- (BOOL)supportsColorSpaceOverride;
- (BOOL)supportsAnamorphicFormat;
- (BOOL)supportsDropFrame;
- (int)multiAngleDetail;
- (BOOL)isComponent;
- (BOOL)isTrimmed;
- (BOOL)isCollection;
- (BOOL)isAudioOnlyCollection;
- (BOOL)isAudioOnlyClipOrCollection;
- (BOOL)isSpine;
- (void)wasAnchoredTo:(id)arg1;
- (BOOL)wantsGammaCompositing;
- (BOOL)wantsAutoKenBurns;
- (BOOL)isInCropOrKenBurnsCropMode;
- (BOOL)isMultiAngle;
- (int)overrideAV;
- (id)referencedPrimary;
- (BOOL)isTimeMarker;
- (BOOL)isMediaRef;
- (BOOL)isReferenceClip;
- (BOOL)isAngle;
- (BOOL)isFreezeFrame;
- (BOOL)isCompoundClip;
- (BOOL)isGap;
- (BOOL)isPlaceholder;
- (BOOL)isTitle;
- (BOOL)isGenerator;
- (BOOL)isPSD;
- (BOOL)isStill;
- (id)trackType;
- (id)effect;
- (id)audioComponentEffect;
- (id)videoComponentEffect;
- (id)audioEffectsForIdentifier:(int)arg1;
- (id)localAudioEffects;
- (id)videoEffects;
- (BOOL)hasVideoIncludingVariants;
- (BOOL)hasAudioIncludingVariants;
- (BOOL)hasVideo;
- (BOOL)supportsAudio;
- (BOOL)hasAudio;
- (BOOL)removeObjectFromContainedItems:(id)arg1;
- (void)removeObjectFromContainedItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inContainedItemsAtIndex:(unsigned long long)arg2;
- (void)addObjectVideoEffectsToArrayWithOptions:(unsigned int)arg1 array:(id)arg2;
- (id)descendentCompositedObjects;
- (id)containedItemAtTime:(CDStruct_1b6d18a9)arg1;
- (id)containedItems;
- (id)firstAudioAnchoredComponent;
- (id)firstVideoAnchoredComponent;
- (void)_enumerateDescendentAnchoredObjectsWithOptions:(unsigned int)arg1 includeAnchored:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3 descend:(char *)arg4 stop:(char *)arg5;
- (id)descendentCompositedObjects:(BOOL)arg1 containerTimeRange:(CDStruct_e83c9415)arg2 useAudioRange:(BOOL)arg3 container:(id)arg4;
- (void)_collectDescendentCompositedObject:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 intoArray:(id)arg3 useAudioRange:(BOOL)arg4 container:(id)arg5;
- (void)_descendentAnchoredObject:(id)arg1 includingSelf:(BOOL)arg2;
- (void)_descendentAnchoredComponent:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 useAudioRange:(BOOL)arg3 intoArray:(id)arg4 container:(id)arg5 includeAnchored:(BOOL)arg6;
- (id)allContainedItems;
- (BOOL)removeAudioIncludingAnchoredItems:(BOOL)arg1;
- (BOOL)removeVideoIncludingAnchoredItems:(BOOL)arg1;
- (id)onScreenControls;
- (BOOL)removeAnchoredObject:(id)arg1;
- (struct PC_CMTimePair)anchorPair;
- (void)setAnchorPair:(struct PC_CMTimePair)arg1 alignedToParentForRetiming:(id)arg2;
- (void)setAnchorPair:(struct PC_CMTimePair)arg1 alignedToParent:(id)arg2;
- (void)setAnchorPair:(struct PC_CMTimePair)arg1;
- (void)removeAllAnchoredItemsObjects;
- (void)revealInFinder:(id)arg1;
- (BOOL)canRevealInFinder;
- (void)removeAnchoredItemsObject:(id)arg1;
- (BOOL)hasAnchoredItemsObject:(id)arg1;
- (void)addAnchoredItemsObject:(id)arg1;
- (id)markerAnchoredItems;
- (id)nonMarkerAnchoredItems;
- (id)anchoredItems;
- (void)clearparentOffsets;
- (void)clearCachedValues;
- (CDStruct_e83c9415)containerEffectiveRangeForChild:(id)arg1 container:(id)arg2;
- (void)justSetActiveVariant:(id)arg1;
- (void)_conformActiveVariantAlignment;
- (void)removeObjectFromStackItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inStackItemsAtIndex:(unsigned long long)arg2;
- (id)_describeAdditionalObjectsWithIndent:(long long)arg1 recurse:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldEncodeAnchoredItems;
- (int)anchoredObjectUIType;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1;
- (id)type;
- (BOOL)resolveLaneConflictsForActiveVariantWithError:(id *)arg1;
- (id)nextActiveVariant;
- (id)nextActiveVariantAllowNil;
- (id)previousActiveVariant;
- (BOOL)makeVariantActive:(id)arg1 withError:(id *)arg2;
- (BOOL)actionDeleteActiveVariantMakeNextActive:(id *)arg1;
- (BOOL)actionSelectNextVariantWithError:(id *)arg1 loopAround:(BOOL)arg2;
- (BOOL)actionSelectPreviousVariantWithError:(id *)arg1 loopAround:(BOOL)arg2;
- (BOOL)actionPrivate_SetVariantUsingBlock:(CDUnknownBlockType)arg1 actionName:(id)arg2 error:(id *)arg3;
- (id)_newRoleChangeOperationForSetVariant;

@end

