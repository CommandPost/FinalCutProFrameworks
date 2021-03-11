//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKTimelineLane.h>

@class CATextLayer, LKTimecodeFormatter, NSArray, NSMutableArray, TLKRulerLayer;

@interface TLKRulerLane : TLKTimelineLane
{
    TLKRulerLayer *_rulerLayer;
    CDStruct_1b6d18a9 _timePerRulerSegment;
    CDStruct_1b6d18a9 _frameDuration;
    int _numberOfSubTicks;
    struct CGSize _timecodeSize;
    LKTimecodeFormatter *_timecodeFormatter;
    NSMutableArray *_renderInfoLayers;
    NSArray *_rulerSegments;
    NSArray *_rulerSegmentsParts;
    NSMutableArray *_rulerSegmentsLayers;
    CATextLayer *_tickLabelLayerTemplate;
    double _tickLabelXOffset;
    double _tickLabelYOffset;
    double _tickHeight;
    double _tickXOffset;
    double _tickYOffset;
    double _subTickSpacing;
    double _renderBarHeight;
    double _renderBarYOffset;
    double _tickWidth;
}

- (BOOL)hidden;
- (struct CGSize)sizeForRulerSegmentLabelWithString:(id)arg1;
- (void)hideRulerSegmentLayersStartingAt:(unsigned long long)arg1;
- (id)createSubTickLayerForRulerSegmentLayers:(id)arg1;
- (void)createTickLayerForRulerSegmentLayers:(id)arg1;
- (void)createLabelLayerForRulerSegmentLayers:(id)arg1;
- (id)subTickLayerOfRulerSegmentLayers:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rulerSegmentLayersAtIndex:(unsigned long long)arg1;
- (void)updateSubTicksLayersOfRulerSegmentLayers:(id)arg1 withRulerSegmentParts:(id)arg2;
- (void)updateSubTickLayerOfRulerSegmentLayers:(id)arg1 atIndex:(unsigned long long)arg2 withRulerSegmentParts:(id)arg3;
- (void)updateTickLayerOfRulerSegmentLayers:(id)arg1 withRulerSegmentParts:(id)arg2;
- (void)updateLabelLayerOfRulerSegmentLayers:(id)arg1 withRulerSegmentParts:(id)arg2;
- (void)updateRulerSegmentsLayers;
- (void)createRulerLayer;
- (CDStruct_1b6d18a9)timeStepForNumberOfSubTicks:(int)arg1;
- (long long)indexOfLastRulerSegmentInArray:(id)arg1 inVisibleRect:(struct CGRect)arg2 startingAtIndex:(long long)arg3;
- (long long)indexOfFirstRulerSegmentInArray:(id)arg1 inVisibleRect:(struct CGRect)arg2;
- (void)updateRulerSegmentsParts;
- (void)invalidateRulerSegments:(id)arg1 startingAt:(unsigned long long)arg2;
- (void)setRulerSegments:(id)arg1;
- (id)copyOfRulerSegments;
- (id)mutableCopyOfRulerSegments;
- (void)invalidateRulerSegments;
- (double)rulerSegmentSpacingWithTimePerPixel:(double)arg1;
- (BOOL)updateRulerSegmentsInVisibleTimeRange:(CDStruct_e83c9415)arg1;
- (BOOL)updateRulerSegments;
- (BOOL)timecodeSizeIsInvalid;
- (void)invalidateTimecodeSize;
- (struct CGSize)timecodeStringSizeforTime:(CDStruct_1b6d18a9)arg1;
- (void)updateTimecodeSizeIfNeeded;
- (BOOL)updateRulerSpaceAndTimeConstraints;
- (BOOL)updateRulerModel;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)setTimelineView:(id)arg1;
- (void)cancelDelayedReloadVisibleLayers;
- (void)performDelayedReloadVisibleLayers;
- (void)reloadVisibleLayers;
- (double)width;
- (void)setScrolling:(BOOL)arg1;
- (id)partIdentifier;
@property(retain) LKTimecodeFormatter *timecodeFormatter;
- (void)forceUpdateRulerModel;
- (void)updateRulerSegmentsLayersWithoutAnimations;
- (id)rulerLayer;
- (void)updateRenderIndicator;
- (void)updateRuler;
- (void)dealloc;
- (id)init;

@end

