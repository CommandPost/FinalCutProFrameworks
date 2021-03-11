//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class FFAnchoredSequence, FFSnappingCalculation, NSSet;

@protocol FFSnappingDataSource <NSObject>
- (void)snappingCalc:(FFSnappingCalculation *)arg1 didSnapClips:(NSSet *)arg2 atTime:(CDStruct_1b6d18a9)arg3 withAligment:(BOOL)arg4;
- (BOOL)snappingCalc:(FFSnappingCalculation *)arg1 clipIsBackgroundMusic:(id)arg2;
- (BOOL)snappingCalc:(FFSnappingCalculation *)arg1 clipIsValid:(id)arg2;
- (BOOL)snappingCalc:(FFSnappingCalculation *)arg1 clipIsTransition:(id)arg2;
- (BOOL)snappingCalc:(FFSnappingCalculation *)arg1 clipIsStoryline:(id)arg2;
- (BOOL)snappingCalc:(FFSnappingCalculation *)arg1 clipIsMarker:(id)arg2;
- (BOOL)snappingCalc:(FFSnappingCalculation *)arg1 clipIsGap:(id)arg2;
- (BOOL)snappingCalc:(FFSnappingCalculation *)arg1 clipHasSplitAudio:(id)arg2;
- (int)snappingCalc:(FFSnappingCalculation *)arg1 temporalResolutionForClip:(id)arg2;
- (CDStruct_e83c9415)snappingCalc:(FFSnappingCalculation *)arg1 audioTimeRangeOfClip:(id)arg2;
- (CDStruct_e83c9415)snappingCalc:(FFSnappingCalculation *)arg1 timeRangeLimitsOfClip:(id)arg2;
- (CDStruct_e83c9415)snappingCalc:(FFSnappingCalculation *)arg1 timeRangeOfClip:(id)arg2;
- (id)snappingCalc:(FFSnappingCalculation *)arg1 parentOfClip:(id)arg2;
- (NSSet *)snappingCalc:(FFSnappingCalculation *)arg1 clipsInStoryline:(id)arg2;
- (NSSet *)snappingCalc:(FFSnappingCalculation *)arg1 clipsAnchoredToClip:(id)arg2;
- (id)snappingCalc:(FFSnappingCalculation *)arg1 trailingEdgeTransitionForClip:(id)arg2;
- (id)snappingCalc:(FFSnappingCalculation *)arg1 leadingEdgeTransitionForClip:(id)arg2;
- (id)snappingCalc:(FFSnappingCalculation *)arg1 clipAfterClip:(id)arg2;
- (id)snappingCalc:(FFSnappingCalculation *)arg1 clipBeforeClip:(id)arg2;
- (NSSet *)snappingCalc:(FFSnappingCalculation *)arg1 audioComponentRangesOnClip:(id)arg2 inRange:(CDStruct_e83c9415)arg3;
- (NSSet *)snappingCalc:(FFSnappingCalculation *)arg1 markersOnClip:(id)arg2 inRange:(CDStruct_e83c9415)arg3;
- (NSSet *)snappingCalc:(FFSnappingCalculation *)arg1 keyFramesOnClip:(id)arg2 inRange:(CDStruct_e83c9415)arg3;
- (NSSet *)snappingCalc:(FFSnappingCalculation *)arg1 selectedTimeRangesInRange:(CDStruct_e83c9415)arg2;
- (NSSet *)snappingCalc:(FFSnappingCalculation *)arg1 clipsDownstreamFromClips:(NSSet *)arg2 inRange:(CDStruct_e83c9415)arg3;
- (NSSet *)snappingCalc:(FFSnappingCalculation *)arg1 clipsWithSplitAudioInRange:(CDStruct_e83c9415)arg2;
- (NSSet *)snappingCalc:(FFSnappingCalculation *)arg1 clipsInRange:(CDStruct_e83c9415)arg2;
- (CDStruct_e83c9415)snappingCalc:(FFSnappingCalculation *)arg1 snappableRangeForTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)snappingCalc:(FFSnappingCalculation *)arg1 ceilingTime:(CDStruct_1b6d18a9)arg2 temporalResolutionMode:(int)arg3;
- (CDStruct_1b6d18a9)snappingCalc:(FFSnappingCalculation *)arg1 floorTime:(CDStruct_1b6d18a9)arg2 temporalResolutionMode:(int)arg3;
- (CDStruct_e83c9415)visibleTimeRangeForSnappingCalc:(FFSnappingCalculation *)arg1;
- (CDStruct_e83c9415)timeRangeForSnappingCalc:(FFSnappingCalculation *)arg1;
- (CDStruct_1b6d18a9)frameDurationForSnappingCalc:(FFSnappingCalculation *)arg1;
- (CDStruct_1b6d18a9)skimmingPlayheadTimeForSnappingCalc:(FFSnappingCalculation *)arg1;
- (CDStruct_1b6d18a9)playheadTimeForSnappingCalc:(FFSnappingCalculation *)arg1;
- (FFAnchoredSequence *)sequenceForSnappingCalc:(FFSnappingCalculation *)arg1;
@end

