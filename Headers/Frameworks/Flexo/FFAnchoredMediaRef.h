//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredObject.h>

@class FFMedia, NSSet;

@interface FFAnchoredMediaRef : FFAnchoredObject
{
    FFMedia *_media;
    NSSet *_cachedAssets;
    BOOL _hasAudio;
    BOOL _hasVideo;
    BOOL _invalNeedsRange;
    int _overrideAV;
}

+ (id)copyClassDescription;
@property(nonatomic) int overrideAV; // @synthesize overrideAV=_overrideAV;
@property(retain, nonatomic) FFMedia *media; // @synthesize media=_media;
- (void)logContent;
- (id)_describeAdditionalObjectsWithIndent:(long long)arg1 recurse:(BOOL)arg2;
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)inspectorTabIdentifiers;
- (id)inspectorTabClassNames;
- (id)inspectorClassName;
- (BOOL)contributesToCompoundClip;
- (CDStruct_1b6d18a9)localToRateConformedTime:(CDStruct_1b6d18a9)arg1 withTargetSampleDuration:(CDStruct_1b6d18a9)arg2;
- (CDStruct_e83c9415)untimedClippedRange;
- (CDStruct_e83c9415)untimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_1b6d18a9)untime:(CDStruct_1b6d18a9)arg1;
- (BOOL)canBeRetimed;
- (CDStruct_e83c9415)unclippedRange;
- (CDStruct_e83c9415)untimedUnclippedRange;
- (CDStruct_e83c9415)mediaRange;
- (void)invalidateSourceRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (id)roles;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
- (void)_refInvalidationChange:(id)arg1;
- (void)_rangeInvalidated:(id)arg1;
- (void)_stopObservingMedia;
- (void)_startObservingMedia;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_descendentAnchoredComponent:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 useAudioRange:(BOOL)arg3 intoArray:(id)arg4 container:(id)arg5 includeAnchored:(BOOL)arg6;
- (void)addAssetsToSet:(id)arg1;
- (double)referencedPrimaryAudioSampleRate;
- (double)audioSampleRate;
- (long long)referencedPrimaryAudioChannelCount;
- (long long)audioChannelCount:(int)arg1;
- (id)videoProps;
- (long long)timecodeDisplayDropFrame;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (CDStruct_1b6d18a9)timeOffset;
- (BOOL)canBePlacedInSpine;
- (BOOL)isProject;
- (BOOL)isMultiAngle;
- (BOOL)isMediaRef;
- (id)secondaryEffectStack;
- (id)primaryEffectStack;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)setAuditionName:(id)arg1;
- (id)auditionName;
- (id)firstAudioAnchoredComponent;
- (id)firstVideoAnchoredComponent;
- (id)targetLibraryItem;
- (id)referencedPrimary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1 clipRef:(id)arg2;
- (id)initWithDisplayName:(id)arg1 media:(id)arg2;

@end

