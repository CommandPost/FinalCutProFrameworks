//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffect.h>

@class CHChannelEnum, NSArray;

__attribute__((visibility("hidden")))
@interface FFEffectBundle : FFEffect
{
    BOOL _initing;
    NSArray *_effectBundleParts;
    CHChannelEnum *_presetChannel;
}

+ (id)_userBundlesDirectory;
+ (id)copyClassDescription;
+ (void)registerBundleAtPath:(id)arg1;
+ (void)registerEffects;
+ (BOOL)writeEffectToFile:(id)arg1 error:(id *)arg2;
+ (BOOL)saveEffects:(id)arg1 asBundleWithName:(id)arg2 partName:(id)arg3 effectType:(id)arg4 defaultValue:(double)arg5 error:(id *)arg6;
+ (BOOL)addEffects:(id)arg1 toBundle:(id)arg2 asPartWithName:(id)arg3 defaultValue:(double)arg4 error:(id *)arg5;
+ (BOOL)addEffects:(id)arg1 asSnapshotToPart:(unsigned long long)arg2 ofBundle:(id)arg3 atValue:(double)arg4 error:(id *)arg5;
+ (id)cachedPartNamesForBundle:(id)arg1;
+ (id)partNamesForBundle:(id)arg1;
- (id)initWithEffectID:(id)arg1;
- (void)dealloc;
- (void)_copyWithZone:(struct _NSZone *)arg1 into:(id)arg2;
- (id)_initForCopy:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_decodeFromCoder:(id)arg1 into:(id)arg2;
- (void)_postInit:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)saveCurrentEffectBundleDataAsDefault;
- (void)insertObject:(id)arg1 inEffectBundlePartsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromEffectBundlePartsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activePartIndex;
- (id)activePart;
- (id)effectBundleParts;
- (void)setEffectBundleParts:(id)arg1;
- (id)effects;
- (void)setEffects:(id)arg1;
- (id)allEffects;
- (id)newEffectNodeWithInput:(id)arg1 forKey:(id)arg2 withOffset:(CDStruct_1b6d18a9)arg3 identifier:(id)arg4;
- (id)inputKeys;
- (void)setEffectStack:(id)arg1;
- (void)createPresetsInEnumChannel:(id)arg1 addItemForNone:(BOOL)arg2;
- (void)createChannelsInFolder:(id)arg1;
- (void)_showEffectWindow:(id)arg1;
- (void)partChanged;
- (void)presetChanged:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)channelParameterChanged:(id)arg1;
- (id)primaryAnimationChannel;
- (void)effectWasRemovedFromStack;
- (CDStruct_60067b7e)audioMD5:(int)arg1;

@end

