//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PMRStopwatch, TLKTimelineView;

__attribute__((visibility("hidden")))
@interface FFTimelineBenchmarkController : NSObject
{
    TLKTimelineView *_timelineView;
    PMRStopwatch *_stopwatch;
    BOOL _isConsumerTimeline;
    id <TLKTimelineViewDataSource> _dataSource;
    BOOL _writePerformanceOutputToSyslog;
}

@property BOOL writePerformanceOutputToSyslog; // @synthesize writePerformanceOutputToSyslog=_writePerformanceOutputToSyslog;
@property(retain, nonatomic) id <TLKTimelineViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)benchmarkTrimClipEdge:(id)arg1;
- (void)benchmarkDragClip:(id)arg1;
- (void)benchmarkShakeWithCoreAnimation:(id)arg1;
- (void)benchmarkScroll:(id)arg1;
- (void)benchmarkScrollWithCoreAnimation:(id)arg1;
- (void)benchmarkZoomWithCoreAnimation:(id)arg1;
- (void)benchmarkZoom:(id)arg1;
- (void)benchmarkZoomToFit:(id)arg1;
- (void)_scrollToMiddle;
- (void)_scrollToBeginning;
- (void)_zoomMaxOut;
- (void)_zoomMaxIn;
- (void)configurePerformanceMenu:(id)arg1;
@property(readonly, nonatomic) NSString *performanceOutputLocation;
- (void)dealloc;
- (id)initWithTimelineView:(id)arg1;

@end
