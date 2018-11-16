//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "FFCHChannelDelegate.h"
#import "FFDataModelProtocol.h"
#import "FFMD5Protocol.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"

@class FFAnchoredObject, FFCHObservableFolder, FFCHRootChannel, FFEffect, FFMD5AndOffset, NSArray, NSMutableArray, NSString;

@interface FFEffectStack : FFBaseDSObject <NSCoding, NSCopying, FFCHChannelDelegate, FFDataModelProtocol, FFMD5Protocol, NSPasteboardWriting, NSPasteboardReading>
{
    NSMutableArray *_effectInstances;
    NSMutableArray *_intrinsicEffectInstances;
    FFCHObservableFolder *_intrinsicChannels;
    FFEffect *_customEffect;
    FFMD5AndOffset *_cachedAudioMD5;
    FFCHRootChannel *_rootChannel;
    FFCHObservableFolder *_propertyChannels;
    FFCHObservableFolder *_effectChannels;
    FFCHObservableFolder *_objectChannels;
    NSArray *_savedAnalyzingAudioEffects;
    NSArray *_legacyPreservedOrderIntrinsicEffectIDs;
    FFCHObservableFolder *_audioPropertyChannels;
    FFAnchoredObject *_anchoredObject;
    NSString *_filterType;
    unsigned int _noOpIntrinsicFlags;
    unsigned int _insertingDefaultIntrinsics:1;
    unsigned int _defaultIntrinsics:1;
    BOOL _hasVideo;
    BOOL _hasAudio;
    BOOL _isOpaque;
    BOOL _suspendEffectChangedNotifications;
    BOOL _pendingEffectChangeNotification;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)copyClassDescription;
