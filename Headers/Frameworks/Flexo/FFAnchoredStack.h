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
    BOOL _anchoredObjectsFromVariant;
}

+ (id)copyClassDescription;
- (id)type;
- (id)initWithDisplayName:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (int)anchoredObjectUIType;
- (BOOL)shouldEncodeAnchoredItems;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_describeAdditionalObjectsWithIndent:(long long)arg1 recurse:(BOOL)arg2;
- (void)insertObject:(id)arg1 inStackItemsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromStackItemsAtIndex:(unsigned long long)arg1;
@property(nonatomic) BOOL anchoredObjectsFromVariant; // @synthesize anchoredObjectsFromVariant=_anchoredObjectsFromVariant;
- (void)_conformActiveVariantAlignment;
- (BOOL)anchoredObjectFromVariant;
- (void)justSetActiveVariant:(id)arg1;
@property(retain, nonatomic) FFAnchoredObject *activeVariant; // @synthesize activeVariant=_activeVariant;
- (CDStruct_e83c9415)containerEffectiveRangeForChild:(id)arg1 container:(id)arg2;
- (void)clearCachedValues;
- (id)anchoredItems;
- (void)addAnchoredItemsObject:(id)arg1;
- (BOOL)hasAnchoredItemsObject:(id)arg1;
- (void)removeAnchoredItemsObject:(id)arg1;
- (BOOL)canRevealInFinder;
- (void)revealInFinder:(id)arg1;
- (void)removeAllAnchoredItemsObjects;
- (void)setAnchorPair:(struct FigTimePair)arg1;
- (void)setAnchorPair:(struct FigTimePair)arg1 alignedToParent:(id)arg2;
- (void)setAnchorPair:(struct FigTimePair)arg1 alignedToParentForRetiming:(id)arg2;
- (struct FigTimePair)anchorPair;
- (BOOL)removeAnchoredObject:(id)arg1;
- (id)onScreenControls;
- (id)_containedItemsAllVariants;
- (void)_descendentAnchoredComponent:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 useAudioRange:(BOOL)arg3 intoArray:(id)arg4 container:(id)arg5 includeAnchored:(BOOL)arg6;
- (void)_descendentAnchoredObject:(id)arg1 includingSelf:(BOOL)arg2;
- (void)_collectDescendentCompositedObject:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 intoArray:(id)arg3 useAudioRange:(BOOL)arg4 container:(id)arg5;
- (id)descendentCompositedObjects:(BOOL)arg1 containerTimeRange:(CDStruct_e83c9415)arg2 useAudioRange:(BOOL)arg3 container:(id)arg4;
- (id)firstVideoAnchoredComponent;
- (id)firstAudioAnchoredComponent;
- (id)containedItems;
- (id)topLevelContainedItems;
- (id)topLevelAllContainedItems;
- (id)containedItemAtTime:(CDStruct_1b6d18a9)arg1;
- (id)descendentCompositedObjects;
- (void)insertObject:(id)arg1 inContainedItemsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromContainedItemsAtIndex:(unsigned long long)arg1;
- (BOOL)removeObjectFromContainedItems:(id)arg1;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (BOOL)hasAudioIncludingVariants;
- (BOOL)hasVideoIncludingVariants;
- (id)audioEffects;
- (id)videoEffects;
- (id)videoEffect;
- (id)audioEffect;
- (id)primaryEffectStack;
- (id)secondaryEffectStack;
- (id)trackType;
- (BOOL)isStill;
- (BOOL)isGenerator;
- (BOOL)isTitle;
- (BOOL)isPlaceholder;
- (BOOL)isGap;
- (BOOL)isCompoundClip;
- (BOOL)isInCropOrKenBurnsCropMode;
- (BOOL)isSpine;
- (BOOL)isAudioOnlyClipOrCollection;
- (BOOL)isAudioOnlyCollection;
- (BOOL)isCollection;
- (BOOL)isComponent;
- (int)multiAngleDetail;
- (BOOL)supportsDropFrame;
- (void)_setDeferUpdates:(BOOL)arg1;
- (BOOL)_deferUpdates;
- (void)_processDeferredUpdates;
- (void)_clearDeferredUpdates;
- (int)playEnable;
- (void)setPlayEnable:(int)arg1;
- (BOOL)videoPlayEnable;
- (BOOL)audioPlayEnable;
- (BOOL)canBePlacedInSpine;
- (id)inspectorClassName;
- (id)inspectorIdentifier;
- (id)inspectorTabClassNames;
- (id)inspectorTabIdentifiers;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (BOOL)canReorderChannel:(id)arg1;
- (BOOL)reorderChannel:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)canRemoveChannel:(id)arg1;
- (void)removeChannel:(id)arg1;
- (void)informParentEffectsChanged;
- (CDStruct_e83c9415)clippedRange;
- (void)setClippedRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)audioClippedRange;
- (void)setClippedRangeAudio:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)unclippedRange;
- (CDStruct_1b6d18a9)unclippedStart;
- (CDStruct_e83c9415)anchoredItemsRange;
- (CDStruct_e83c9415)combinedAudioVideoClippedRange;
- (BOOL)audioClippedRangeValid;
- (BOOL)audioClippedRangeStartValid;
- (BOOL)audioClippedRangeEndValid;
- (void)clearAudioClippedRange;
- (CDStruct_1b6d18a9)childToParentOffsetForChild:(id)arg1;
- (BOOL)isRetimed;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)untimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)untimedUnclippedRange;
- (CDStruct_e83c9415)untimedClippedRange;
- (CDStruct_e83c9415)untimedAudioClippedRange;
- (BOOL)canBeRetimed;
- (BOOL)hasArtisticRetime;
- (BOOL)hasRateConform;
- (BOOL)hasRateConformScale;
- (CDStruct_1b6d18a9)localToRateConformedTime:(CDStruct_1b6d18a9)arg1 withTargetSampleDuration:(CDStruct_1b6d18a9)arg2;
- (id)newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (id)newProvider;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2;
- (id)newProviderWithEffectCount:(long long)arg1;
- (CDStruct_e83c9415)mediaRange;
- (CDStruct_1b6d18a9)timeOffset;
- (CDStruct_1b6d18a9)editingFrameDuration;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (long long)timecodeDisplayDropFrame;
- (void)setTimecodeDisplayDropFrame:(long long)arg1;
- (id)videoProps;
- (void)setVideoProps:(id)arg1;
- (void)setStartingTimecode:(CDStruct_1b6d18a9)arg1;
- (long long)audioChannelCount;
- (double)videoAspectRatio;
- (double)audioSampleRate;
- (CDStruct_60067b7e)audioMD5:(int)arg1;
- (CDStruct_1b6d18a9)sampleDuration;
- (CDStruct_1b6d18a9)duration;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (BOOL)isStack;
- (void)addRole:(id)arg1;
- (void)resetRoles;
- (id)roles;
- (BOOL)supportsRoles;
- (id)mdTargetForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)validateValue:(id *)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSArray *stackItems; // @synthesize stackItems=_stackItems;

@end

