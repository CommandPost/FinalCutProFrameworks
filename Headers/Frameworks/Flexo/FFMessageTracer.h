//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface FFMessageTracer : NSObject
{
    NSDate *m_sessionStartDate;
    NSDate *m_savedActiveDurationStartDate;
    NSDate *m_lastActiveDate;
    double m_activeDuration;
}

- (void)logMessageTracer_ActiveUser:(long long)arg1;
- (void)recordMessageTracer_CatalogSaved;
- (void)logMessageTracer_AudioUnit;
- (void)logMessageTracer_Stats;
- (void)logMessageTracer_AppStats;
- (void)dealloc;
- (id)init;

@end
