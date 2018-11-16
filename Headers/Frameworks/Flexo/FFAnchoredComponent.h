//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredObject.h>

@class FFEffectStack, NSString;

@interface FFAnchoredComponent : FFAnchoredObject
{
    FFEffectStack *_effectStack;
    NSString *_role;
}

+ (id)copyClassDescription;
+ (float)defaultStillDurationInSeconds;
+ (float)defaultGeneratorDurationInSeconds;
+ (id)roleForXMLValue:(id)arg1 element:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) FFEffectStack *effectStack; // @synthesize effectStack=_effectStack;
- (void)returnContainedComponentsIn:(id)arg1;
- (CDStruct_1b6d18a9)sourceSampleDuration;
- (struct CGRect)imageSpaceBoundsAtTime:(CDStruct_1b6d18a9)arg1;
- (struct CGRect)squarePixelSourceRect;
- (CDStruct_1b6d18a9)sampleDuration;
- (id)videoProps;
- (CDStruct_1b6d18a9)timeOffset;
- (CDStruct_e83c9415)mediaRange;
- (id)newProvider;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
- (void)actionBegin:(id)arg1 animationHint:(id)arg2 deferUpdates:(BOOL)arg3;
- (id)mdTargetForKey:(id)arg1;
- (id)onScreenControls;
- (void)removeChannel:(id)arg1;
- (BOOL)canRemoveChannel:(id)arg1;
- (BOOL)reorderChannel:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)canReorderChannel:(id)arg1;
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)inspectorTabIdentifiers;
- (id)inspectorTabClassNames;
- (id)inspectorClassName;
- (BOOL)supportsRoles;
- (id)roles;
- (id)rolesWithPlayEnable:(int)arg1;
@property(retain, nonatomic) NSString *role;
- (void)addRole:(id)arg1;
- (void)_descendentAnchoredComponent:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 useAudioRange:(BOOL)arg3 intoArray:(id)arg4 container:(id)arg5 includeAnchored:(BOOL)arg6;
- (void)_collectDescendentCompositedObject:(BOOL)arg1 containerTimeRange:(const CDStruct_e83c9415 *)arg2 intoArray:(id)arg3 useAudioRange:(BOOL)arg4 container:(id)arg5;
- (id)firstAudioAnchoredComponent;
- (id)firstVideoAnchoredComponent;
- (void)notifyAnchoredObjectRemovedFromSequence:(id)arg1;
- (id)secondaryEffectStack;
- (id)primaryEffectStack;
- (id)videoEffects;
- (id)audioEffects;
- (id)newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (id)_newExtendedSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 sourceid:(id)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9 unclippedRangeRequired:(CDStruct_e83c9415)arg10;
- (id)_newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (BOOL)isComponent;
@property BOOL hasVideo;
@property BOOL hasAudio;
- (CDStruct_e83c9415)unclippedRange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldEncodeEffectStackWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1 andFilterType:(id)arg2;
- (id)type;
- (id)copyXMLValueForRole:(id)arg1;

@end

