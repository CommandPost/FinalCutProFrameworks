//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PMRStopwatch, TLKTimelineView;

__attribute__((visibility("hidden")))
@interface FFDragPerformanceTest : NSObject
{
    TLKTimelineView *_timelineView;
    PMRStopwatch *_stopwatch;
}

@property(readonly, nonatomic) PMRStopwatch *stopwatch; // @synthesize stopwatch=_stopwatch;
@property(retain, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void)logTimerDataWithFormat:(id)arg1 key:(id)arg2 comment:(id)arg3;
- (void)drag;
- (void)dealloc;
- (id)init;

@end

