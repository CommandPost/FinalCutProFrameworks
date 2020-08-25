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
    FFAudioClipComponentsLayoutMap *_audioComponentsLayoutMap;
}

+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
@property(readonly, retain, nonatomic) FFEffectStack *audioEffects; // @synthesize audioEffects=_audioEffects;
- (id)createUsedRangesMediaIdentifier;
- (void)setAudioComponentsLayoutMap:(id)arg1;
- (BOOL)canSetAudioComponentsLayoutMap;
- (id)_mediaRefAudioComponentsLayoutMap;
- (int)multiAngleDetail;
- (void)_isThrougheditOnLeft:(BOOL)arg1 throughEditVideo:(char *)arg2 throughEditAudio:(char *)arg3 sameMultiangle:(char *)arg4;
- (BOOL)supportsAnamorphicFormat;
- (BOOL)supportsDropFrame;
- (BOOL)supportsRoles;
- (void)informEndRoleChanges:(id)arg1;
- (id)rolesWithPlayEnable:(int)arg1;
- (id)mdTargetForKey:(id)arg1;
- (id)onScreenControls;
- (void)_fileURLs:(id)arg1 repChoice:(int)arg2 includeAnchored:(BOOL)arg3 activeOnly:(BOOL)arg4;
- (void)_clipRefs:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3 insideClipRefs:(BOOL)arg4 acrossEvents:(BOOL)arg5;
- (void)_assetRefs:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3 insideClipRefs:(BOOL)arg4 acrossEvents:(BOOL)arg5;
- (void)_assets:(id)arg1 includeAnchored:(BOOL)arg2 activeOnly:(BOOL)arg3;
- (void)setTimecodeDisplayDropFrame:(long long)arg1;
- (void)setOverrideAV:(int)arg1;
- (void)_enumerateDescendentAnchoredObjectsWithOptions:(unsigned int)arg1 includeAnchored:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3 descend:(char *)arg4 stop:(char *)arg5;
- (void)_descendentAnchoredComponent:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 useAudioRange:(BOOL)arg3 intoArray:(id)arg4 container:(id)arg5 includeAnchored:(BOOL)arg6;
- (void)_collectDescendentCompositedObject:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 intoArray:(id)arg3 useAudioRange:(BOOL)arg4 container:(id)arg5;
- (int)anchoredObjectUIType;
- (id)_newProviderWithOptions:(id)arg1;
- (id)newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (id)newReferencedSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (void)_mediaChanged:(id)arg1;
- (id)referencedSequence;
- (id)clipRef;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
- (id)localAudioEffects;
@property(readonly, retain, nonatomic) FFEffectStack *videoEffects; // @synthesize videoEffects=_videoEffects;
- (BOOL)hasDefinedVideoRate;
- (BOOL)isProject;
- (BOOL)isReferenceClip;
- (BOOL)isMultiAngle;
- (BOOL)objectInContainedItems:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1 clipRef:(id)arg2;
- (id)type;

@end

