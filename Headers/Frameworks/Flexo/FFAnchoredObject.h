//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "FFAnchoredParentProtocol.h"
#import "FFAssetContainerProtocol.h"
#import "FFDataModelProtocol.h"
#import "FFEffectContainerProtocol.h"
#import "FFInspectableObject.h"
#import "FFInspectorChannelDataSource.h"
#import "FFInspectorTabDataSource.h"
#import "FFMD5Protocol.h"
#import "FFMetadataProtocol.h"
#import "FFSkimmableProtocol.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class FFVideoProps, NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface FFAnchoredObject : FFBaseDSObject <NSCoding, NSCopying, FFDataModelProtocol, FFSkimmableProtocol, FFAnchoredParentProtocol, FFMetadataProtocol, FFInspectableObject, FFInspectorTabDataSource, FFInspectorChannelDataSource, FFMD5Protocol, FFAssetContainerProtocol, FFEffectContainerProtocol>
{
    NSString *_displayName;
    id _parentItem;
    struct FigTimePair _anchorPair;
    CDStruct_e83c9415 _clippedRange;
    CDStruct_e83c9415 _audioClippedRange;
    NSMutableSet *_anchoredItems;
    NSMutableDictionary *_metadata;
    int _playEnable;
    CDStruct_1b6d18a9 _localToParentOffset;
    CDStruct_e83c9415 _clippedRangeInParentSpace;
    FFAnchoredObject *_transitionObjectLeft;
    FFAnchoredObject *_transitionObjectRight;
    int _anchoredLane;
    unsigned int _aoFlags;
    unsigned int _aoFlagsMask;
    int _cachedAVContainmentType;
    int _cacheAVSplitOpen;
    NSArray *_cachedSortedLocalizedRoles;
    NSSet *_cachedAssets;
}

