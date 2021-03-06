//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFAudioComponentsLayoutItem.h>

@class FFEffectStack, FFRole;

@interface FFAudioObjectComponentsLayoutItem : FFAudioComponentsLayoutItem
{
    int _itemType;
    BOOL _enabled;
    BOOL _muted;
    FFEffectStack *_effectStack;
    FFRole *_role;
    struct PC_CMTimePair _scopeStartEndTimes;
    BOOL _isOrphan;
    int _cachedNumPanChannels;
}

+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
@property(nonatomic) BOOL isOrphan; // @synthesize isOrphan=_isOrphan;
@property(readonly, nonatomic) struct PC_CMTimePair scopeStartEndTimes; // @synthesize scopeStartEndTimes=_scopeStartEndTimes;
@property(readonly, nonatomic) FFEffectStack *effectStack; // @synthesize effectStack=_effectStack;
@property(readonly, nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) BOOL muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)informEffectStackAudioChannelCountChanged;
- (void)clearCachedNumPanChannels;
- (int)cachedNumPanChannels;
- (void)setCachedNumPanChannels:(int)arg1;
- (void)setEffectStackInternal:(id)arg1;
- (BOOL)isOrphanEligible;
- (void)notifyRolesDidChangeForLibrary:(id)arg1 removedRoleUIDs:(id)arg2;
- (void)_markRolePropertiesAsDirty;
- (void)_setRoleInternal:(id)arg1;
- (void)setRole:(id)arg1;
- (id)roleUID;
- (void)setRoleUID:(id)arg1;
- (void)_setScopeStartEndTimes:(struct PC_CMTimePair)arg1;
- (CDStruct_1b6d18a9)scopeEnd;
- (CDStruct_1b6d18a9)scopeStart;
- (id)orphanedRoleName;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
- (unsigned int)numOutputChannels:(unsigned int)arg1;
- (id)role;
- (BOOL)isEquivalentLayoutItemUsingOrphanCriteria:(id)arg1;
- (id)equivalencePropertiesForVersion:(unsigned int)arg1;
- (CDStruct_bdcb2b0d)equivalenceMD5;
- (id)newEquivalenceProperties;
- (BOOL)supportsEquivalenceID;
- (BOOL)isEqualToLayoutItem:(id)arg1;
- (BOOL)hasFullPersistence;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithAudioComponentsLayoutItem:(id)arg1;
- (id)initAsRoleType:(id)arg1 numChannels:(unsigned int)arg2;
- (id)initWithName:(id)arg1 channelMap:(id)arg2 audioChannelRoutingMap:(id)arg3;
- (id)initWithName:(id)arg1 channelMap:(id)arg2 audioChannelRoutingMap:(id)arg3 enabled:(BOOL)arg4;

@end

