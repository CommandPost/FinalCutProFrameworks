//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFStoryTimelinePresentation;

@interface FFTimelineLayoutMetrics : NSObject
{
    BOOL _showsItemHeadersOnly;
    BOOL _showsWaveformsForPrecisionEditor;
    FFStoryTimelinePresentation *_storyTimelinePresentation;
    double _itemHeight;
    double _itemHeaderHeight;
    double _itemHeaderOnlyHeight;
    double _minimizedItemHeight;
    double _anchorHeightScaleFactor;
    double _audioWaveformRatio;
}

@property(nonatomic) double audioWaveformRatio; // @synthesize audioWaveformRatio=_audioWaveformRatio;
@property(nonatomic) double anchorHeightScaleFactor; // @synthesize anchorHeightScaleFactor=_anchorHeightScaleFactor;
@property(nonatomic) double minimizedItemHeight; // @synthesize minimizedItemHeight=_minimizedItemHeight;
@property(nonatomic) double itemHeaderOnlyHeight; // @synthesize itemHeaderOnlyHeight=_itemHeaderOnlyHeight;
@property(nonatomic) double itemHeaderHeight; // @synthesize itemHeaderHeight=_itemHeaderHeight;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) BOOL showsWaveformsForPrecisionEditor; // @synthesize showsWaveformsForPrecisionEditor=_showsWaveformsForPrecisionEditor;
@property(nonatomic) BOOL showsItemHeadersOnly; // @synthesize showsItemHeadersOnly=_showsItemHeadersOnly;
@property(nonatomic) FFStoryTimelinePresentation *storyTimelinePresentation; // @synthesize storyTimelinePresentation=_storyTimelinePresentation;
- (id)boxMetricsForLane:(id)arg1;
- (double)heightForItemComponent:(id)arg1 proposedHeight:(double)arg2;
- (id)init;

@end

