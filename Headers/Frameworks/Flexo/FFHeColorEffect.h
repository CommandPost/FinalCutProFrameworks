//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

#import "FFEffectSelectionContainment.h"
#import "FFEffectSubEffectContainment.h"

@class FFEffect, NSArray, NSData, NSMutableArray, NSString;

@interface FFHeColorEffect : FFHeliumEffect <FFEffectSubEffectContainment, FFEffectSelectionContainment>
{
    NSMutableArray *_effects;
    FFEffect *_soleOpEffect;
    NSData *_cacheMaskChannels;
}

+ (id)effectID;
+ (id)copyClassDescription;
+ (void)registerEffects;
- (id)balanceIntrinsicChannel;
- (id)indexedName:(id)arg1 withFolder:(id)arg2;
- (id)intrinsicChannelForEffect:(id)arg1;
- (id)_shapeChannelNameForMaskIntrinsicFolder:(id)arg1;
- (unsigned int)_nextAvailableShapeChannelIDForMaskIntrinsicFolder:(id)arg1;
- (void)maskIntrinsicFolderChanged:(id)arg1;
- (void)removeDuplicateChannels:(id)arg1 inFolder:(id)arg2;
- (id)_maskChannelNameForFolder:(id)arg1;
- (unsigned int)nextAvailableMaskChannelIDForFolder:(id)arg1;
- (void)createIMovieEffectFolderInFolder:(id)arg1 isEncompassingTransaction:(BOOL)arg2;
- (unsigned long long)lastOccuranceIndexForEffectID:(id)arg1;
- (unsigned long long)numberOfInstancesForEffectID:(id)arg1;
- (unsigned long long)numberOfInstancesForEffect:(id)arg1;
- (void)removeEffectFolderInFolder:(id)arg1 forEffect:(id)arg2;
- (void)createEffectFolderInFolder:(id)arg1 forEffect:(id)arg2;
- (BOOL)isEffectReorderable:(id)arg1;
- (BOOL)isEffectRemovable:(id)arg1;
- (BOOL)isEffectInsertable:(id)arg1;
- (unsigned long long)preferedSubEffectIndexForEffect:(id)arg1;
- (BOOL)projectUpdaterConformLumaBumpsToDataWithError:(id *)arg1;
- (void)didResetFlag:(unsigned long long)arg1 onChannel:(id)arg2;
- (void)didSetFlag:(unsigned long long)arg1 onChannel:(id)arg2;
- (void)didMoveChannel:(id)arg1 inFolder:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)didRemoveChannel:(id)arg1 fromFolder:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)willRemoveChannel:(id)arg1 fromFolder:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)didInsertChannel:(id)arg1 intoFolder:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)willInsertChannel:(id)arg1 intoFolder:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)selectedChannels;
- (void)setSelected:(BOOL)arg1 channel:(id)arg2 effect:(id)arg3;
- (BOOL)shouldSelectChannel:(id)arg1 selectedState:(BOOL)arg2 effect:(id)arg3;
- (id)subEffectForChannel:(id)arg1;
- (BOOL)shouldRemoveChannelID:(unsigned int)arg1 withMultipleSelection:(BOOL)arg2;
- (BOOL)shouldSuppressChannelID:(unsigned int)arg1 withProject:(id)arg2;
- (void)removeSubEffect:(id)arg1;
- (void)addSubEffect:(id)arg1;
- (unsigned long long)maskEffectsCount;
- (id)maskEffects;
- (unsigned long long)indexOfMaskEffect:(id)arg1;
- (id)maskEffectOfIndex:(unsigned long long)arg1;
- (id)matchToEffect;
- (id)balanceEffect;
- (id)iMovieEffect;
- (void)removeMaskEffectOfIndex:(unsigned long long)arg1;
- (void)removeMatchToEffect;
- (void)removeBalanceEffect;
- (BOOL)isMaskEffectEnabledOfIndex:(unsigned long long)arg1;
- (BOOL)isMatchToEffectEnabled;
- (BOOL)isBalanceEffectEnabled;
- (BOOL)isIMovieEffectEnabled;
- (BOOL)hasMaskEffectOfIndex:(unsigned long long)arg1;
- (BOOL)hasMatchToEffect;
- (BOOL)hasBalanceEffect;
- (BOOL)hasIMovieEffect;
- (BOOL)hasAdjustments;
- (id)onScreenControlsForChannelFolder:(id)arg1 effectStack:(id)arg2;
- (void)setEffectStack:(id)arg1;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (id)newEffectNodeWithInput:(id)arg1 forKey:(id)arg2 withOffset:(CDStruct_1b6d18a9)arg3 identifier:(id)arg4;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (id)inputKeys;
- (id)processingFormat:(int)arg1;
- (void)channelParameterChanged:(id)arg1;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (void)createChannelsInFolder:(id)arg1;
- (BOOL)effectIntroducesAlpha;
- (BOOL)writeDefaultChannels;
- (BOOL)isNoOp;
- (id)newChannelFolderWithParent:(id)arg1 name:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)_postInit:(id)arg1;
- (void)_decodeFromCoder:(id)arg1 into:(id)arg2;
- (void)_copyWithZone:(struct _NSZone *)arg1 into:(id)arg2;
- (CDStruct_bdcb2b0d)md5;
- (struct _MaskAtom_t *)_cacheMaskChannelsMaskAtomOfIndex:(unsigned long long)arg1;
- (struct _VersionAtom_t *)_cacheMaskChannelsVersionAtom;
- (unsigned int)cachedShapeChannelNamedIndexOfIndex:(unsigned long long)arg1 maskEffectIndex:(unsigned long long)arg2;
- (unsigned int)cachedShapeChannelIDOfIndex:(unsigned long long)arg1 maskEffectIndex:(unsigned long long)arg2;
- (unsigned int)cachedMaskChannelNamedIndexOfIndex:(unsigned long long)arg1;
- (unsigned int)cachedMaskChannelIDOfIndex:(unsigned long long)arg1;
- (void)packCacheDatumForMaskChannel:(id)arg1 withBytes:(char *)arg2 offset:(unsigned long long *)arg3;
- (void)updateCacheMaskChannels;
- (void)straightRemoveEffect:(id)arg1;
- (void)removeObjectFromEffectsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inEffectsAtIndex:(unsigned long long)arg2;
- (id)effectsForEffectCount:(long long)arg1;
- (void)removeChannel:(id)arg1;
- (id)keyframeableChannels;
- (id)document;
- (void)resetAll;
- (BOOL)effectIsNoOp:(id)arg1;
- (void)moveEffect:(id)arg1 toIndex:(unsigned long long)arg2;
- (BOOL)canReorderChannel:(id)arg1;
- (unsigned long long)indexOfEffect:(id)arg1;
- (id)effectForChannel:(id)arg1;
- (id)effectOfEffectID:(id)arg1 ofIndex:(unsigned long long)arg2;
- (id)effectOfEffectID:(id)arg1;
- (void)removeEffect:(id)arg1;
- (void)addEffect:(id)arg1;
@property(readonly, nonatomic) NSData *colorCacheMaskChannels; // @dynamic colorCacheMaskChannels;
@property(readonly, nonatomic) FFEffect *soleOpEffect; // @dynamic soleOpEffect;
@property(readonly, nonatomic) NSArray *effects; // @dynamic effects;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectID:(id)arg1;
- (void)disableEffectsExcludingSoleOpMaskEffect:(id)arg1;
- (id)newShapeIntrinsicFolderOfMaskEffectIndex:(unsigned long long)arg1;
- (id)newShapeIntrinsicFolderOfMaskEffect:(id)arg1;
- (id)newKeyerIntrinsicFolder;
- (void)addShapeIntrinsicFolder:(id)arg1 toMaskIntrinsicFolder:(id)arg2;
- (void)addKeyerIntrinsicFolder:(id)arg1 toMaskIntrinsicFolder:(id)arg2;
- (id)shapeFolderFromShapeIntrinsicFolder:(id)arg1;
- (id)shapeFolderToShapeIntrinsicFolder:(id)arg1;
- (id)keyerFolderFromKeyerIntrinsicFolder:(id)arg1;
- (id)keyerFolderToKeyerIntrinsicFolder:(id)arg1;
- (id)shapeIntrinsicFolderOfIndex:(unsigned long long)arg1 ofMaskEffectIndex:(unsigned long long)arg2;
- (id)shapeIntrinsicFolderOfIndex:(unsigned long long)arg1 ofMaskEffect:(id)arg2;
- (id)shapeIntrinsicFoldersOfMaskEffectIndex:(unsigned long long)arg1;
- (id)shapeIntrinsicFoldersOfMaskEffect:(id)arg1;
- (id)keyerIntrinsicFolderOfMaskEffectIndex:(unsigned long long)arg1;
- (id)keyerIntrinsicFolderOfMaskEffect:(id)arg1;
- (id)shapeFolderOfIndex:(unsigned long long)arg1 ofMaskEffectIndex:(unsigned long long)arg2;
- (id)shapeFolderOfIndex:(unsigned long long)arg1 ofMaskEffect:(id)arg2;
- (id)shapeFoldersOfMaskEffectIndex:(unsigned long long)arg1;
- (id)shapeFoldersOfMaskEffect:(id)arg1;
- (unsigned long long)shapeFoldersCountOfMaskEffectIndex:(unsigned long long)arg1;
- (unsigned long long)shapeFoldersCountOfMaskEffect:(id)arg1;
- (id)keyerFolderOfMaskEffectIndex:(unsigned long long)arg1;
- (id)keyerFolderOfMaskEffect:(id)arg1;
- (id)maskIntrinsicFolderOfMaskEffectIndex:(unsigned long long)arg1;
- (id)maskIntrinsicFolderOfMaskEffect:(id)arg1;
- (unsigned long long)maskIntrinsicFolderCount;
- (unsigned long long)shapeIndexForChannel:(id)arg1;
- (unsigned long long)shapeIndexForOZChannel:(struct OZChannelBase *)arg1;
- (unsigned long long)maskEffectIndexForChannel:(id)arg1;
- (unsigned long long)maskEffectIndexForOZChannel:(struct OZChannelBase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

