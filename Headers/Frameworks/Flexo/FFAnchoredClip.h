//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredMediaRef.h>

#import "FFAudioComponentsLayoutMapDelegate.h"

@class FFAudioClipComponentsLayoutMap, FFEffectStack;

@interface FFAnchoredClip : FFAnchoredMediaRef <FFAudioComponentsLayoutMapDelegate>
{
    FFEffectStack *_audioEffects;
    FFEffectStack *_videoEffects;
    int _overideAV;
    FFAudioClipComponentsLayoutMap *_audioComponentsLayoutMap;
}

+ (id)copyClassDescription;
@property(nonatomic) int overideAV; // @synthesize overideAV=_overideAV;
- (id)referenceAudioComponentsLayoutMap;
- (id)anchoredObjectsForAudioComponentsLayoutKey:(id)arg1;
- (id)activeAudioComponentsLayoutKeys;
- (id)audioComponentsLayoutMap;
- (void)demandAudioComponentSources:(int)arg1;
@property(readonly, nonatomic) FFAudioClipComponentsLayoutMap *persistentAudioComponentsLayoutMap;
- (int)multiAngleDetail;
- (void)_isThrougheditOnLeft:(BOOL)arg1 throughEditVideo:(char *)arg2 throughEditAudio:(char *)arg3 sameMultiangle:(char *)arg4;
- (BOOL)supportsLogProcessing;
- (BOOL)supportsAnamorphicFormat;
- (BOOL)supportsDropFrame;
- (BOOL)supportsRoles;
- (void)resetRoles;
- (void)addRole:(id)arg1;
- (id)roles;
- (id)rolesWithPlayEnable:(int)arg1;
- (id)mdTargetForKey:(id)arg1;
- (id)onScreenControls;
- (void)_fileURLs:(id)arg1 repChoice:(int)arg2 includeAnchored:(BOOL)arg3 activeOnly:(BOOL)arg4;
- (void)_clipRefs:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3 insideClipRefs:(BOOL)arg4 acrossEvents:(BOOL)arg5;
- (void)_assetRefs:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3 insideClipRefs:(BOOL)arg4;
- (void)_assets:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3;
- (void)_enumerateDescendentAnchoredObjects:(BOOL)arg1 includeSelf:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3 stop:(char *)arg4;
- (void)_descendentAnchoredComponent:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 useAudioRange:(BOOL)arg3 intoArray:(id)arg4 container:(id)arg5 includeAnchored:(BOOL)arg6;
- (void)_collectDescendentCompositedObject:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 intoArray:(id)arg3 useAudioRange:(BOOL)arg4 container:(id)arg5;
- (int)anchoredObjectUIType;
- (id)newProvider;
- (id)newProviderWithEffectCount:(long long)arg1;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2 roles:(id)arg3 angleOffset:(long long)arg4 angleCount:(long long)arg5;
- (id)newProviderWithEffectCount:(long long)arg1 toLane:(long long)arg2 showOnlyObjects:(id)arg3 roles:(id)arg4;
- (id)newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (id)newReferencedSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (void)_mediaChanged:(id)arg1;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
@property(readonly, nonatomic) FFEffectStack *audioEffects; // @synthesize audioEffects=_audioEffects;
@property(readonly, nonatomic) FFEffectStack *videoEffects; // @synthesize videoEffects=_videoEffects;
- (BOOL)isReferenceClip;
- (BOOL)hasVideo;
- (BOOL)hasAudio;
- (BOOL)objectInContainedItems:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1 clipRef:(id)arg2;
- (BOOL)supportsTransitions;
- (id)type;

@end

