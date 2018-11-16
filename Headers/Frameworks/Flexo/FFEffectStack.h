//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "FFCHChannelDelegate.h"
#import "FFMD5Protocol.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"

@class FFAnchoredObject, FFCHObservableFolder, FFCHRootChannel, FFEffect, FFMD5AndOffset, NSArray, NSMutableArray, NSString;

@interface FFEffectStack : FFBaseDSObject <NSCoding, NSCopying, FFCHChannelDelegate, FFMD5Protocol, NSPasteboardWriting, NSPasteboardReading>
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
    NSMutableArray *_savedAnalyzingAudioEffects;
    FFAnchoredObject *_anchoredObject;
    NSString *_filterType;
    unsigned int _noOpIntrinsicFlags;
    unsigned int _insertingDefaultIntrinsics:1;
    unsigned int _defaultIntrinsics:1;
    BOOL _isOpaque;
    BOOL _suspendEffectChangedNotifications;
    BOOL _pendingEffectChangeNotification;
}

+ (BOOL)DSObjectCanProxy;
+ (id)copyClassDescription;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)anchoredObject;
- (void)setAnchoredObject:(id)arg1;
- (void)resetAnchoredObject:(id)arg1;
- (id)compChannelsData;
- (void)setCompChannelsData:(id)arg1;
- (id)observedObjectForChannel:(id)arg1;
- (BOOL)_shouldSendNotificationForEffectsArray:(id)arg1;
- (void)_insertObject:(id)arg1 inEffectsArray:(id)arg2 atIndex:(unsigned long long)arg3 postNotification:(BOOL)arg4;
- (void)_removeObjectFromEffectsArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)effects;
- (void)insertObject:(id)arg1 inEffectsAtIndex:(unsigned long long)arg2 postNotification:(BOOL)arg3;
- (void)insertObject:(id)arg1 inEffectsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromEffectsAtIndex:(unsigned long long)arg1;
- (id)intrinsicEffects;
- (BOOL)_effectValidForKenBurns:(id)arg1;
- (BOOL)_effectValidForMatchingAnalysis:(id)arg1;
- (BOOL)_effectValidForColorMaskAnalysis:(id)arg1;
- (void)insertObject:(id)arg1 inIntrinsicEffectsAtIndex:(unsigned long long)arg2 postNotification:(BOOL)arg3;
- (void)insertObject:(id)arg1 inIntrinsicEffectsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromIntrinsicEffectsAtIndex:(unsigned long long)arg1;
- (id)intrinsicEffectWithID:(id)arg1;
@property(retain, nonatomic) NSArray *savedAnalyzingAudioEffects;
- (void)insertObject:(id)arg1 inSavedAnalyzingAudioEffectsAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromSavedAnalyzingAudioEffectsAtIndex:(unsigned long long)arg1;
- (BOOL)hasAudio;
- (BOOL)hasVideo;
- (void)_initStandardChannelHierarchy;
- (void)_addAudioChannels;
- (void)_recoverFromChannelpalooza;
- (void)_addIntrinsicVideoEffects;
- (void)_addIntrinsicVideoEffectsForTransition;
- (void)_initIntrinsicEffects;
- (id)init;
- (id)initWithFilterType:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) int effectStackVersion;
- (void)effectStackDidLoad:(id)arg1;
- (BOOL)writeDefaultIntrinsicChannels;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initCopy:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)hasDefaultIntrinsics;
- (void *)beginDefaultIntrinsics;
- (void)endDefaultIntrinsics:(void *)arg1;
- (id)_newSourceByAppendingComponentEffectsToSource:(id)arg1 effectCount:(long long)arg2 offset:(CDStruct_1b6d18a9)arg3;
- (unsigned long long)_indexOfFirstIntrinsicEffectAppliedAfterUserEffects;
- (id)intrinsicChannels;
- (id)intrinsicAudioChannels;
- (id)audioLevelChannel;
- (BOOL)_isOpaque;
- (BOOL)_checkOpacity;
- (id)anchoredObjectForChannelAssociateModelObject:(id)arg1;
- (void)waitingForMotionAnalysisOrOpticalFlow:(char *)arg1 waitingForOpticalFlowAnalysis:(char *)arg2;
- (void)percentageToPixelValuesLRTB:(double *)arg1 right:(double *)arg2 top:(double *)arg3 bottom:(double *)arg4;
- (void)pixelValuesToPercentageLRTB:(double *)arg1 right:(double *)arg2 top:(double *)arg3 bottom:(double *)arg4;
- (void)XYPercentageToPixelValuesXY:(double *)arg1 y:(double *)arg2;
- (void)pixelValuesToXYPercentageXY:(double *)arg1 y:(double *)arg2;
- (void)XYPercentageToPixelValuesXYForContainer:(double *)arg1 y:(double *)arg2;
- (void)pixelValuesToXYPercentageXYForContainer:(double *)arg1 y:(double *)arg2;
- (void)XYZPercentageToPixelValuesXYZForContainer:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (void)XYZSamplesPercentageToPixelValuesXYZSamplesForContainer:(int)arg1 samplesX:(double *)arg2 samplesY:(double *)arg3 samplesZ:(double *)arg4;
- (void)pixelValuesToXYZPercentageXYZForContainer:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (void)pixelValuesToXYZSamplesPercentageXYZSamplesForContainer:(int)arg1 samplesX:(double *)arg2 samplesY:(double *)arg3 samplesZ:(double *)arg4;
- (void)XYZPercentageToPixelValuesXYZForSuppliedBounds:(double *)arg1 y:(double *)arg2 z:(double *)arg3 bounds:(struct CGRect)arg4;
- (void)pixelValuesToXYZPercentageXYZForSuppliedBounds:(double *)arg1 y:(double *)arg2 z:(double *)arg3 bounds:(struct CGRect)arg4;
- (unsigned long long)addEffect:(id)arg1;
- (unsigned long long)addEffectWithID:(id)arg1;
- (long long)firstOccuranceOfEffectID:(id)arg1;
- (void)moveEffect:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeEffectAtIndex:(unsigned long long)arg1;
- (void)removeEffect:(id)arg1;
- (unsigned long long)effectCount;
- (unsigned long long)visibleEffectCount;
- (id)effectAtIndex:(unsigned long long)arg1;
- (id)filterAtEvaluationIndex:(unsigned long long)arg1;
- (unsigned long long)evaluationIndexForEffect:(id)arg1;
- (struct CGRect)boundsUpToEffectIndex:(unsigned long long)arg1 atTime:(CDStruct_1b6d18a9)arg2 transformed:(BOOL)arg3;
- (struct CGRect)boundsUpToEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 transformed:(BOOL)arg3;
- (id)customEffect;
- (void)setCustomEffect:(id)arg1;
- (void)adjustEffectsAfterBlade:(BOOL)arg1;
- (void)adjustEffectsAfterTrimmingLeft:(BOOL)arg1 right:(_Bool)arg2 clippedRange:(CDStruct_e83c9415)arg3;
- (id)rootChannel;
- (id)propertyChannels;
- (id)effectChannels;
- (id)objectChannels;
- (id)_effectForChannel:(id)arg1;
- (BOOL)containsChannel:(id)arg1;
- (BOOL)canReorderChannel:(id)arg1;
- (BOOL)reorderChannel:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)canRemoveChannel:(id)arg1;
- (void)removeChannel:(id)arg1;
- (void)actionBegin:(id)arg1 animationHint:(id)arg2 deferUpdates:(BOOL)arg3;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
- (void)notifyEffectsStackAnchoredObjectRemovedFromSequence:(id)arg1 sequence:(id)arg2;
- (id)undoHandler;
- (id)onScreenControls;
- (id)videoProps;
- (void)imageSpaceBounds:(struct CGRect *)arg1 andTransform:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (struct CGRect)squarePixelSourceRect;
- (struct CGRect)imageSpaceBoundsAtTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)moreChannelParameterChanged_CheckIfChannelWouldCauseTimingChange:(id)arg1;
- (BOOL)moreChannelParameterChanged_CheckIfNeedStreamInval:(id)arg1;
- (void)channelParameterChanged:(id)arg1;
- (void)intrinsicChannelChanged:(id)arg1;
- (void)effect:(id)arg1 channelParameterChanged:(id)arg2;
- (void)passEffectNotificationUpChain:(id)arg1 userInfo:(id)arg2 informParents:(BOOL)arg3;
- (void)postEffectsChangedNotification;
- (void)postEffectStackChangedNotification;
- (BOOL)operationAddEffect:(id)arg1 ranges:(id)arg2 error:(id *)arg3;
- (BOOL)operationAddEffectID:(id)arg1 ranges:(id)arg2 error:(id *)arg3;
- (BOOL)operationRemoveEffectAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (void)_readLock;
- (void)_readUnlock;
- (void)_writeLock;
- (void)_writeUnlock;
- (BOOL)requiresOpticalFlow;
- (id)colorEffect;
- (id)cropEffect;
- (id)conformEffect;
- (BOOL)isInCropOrKenBurnsCropMode;
- (void)computeConformScaleX:(double *)arg1 scaleY:(double *)arg2 frameBounds:(struct CGRect *)arg3 squareInputBounds:(struct CGRect *)arg4;
- (id)distortEffect;
- (id)componentTransformAtTime:(CDStruct_1b6d18a9)arg1;
- (id)componentTransformForEffect:(unsigned long long)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)transformBetweenStartEffect:(unsigned long long)arg1 andEndEffect:(unsigned long long)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (struct CGRect)componentBoundsAtTime:(CDStruct_1b6d18a9)arg1 transformed:(BOOL)arg2;
- (id)effectForEffectID:(id)arg1 createIfNotFound:(_Bool)arg2;
- (void)_clearCachedAudioMD5;
- (CDStruct_60067b7e)audioMD5:(int)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
@property(retain, nonatomic) FFMD5AndOffset *cachedAudioMD5; // @synthesize cachedAudioMD5=_cachedAudioMD5;
@property(retain, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;

@end

