//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAnchoredObject;

@interface FFEnhanceAudioManager : NSObject
{
    FFAnchoredObject *_object;
    id _delegate;
}

+ (id)effectIdentifierForAnalysisOperation:(int)arg1;
+ (void)setupEqualizationMenu:(id)arg1;
+ (void)setPresetIDOnMainThread:(id)arg1;
+ (void)updateExistingEffectFromSavedEffect:(id)arg1;
+ (void)analyzeForCleanup:(id)arg1 onTask:(id)arg2;
+ (id)getAnchoredObjectFromObject:(id)arg1;
+ (BOOL)objectValidForAnalysis:(id)arg1;
+ (id)getAudioAnchoredObjectsFromObjects:(id)arg1;
+ (BOOL)fixAudioProblems:(id)arg1 error:(id *)arg2;
+ (void)enhanceAudio:(id)arg1 aggressively:(BOOL)arg2;
+ (void)cleanupAggressively:(id)arg1 onTask:(id)arg2;
+ (void)cleanupSlightly:(id)arg1 onTask:(id)arg2;
+ (void)_addEffectForEnableOnObject:(id)arg1 forAnalysisOperation:(int)arg2;
+ (void)enableCleanupEffects:(id)arg1 aggressively:(BOOL)arg2;
- (id)initWithAnchoredObject:(id)arg1 andDelegate:(id)arg2;
- (void)startAnalysis;
- (BOOL)hasAnalysis;
- (int)warningState;
- (int)warningStateForAnalysisOperation:(int)arg1;
- (id)facetForWarningState:(int)arg1;
- (void)pausedTask:(id)arg1;
- (BOOL)fixAudioProblemsWithError:(id *)arg1;
- (BOOL)setEqualizationPresetChannelValue:(int)arg1 addIfNeeded:(BOOL)arg2 error:(id *)arg3;
- (int)equalizationPresetChannelValue;
- (BOOL)equalizationEnabled;
- (void)openEqualizationCustomUI:(id)arg1;
- (BOOL)enableLoudness:(long long)arg1 error:(id *)arg2;
- (BOOL)setLoudnessAmount:(double)arg1 error:(id *)arg2;
- (double)loudnessAmount;
- (BOOL)setLoudnessUniformity:(double)arg1 error:(id *)arg2;
- (double)loudnessUniformity;
- (BOOL)loudnessEnabled;
- (BOOL)enableNoiseReduction:(long long)arg1 error:(id *)arg2;
- (BOOL)setNoiseReductionAmount:(double)arg1 error:(id *)arg2;
- (double)noiseReductionAmount;
- (BOOL)noiseReductionEnabled;
- (BOOL)setHumFrequency:(int)arg1 error:(id *)arg2;
- (BOOL)enableHumReduction:(long long)arg1 error:(id *)arg2;
- (int)humFrequency;
- (BOOL)humEnabled;
- (void)enterMatchMode:(id)arg1;
- (BOOL)matching;
- (BOOL)matchAnalyzing;
- (void)completedMatchOnSelection:(id)arg1;
- (void)completedEqualization;
- (void)loadPresetForAnalysisOperation:(int)arg1;
- (void)savePresetForAnalysisOperation:(int)arg1;
- (BOOL)_problemsCorrected;
- (void)_kickoffAnalysis;
- (id)_effectForAnalysisOperation:(int)arg1 addIfNeeded:(BOOL)arg2;
- (id)_savedEffectForAnalysisOperation:(int)arg1;
- (int)_savedEqualizationPresetChannel;
- (void)_setSavedEqualizationPresetChannel:(int)arg1;
- (void)_analyzeForCleanup:(id)arg1 onTask:(id)arg2;
- (void)_fireRangeInvalidationNotificationOnMainThread:(id)arg1;
- (BOOL)_hasOnlyMatchEQData;
@property(readonly, nonatomic) id <FFEnhanceAudioDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) FFAnchoredObject *object; // @synthesize object=_object;

@end

