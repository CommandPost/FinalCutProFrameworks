//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface FFSnappingCalculation : NSObject
{
    id <FFSnappingDataSource> _dataSource;
    double _snappingDistance;
    CDStruct_1b6d18a9 _offset;
    CDStruct_1b6d18a9 _delta;
    CDStruct_1b6d18a9 _minDelta;
    CDStruct_1b6d18a9 _maxDelta;
    BOOL _minDeltaIsInclusive;
    BOOL _maxDeltaIsInclusive;
    BOOL _leadingEdgeRipple;
    BOOL _inhibitPlayheadSnapping;
    BOOL _directionIsReversed;
    BOOL _overrideConnections;
    BOOL _timePreservingMode;
    BOOL _snappingLeadingEdge;
    BOOL _snappingTrailingEdge;
    BOOL _isTrimming;
    int _edgeType;
    int _resolutionMode;
    CDStruct_1b6d18a9 _additionalOffset;
    NSMutableSet *_leadingEdgesToIgnore;
    NSMutableSet *_trailingEdgesToIgnore;
    NSMutableSet *_leadingEdges;
    NSMutableSet *_trailingEdges;
    NSMutableSet *_rawLeadingEdges;
    NSMutableSet *_rawTrailingEdges;
    NSMutableSet *_snappedMarkers;
    NSMutableSet *_markerEdges;
    CDStruct_1b6d18a9 _snappedPlayheadTime;
    CDStruct_1b6d18a9 _snappedTimeRangeStart;
    CDStruct_1b6d18a9 _snappedTimeRangeEnd;
    CDStruct_1b6d18a9 _snappedAudioComponentRangeTime;
    BOOL _showDragGuides;
    NSMutableDictionary *_guides;
    CDUnknownBlockType _predicate;
    CDStruct_1b6d18a9 _predicateTime;
}

