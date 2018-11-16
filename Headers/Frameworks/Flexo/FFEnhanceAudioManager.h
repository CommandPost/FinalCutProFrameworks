//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFBackgroundTaskTarget.h"

@class FFEffectStack;

@interface FFEnhanceAudioManager : NSObject <FFBackgroundTaskTarget>
{
    FFEffectStack *_effectStack;
    id _delegate;
}

+ (id)humReductionFrequencyValueForManagers:(id)arg1;
+ (id)noiseReductionAmountValueForManagers:(id)arg1;
+ (id)loudnessUniformityValueForManagers:(id)arg1;
+ (id)loudnessAmountValueForManagers:(id)arg1;
+ (long long)humReductionEnabledStateForManagers:(id)arg1;
+ (long long)noiseReductionEnabledStateForManagers:(id)arg1;
+ (long long)loudnessEnabledStateForManagers:(id)arg1;
+ (int)warningStateForAnalysisOperation:(int)arg1 forManagers:(id)arg2;
+ (int)warningStateForManagers:(id)arg1;
+ (id)_calculateIntValueForManagers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)_calculateDoubleValueForManagers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (long long)_calculateEnabledStateForManagers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (int)_calculateWarningStateForManagers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)matchEffectMenuItemName;
+ (void)setupEqualizationMenu:(id)arg1;
+ (void)_setupEqualizationMenu:(id)arg1 includeMatch:(BOOL)arg2;
+ (double)percentageToNoiseReduction:(int)arg1;
+ (int)noiseReductionToPercentage:(double)arg1;
+ (double)percentageToLoudnessUniformity:(int)arg1;
+ (int)loudnessUniformityToPercentage:(double)arg1;
+ (double)percentageToLoudnessAmount:(int)arg1;
+ (int)loudnessAmountToPercentage:(double)arg1;
+ (BOOL)actionAutoEnhanceAudioOnEffectStacks:(id)arg1 error:(id *)arg2;
+ (void)autoEnhanceAudioOnEffectStack:(id)arg1 aggressively:(BOOL)arg2;
+ (void)_configureAutoEnhanceEffects:(id)arg1 aggressively:(BOOL)arg2 demandEffects:(BOOL)arg3 analysisInitialEffects:(id)arg4;
+ (BOOL)_hasAutoEnhanceEffectsForEffectStack:(id)arg1;
+ (void)_completeAnalyzeForCleanupOnMainThread:(id)arg1;
+ (void)analyzeForCleanup:(id)arg1 analysisType:(int)arg2 analysisInitialEffects:(id)arg3 onTask:(id)arg4;
+ (BOOL)renderAudioUsingEffectRenderer:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 backgroundTask:(id)arg4 withBackgroundTaskProgressScale:(float)arg5 isCancelledBlock:(CDUnknownBlockType)arg6;
+ (int)renderAudioToFilePath:(id)arg1 atStartTime:(CDStruct_1b6d18a9)arg2 withDuration:(CDStruct_1b6d18a9)arg3 usingStream:(id)arg4 onTask:(id)arg5 withTaskScale:(float)arg6;
+ (void)_updateEffect:(id)arg1 withAnalysisEffect:(id)arg2;
+ (void)updateAutomaticSettingsForAnalysisOperation:(int)arg1 forEffectStack:(id)arg2;
+ (id)enhancementEffectStacksForItems:(id)arg1;
+ (id)enhancementEffectStackForObject:(id)arg1;
+ (id)enhancementEffectStackForItem:(id)arg1;
+ (BOOL)_effectStackValidForAnalysis:(id)arg1;
+ (id)effectIDForAnalysisOperation:(int)arg1;
@property(readonly, nonatomic) id <FFEnhanceAudioDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FFEffectStack *effectStack; // @synthesize effectStack=_effectStack;
- (void)enableMatchEffect;
- (BOOL)matchAnalyzing;
- (void)setMatchEnabled:(BOOL)arg1;
- (BOOL)matchEnabled;
- (BOOL)matchEdited;
- (id)matchEffectState:(BOOL)arg1;
- (BOOL)hasMatchData;
- (BOOL)usingMatchEffect;
- (void)enterMatchMode:(id)arg1;
- (void)openEqualizationCustomUI:(id)arg1;
- (void)setEQEnabled:(BOOL)arg1;
- (BOOL)eqEnabled;
- (BOOL)eqEdited;
- (id)equalizationPresetStringValue;
- (int)equalizationPresetChannelValue;
- (BOOL)setEqualizationPresetChannelValue:(int)arg1 ignoreBundlePart:(BOOL)arg2 error:(id *)arg3;
- (BOOL)setEqualizationPresetChannelValue:(int)arg1 error:(id *)arg2;
- (BOOL)normalizeEnabled;
- (BOOL)enableNormalize:(long long)arg1 error:(id *)arg2;
- (BOOL)humEnabled;
- (int)humFrequency;
- (BOOL)setHumFrequency:(int)arg1 error:(id *)arg2;
- (BOOL)enableHumReduction:(BOOL)arg1 error:(id *)arg2;
- (BOOL)noiseReductionEnabled;
- (double)noiseReductionAmount;
- (BOOL)setNoiseReductionAmount:(double)arg1 error:(id *)arg2;
- (BOOL)enableNoiseReduction:(BOOL)arg1 error:(id *)arg2;
- (BOOL)loudnessEnabled;
- (double)loudnessUniformity;
- (BOOL)setLoudnessUniformity:(double)arg1 error:(id *)arg2;
- (double)loudnessAmount;
- (BOOL)setLoudnessAmount:(double)arg1 error:(id *)arg2;
- (BOOL)enableLoudness:(BOOL)arg1 error:(id *)arg2;
- (void)_setSavedControlValues:(id)arg1 forEffectID:(id)arg2;
- (id)_getSavedControlValueForEffectID:(id)arg1 andParameterKey:(id)arg2;
- (int)_getParameterEnumValueFromEffect:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_setParameterEnumValue:(int)arg1 forEffect:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)_setParameterBoolValue:(_Bool)arg1 forEffect:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)_getParameterDoubleValueFromEffect:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_setParameterDoubleValue:(double)arg1 forEffect:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)_setEnabled:(BOOL)arg1 forEffectID:(id)arg2 onEffectStack:(id)arg3;
- (void)pausedTask:(id)arg1;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)canceledTask:(id)arg1;
- (int)warningStateForAnalysisOperation:(int)arg1;
- (int)warningState;
- (BOOL)bgTaskIsAnalyzingEffectStack:(id)arg1;
- (BOOL)analyzing;
- (BOOL)_hasOnlyMatchEQData;
- (BOOL)_hasAnalysis;
- (void)startAnalysis;
- (void)dealloc;
- (id)initWithEffectStack:(id)arg1 andDelegate:(id)arg2;
- (void)autoEnhanceAudio:(BOOL)arg1;
- (void)_autoEnhanceCleanup:(id)arg1 onTask:(id)arg2;
- (void)_kickoffAnalysis;
- (void)_analyzeForCleanup:(id)arg1 onTask:(id)arg2;
- (void)storeSavedAnalyzingAudioEffect:(id)arg1;
- (id)_savedAnalyzingEffectForEffectID:(id)arg1;

@end

