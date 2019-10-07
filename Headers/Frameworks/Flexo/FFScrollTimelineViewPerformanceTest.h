//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PMRStopwatch, TLKTimelineView;

__attribute__((visibility("hidden")))
@interface FFScrollTimelineViewPerformanceTest : NSObject
{
    TLKTimelineView *_timelineView;
    PMRStopwatch *_stopwatch;
    long long _savedScrollerStyle;
}

@property(nonatomic) long long savedScrollerStyle; // @synthesize savedScrollerStyle=_savedScrollerStyle;
@property(readonly, nonatomic) PMRStopwatch *stopwatch; // @synthesize stopwatch=_stopwatch;
@property(retain, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void)disableCoreAnimationStatisticsLoggingSPI;
- (void)enableCoreAnimationStatisticsLoggingSPI;
- (void)switchHorizontalScrollerToSavedStyle;
- (void)switchHorizontolScrollerToAlwaysVisible;
- (void)logTimerDataWithFormat:(id)arg1 key:(id)arg2 comment:(id)arg3;
- (void)reportElapsedTime;
- (void)stopScrollTimer:(id)arg1;
- (struct CGPoint)pointInWindowToIncrementTimelineViewHorizontalScrollerOnePageForward;
- (void)simulateClickInHorizontalScrollerOnePageForward;
- (BOOL)timelineViewHasRoomToScrollToEnd;
- (void)handleScrollTimer:(id)arg1;
- (void)startTimerToScrollTimelineToEndWithInterval:(double)arg1;
- (void)scrollToEnd;
- (void)dealloc;
- (id)init;

@end

