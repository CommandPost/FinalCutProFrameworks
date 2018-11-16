//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelDouble, CHChannelEnum;

__attribute__((visibility("hidden")))
@interface FFHeCropEffect : FFHeliumEffect
{
    CHChannelDouble *_chLeft;
    CHChannelDouble *_chRight;
    CHChannelDouble *_chBottom;
    CHChannelDouble *_chTop;
    CHChannelDouble *_chLeftKB;
    CHChannelDouble *_chRightKB;
    CHChannelDouble *_chBottomKB;
    CHChannelDouble *_chTopKB;
    CHChannelEnum *_chType;
}

+ (void)registerEffects;
- (BOOL)supportsReentrancy;
- (id)primaryAnimationChannel;
- (id)augmentChannelChangeDescriptionForNotification:(id)arg1;
- (void)getKenBurnsChannelValueAtTime:(CDStruct_1b6d18a9)arg1 left:(double *)arg2 right:(double *)arg3 top:(double *)arg4 bottom:(double *)arg5;
- (void)channelsWereReset;
- (void)channelParameterChanged:(id)arg1;
- (void)setCropParmeterValuesForCropType:(int)arg1 operationBeginEnd:(BOOL)arg2;
- (void)_showHideChannelWithOperation:(id)arg1 show:(BOOL)arg2 operationBeginEnd:(BOOL)arg3;
- (void)setupDefaultConsumerCropValues:(BOOL)arg1 channelOperation:(BOOL)arg2 checkForSequenceDefaults:(BOOL)arg3;
- (void)defaultValuesForConsumerSetup:(struct FFSimpleCropParameters *)arg1 checkForSequenceDefaults:(BOOL)arg2;
- (void)_setupValuesForCropTypeIfValuesStillNoOp;
- (void)computeStartEndRectangles:(struct FFSimpleCropParameters *)arg1 frameBounds:(struct CGRect)arg2 squareInputBounds:(struct CGRect)arg3;
- (void)_adjustLRTBToBounds:(double *)arg1 right:(double *)arg2 top:(double *)arg3 bottom:(double *)arg4 squareInputBounds:(struct CGRect)arg5 faceCenterX:(double)arg6 faceCenterY:(double)arg7;
- (BOOL)valuesSetForKf:(int)arg1 kf:(int)arg2 andL:(double)arg3 andR:(double)arg4 andB:(double)arg5 andT:(double)arg6 time:(CDStruct_1b6d18a9)arg7;
- (void)setCropKeyframeForType:(int)arg1 kf:(int)arg2 andL:(double)arg3 andR:(double)arg4 andB:(double)arg5 andT:(double)arg6 time:(CDStruct_1b6d18a9)arg7 options:(unsigned int)arg8 channelOperation:(BOOL)arg9;
- (void)conformToScalesAndBounds:(double *)arg1 r:(double *)arg2 b:(double *)arg3 t:(double *)arg4;
- (void)setCropKeyframeForTypePercentage:(int)arg1 kf:(int)arg2 andL:(double)arg3 andR:(double)arg4 andB:(double)arg5 andT:(double)arg6 time:(CDStruct_1b6d18a9)arg7 options:(unsigned int)arg8 channelOperation:(BOOL)arg9;
- (void)_computeFrameBoudsRectangleInImageSpaceAdjustments:(double *)arg1 right:(double *)arg2 top:(double *)arg3 bottom:(double *)arg4;
- (void)computeFrameBoundsRectangleInImageSpace:(double *)arg1 right:(double *)arg2 top:(double *)arg3 bottom:(double *)arg4;
- (BOOL)shouldNotificationsChannelCauseInternalStateChange:(id)arg1;
- (id)keyframeableChannels;
- (CDStruct_1b6d18a9)durationToUseForMD5Calcs;
- (CDStruct_e83c9415)_kenBurnsRange;
- (BOOL)effectDurationImpactsMD5;
- (id)inputKeys;
- (id)onScreenControlsForToolForEffect;
- (id)onScreenControlsForChannelFolder:(id)arg1 effectStack:(id)arg2;
- (void)createChannelsInFolder:(id)arg1;
- (void)setupCropChannel:(id *)arg1 folder:(id)arg2 name:(id)arg3 channelID:(unsigned int)arg4 defaultCurve:(double)arg5 minCurve:(double)arg6 minUI:(double)arg7 maxUI:(double)arg8 hidden:(BOOL)arg9;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (void)modifyImageTransform:(id)arg1 andImageSpaceBounds:(struct CGRect *)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (struct CGRect)updatePixelSpaceBounds:(struct CGRect)arg1 atTime:(CDStruct_1b6d18a9)arg2 pixelTransform:(id)arg3;
- (id)newUpdatedDownstreamPT:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setParameterValuesForNode:(struct HGNode *)arg1 atTime:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 pixelTransform:(id)arg5;
- (id)cropMatrixAtTime:(CDStruct_1b6d18a9)arg1;
- (id)cropType;
- (BOOL)shouldChannelBeAdjustedByRetime:(id)arg1;
- (void)removeLegacyChildren;
- (id)legacyBottomCropChannel;
- (id)legacyTopCropChannel;
- (id)legacyRightCropChannel;
- (id)legacyLeftCropChannel;
- (id)bottomKBChannel;
- (id)topKBChannel;
- (id)rightKBChannel;
- (id)leftKBChannel;
- (id)bottomChannel;
- (id)topChannel;
- (id)rightChannel;
- (id)leftChannel;
- (BOOL)isAnimated;
- (struct HGNode *)newNodeForContext:(id)arg1;
- (BOOL)writeDefaultChannels;
- (BOOL)isNoOp;
- (BOOL)cropCropChannelsNoOp;
- (BOOL)KenBurnsEndValueChannelsNoOp;
- (BOOL)KenBurnsStartValueChannelsNoOp;
- (BOOL)kenBurnsChannelsNoOp;
- (BOOL)trimChannelsNoOp;
- (id)curveDisplayName;
- (id)newChannelFolderWithParent:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end

