//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredClipRef.h>

@class FFEffectStack, FFObjectDict, NSMutableSet, NSString;

@interface FFAnchoredAngle : FFAnchoredClipRef
{
    NSString *_audioAngle;
    NSString *_videoAngle;
    FFEffectStack *_audioEffects;
    FFEffectStack *_videoEffects;
    FFObjectDict *_audioEffectsDict;
    FFObjectDict *_videoEffectsDict;
    CDStruct_e83c9415 _cachedUnclippedRange;
    NSMutableSet *_cachedRoles;
}

+ (id)copyClassDescription;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (id)type;
- (BOOL)supportsTransitions;
- (id)initWithDisplayName:(const id)arg1 clipRef:(id)arg2 audioAngle:(id)arg3 videoAngle:(id)arg4;
- (void)_popuplateEffectsDictForAllAngles;
- (void)copyRetimeCurveToOtherAngles;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)availableMultiAngleObjects;
- (id)availableMultiAngleIDs;
- (void)invalidateSourceRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
@property(retain, nonatomic) NSString *videoAngle; // @synthesize videoAngle=_videoAngle;
@property(retain, nonatomic) NSString *audioAngle; // @synthesize audioAngle=_audioAngle;
@property(readonly, retain, nonatomic) FFEffectStack *videoEffects; // @synthesize videoEffects=_videoEffects;
@property(readonly, retain, nonatomic) FFEffectStack *audioEffects; // @synthesize audioEffects=_audioEffects;
- (id)primaryEffectStack;
- (void)setDisplayName:(id)arg1;
- (id)secondaryEffectStack;
- (long long)audioChannelCount;
- (long long)audioChannelCount:(int)arg1;
- (BOOL)isAngle;
- (BOOL)canBePlacedInSpine;
- (BOOL)canBeRetimed;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)untimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)untimedClippedRange;
- (CDStruct_e83c9415)untimedUnclippedRange;
- (CDStruct_1b6d18a9)localToRateConformedTime:(CDStruct_1b6d18a9)arg1 withTargetSampleDuration:(CDStruct_1b6d18a9)arg2;
- (CDStruct_e83c9415)unclippedRange;
- (void)clearCachedValues;
- (void)informParentContainedItemsChanged:(BOOL)arg1;
- (CDStruct_60067b7e)audioMD5:(int)arg1;
- (void)_mediaChanged:(id)arg1;
- (id)multiAngleObject;
- (id)newAngleSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (id)newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (id)newProviderWithEffectCount:(long long)arg1 audioAngle:(id)arg2 videoAngle:(id)arg3 toLane:(long long)arg4 showOnlyObjects:(id)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2 roles:(id)arg3 angleOffset:(long long)arg4 angleCount:(long long)arg5;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2;
- (id)newProviderWithEffectCount:(long long)arg1;
- (id)newProvider;
- (int)anchoredObjectUIType;
- (id)inspectorClassName;
- (id)inspectorTabClassNames;
- (id)inspectorTabIdentifiers;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)audioInfoInspectorText;
- (id)videoInfoInspectorText;
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (void)_collectDescendentCompositedObject:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 intoArray:(id)arg3 useAudioRange:(BOOL)arg4 container:(id)arg5;
- (void)_descendentAnchoredComponent:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 useAudioRange:(BOOL)arg3 intoArray:(id)arg4 container:(id)arg5 includeAnchored:(BOOL)arg6;
- (void)_enumerateDescendantAnchoredObjects:(BOOL)arg1 includeSelf:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3 stop:(char *)arg4;
- (void)_isThrougheditOnLeft:(BOOL)arg1 angleMatchVideo:(char *)arg2 angleMatchAudio:(char *)arg3 throughEditVideo:(char *)arg4 throughEditAudio:(char *)arg5 sameMultiangle:(char *)arg6;
- (int)multiAngleDetail;
- (CDStruct_e83c9415)angleThroughEditMaxClippedRangeInContainerSpace:(BOOL)arg1 checkPlayEnables:(BOOL)arg2 checkRoles:(BOOL)arg3;
- (void)_assets:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3;
- (void)_assetRefs:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3;
- (void)_clipRefs:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3;
- (void)_fileURLs:(id)arg1 repChoice:(int)arg2 includeAnchored:(BOOL)arg3 activeOnly:(BOOL)arg4;
- (int)displayedMultiAngleOffset;
- (id)videoAngleObject;
- (id)audioAngleObject;
- (id)videoAngleName;
- (id)audioAngleName;
- (id)onScreenControls;
- (id)mdTargetForKey:(id)arg1;
- (void)_clearCachedRoles;
- (id)roles;
- (void)addRole:(id)arg1;
- (void)resetRoles;
- (BOOL)supportsRoles;
- (BOOL)supportsDropFrame;
@property(retain, nonatomic) FFObjectDict *videoEffectsDict; // @synthesize videoEffectsDict=_videoEffectsDict;
@property(retain, nonatomic) FFObjectDict *audioEffectsDict; // @synthesize audioEffectsDict=_audioEffectsDict;

@end
