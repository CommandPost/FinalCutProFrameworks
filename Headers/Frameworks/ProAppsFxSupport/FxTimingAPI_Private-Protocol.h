//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol FxFilter, FxTransition;

@protocol FxTimingAPI_Private
- (void)durationFxTimeOfMedia:(CDUnion_2516e51e *)arg1;
- (CDUnion_2516e51e)durationOfMediaForFilter:(id <FxFilter>)arg1;
- (void)startFxTimeOfMedia:(CDUnion_2516e51e *)arg1;
- (CDUnion_2516e51e)startTimeOfMediaForFilter:(id <FxFilter>)arg1;
- (_Bool)isAtStartofStoryline:(id <FxTransition>)arg1;
- (_Bool)isAtEndofStoryline:(id <FxTransition>)arg1;
- (_Bool)isGapBefore:(id <FxTransition>)arg1;
- (_Bool)isGapAfter:(id <FxTransition>)arg1;
@end

