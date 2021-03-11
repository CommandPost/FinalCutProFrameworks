//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFEffect.h>

#import <Flexo/FFEffectPresetDirtyProtocol-Protocol.h>

@class FFAnchoredObject, FFAudioUnitEffectPreset, NSDictionary, NSMutableArray, NSMutableSet, NSXMLElement, PCWeakPointerValue;

@interface FFAudioUnitEffect : FFEffect <FFEffectPresetDirtyProtocol>
{
    NSDictionary *_effectState;
    FFAudioUnitEffectPreset *_preset;
    BOOL _presetDirty;
    unsigned int _numChannels;
    double _sampleRate;
    unsigned int _preferredNumChannels;
    double _preferredSampleRate;
    NSDictionary *_parameterInfoMap;
    unsigned int _numPlaybackUnits;
    struct FFLock _masterUnitLock;
    BOOL _isEffectActivatedForMasterUnit;
    PCWeakPointerValue *_masterUnit;
    NSMutableSet *_slaveUnits;
    FFAudioUnitEffectPreset *_defaultPreset;
    BOOL _isRequestingMasterUnit;
    NSMutableArray *_masterUnitRequestCompletionBlocks;
    CDUnknownBlockType _masterUnitEffectActivationBlock;
    struct FFSemaphore _effectActivationSemaphore;
    FFAnchoredObject *_observedObject;
    unsigned int _numObservedObjectChannels;
    unsigned char _runtimeFlags;
    NSXMLElement *_loadXMLElementOnActivation;
    BOOL _persistedOfflineEffectFlag;
    BOOL _pendingOfflineEffectStateUpdate;
}

