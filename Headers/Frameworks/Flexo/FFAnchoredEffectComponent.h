//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredComponent.h>

__attribute__((visibility("hidden")))
@interface FFAnchoredEffectComponent : FFAnchoredComponent
{
}

+ (id)copyClassDescription;
- (void)invalidateSampleRange:(CDStruct_e83c9415)arg1 forType:(id)arg2;
- (BOOL)hasVideo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)effectStackDidLoad:(id)arg1;
- (id)replaceWithEffectID:(id)arg1;
- (void)setEffect:(id)arg1;
- (CDStruct_e83c9415)unclippedRange;
- (void)effectFinishedLoading:(id)arg1;
- (id)audioComponentEffect;
- (id)videoComponentEffect;
- (id)effect;
- (void)notifyAnchoredObjectRemovedFromSequence:(id)arg1;
- (void)dealloc;
- (id)initWithEffect:(id)arg1;
- (id)initWithEffectID:(id)arg1 loadEffectInForeground:(BOOL)arg2;
- (id)initWithEffectID:(id)arg1;
- (id)inspectableChannelsForIdentifier:(id)arg1;
- (id)labelForInspectorTabIdentifier:(id)arg1;
- (id)classNameForInspectorTabIdentifier:(id)arg1;
- (id)inspectorTabIdentifiers;
- (id)inspectorIdentifier;
- (id)inspectorClassName;

@end

