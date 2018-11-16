//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LKMenuItem, LKTextField, LKWindow, NSDate, NSString;

@interface PEPerformanceController : NSObject
{
    LKMenuItem *pmr_performanceMenuItem;
    LKWindow *perfMonitorWindow;
    LKTextField *vRAMUsage;
    LKTextField *rRAMUsage;
    LKTextField *totalRAMInstalled;
    LKTextField *processorInfo;
    BOOL pmr_dumpAllEventTimes;
    NSString *pmr_eventDescription;
    int pmr_watcherState;
    NSDate *pmr_watcherStartTime;
    BOOL prm_simulatingClick;
    BOOL pmr_clickHorizontal;
}

+ (BOOL)performanceMonitoringEnabled;
+ (id)sharedPerformanceController;
- (id)init;
- (void)dealloc;
- (void)installPerformanceMenu;
- (void)disablePerformanceMenu;
- (void)timeEvent:(id)arg1;
- (void)_setCurrentEventDescription:(id)arg1;
- (void *)PMRinstrument;
- (void)logItemKey:(id)arg1 SInt64Value:(long long)arg2;
- (void)logItemKey:(id)arg1 doubleValue:(double)arg2;
- (void)logItemKey:(id)arg1 value:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)performance_recordRAMUsage:(id)arg1;
- (void)performance_recordDropFrames:(id)arg1;
- (void)performance_timeAnActivity:(id)arg1;
- (void)gatherRAMStatistics:(id)arg1;
- (void)showPerformanceHUD:(id)arg1;
- (void)launchLoggerHead:(id)arg1;
- (void)_drawingWatcherBeginWatchingNow;
- (void)_drawingWatcherBeginWatching;
- (void)_drawingWatcherNoMoreDrawing:(id)arg1;
- (void)_drawingWatcherFirstDrawing:(id)arg1;
- (BOOL)dumpAllEventTimes;

@end