+ (BOOL)DSObjectCanProxy;
+ (BOOL)supportsVideoRateConform:(id)arg1;
+ (BOOL)requiresVideoRateConform:(id)arg1 videoProps:(id)arg2;
+ (Class)audioIntrinsicEffectClassForEffectID:(id)arg1;
+ (Class)loudnessEffectClass;
+ (id)eqEffectID;
+ (id)normalizeEffectID;
+ (id)matchEffectID;
+ (id)voiceMatchEffectID;
+ (id)humRemovalEffectID;
+ (id)noiseRemovalEffectID;
+ (id)loudnessAnalyzerEffectID;
+ (id)loudnessEffectID;
@property(retain, nonatomic) NSArray *legacyPreservedOrderIntrinsicEffectIDs; // @synthesize legacyPreservedOrderIntrinsicEffectIDs=_legacyPreservedOrderIntrinsicEffectIDs;
@property(retain, nonatomic) FFMD5AndOffset *cachedAudioMD5; // @synthesize cachedAudioMD5=_cachedAudioMD5;
@property(retain, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)audioPropertyChannelChanged:(id)arg1;
- (void)setAudioDuckingChannelData:(id)arg1;
- (id)audioDuckingChannelData;
- (void)releaseAudioPropertyChannels;
- (id)demandAudioPropertyChannels;
- (id)audioPropertyChannels;
- (id)sequence;
- (void)endEditing;
- (void)beginEditing;
- (BOOL)isEditing;
- (id)undoHandler;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
- (void)_clearCachedAudioMD5;
- (id)effectForEffectID:(id)arg1 createIfNotFound:(_Bool)arg2;
- (struct CGRect)componentBoundsAtTime:(CDStruct_1b6d18a9)arg1 transformed:(BOOL)arg2;
- (id)transformBetweenStartEffect:(unsigned long long)arg1 andEndEffect:(unsigned long long)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)componentTransformAfterEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)componentTransformForEffect:(unsigned long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)componentTransformAtTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)isDistortEffectNOP;
- (id)distortEffect;
- (void)computeConformScaleX:(double *)arg1 scaleY:(double *)arg2 frameBounds:(struct CGRect *)arg3 squareInputBounds:(struct CGRect *)arg4;
- (BOOL)isInCropOrKenBurnsCropMode;
- (id)effectPickerEffect:(BOOL)arg1;
- (BOOL)hasTrimEffect;
- (id)xform3DEffect;
- (id)conformEffect;
- (id)trimEffect;
- (id)cropEffect;
- (id)consumerColorEffect;
- (id)consumerMatchHueEffect;
- (id)consumerBalanceColorEffect;
- (id)colorEffect;
- (BOOL)requiresOpticalFlow;
- (void)_writeUnlock;
- (void)_writeLock;
- (void)_readUnlock;
- (void)_readLock;
- (BOOL)operationRemoveEffectAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)operationAddEffectID:(id)arg1 ranges:(id)arg2 error:(id *)arg3;
- (BOOL)operationAddEffect:(id)arg1 ranges:(id)arg2 error:(id *)arg3;
- (BOOL)operationInsertEffectID:(id)arg1 atIndex:(unsigned long long)arg2 ranges:(id)arg3 error:(id *)arg4;
- (BOOL)operationInsertEffect:(id)arg1 atIndex:(unsigned long long)arg2 ranges:(id)arg3 error:(id *)arg4;
- (void)endEffectStackChanges;
- (void)beginEffectStackChanges;
- (void)postEffectStackChangedNotification;
- (void)postEffectsChangedNotification;
- (void)passEffectNotificationUpChain:(id)arg1 userInfo:(id)arg2 informParents:(BOOL)arg3;
- (void)effect:(id)arg1 channelParameterChanged:(id)arg2;
- (void)intrinsicChannelChanged:(id)arg1;
- (void)channelParameterChanged:(id)arg1;
- (BOOL)moreChannelParameterChanged_CheckIfNeedStreamInval:(id)arg1;
- (BOOL)moreChannelParameterChanged_CheckIfChannelWouldCauseTimingChange:(id)arg1;
- (struct CGRect)imageSpaceBoundsAtTime:(CDStruct_1b6d18a9)arg1;
- (struct CGRect)squarePixelSourceRect;
- (void)imageSpaceBounds:(struct CGRect *)arg1 andTransform:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)videoProps;
- (id)onScreenControls;
- (void)notifyEffectsStackAnchoredObjectRemovedFromSequence:(id)arg1 sequence:(id)arg2;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
- (void)actionBegin:(id)arg1 animationHint:(id)arg2 deferUpdates:(BOOL)arg3;
- (void)removeChannel:(id)arg1;
- (BOOL)canRemoveChannel:(id)arg1;
- (BOOL)reorderChannel:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)canReorderChannel:(id)arg1;
- (BOOL)containsChannel:(id)arg1 associatedModelObject:(id)arg2;
- (id)_effectForChannel:(id)arg1;
- (id)objectChannels;
- (id)effectChannels;
- (id)propertyChannels;
- (id)rootChannel;
- (void)adjustEffectsAfterTrimmingLeft:(BOOL)arg1 right:(_Bool)arg2 clippedRange:(CDStruct_e83c9415)arg3;
- (void)adjustEffectsAfterBlade:(BOOL)arg1;
- (id)newTransientCompositeEffect;
- (BOOL)hasiMovieCompositeEffect;
- (id)setIntrinsicCompositeEffectID:(id)arg1;
- (id)intrinsicCompositeEffectID;
- (id)intrinsicCompositeEffectCreateIfAbsent:(BOOL)arg1;
- (id)intrinsicCompositeEffect;
- (void)setCustomEffect:(id)arg1;
- (void)setCustomEffect:(id)arg1 sendWasAdded:(BOOL)arg2;
- (id)customEffect;
- (struct CGRect)boundsUpToEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 transformed:(BOOL)arg3;
- (struct CGRect)boundsUpToEffectIndex:(unsigned long long)arg1 atTime:(CDStruct_1b6d18a9)arg2 transformed:(BOOL)arg3;
- (unsigned long long)evaluationIndexForEffect:(id)arg1;
- (id)_newEffectsInEvaluationOrder;
- (id)effectAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleEffectCount;
- (unsigned long long)effectCount;
- (void)removeEffect:(id)arg1;
- (void)removeEffectAtIndex:(unsigned long long)arg1;
- (void)moveEffect:(id)arg1 toIndex:(unsigned long long)arg2;
- (long long)firstOccuranceOfEffectID:(id)arg1;
- (void)listEffect;
- (unsigned long long)addEffectWithID:(id)arg1;
- (unsigned long long)addEffect:(id)arg1;
- (void)pixelValuesToXYZPercentageXYZForSuppliedBounds:(double *)arg1 y:(double *)arg2 z:(double *)arg3 bounds:(struct CGRect)arg4;
- (void)XYZPercentageToPixelValuesXYZForSuppliedBounds:(double *)arg1 y:(double *)arg2 z:(double *)arg3 bounds:(struct CGRect)arg4;
- (void)pixelValuesToXYZSamplesPercentageXYZSamplesForContainer:(int)arg1 samplesX:(double *)arg2 samplesY:(double *)arg3 samplesZ:(double *)arg4;
- (void)pixelValuesToXYZPercentageXYZForContainer:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (void)XYZSamplesPercentageToPixelValuesXYZSamplesForContainer:(int)arg1 samplesX:(double *)arg2 samplesY:(double *)arg3 samplesZ:(double *)arg4;
- (void)XYZPercentageToPixelValuesXYZForContainer:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (void)pixelValuesToXYPercentageXYForContainer:(double *)arg1 y:(double *)arg2;
- (void)XYPercentageToPixelValuesXYForContainer:(double *)arg1 y:(double *)arg2;
- (void)pixelValuesToXYPercentageXY:(double *)arg1 y:(double *)arg2;
- (void)XYPercentageToPixelValuesXY:(double *)arg1 y:(double *)arg2;
- (void)pixelValuesToPercentageLRTB:(double *)arg1 right:(double *)arg2 top:(double *)arg3 bottom:(double *)arg4;
- (void)percentageToPixelValuesLRTB:(double *)arg1 right:(double *)arg2 top:(double *)arg3 bottom:(double *)arg4;
- (void)waitingForMotionAnalysisOrOpticalFlow:(char *)arg1 waitingForOpticalFlowAnalysis:(char *)arg2;
- (id)anchoredObjectForChannelAssociateModelObject:(id)arg1;
- (BOOL)_checkOpacity;
- (BOOL)_isOpaque;
- (id)intrinsicChannels;
- (unsigned long long)_indexOfFirstIntrinsicEffectAppliedAfterUserEffects;
- (id)_newSourceByAppendingComponentEffectsToSource:(id)arg1 effectCount:(long long)arg2 offset:(CDStruct_1b6d18a9)arg3;
- (unsigned long long)_insertionPointForDropShadowInArray:(id)arg1;
- (void)endDefaultIntrinsics:(void *)arg1;
- (void *)beginDefaultIntrinsics;
- (void)clearDefaultIntrinsicsFlag;
- (BOOL)hasDefaultIntrinsics;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initCopy:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (BOOL)writeDefaultIntrinsicChannels;
- (void)effectStackDidLoad:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterType:(id)arg1;
- (id)init;
- (void)_initIntrinsicEffects;
- (void)_addIntrinsicVideoEffectsForTransition;
- (void)_addIntrinsicVideoEffects;
- (void)_addAudioChannels;
- (void)_initStandardChannelHierarchy;
- (BOOL)hasVideo;
- (BOOL)hasAudio;
- (void)removeObjectFromSavedAnalyzingAudioEffectsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSavedAnalyzingAudioEffectsAtIndex:(unsigned long long)arg2;
@property(retain, nonatomic) NSArray *savedAnalyzingAudioEffects;
- (void)resetEffectStack:(unsigned int)arg1;
- (void)removeIntrinsicEffect:(id)arg1;
- (void)addIntrinsicEffect:(id)arg1;
- (id)addIntrinsicEffectForEffectID:(id)arg1;
- (unsigned long long)indexToInsertIntrinsic:(id)arg1;
- (id)intrinsicEffectWithID:(id)arg1 createIfAbsent:(BOOL)arg2;
- (id)intrinsicEffectWithID:(id)arg1;
- (void)removeObjectFromIntrinsicEffectsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inIntrinsicEffectsAtIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 inIntrinsicEffectsAtIndex:(unsigned long long)arg2 postNotification:(BOOL)arg3;
- (BOOL)_effectValidForColorMaskAnalysis:(id)arg1;
- (BOOL)_effectValidForMatchingAnalysis:(id)arg1;
- (BOOL)_effectValidForKenBurns:(id)arg1;
- (BOOL)compositeEffectValidForKenBurns:(id)arg1;
- (id)intrinsicEffects;
- (void)removeObjectFromEffectsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inEffectsAtIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 inEffectsAtIndex:(unsigned long long)arg2 postNotification:(BOOL)arg3 updateHasObjectReferenceAndNonIntrinsicEffects:(BOOL)arg4;
- (id)effects;
- (void)_removeObjectFromEffectsArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_insertObject:(id)arg1 inEffectsArray:(id)arg2 atIndex:(unsigned long long)arg3 postNotification:(BOOL)arg4;
- (void)invalidateSourceRangeForObjectWithPossibleRefChange:(CDStruct_e83c9415)arg1;
- (BOOL)_shouldSendNotificationForEffectsArray:(id)arg1;
- (id)observedObjectForChannel:(id)arg1;
- (void)setCompChannelsData:(id)arg1;
- (id)compChannelsData;
- (void)resetAnchoredObject:(id)arg1;
- (void)setAnchoredObject:(id)arg1;
- (id)anchoredObject;
- (BOOL)effectResetConstantRetimingRateFromFreeze;
- (BOOL)effectResetRetiming:(CDStruct_1b6d18a9 *)arg1 newTimeEnd:(CDStruct_1b6d18a9 *)arg2 newTimeIn:(CDStruct_1b6d18a9 *)arg3 newTimeOut:(CDStruct_1b6d18a9 *)arg4;
- (BOOL)effectApplyBladeSpeedPresetAtComponentTime:(CDStruct_1b6d18a9)arg1 error:(id *)arg2;
- (BOOL)effectApplyHoldPresetAtComponentTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;
- (BOOL)effectApplyJumpCutPresetForMarkers:(id)arg1 framesToJump:(int)arg2 addedDuration:(CDStruct_1b6d18a9 *)arg3 error:(id *)arg4;
- (BOOL)effectApplyRewindPresetStartAt:(CDStruct_1b6d18a9)arg1 endAt:(CDStruct_1b6d18a9)arg2 rewindSpeed:(double)arg3 addedDuration:(CDStruct_1b6d18a9 *)arg4 error:(id *)arg5;
- (BOOL)effectApplyInstantReplayPresetStartAt:(CDStruct_1b6d18a9)arg1 endAt:(CDStruct_1b6d18a9)arg2 rate:(double)arg3 newRange:(CDStruct_e83c9415 *)arg4 error:(id *)arg5;
- (BOOL)effectApplySpeedRampPresetStartAt:(CDStruct_1b6d18a9)arg1 endAt:(CDStruct_1b6d18a9)arg2 frameDuration:(CDStruct_1b6d18a9)arg3 fromRate:(double)arg4 toRate:(double)arg5 changedDuration:(CDStruct_1b6d18a9 *)arg6 error:(id *)arg7;
- (BOOL)_addRetimingSegmentAtTime:(CDStruct_1b6d18a9)arg1 error:(id *)arg2;
- (BOOL)hasKeyWithinFrameDurationAtTime:(CDStruct_1b6d18a9)arg1;
- (int)keyIndexWithinFrameDurationAtTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)_removeRetimingKeysWithinTimeRange:(CDStruct_e83c9415)arg1 error:(id *)arg2;
- (BOOL)setVariableRetiming:(double)arg1 aroundTime:(CDStruct_1b6d18a9)arg2 segmentIndex:(int)arg3 timescale:(int)arg4 newStartTime:(CDStruct_1b6d18a9 *)arg5 newEndTime:(CDStruct_1b6d18a9 *)arg6 newInTime:(CDStruct_1b6d18a9 *)arg7 newOutTime:(CDStruct_1b6d18a9 *)arg8 error:(id *)arg9;
- (BOOL)variableRetimeChannel:(id)arg1 rateScale:(double)arg2 aroundTime:(CDStruct_1b6d18a9)arg3 segmentIndex:(int)arg4 timescale:(int)arg5 retimeEffect:(id)arg6 newStartTime:(CDStruct_1b6d18a9 *)arg7 newEndTime:(CDStruct_1b6d18a9 *)arg8 newInTime:(CDStruct_1b6d18a9 *)arg9 newOutTime:(CDStruct_1b6d18a9 *)arg10;
- (BOOL)setConstantRetiming:(double)arg1 currentRate:(double)arg2 timescale:(int)arg3 newStartTime:(CDStruct_1b6d18a9 *)arg4 newEndTime:(CDStruct_1b6d18a9 *)arg5 newInTime:(CDStruct_1b6d18a9 *)arg6 newOutTime:(CDStruct_1b6d18a9 *)arg7 error:(id *)arg8;
- (BOOL)constantRetimeChannel:(id)arg1 rate:(double)arg2 currentRate:(double)arg3 timescale:(int)arg4 retimeEffect:(id)arg5 newStartTime:(CDStruct_1b6d18a9 *)arg6 newEndTime:(CDStruct_1b6d18a9 *)arg7 newInTime:(CDStruct_1b6d18a9 *)arg8 newOutTime:(CDStruct_1b6d18a9 *)arg9;
- (id)_setupBeforeChangeChannel;
- (void)checkChannelKeys:(id)arg1 msg:(id)arg2;
- (void)offsetKeyframes:(CDStruct_1b6d18a9)arg1;
- (void)_offsetEffectsKeyframes:(id)arg1 offset:(CDStruct_1b6d18a9)arg2;
- (void)_offsetChannelKeyframes:(id)arg1 channel:(id)arg2 offset:(CDStruct_1b6d18a9)arg3;
- (void)_offsetLeafChannelKeyframes:(id)arg1 offset:(CDStruct_1b6d18a9)arg2 offsetValue:(BOOL)arg3;
- (double)retimingRateForRange:(CDStruct_e83c9415)arg1;
- (int)retimingSegmentCount;
- (double)constantRetimingRate;
- (void)conformToVideoProps:(id)arg1 forceNoRateConformScale:(BOOL)arg2 forceSourceSampleDuration:(CDStruct_1b6d18a9)arg3;
- (unsigned long long)indexForRateConform;
- (void)adjustRetimeKeysAfterAddRateConform:(id)arg1 videoFormat:(id)arg2;
- (CDStruct_1b6d18a9)sampleDuration;
- (CDStruct_1b6d18a9)sourceSampleDuration;
- (CDStruct_1b6d18a9)rateConform:(CDStruct_1b6d18a9)arg1 targetSampleDuration:(CDStruct_1b6d18a9)arg2;
- (BOOL)rateConformRequired;
- (void)moreChannelParameterChanged_Retiming:(id)arg1;
- (void)turnOffRateConformOpticalFlowWithSamplingMethod:(long long)arg1;
- (void)performRateConformOpticalFlow;
- (void)performRetimeOpticalFlow;
- (void)_updateMediaRange;
- (CDStruct_1b6d18a9)globalTimeFromMediaTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaTimeFromGlobalTimeClippedToUnclippedRange:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaTimeFromGlobalTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaTimeFromComponentTime:(CDStruct_1b6d18a9)arg1;
- (void)copyRetimeCurveToAudio;
- (void)setRetimeCurveNewMediaStart:(CDStruct_1b6d18a9)arg1 newMediaEnd:(CDStruct_1b6d18a9)arg2;
- (BOOL)needToExtendRetimeCurveWithMediaStart:(CDStruct_1b6d18a9)arg1 mediaEnd:(CDStruct_1b6d18a9)arg2;
- (BOOL)hasRateConformScale;
- (BOOL)retimed;
- (id)rateConformEffect;
- (id)extrapolationString;
- (id)retimeEvalChannel;
- (id)retimeUIChannel;
- (id)retimeEffect;
- (void)resetMediaRangeInRetimigFilter;
- (void)copyRetimeCurveToEffectStack:(id)arg1;
- (void)addRetimingFilterWithRange:(CDStruct_e83c9415)arg1;
- (void)createRetimingFilterWithRange:(CDStruct_e83c9415)arg1;
- (unsigned long long)indexForRetiming;
- (BOOL)requiresVideoSpatialConform:(id)arg1;
- (void)releaseAudioDuckingChannel;
- (id)demandAudioDuckingChannel;
- (id)audioDuckingChannel;
- (id)audioChannelsConfigFolderChannel;
- (id)audioDisabledChannel;
- (id)audioLevelChannel;
- (id)intrinsicAudioChannels;
- (unsigned long long)_audioPropertiesInsertIndexForID:(unsigned int)arg1;
- (unsigned long long)_audioIntrinsicsInsertIndexForID:(unsigned int)arg1;
- (BOOL)isDefaultAudioEffectStack;
- (id)effectsForAudioCurvesLayer:(unsigned int)arg1;
- (id)audioAnalyzingEffects;
- (id)audioAnalyzingEffects:(unsigned int)arg1;
- (id)audioIntrinsicEffectNodeEffects:(unsigned int)arg1;
- (void)removeSurroundPannerEffect;
- (id)surroundPannerEffect:(BOOL)arg1;
- (id)normalizeEffect:(BOOL)arg1;
- (id)noiseRemovalEffect:(BOOL)arg1;
- (id)voiceMatchEffect:(BOOL)arg1;
- (id)loudnessEffect:(BOOL)arg1;
- (id)eqEffect:(BOOL)arg1;
- (id)loudnessAnalyzerEffect:(BOOL)arg1;
- (id)humRemovalEffect:(BOOL)arg1;
- (id)matchEffect:(BOOL)arg1;
- (id)_intrinsicAudioEffectForEffectID:(id)arg1 addIfNotFound:(BOOL)arg2;
- (BOOL)update_removeDisabledAudioEnhancementEffects;
- (BOOL)update_moveVolumePanFolder;
- (BOOL)update_migrateAudioIntrinsics;
- (BOOL)isHidden:(id)arg1;
- (void)performRollingShutterCorrection;
- (void)performStabilization:(id)arg1;
- (CDStruct_e83c9415)mediaRangeToAnalyze;
- (BOOL)isStabilized;
- (id)rollingShutterEffect;
- (id)stabilizationEffect;
- (void)addRollingShutterEffect;
- (void)addStabilizationEffect;
- (id)arrayWithSecondaryEffects;

@end

