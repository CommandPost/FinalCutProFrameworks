//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredEffectComponent.h>

@interface FFAnchoredGeneratorComponent : FFAnchoredEffectComponent
{
}

+ (BOOL)classIsAbstract;
+ (id)copyClassDescription;
- (id)_newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 clippedByContainer:(BOOL)arg6 bgSource:(id)arg7 bgOffset:(CDStruct_1b6d18a9)arg8 bgIdentifier:(id)arg9;
- (id)_newSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 clippedByContainer:(BOOL)arg6;
- (id)newProviderWithEffectCount:(long long)arg1 showObjects:(id)arg2;
- (id)newProviderWithEffectCount:(long long)arg1;
- (id)newCompositedSourceForTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 range:(CDStruct_e83c9415 *)arg3 identifier:(id *)arg4 effectCount:(long long)arg5 clippedByContainer:(BOOL)arg6 container:(id)arg7 bgSource:(id)arg8 bgOffset:(CDStruct_1b6d18a9)arg9 bgIdentifier:(id)arg10 bgRange:(CDStruct_e83c9415)arg11;
- (CDStruct_e83c9415)unclippedRange;
- (void)imageSpaceBounds:(struct CGRect *)arg1 andTransform:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (struct CGRect)imageSpaceBoundsAtTime:(CDStruct_1b6d18a9)arg1;
- (id)videoProps;
- (BOOL)isGenerator;
- (BOOL)isTitle;
- (id)inspectorClassName;
- (id)inspectorIdentifier;
- (id)inspectorTabClassNames;
- (id)inspectorTabIdentifiers;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)inspectableChannelsForIdentifier:(id)arg1;

@end

