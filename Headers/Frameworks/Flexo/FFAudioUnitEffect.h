//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffect.h>

@class CHChannelFolder, FFSharedAudioUnit, NSArray, NSDictionary;

@interface FFAudioUnitEffect : FFEffect
{
    CHChannelFolder *_parameterFolder;
    CHChannelFolder *_nonClumpedFolder;
    NSArray *_clumpFolders;
    struct FFAudioUnitParameterList *_parameterList;
    FFSharedAudioUnit *_cachedUnit;
    NSDictionary *_effectState;
    NSDictionary *_preset;
    NSDictionary *_defaultPreset;
    BOOL _presetDirty;
    unsigned int _numChannels;
    double _sampleRate;
    _Bool _initOnceSetStackHasBeenCalled;
    BOOL _isSyncingChannelsToParameters;
    BOOL _savingCurrentEffectState;
}

+ (id)copyClassDescription;
+ (BOOL)componentDescription:(struct AudioComponentDescription *)arg1 forEffectIdentifier:(id)arg2;
+ (struct OpaqueAudioComponent *)componentForEffectIdentifier:(id)arg1;
+ (id)effectIdentifierWithTypeString:(id)arg1 subType:(id)arg2 manufacturer:(id)arg3;
+ (id)effectIdentifierForType:(unsigned int)arg1 subType:(unsigned int)arg2 manufacturer:(unsigned int)arg3;
+ (id)effectIdentifierForComponentDescription:(const struct AudioComponentDescription *)arg1;
+ (BOOL)effectWithID:(id)arg1 supportsChannelsInput:(unsigned long long)arg2 output:(unsigned long long)arg3 nativeSupportOnly:(BOOL)arg4;
+ (BOOL)effectWithID:(id)arg1 supportsChannelsInput:(unsigned long long)arg2 output:(unsigned long long)arg3;
+ (unsigned long long)numEffectChannelsForNonNativeSupportForEffectWithID:(id)arg1 numRequestedInputChannels:(unsigned long long)arg2 numRequestedOutputChannels:(unsigned long long)arg3;
+ (id)registeredEffectIDsSupportingChannelsInput:(unsigned long long)arg1 output:(unsigned long long)arg2;
+ (id)displayStringForEffectType:(id)arg1;
+ (id)effectTypeForComponentType:(unsigned int)arg1;
+ (void)registerEffectForComponent:(struct OpaqueAudioComponent *)arg1 withDescription:(const struct AudioComponentDescription *)arg2;
+ (void)registerEffectForComponentDescription:(const struct AudioComponentDescription *)arg1;
+ (void)registerEffectForComponent:(struct OpaqueAudioComponent *)arg1;
+ (void)registerEffectForOldStyleComponent:(struct ComponentRecord *)arg1;
+ (BOOL)scannerClientLoadBundle:(id)arg1 atPath:(id)arg2;
+ (void)registerSurroundPanner;
+ (void)registerSharedAudioUnits;
+ (void)runDeferredRegistration;
+ (BOOL)xaucacheShouldShowProgressPanel;
+ (id)audioUnitManufacturers;
+ (id)_edelEffectBundle;
+ (unsigned int)mapParameterID:(unsigned int)arg1;
+ (unsigned int)unmapParameterID:(unsigned int)arg1;
+ (void)_refresh:(id)arg1;
@property(readonly) unsigned int audioChannelCount;
@property(readonly) double audioSampleRate;
- (id)initWithEffectID:(id)arg1;
- (void)dealloc;
- (void)_copyWithZone:(struct _NSZone *)arg1 into:(id)arg2;
- (void)_decodeFromCoder:(id)arg1 into:(id)arg2;
- (void)_postInit:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setPreset:(id)arg1;
- (id)preset;
- (id)defaultPreset;
- (void)setAudioUnitEffectStateAsPreset:(id)arg1;
- (void)useDefaultPreset;
- (void)setPresetWithID:(int)arg1;
- (int)presetID;
- (void)setEffectState:(id)arg1;
- (void)setEffectStateWithNoUpdate:(id)arg1;
- (id)effectState;
- (int)saveCurrentEffectState;
- (void)revertToCurrentPreset;
- (void)_clearCachedUnit;
- (void)setEffectStack:(id)arg1;
- (id)cachedAudioUnit;
- (id)primaryAnimationChannel;
- (id)keyframeableChannelsFrom:(id)arg1;
- (id)keyframeableChannels;
- (void)effectWasRemovedFromStack;
- (void)loadEffectWithXMLElement:(id)arg1;
- (id)exportAsXMLElementWithExcludedChannels:(id)arg1;
- (id)exportAsXMLElement;
- (id)exportAsXMLElementWithDeprecatedEffectData:(id)arg1;
@property(nonatomic) BOOL presetDirty; // @synthesize presetDirty=_presetDirty;
@property(readonly) unsigned int numChannels; // @synthesize numChannels=_numChannels;
@property(readonly) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)newChannelFolderWithParent:(id)arg1 name:(id)arg2;
- (void)syncChannelsToParametersFromFolder:(id)arg1 isCreatingChannelFolder:(BOOL)arg2;
- (void)syncChannelsToParameters;
- (id)userPresetsAtFullPath:(id)arg1;
- (id)manufacturerStringForDescription:(struct AudioComponentDescription)arg1;
- (id)userPresetsAtPath:(id)arg1;
- (id)pstPresetsAtPath:(id)arg1;
- (id)getUserPresets;
- (id)userPresetPath;
- (int)savePresetNamed:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void *)_createAuPresetFromPst:(id)arg1;
- (int)setFactoryPreset:(int)arg1;
- (int)setUserPreset:(id)arg1;
- (id)newChannelForParamInfo:(const struct FFAudioUnitParameterInfo *)arg1 usingAudioUnit:(struct ComponentInstanceRecord *)arg2;
- (unsigned int)makeParameterChannelsForAudioUnit:(struct ComponentInstanceRecord *)arg1 withinFolder:(id)arg2 addedParams:(struct FFAudioUnitParameterList *)arg3 createdParamFolder:(id *)arg4 createdClumpedFolders:(id *)arg5 createdNonClumpedFolder:(id *)arg6;
- (void)createChannelsInFolder:(id)arg1;
- (id)_fixupChannel:(id)arg1 oldInfo:(const struct FFAudioUnitParameterInfo *)arg2 newInfo:(const struct FFAudioUnitParameterInfo *)arg3 unit:(struct ComponentInstanceRecord *)arg4;
- (void)_fixupChannelsForChangedParameterList:(const struct FFAudioUnitParameterList *)arg1 added:(const vector_632d33ce *)arg2 removed:(const vector_632d33ce *)arg3 changed:(const vector_632d33ce *)arg4 unit:(struct ComponentInstanceRecord *)arg5;
- (void)_updateParameterListUsingUnit:(struct ComponentInstanceRecord *)arg1;
- (void)_parameterChannelChanged:(id)arg1;
- (void)channelParameterChanged:(id)arg1;

@end