@property(nonatomic) BOOL timePreservingMode; // @synthesize timePreservingMode=_timePreservingMode;
@property(nonatomic) BOOL overrideConnections; // @synthesize overrideConnections=_overrideConnections;
@property(nonatomic) BOOL directionIsReversed; // @synthesize directionIsReversed=_directionIsReversed;
@property(nonatomic) BOOL inhibitPlayheadSnapping; // @synthesize inhibitPlayheadSnapping=_inhibitPlayheadSnapping;
@property(nonatomic) double snappingDistance; // @synthesize snappingDistance=_snappingDistance;
@property(nonatomic) id <FFSnappingDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_didSnapClips:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 withAligment:(BOOL)arg3;
- (CDStruct_1b6d18a9)_audioFadeDuration;
- (BOOL)_clipIsBackgroundMusic:(id)arg1;
- (BOOL)_clipIsValid:(id)arg1;
- (BOOL)_clipIsTransition:(id)arg1;
- (BOOL)_clipIsStoryline:(id)arg1;
- (BOOL)_clipIsMarker:(id)arg1;
- (BOOL)_clipIsGap:(id)arg1;
- (BOOL)_clipHasSplitAudio:(id)arg1;
- (int)_temporalResolutionForClip:(id)arg1;
- (CDStruct_e83c9415)_audioTimeRangeOfClip:(id)arg1;
- (CDStruct_e83c9415)_timeRangeLimitsOfClip:(id)arg1;
- (CDStruct_e83c9415)_timeRangeOfClip:(id)arg1;
- (id)_parentOfClip:(id)arg1;
- (id)_clipsInStoryline:(id)arg1;
- (id)_clipsAnchoredToClip:(id)arg1;
- (id)_trailingEdgeTransitionForClip:(id)arg1;
- (id)_leadingEdgeTransitionForClip:(id)arg1;
- (id)_clipAfterClip:(id)arg1;
- (id)_clipBeforeClip:(id)arg1;
- (id)_audioComponentRangesOnClip:(id)arg1 inRange:(CDStruct_e83c9415)arg2;
- (id)_markersOnClip:(id)arg1 inRange:(CDStruct_e83c9415)arg2;
- (id)_keyFramesOnClip:(id)arg1 inRange:(CDStruct_e83c9415)arg2;
- (id)_selectedTimeRangesInRange:(CDStruct_e83c9415)arg1;
- (id)_clipsDownstreamFromClips:(id)arg1 inRange:(CDStruct_e83c9415)arg2;
- (id)_clipsWithSplitAudioInRange:(CDStruct_e83c9415)arg1;
- (id)_clipsInRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)_snappableRangeForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_ceilingTime:(CDStruct_1b6d18a9)arg1 temporalResolutionMode:(int)arg2;
- (CDStruct_1b6d18a9)_floorTime:(CDStruct_1b6d18a9)arg1 temporalResolutionMode:(int)arg2;
- (CDStruct_e83c9415)_visibleTimeRange;
- (CDStruct_1b6d18a9)_frameDuration;
- (CDStruct_1b6d18a9)_skimmingPlayheadTime;
- (CDStruct_1b6d18a9)_playheadTime;
- (CDStruct_1b6d18a9)snapRollOffset:(CDStruct_1b6d18a9)arg1 forEdge:(int)arg2 ofAudioComponentRange:(id)arg3 fromClip:(id)arg4;
- (CDStruct_1b6d18a9)snapTrimOffset:(CDStruct_1b6d18a9)arg1 command:(int)arg2 edgeType:(int)arg3;
- (CDStruct_1b6d18a9)snapSlipTrimOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)snapTimePreservingTrimOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)snapResizeTrimOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)snapRollTrimOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)snapTrailingEdgeRippleTrimOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)snapLeadingEdgeRippleTrimOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)snapTrimOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)snapTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_1b6d18a9)snapTime:(CDStruct_1b6d18a9)arg1 minimum:(CDStruct_1b6d18a9)arg2 maximum:(CDStruct_1b6d18a9)arg3;
- (CDStruct_1b6d18a9)snapTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)snapPlayheadTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)snapOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)snapOffset:(CDStruct_1b6d18a9)arg1 finiteClips:(BOOL)arg2;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toTimeRangeSelectionInRange:(CDStruct_e83c9415)arg3;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toPlayheadInRange:(CDStruct_e83c9415)arg3;
- (void)_snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toClipsInRange:(CDStruct_e83c9415)arg3;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toSplitEditsInRange:(CDStruct_e83c9415)arg3;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toKeyFramesInRange:(CDStruct_e83c9415)arg3 onClips:(id)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toKeyFramesInRange:(CDStruct_e83c9415)arg3 onClip:(id)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toAudioComponentRangesInRange:(CDStruct_e83c9415)arg3 onClips:(id)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toAudioComponentRangesInRange:(CDStruct_e83c9415)arg3 onClip:(id)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toMarkersInRange:(CDStruct_e83c9415)arg3 onClips:(id)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toMarkersInRange:(CDStruct_e83c9415)arg3 onClip:(id)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toTrailingEdgesOfClips:(id)arg3 inRange:(CDStruct_e83c9415)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toTrailingAudioEdgeOfClip:(id)arg3 inRange:(CDStruct_e83c9415)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toTrailingEdgeOfClip:(id)arg3 inRange:(CDStruct_e83c9415)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toLeadingEdgesOfClips:(id)arg3 inRange:(CDStruct_e83c9415)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toLeadingAudioEdgeOfClip:(id)arg3 inRange:(CDStruct_e83c9415)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toLeadingEdgeOfClip:(id)arg3 inRange:(CDStruct_e83c9415)arg4;
- (void)snapClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 toClip:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (void)displayGuides;
- (void)displayGuideForClip:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 snapping:(BOOL)arg3 withAligment:(BOOL)arg4;
- (void)addGuideAtTime:(CDStruct_1b6d18a9)arg1 fromClip:(id)arg2 toClip:(id)arg3;
- (void)addClips:(id)arg1 options:(int)arg2;
- (void)addClip:(id)arg1 options:(int)arg2;
- (CDStruct_e83c9415)_snapRangeForTime:(CDStruct_1b6d18a9)arg1;
- (void)_resetState;
- (CDStruct_1b6d18a9)_adjustedPlayheadTime;
- (void)_calculateMinimumAndMaximumDeltasForOffset:(CDStruct_1b6d18a9)arg1 finiteClips:(BOOL)arg2;
- (CDStruct_1b6d18a9)_audioEndTimeOfClip:(id)arg1;
- (CDStruct_1b6d18a9)_audioStartTimeOfClip:(id)arg1;
- (CDStruct_1b6d18a9)_endTimeOfClip:(id)arg1;
- (CDStruct_1b6d18a9)_startTimeOfClip:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDataSource:(id)arg1;
- (void)dealloc;

@end

