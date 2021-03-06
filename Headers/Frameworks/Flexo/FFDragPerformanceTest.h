//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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