+ (id)copyClassDescription;
+ (id)newExtendedSourceWithSource:(id)arg1 unclippedRangeRequired:(CDStruct_e83c9415)arg2 identifier:(id *)arg3;
- (id)type;
- (id)init;
- (id)initWithDisplayName:(const id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldEncodeAnchoredItems;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithoutAnchoredItems;
- (id)_describeAdditionalObjectsWithIndent:(long long)arg1 recurse:(BOOL)arg2;
- (id)descriptionWithIndent:(long long)arg1 recurse:(BOOL)arg2;
- (id)description;
- (id)desc;
- (id)displayName;
- (id)angleID;
- (void)justSetTheDisplayName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)displayFormat;
- (void)resetRoles;
- (void)addRole:(id)arg1;
- (id)roles;
- (BOOL)supportsRoles;
- (id)identifier;
- (id)mediaIdentifier;
- (CDStruct_60067b7e)audioMD5:(int)arg1;
- (id)describeArray:(id)arg1 withIndent:(long long)arg2 recurse:(BOOL)arg3;
- (id)describeSet:(id)arg1 withIndent:(long long)arg2 recurse:(BOOL)arg3;
- (void)addAnchoredObjectForParentObserving:(id)arg1 includingObject:(BOOL)arg2;
- (void)removeAnchoredObjectFromParentObserving:(id)arg1 includingObject:(BOOL)arg2;
- (long long)anchoredLane;
- (void)setAnchoredLane:(long long)arg1;
- (void)addAnchoredItemsObject:(id)arg1;
- (id)trackType;
- (void)removeAnchoredItemsObject:(id)arg1;
- (BOOL)hasAnchoredItemsObject:(id)arg1;
- (void)removeAllAnchoredItemsObjects;
- (id)anchoredItemsNotIncludingMarkers;
- (BOOL)removeAudioOrVideo:(BOOL)arg1 includingAnchoredItems:(BOOL)arg2;
@property(nonatomic) struct FigTimePair anchorPair; // @synthesize anchorPair=_anchorPair;
- (CDStruct_1b6d18a9)_sampleDurationForContainerOfParent:(id)arg1 hasVideo:(char *)arg2;
- (struct FigTimePair)_conformAnchorPairTimescale:(struct FigTimePair)arg1 forParent:(id)arg2;
- (BOOL)_anchorPairIsAligned:(struct FigTimePair)arg1 forParent:(id)arg2;
- (struct FigTimePair)_alignAnchorPair:(struct FigTimePair)arg1 forParent:(id)arg2 forRetiming:(BOOL)arg3;
- (struct FigTimePair)_computeAlignedAnchorPair:(struct FigTimePair)arg1 alignedToParent:(id)arg2 forRetiming:(BOOL)arg3;
- (void)setAnchorPair:(struct FigTimePair)arg1 alignedToParent:(id)arg2;
- (void)setAnchorPair:(struct FigTimePair)arg1 alignedToParentForRetiming:(id)arg2;
- (BOOL)removeAnchoredObject:(id)arg1;
- (long long)actualAnchoredLane;
- (long long)getFirstSetAnchoredLaneValueInParentsAndSelf:(id)arg1;
- (long long)getFirstSetAnchoredLaneValueInParentsAndSelfWithValidLane:(id)arg1;
@property(nonatomic) id parentItem; // @synthesize parentItem=_parentItem;
- (void)clearCachedValues;
- (void)clearCalculatedVideoProps;
- (void)clearCachedAVContainmentType;
- (void)informParentContainedItemsChanged:(BOOL)arg1;
- (void)informParentIsCompoundClipChanged;
- (void)informParentEffectsChanged;
- (void)informParentRolesWillChange;
- (void)informParentRolesDidChange;
- (void)_setLocalToParentOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)localToParentOffset;
- (CDStruct_1b6d18a9)parentToLocalOffset;
- (CDStruct_1b6d18a9)localToContainerOffset:(id)arg1;
- (CDStruct_1b6d18a9)childToParentOffsetForChild:(id)arg1;
- (CDStruct_1b6d18a9)localToParentTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)parentToLocalTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)localToGlobalTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)localToRateConformedTime:(CDStruct_1b6d18a9)arg1 withTargetSampleDuration:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)localToContainerTime:(CDStruct_1b6d18a9)arg1 container:(id)arg2;
- (CDStruct_1b6d18a9)globalToLocalTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)containerToLocalTime:(CDStruct_1b6d18a9)arg1 container:(id)arg2;
- (CDStruct_1b6d18a9)containerToLocalTimeIgnoreRounding:(CDStruct_1b6d18a9)arg1 container:(id)arg2;
- (CDStruct_e83c9415)containerToLocalTimeRange:(CDStruct_e83c9415)arg1 container:(id)arg2;
- (CDStruct_e83c9415)localToParentTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)parentToLocalTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)localToGlobalTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)localToContainerTimeRange:(CDStruct_e83c9415)arg1 container:(id)arg2;
- (CDStruct_e83c9415)globalToLocalTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_1b6d18a9)anchorFromOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)clippedRangeInParentSpace;
- (CDStruct_e83c9415)clippedRangeInGlobalSpace;
- (CDStruct_e83c9415)clippedRangeInContainerSpace:(id)arg1;
- (CDStruct_e83c9415)unclippedRangeInContainerSpace:(id)arg1;
- (CDStruct_e83c9415)clippedAudioRangeInContainerSpace:(id)arg1;
- (CDStruct_e83c9415)combinedAudioVideoClippedRangeContainerSpace:(id)arg1;
- (CDStruct_e83c9415)clippedRange;
- (void)setClippedRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)clippedRangeAudio;
- (CDStruct_e83c9415)audioClippedRange;
- (CDStruct_e83c9415)combinedAudioVideoClippedRange;
- (void)setClippedRangeAudio:(CDStruct_e83c9415)arg1;
- (void)setAudioClippedRange:(CDStruct_e83c9415)arg1;
- (void)setAudioClippedRangeNoReset:(CDStruct_e83c9415)arg1;
- (BOOL)audioClippedRangeValid;
- (BOOL)audioClippedRangeStartValid;
- (BOOL)audioClippedRangeEndValid;
- (void)clearAudioClippedRange;
- (CDStruct_e83c9415)unclippedRange;
- (CDStruct_1b6d18a9)unclippedStart;
- (CDStruct_e83c9415)untimedUnclippedRange;
- (CDStruct_1b6d18a9)convertTime:(CDStruct_1b6d18a9)arg1 toContainer:(id)arg2;
- (CDStruct_1b6d18a9)convertTime:(CDStruct_1b6d18a9)arg1 fromContainer:(id)arg2;
- (CDStruct_e83c9415)timelineRange;
- (CDStruct_e83c9415)anchoredItemsRange;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)transitionAmountFromLeft:(id)arg1;
- (CDStruct_1b6d18a9)transitionAmountFromRight:(id)arg1;
- (void)normalizeAnchorsOutsideTransitionHandles;
- (id)itemsAtTime:(CDStruct_1b6d18a9)arg1 iterationFlags:(int)arg2;
- (id)itemsIntersectingRange:(CDStruct_e83c9415)arg1 iterationFlags:(int)arg2;
- (id)itemsAtTime:(CDStruct_1b6d18a9)arg1 ofItemTypes:(id)arg2 iterationFlags:(int)arg3;
- (id)itemsIntersectingRange:(CDStruct_e83c9415)arg1 ofItemTypes:(id)arg2 iterationFlags:(int)arg3;
- (id)anchoredItemsAtTime:(CDStruct_1b6d18a9)arg1;
- (id)anchoredItemsAtTime:(CDStruct_1b6d18a9)arg1 ofItemTypes:(id)arg2;
- (id)anchoredItemsIntersectingRange:(CDStruct_e83c9415)arg1 ofItemTypes:(id)arg2;
- (id)anchoredItemsWithRange:(CDStruct_e83c9415)arg1 ofItemTypes:(id)arg2;
- (CDStruct_e83c9415)localEffectiveRange;
- (BOOL)canContainObject:(id)arg1;
- (id)container;
- (id)containers;
- (id)rootContainer;
- (CDStruct_1b6d18a9)componentTimeFromEditTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)editTimeFromComponentTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) int playEnable; // @synthesize playEnable=_playEnable;
- (BOOL)videoPlayEnable;
- (BOOL)audioPlayEnable;
- (BOOL)objectInContainedItems:(id)arg1;
- (id)containedItems;
- (id)topLevelContainedItems;
- (id)topLevelAllContainedItems;
- (void)passEffectNotificationUpChain:(id)arg1 userInfo:(id)arg2 informParents:(BOOL)arg3;
- (void)invalidateSourceRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)invalidateSampleRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)invalidateStreamRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (void)invalidateSourceRangeAndEffectCachesForSequenceFormatChange;
- (id)containedItemAtTime:(CDStruct_1b6d18a9)arg1;
- (void)actionBegin:(id)arg1;
- (void)actionBegin:(id)arg1 animationHint:(id)arg2 deferUpdates:(BOOL)arg3;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
- (void)actionBeginSetMetadataValue;
- (BOOL)actionEndSetMetadataValueWithError:(id *)arg1;
- (void)notifyAnchoredObjectRemovedFromSequence:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)mdTargetForKey:(id)arg1;
- (void)mdSetValue:(id)arg1 forKey:(id)arg2;
- (id)mdValueForKey:(id)arg1;
- (id)activeVariant;
- (void)setActiveVariant:(id)arg1;
- (id)metadataRoles;
- (id)metadataRoleSets;
- (id)timecodeWithTime:(CDStruct_1b6d18a9)arg1;
- (id)metadataMediaStart;
- (id)metadataMediaEnd;
- (id)metadataMediaDuration;
- (int)_temporalResolutionForEdits:(id)arg1;
- (BOOL)validateMetadataSelectionStart:(id *)arg1 error:(id *)arg2;
- (void)setMetadataSelectionStart:(id)arg1;
- (id)metadataSelectionStart;
- (BOOL)validateMetadataSelectionEnd:(id *)arg1 error:(id *)arg2;
- (void)setMetadataSelectionEnd:(id)arg1;
- (id)metadataSelectionEnd;
- (BOOL)validateMetadataSelectionDuration:(id *)arg1 error:(id *)arg2;
- (void)setMetadataSelectionDuration:(id)arg1;
- (id)metadataSelectionDuration;
- (id)metadataAudioChannelCount;
- (id)metadataAudioChannelConfig;
- (id)availableMultiAngleObjects;
- (id)availableMultiAngleIDs;
- (id)multiAngleObjectForAngleID:(id)arg1;
- (id)metadataEffectNames;
- (id)metadataNotes;
- (id)metadataKeywords;
- (id)facesRect;
- (struct CGRect)facesRectAsNSRect;
- (id)validateFacesRect:(id)arg1;
- (void)setMetadataFacesRect:(id)arg1;
- (BOOL)validateMetadataItem:(id)arg1;
- (id)videoAngle;
- (id)audioAngle;
- (void)setVideoAngle:(id)arg1;
- (void)setAudioAngle:(id)arg1;
- (id)videoAngleName;
- (id)audioAngleName;
- (id)getObjectUnderPlayheadForMultiCam:(CDStruct_1b6d18a9)arg1 showOnlyObject:(id)arg2;
- (BOOL)AVSplitOpen;
- (void)setAVSplitOpen:(BOOL)arg1;
- (id)onScreenControls;
- (BOOL)isObjectInNonMonitoredVideoAngle;
- (id)inspectorClassName;
- (id)inspectorIdentifier;
- (id)inspectorTabClassNames;
- (id)inspectorTabIdentifiers;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (BOOL)containsChannel:(id)arg1;
- (BOOL)canReorderChannel:(id)arg1;
- (BOOL)reorderChannel:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)canRemoveChannel:(id)arg1;
- (void)removeChannel:(id)arg1;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (BOOL)hasDefinedVideoRate;
- (BOOL)hasVideoIncludingVariants;
- (BOOL)hasAudioIncludingVariants;
- (id)audioEffects;
- (id)videoEffects;
- (id)videoEffect;
- (id)audioEffect;
- (id)primaryEffectStack;
- (id)secondaryEffectStack;
- (BOOL)_calcHasArtisticRetime;
- (BOOL)_calcHasRateConform;
- (BOOL)_calcHasRateConformScale;
- (void)_updateRetimingFlags;
- (void)_ensureUntimedUnclippedRangeIsValid;
- (void)_updateRetimingFlagsForModifiedEffect:(id)arg1;
- (void)_effectWasAdded:(id)arg1;
- (void)_effectWasModified:(id)arg1;
- (void)_effectWillBeRemoved:(id)arg1;
- (void)_effectWasRemoved:(id)arg1;
- (void)conformToVideoProps:(id)arg1;
- (void)conformToVideoProps:(id)arg1 forceNoRateConformScale:(BOOL)arg2;
- (BOOL)isInCropOrKenBurnsCropMode;
- (BOOL)isInOrganizer;
- (BOOL)isStill;
- (BOOL)isTransition;
- (BOOL)isMarker;
- (BOOL)isGenerator;
- (BOOL)isTitle;
- (BOOL)isPlaceholder;
- (BOOL)isGap;
- (BOOL)isMultiAngleGap;
- (BOOL)isAdjustment;
- (BOOL)isCompoundClip;
- (BOOL)isSpine;
- (BOOL)isMultiAngle;
- (BOOL)isAngle;
- (BOOL)isReference;
- (BOOL)isAudioOnlyClipOrCollection;
- (BOOL)isAudioOnlyCollection;
- (BOOL)isAudioOnlyCollectionForEdits:(id)arg1;
- (BOOL)isGroup;
- (BOOL)isStack;
- (BOOL)isCollection;
- (BOOL)isComponent;
- (BOOL)isMediaComponent;
- (BOOL)isPSD;
- (BOOL)supportsDropFrame;
- (BOOL)isPullingSourceFromBelowForLeft;
- (BOOL)isPullingSourceFromBelowForRight;
- (int)multiAngleDetail;
- (void)_setDeferUpdates:(BOOL)arg1;
- (BOOL)_deferUpdates;
- (void)_processDeferredUpdates;
- (void)_clearDeferredUpdates;
- (int)anchoredObjectUIType;
- (int)_aoFlag:(int)arg1;
- (void)_aoFlag:(int)arg1 enabled:(BOOL)arg2;
- (id)containedComponents;
- (BOOL)canBePlacedInSpine;
- (BOOL)supportsTransitions;
- (BOOL)canClippedItemRangeOnChildCausesRipple:(id)arg1;
- (BOOL)canClippedRangeChangeCausesRipple;
- (id)lanes;
- (void)returnContainedComponentsIn:(id)arg1;
- (id)firstAnchoredComponent;
- (id)firstVideoAnchoredComponent;
- (id)firstAudioAnchoredComponent;
- (id)sequence;
- (id)mediaVideoProps;
- (double)videoAspectRatio;
- (long long)audioChannelCount:(int)arg1;
- (long long)audioChannelCount;
- (double)audioSampleRate;
- (id)audioChannelRoutingMap;
- (void)setAudioChannelRoutingMap:(id)arg1;
- (void)_collectDescendentCompositedObject:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 intoArray:(id)arg3 useAudioRange:(BOOL)arg4 container:(id)arg5;
- (id)descendentCompositedObjects:(BOOL)arg1 containerTimeRange:(CDStruct_e83c9415)arg2 useAudioRange:(BOOL)arg3 container:(id)arg4;
- (id)descendentCompositedObjects;
- (void)_descendentAnchoredComponent:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 useAudioRange:(BOOL)arg3 intoArray:(id)arg4 container:(id)arg5 includeAnchored:(BOOL)arg6;
- (id)descendentAnchoredComponents:(BOOL)arg1;
- (id)descendentAnchoredComponents:(BOOL)arg1 includeAnchored:(BOOL)arg2;
- (id)descendentAnchoredComponents:(BOOL)arg1 containerTimeRange:(CDStruct_e83c9415)arg2 useAudioRange:(BOOL)arg3 container:(id)arg4;
- (void)_descendentAnchoredObject:(id)arg1 includingSelf:(BOOL)arg2;
- (id)descendentAnchoredObjectsIncludingSelf:(BOOL)arg1;
- (id)descendentAnchoredObjects;
- (long long)compareAnchoredObjectForStartTime:(id)arg1;
- (long long)compareAnchoredObjectForLane:(id)arg1;
- (id)newProvider;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2 roles:(id)arg3 angleOffset:(long long)arg4 angleCount:(long long)arg5;
- (id)newProviderWithEffectCount:(long long)arg1;
- (id)newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (id)newCompositedSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 clippedByContainer:(BOOL)arg6 container:(id)arg7 bgSource:(id)arg8 bgOffset:(CDStruct_1b6d18a9)arg9 bgIdentifier:(id)arg10 bgRange:(CDStruct_e83c9415)arg11 numberOfRows:(long long)arg12 numberOfCols:(long long)arg13 angle:(long long)arg14 roles:(id)arg15 angleOffset:(long long)arg16 angleCount:(long long)arg17;
- (CDStruct_e83c9415)mediaRange;
- (CDStruct_1b6d18a9)timeOffset;
- (CDStruct_1b6d18a9)editingFrameDuration;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (long long)timecodeDisplayDropFrame;
- (void)setTimecodeDisplayDropFrame:(long long)arg1;
@property(retain, nonatomic) FFVideoProps *videoProps;
- (void)setStartingTimecode:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)sampleDuration;
- (int)_resolveTemporalResolution:(int)arg1;
- (CDStruct_1b6d18a9)sampleDurationForTemporalResolutionMode:(int)arg1;
- (BOOL)timeOnSampleBoundary:(CDStruct_1b6d18a9)arg1 temporalResolutionMode:(int)arg2;
- (BOOL)floorTimeToSampleBoundary:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)floorTime:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)ceilingTime:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)floorTowardsZeroTime:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)roundOutTimeRange:(CDStruct_e83c9415 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)roundInTimeRange:(CDStruct_e83c9415 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (id)mediaRefs;
- (id)mediaRefsIncludingAnchored:(BOOL)arg1;
- (id)mediaRefsIncludingAnchored:(BOOL)arg1 activeOnly:(BOOL)arg2;
- (void)addAssetsToSet:(id)arg1;
- (id)assets;
- (id)assetsIncludingAnchored:(BOOL)arg1;
- (id)assetsIncludingAnchored:(BOOL)arg1 activeOnly:(BOOL)arg2;
- (void)_assets:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3;
- (void)addAssetRefsToSet:(id)arg1;
- (id)assetRefs;
- (id)assetRefsIncludingAnchored:(BOOL)arg1;
- (id)assetRefsIncludingAnchored:(BOOL)arg1 activeOnly:(BOOL)arg2;
- (void)_assetRefs:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3;
- (void)addClipRefsToSet:(id)arg1;
- (id)clipRefs;
- (id)clipRefsIncludingAnchored:(BOOL)arg1;
- (id)clipRefsIncludingAnchored:(BOOL)arg1 activeOnly:(BOOL)arg2;
- (void)_clipRefs:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3;
- (id)fileURLs:(int)arg1;
- (id)fileURLs:(int)arg1 includeAnchored:(BOOL)arg2;
- (id)fileURLs:(int)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3;
- (void)_fileURLs:(id)arg1 repChoice:(int)arg2 includeAnchored:(BOOL)arg3 activeOnly:(BOOL)arg4;
- (void)_addUserEffectsFromEffectStack:(id)arg1 toArray:(id)arg2;
- (id)effects;
- (id)_shallowEffects;
- (void)_addIntrinsicEffectsFromEffectStack:(id)arg1 toArray:(id)arg2;
- (id)intrinsicEffects;
- (id)previousItem:(id)arg1;
- (id)nextItem:(id)arg1;
- (id)transitionObjectLeft;
- (id)transitionObjectRight;
- (void)setTansitionObjectRightNoInvals:(id)arg1;
- (void)setTansitionObjectLeftNoInvals:(id)arg1;
- (void)setTransitionObjectLeft:(id)arg1;
- (void)setTransitionObjectRight:(id)arg1;
- (void)resetTransitionObjectLeft:(id)arg1;
- (void)resetTransitionObjectRight:(id)arg1;
- (void)removeAnyTransitionRelationshipsForSelfOnLeftAndRight:(BOOL)arg1 right:(BOOL)arg2;
- (void)removeAnyTransitionRelationshipsForSelfOnLeftAndRightNoInval:(BOOL)arg1 right:(BOOL)arg2;
- (void)removeAnyTransitionRelationshipsForSelfOnLeft;
- (void)removeAnyTransitionRelationshipsForSelfOnRight;
- (BOOL)canFormATransitionWithObject:(id)arg1;
- (void)addAnyTransitionRelationshipsForObjectUsingObjectLeft:(id)arg1;
- (void)addAnyTransitionRelationshipsForObjectUsingObjectRight:(id)arg1;
- (void)addAnyTransitionRelationshipsForContainedObject:(id)arg1;
- (BOOL)canBeRetimed;
- (BOOL)isRetimed;
- (BOOL)hasArtisticRetime;
- (BOOL)hasRateConform;
- (BOOL)hasRateConformScale;
- (CDStruct_e83c9415)globalEffectiveRange;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)untimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)untimedClippedRange;
- (CDStruct_e83c9415)untimedAudioClippedRange;
- (id)keywordsForRange:(CDStruct_e83c9415)arg1;
- (BOOL)_conformsToSequenceAudioOrVideoRateSettings:(CDStruct_e83c9415)arg1 sequence:(id)arg2;
- (void)_checkObjectAndDecendentsForAlignmentToSequence:(id)arg1;
- (BOOL)canRevealInFinder;
- (void)revealInFinder:(id)arg1;
- (id)thumbMD5InfoForTime:(CDStruct_1b6d18a9)arg1;
- (void)addThumbMD5Info:(id)arg1;
- (CDStruct_1b6d18a9)_clearRoundingTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)_clearRoundingRange:(CDStruct_e83c9415)arg1;
- (struct FigTimePair)_clearRoundingPair:(struct FigTimePair)arg1;
- (CDStruct_e83c9415)_convertRangeScale:(CDStruct_e83c9415)arg1 toTimescale:(CDStruct_1b6d18a9)arg2;
- (unsigned long long)_basicTimingValidateAndRepair:(BOOL)arg1 report:(int)arg2 error:(id *)arg3;
- (unsigned long long)validateAndRepair:(BOOL)arg1 report:(int)arg2 error:(id *)arg3;
- (id)fullPath;
@property(retain, nonatomic) NSArray *cachedSortedLocalizedRoles; // @synthesize cachedSortedLocalizedRoles=_cachedSortedLocalizedRoles;
@property(nonatomic) int cachedAVContainmentType; // @synthesize cachedAVContainmentType=_cachedAVContainmentType;
@property(readonly, nonatomic) unsigned int aoFlagsMask; // @synthesize aoFlagsMask=_aoFlagsMask;
@property(readonly, nonatomic) unsigned int aoFlags; // @synthesize aoFlags=_aoFlags;
@property(retain, nonatomic) NSSet *anchoredItems; // @synthesize anchoredItems=_anchoredItems;

@end

