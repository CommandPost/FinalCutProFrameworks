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

+ (void)setupEqualizationMenu:(id)arg1;
+ (void)autoEnhanceAudioOnEffectStack:(id)arg1 aggressively:(BOOL)arg2;
+ (void)_cleanupSlightly:(id)arg1 onTask:(id)arg2;
+ (void)_cleanupAggressively:(id)arg1 onTask:(id)arg2;
+ (void)_autoEnhanceAudioOnEffectStack:(id)arg1 aggressively:(BOOL)arg2 bgTask:(id)arg3;
+ (void)_setEnabled:(BOOL)arg1 forAnalyzingEffect:(id)arg2;
+ (void)_fireRangeInvalidationNotificationOnMainThread:(id)arg1;
+ (BOOL)_hasAutoEnhanceEffectsForEffectStack:(id)arg1;
+ (void)analyzeForCleanup:(id)arg1 onTask:(id)arg2;
+ (int)renderAudioToFilePath:(id)arg1 atStartTime:(CDStruct_1b6d18a9)arg2 withDuration:(CDStruct_1b6d18a9)arg3 usingStream:(id)arg4 onTask:(id)arg5 withTaskScale:(float)arg6;
+ (void)_postAnalysisSyncUpOnEffectStack:(id)arg1;
+ (void)_updateExistingEffect:(id)arg1 FromAnalysisEffect:(id)arg2;
+ (void)_setEffectStateFromDictionary:(id)arg1;
+ (void)_setPresetWithIDFromDictionary:(id)arg1;
+ (void)_addEffectFromDictionary:(id)arg1;
+ (id)getAudioEffectsFromObjects:(id)arg1;
+ (id)getAudioEffectsFromObject:(id)arg1;
+ (BOOL)_effectStackValidForAnalysis:(id)arg1;
+ (id)effectIDForAnalysisOperation:(int)arg1;
@property(readonly, nonatomic) id <FFEnhanceAudioDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FFEffectStack *effectStack; // @synthesize effectStack=_effectStack;
- (void)completedMatchOnSelection:(id)arg1;
- (BOOL)matchAnalyzing;
- (BOOL)matchEdited;
- (id)matchEffectState:(BOOL)arg1;
- (BOOL)hasMatchData;
- (BOOL)matching;
- (void)enterMatchMode:(id)arg1;
- (void)openEqualizationCustomUI:(id)arg1;
- (BOOL)eqEdited;
- (id)equalizationPresetStringValue;
- (int)equalizationPresetChannelValue;
- (BOOL)setEqualizationPresetChannelValue:(int)arg1 error:(id *)arg2;
- (BOOL)humEnabled;
- (int)humFrequency;
- (BOOL)setHumFrequency:(int)arg1 error:(id *)arg2;
- (BOOL)enableHumReduction:(long long)arg1 error:(id *)arg2;
- (BOOL)noiseReductionEnabled;
- (double)noiseReductionAmount;
- (BOOL)setNoiseReductionAmount:(double)arg1 error:(id *)arg2;
- (BOOL)enableNoiseReduction:(long long)arg1 error:(id *)arg2;
- (BOOL)loudnessEnabled;
- (double)loudnessUniformity;
- (BOOL)setLoudnessUniformity:(double)arg1 error:(id *)arg2;
- (double)loudnessAmount;
- (BOOL)setLoudnessAmount:(double)arg1 error:(id *)arg2;
- (BOOL)enableLoudness:(long long)arg1 error:(id *)arg2;
- (int)_getParameterEnumValueFromEffect:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_setParameterEnumValue:(int)arg1 forEffect:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)_setParameterBoolValue:(_Bool)arg1 forEffect:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)_getParameterDoubleValueFromEffect:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_setParameterDoubleValue:(double)arg1 forEffect:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)_setEnabled:(BOOL)arg1 forEffectID:(id)arg2 onEffectStack:(id)arg3;
- (void)pausedTask:(id)arg1;
- (id)projectsInUse;
- (id)assetRefsInUse;
- (id)facetForWarningState:(int)arg1;
- (int)warningStateForAnalysisOperation:(int)arg1;
- (int)warningState;
- (BOOL)_problemsCorrected;
- (BOOL)_hasOnlyMatchEQData;
- (BOOL)_hasAnalysis;
- (void)startAnalysis;
- (void)dealloc;
- (id)initWithEffectStack:(id)arg1 andDelegate:(id)arg2;
- (void)_kickoffAnalysis;
- (void)_analyzeForCleanup:(id)arg1 onTask:(id)arg2;
- (id)_effectForAnalysisOperation:(int)arg1 addIfNeeded:(BOOL)arg2;

@end

