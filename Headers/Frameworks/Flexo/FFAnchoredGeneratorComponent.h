//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredEffectComponent.h>

@interface FFAnchoredGeneratorComponent : FFAnchoredEffectComponent
{
}

+ (id)newGeneratorForEffectIDContainingSubstring:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 sampleDuration:(CDStruct_1b6d18a9)arg3;
+ (id)copyClassDescription;
+ (BOOL)classIsAbstract;
- (void)wasDeselected;
- (BOOL)rebuildForOldTool:(Class)arg1 newTool:(Class)arg2;
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)inspectorTabIdentifiers;
- (id)inspectorTabClassNames;
- (id)inspectorIdentifier;
- (id)inspectorClassName;
- (int)anchoredObjectUIType;
- (BOOL)isTitle;
- (BOOL)contributesToCompoundClip;
- (BOOL)isGenerator;
- (id)videoProps;
- (struct CGRect)imageSpaceBoundsAtTime:(CDStruct_1b6d18a9)arg1;
- (void)imageSpaceBounds:(struct CGRect *)arg1 andTransform:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (CDStruct_e83c9415)unclippedRange;
- (id)newCompositedSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 clippedByContainer:(BOOL)arg6 container:(id)arg7 bgSource:(id)arg8 bgOffset:(CDStruct_1b6d18a9)arg9 bgIdentifier:(id)arg10 bgRange:(CDStruct_e83c9415)arg11 numberOfRows:(long long)arg12 numberOfCols:(long long)arg13 angle:(long long)arg14 roles:(id)arg15 angleOffset:(long long)arg16 angleCount:(long long)arg17;
- (id)newProviderWithEffectCount:(long long)arg1;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2;
- (id)newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (id)_newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 clippedByContainer:(BOOL)arg6;
- (id)_newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 roles:(id)arg6 angleOffset:(long long)arg7 angleCount:(long long)arg8 clippedByContainer:(BOOL)arg9;
- (id)_newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 clippedByContainer:(BOOL)arg6 bgSource:(id)arg7 bgOffset:(CDStruct_1b6d18a9)arg8 bgIdentifier:(id)arg9;

@end

