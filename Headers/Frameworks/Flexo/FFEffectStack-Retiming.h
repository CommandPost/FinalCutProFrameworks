//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffectStack.h>

@interface FFEffectStack (Retiming)
- (BOOL)requiresVideoSpatialConform:(id)arg1;
- (BOOL)requiresVideoRateConform:(id)arg1;
- (void)setConstantRetiming:(double)arg1;
- (unsigned long long)indexForRetiming;
- (void)createRetimingFilterWithRange:(CDStruct_e83c9415)arg1;
- (void)addRetimingFilterWithRange:(CDStruct_e83c9415)arg1;
- (void)resetMediaRangeInRetimigFilter;
- (id)retimeEffect;
- (id)retimeChannel;
- (id)extrapolationString;
- (id)rateConformEffect;
- (BOOL)retimed;
- (BOOL)hasRateConformScale;
- (void)setRetimeCurveNewMediaStart:(CDStruct_1b6d18a9)arg1 newMediaEnd:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)mediaTimeFromComponentTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaTimeFromGlobalTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)mediaTimeFromGlobalTimeClippedToUnclippedRange:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)globalTimeFromMediaTime:(CDStruct_1b6d18a9)arg1;
- (void)_updateMediaRange;
- (void)adjustRetimeKeysAfterToggleOffRateConform:(id)arg1 sequence:(id)arg2;
- (void)adjustRetimeKeysAfterToggleOnRateConform:(id)arg1 sequence:(id)arg2;
- (void)performRetimeOpticalFlow;
- (void)performRateConformOpticalFlow;
- (void)retimeEffectLevel2ChannelChanged:(id)arg1;
- (void)moreChannelParameterChanged_Retiming:(id)arg1;
- (BOOL)rateConformRequired;
- (CDStruct_1b6d18a9)rateConform:(CDStruct_1b6d18a9)arg1 targetSampleDuration:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)sourceSampleDuration;
- (CDStruct_1b6d18a9)sampleDuration;
- (void)adjustRetimeKeysAfterAddRateConform:(id)arg1 videoFormat:(id)arg2;
- (unsigned long long)indexForRateConform;
- (void)conformToVideoProps:(id)arg1;
- (double)constantRetimingRate;
- (double)segmentRetimingRateAroundComponentTime:(CDStruct_1b6d18a9)arg1;
- (double)segmentRetimingRateAtSegmentIndex:(int)arg1;
- (CDStruct_e83c9415)segmentTimeRangeAtIndex:(int)arg1;
- (int)segmentIndexForComponentTime:(CDStruct_1b6d18a9)arg1;
- (int)retimingSegmentCount;
@end

