//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffect.h>

#import "FFAudioEffectChainDelegate.h"
#import "FFEffectPresetDirtyProtocol.h"

@class CHChannelEnum, NSArray;

@interface FFEffectBundle : FFEffect <FFAudioEffectChainDelegate, FFEffectPresetDirtyProtocol>
{
    NSArray *_effectBundleParts;
    CHChannelEnum *_presetChannel;
    NSArray *_activeEffects;
    BOOL _initWithCoderScope;
}

+ (id)readEffectBundlePartsForEffectBundle:(id)arg1;
+ (id)_documentForArchiveURL:(id)arg1;
+ (id)effectBundlePartsFromXMLDocument:(id)arg1;
+ (BOOL)writeEffectToFile:(id)arg1 error:(id *)arg2;
+ (id)initialEffectBundlePartsForEffectID:(id)arg1;
+ (id)partNamesForBundle:(id)arg1;
+ (id)cachedPartNamesForBundle:(id)arg1;
+ (BOOL)addEffects:(id)arg1 asSnapshotToPart:(unsigned long long)arg2 ofBundle:(id)arg3 atValue:(double)arg4 error:(id *)arg5;
+ (BOOL)addEffects:(id)arg1 toBundle:(id)arg2 asPartWithName:(id)arg3 defaultValue:(double)arg4 error:(id *)arg5;
+ (BOOL)saveEffects:(id)arg1 asBundleWithName:(id)arg2 partName:(id)arg3 effectType:(id)arg4 defaultValue:(double)arg5 error:(id *)arg6;
+ (id)copyClassDescription;
+ (id)_userBundlesDirectory;
+ (void)registerEffects;
+ (void)registerBundleAtPath:(id)arg1 isUserBundle:(BOOL)arg2;
- (BOOL)update_migrateEffectBundleFormat;
- (BOOL)presetDirty;
- (id)initWithEffectID:(id)arg1 andXMLDocument:(id)arg2;
- (id)exportAsXMLDocument;
- (id)effectChainModelObject;
- (id)effectChainEffects;
- (id)newAudioMD5AndOffset:(int)arg1;
- (void)removePresetChannelObserving;
- (void)addPresetChannelObserving;
- (void)createActivePartEffectChannelsInFolder:(id)arg1;
- (id)presetChannel;
- (id)primaryAnimationChannel;
- (void)presetChanged:(id)arg1;
- (void)partChanged;
- (void)partChangedHook;
- (void)_showEffectWindow:(id)arg1;
- (void)createChannelsInFolder:(id)arg1;
- (id)newAmountChannelForEffectBundlePart:(id)arg1 inFolder:(id)arg2 withChannelID:(int)arg3;
- (void)updatePresetsInEnumChannel:(id)arg1 withPresetNames:(id)arg2;
- (id)availableBundleParts;
- (id)presetNames;
- (void)effectDeactivated;
- (void)effectActivated:(int)arg1;
- (void)effectStackAnchoredObjectDidChange;
- (void)setEffectStack:(id)arg1;
- (id)inputKeys;
- (id)newEffectNodeWithInput:(id)arg1 forKey:(id)arg2 withOffset:(CDStruct_1b6d18a9)arg3 identifier:(id)arg4;
- (id)allEffects;
- (void)setEffects:(id)arg1;
- (id)effects;
- (void)setEffectBundleParts:(id)arg1;
@property(readonly, nonatomic) NSArray *effectBundleParts;
- (id)activePart;
- (unsigned long long)activePartIndex;
- (void)removeObjectFromEffectBundlePartsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inEffectBundlePartsAtIndex:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_postInit:(id)arg1;
- (void)_decodeFromCoder:(id)arg1 into:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_copyWithZone:(struct _NSZone *)arg1 into:(id)arg2;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1 effectBundleParts:(id)arg2;
- (id)initWithEffectID:(id)arg1;

@end

