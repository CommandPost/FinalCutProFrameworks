//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FxPlug/FxTimingAPI_v4-Protocol.h>

@class NSLock;

@interface FxRemoteTimingHandler : NSObject <FxTimingAPI_v4>
{
    NSLock *threadLock;
    map_167281da timingMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property map_167281da timingMap; // @synthesize timingMap;
@property(retain) NSLock *threadLock; // @synthesize threadLock;
- (void)imageTime:(CDStruct_1b6d18a9 *)arg1 forParameterID:(unsigned int)arg2 fromTimelineTime:(CDStruct_1b6d18a9)arg3;
- (void)timelineTime:(CDStruct_1b6d18a9 *)arg1 fromImageTime:(CDStruct_1b6d18a9)arg2 forParameterID:(unsigned int)arg3;
- (void)durationTime:(CDStruct_1b6d18a9 *)arg1 ofImageParameter:(unsigned int)arg2;
- (void)startTime:(CDStruct_1b6d18a9 *)arg1 ofImageParameter:(unsigned int)arg2;
- (unsigned long long)fieldOrderForImageParameter:(unsigned int)arg1 forEffect:(id)arg2;
- (id)imageTimingForParameterID:(unsigned int)arg1;
- (void)inputTime:(CDStruct_1b6d18a9 *)arg1 fromTimelineTime:(CDStruct_1b6d18a9)arg2;
- (void)timelineTime:(CDStruct_1b6d18a9 *)arg1 fromInputTime:(CDStruct_1b6d18a9)arg2;
- (void)outPointTimeOfTimelineForEffect:(CDStruct_1b6d18a9 *)arg1;
- (void)inPointTimeOfTimelineForEffect:(CDStruct_1b6d18a9 *)arg1;
- (void)durationTimeOfInputToFilter:(CDStruct_1b6d18a9 *)arg1;
- (void)startTimeOfInputToFilter:(CDStruct_1b6d18a9 *)arg1;
- (void)durationTimeForEffect:(CDStruct_1b6d18a9 *)arg1;
- (void)startTimeForEffect:(CDStruct_1b6d18a9 *)arg1;
- (void)sampleDuration:(CDStruct_1b6d18a9 *)arg1;
- (void)frameDuration:(CDStruct_1b6d18a9 *)arg1;
- (unsigned long long)timelineFpsDenominatorForEffect:(id)arg1;
- (unsigned long long)timelineFpsNumeratorForEffect:(id)arg1;
- (unsigned long long)fieldOrderForInputToFilter:(id)arg1;
- (void)setTimingData:(id)arg1;
- (id)remoteTiming;
- (void)dealloc;
- (id)init;

@end