+ (BOOL)isEDELEffect:(id)arg1;
+ (id)requestInProcessMasterUnitForEffect:(id)arg1;
+ (BOOL)isEffectOfflineForEffectID:(id)arg1;
+ (void)clearAllPlaybackUnits;
+ (id)currentPresetForAudioUnit:(struct ComponentInstanceRecord *)arg1;
+ (void)saveEffectStateForInProcessEffect:(id)arg1;
+ (void)updateToEffectState:(id)arg1 forInProcessEffect:(id)arg2;
+ (void)initialize;
+ (id)copyClassDescription;
+ (id)_edelEffectBundle;
+ (id)audioUnitManufacturers;
+ (void)runDeferredRegistration;
+ (void)_warnValidationFailedwithFailedNamesAndIDs:(id)arg1;
+ (void)registerSharedAudioUnits;
+ (void)registerSurroundPanner;
+ (BOOL)scannerClientLoadBundle:(id)arg1 atPath:(id)arg2;
+ (void)registerEffectForComponent:(struct OpaqueAudioComponent *)arg1;
+ (void)registerEffectForComponentDescription:(const struct AudioComponentDescription *)arg1;
+ (void)registerEffectForComponent:(struct OpaqueAudioComponent *)arg1 withDescription:(const struct AudioComponentDescription *)arg2;
+ (id)effectTypeForComponentType:(unsigned int)arg1;
+ (id)displayStringForEffectType:(id)arg1;
+ (id)registeredEffectIDsSupportingChannelsInput:(unsigned long long)arg1 output:(unsigned long long)arg2;
+ (unsigned long long)numEffectsForNonNativeSupportForEffectWithID:(id)arg1 numInputChannels:(unsigned long long)arg2 numOutputChannels:(unsigned long long)arg3;
+ (unsigned long long)numEffectChannelsForNonNativeSupportForEffectWithID:(id)arg1 numRequestedInputChannels:(unsigned long long)arg2 numRequestedOutputChannels:(unsigned long long)arg3;
+ (BOOL)effectWithID:(id)arg1 supportsChannelsInput:(unsigned long long)arg2 output:(unsigned long long)arg3;
+ (BOOL)effectWithID:(id)arg1 supportsChannelsInput:(unsigned long long)arg2 output:(unsigned long long)arg3 nativeSupportOnly:(BOOL)arg4;
+ (id)effectIdentifierForComponentDescription:(const struct AudioComponentDescription *)arg1;
+ (id)effectIdentifierForType:(unsigned int)arg1 subType:(unsigned int)arg2 manufacturer:(unsigned int)arg3;
+ (id)effectIdentifierWithTypeString:(id)arg1 subType:(id)arg2 manufacturer:(id)arg3;
+ (id)loggingStringForEffectID:(id)arg1;
+ (id)loggingStringForEffectID:(id)arg1 includeName:(BOOL)arg2;
+ (BOOL)componentExistsForEffectIdentifier:(id)arg1;
+ (struct OpaqueAudioComponent *)componentForEffectIdentifier:(id)arg1;
+ (BOOL)populateComponentDescriptionForSearch:(struct AudioComponentDescription *)arg1 usingEffectIdentifier:(id)arg2;
+ (BOOL)update_disableAudioUnitEffectClumpFolderResetForEffectStack:(id)arg1;
+ (BOOL)update_useRelativeAudioPresetPathForEffectStack:(id)arg1;
+ (void)setParameterChannel:(id)arg1 toValue:(float)arg2 atTime:(CDStruct_1b6d18a9)arg3 withOptions:(unsigned int)arg4;
+ (id)rootFolderForFilePresetType:(unsigned long long)arg1 effect:(id)arg2;
+ (void)postPresetChangedNotificationForEffect:(id)arg1;
+ (void)selectFactoryPreset:(id)arg1 forEffects:(id)arg2;
+ (void)selectUserPreset:(id)arg1 forSelectedEffects:(id)arg2;
+ (void)revealPresetsForEffect:(id)arg1;
+ (void)savePresetForEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
+ (void)selectDefaultPresetForSelectedEffects:(id)arg1;
+ (void)populateMenu:(id)arg1 withSelectedEffects:(id)arg2;
+ (unsigned int)unmapParameterID:(unsigned int)arg1;
+ (unsigned int)mapParameterID:(unsigned int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *effectState; // @synthesize effectState=_effectState;
@property(nonatomic) BOOL presetDirty; // @synthesize presetDirty=_presetDirty;
@property(nonatomic) double preferredAudioSampleRate; // @synthesize preferredAudioSampleRate=_preferredSampleRate;
@property(nonatomic) unsigned int preferredAudioChannelCount; // @synthesize preferredAudioChannelCount=_preferredNumChannels;
@property(nonatomic) double audioSampleRate; // @synthesize audioSampleRate=_sampleRate;
@property(nonatomic) unsigned int audioChannelCount; // @synthesize audioChannelCount=_numChannels;
- (void)update_PreEdelXAudioEffectKeyframes;
- (id)exportAsXMLElementWithDeprecatedEffectData:(id)arg1;
- (id)exportAsXMLElement;
- (id)exportAsXMLElementWithExcludedChannels:(id)arg1;
- (void)loadEffectWithXMLElement:(id)arg1 usingMasterUnit:(id)arg2;
- (void)loadEffectWithXMLElement:(id)arg1;
- (id)parameterInfoMap;
- (void)setParameterInfoMap:(id)arg1;
- (id)keyframeableChannels;
- (id)keyframeableChannelsFrom:(id)arg1;
- (id)primaryAnimationChannel;
- (void)_ensureDefaultPresetExistsWithDefaultPreset:(id)arg1 wantsDefaultPreset:(BOOL)arg2;
- (void)performEffectActivationBlock:(CDUnknownBlockType)arg1;
- (void)releaseSharedUnit:(id)arg1 forClient:(void *)arg2;
- (id)requestSlaveUnitForClient:(void *)arg1 forPlayback:(BOOL)arg2 numChannels:(unsigned int)arg3 sampleRate:(double)arg4 effectState:(id)arg5;
- (id)requestMasterUnitForClient:(void *)arg1;
- (void)releaseMasterUnit;
- (void)_requestMasterUnitForEffectActivation:(BOOL)arg1 usingCompletionBlock:(CDUnknownBlockType)arg2;
- (void)requestMasterUnitUsingCompletionBlock:(CDUnknownBlockType)arg1;
- (id)newMasterUnitForModelUpdates;
- (id)activeMasterUnit;
- (BOOL)supportsLoadingChannelFolderForOfflineEffects;
- (void)updateOfflineEffectState;
- (BOOL)persistedOfflineEffectFlag;
- (void)setPersistedOfflineEffectFlag:(BOOL)arg1;
- (void)_masterUnitInvalidated:(id)arg1;
- (void)DSObjectWasAddedToStore;
- (void)effectStackAnchoredObjectDidChange;
- (void)effectDeactivated;
- (void)effectActivated:(int)arg1;
- (void)setEffectStack:(id)arg1;
- (void)_updateAudioUnitAllocation;
- (void)_removeAnchoredObjectObserving;
- (void)_addAnchoredObjectObserving;
- (void)_notifyUpdateAudioProperties:(id)arg1;
- (void)_updateAudioProperties:(BOOL)arg1;
- (void)resetPlaybackUnits;
- (double)_defaultSampleRate;
- (unsigned int)_defaultNumEffectChannels;
- (void)loadEffectStateIntoAudioUnit:(struct ComponentInstanceRecord *)arg1;
- (void)saveEffectStateUsingMasterUnit:(id)arg1;
- (void)updateToEffectState:(id)arg1 usingMasterUnit:(id)arg2;
- (id)currentEffectState;
- (int)presetID;
- (void)setPresetWithID:(int)arg1;
- (void)resetToCurrentPreset;
- (void)resetToDefaultPreset;
- (void)setAudioUnitEffectStateAsPreset:(id)arg1 usingMasterUnit:(id)arg2;
- (id)defaultPreset;
- (id)preset;
- (void)setPreset:(id)arg1;
- (void)switchToPreset:(id)arg1;
- (void)_switchToPreset:(id)arg1 syncOptions:(unsigned int)arg2 usingMasterUnit:(id)arg3;
- (void)_switchToPreset:(id)arg1 syncOptions:(unsigned int)arg2;
- (BOOL)testRuntimeFlags:(unsigned int)arg1;
- (void)clearRuntimeFlags:(unsigned int)arg1;
- (void)setRuntimeFlags:(unsigned int)arg1;
- (id)newAudioMD5AndOffset:(int)arg1;
- (void)setPreferredSampleRate:(double)arg1;
- (void)setPreferredNumChannels:(unsigned int)arg1;
- (void)_updateSampleRate:(double)arg1;
- (void)_updateNumChannels:(unsigned int)arg1;
- (double)sampleRate;
- (unsigned int)numChannels;
- (void)encodeWithCoder:(id)arg1;
- (void)_postInit:(id)arg1 isXML:(BOOL)arg2;
- (void)_decodeFromCoder:(id)arg1 into:(id)arg2;
- (void)_copyWithZone:(struct _NSZone *)arg1 into:(id)arg2;
- (void)dealloc;
- (void)channelParameterChanged:(id)arg1;
- (void)_parameterChannelChanged:(id)arg1;
- (void)_updateParameterListUsingMasterUnit:(id)arg1;
- (BOOL)_updateParameterChannelsUsingParameterList:(const struct FFAudioUnitParameterList *)arg1 audioUnit:(struct ComponentInstanceRecord *)arg2;
- (void)refreshEffectStack;
- (void)createChannelsInFolder:(id)arg1 usingMasterUnit:(id)arg2;
- (void)createChannelsInFolder:(id)arg1;
- (void)_makeParameterChannelsInFolder:(id)arg1 usingAudioUnit:(struct ComponentInstanceRecord *)arg2;
- (id)createClumpFolderWithClumpID:(unsigned int)arg1 inFolder:(id)arg2 forAudioUnit:(struct ComponentInstanceRecord *)arg3;
- (id)newChannelForParamInfo:(const struct FFAudioUnitParameterInfo *)arg1 usingAudioUnit:(struct ComponentInstanceRecord *)arg2;
- (void)_undoableSetParameterInfoMap:(id)arg1;
- (BOOL)hasPresets;
- (BOOL)setXMLPresetPath:(id)arg1 forPresetType:(int)arg2;
- (int)setFilePresetPath:(id)arg1 forFilePresetType:(unsigned long long)arg2 withFullPath:(id)arg3;
- (int)setFactoryPreset:(int)arg1;
- (id)auPresetFromAUPresetFileAtPath:(id)arg1;
- (id)auPresetFromPst:(id)arg1;
- (int)savePresetNamed:(id)arg1 withPath:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)getFilePresets;
- (id)fullPathForPresetPath:(id)arg1 forFilePresetType:(unsigned long long)arg2;
- (id)presetsForFilePresetType:(unsigned long long)arg1;
- (id)presetsForFilePresetType:(unsigned long long)arg1 startingPath:(id)arg2;
- (id)rootFolderForFilePresetType:(unsigned long long)arg1;
- (id)parameterFolder;
- (void)syncChannelsToParametersUsingMasterUnit:(id)arg1 options:(unsigned int)arg2;
- (void)_syncChannelsToParametersFromFolder:(id)arg1 usingMasterUnit:(id)arg2 options:(unsigned int)arg3;
- (id)newChannelFolderWithParent:(id)arg1 name:(id)arg2;

@end

