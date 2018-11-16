//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxTimingAPI_v3.h"

@class NSLock;

@interface FxRemoteTimingHandler : NSObject <FxTimingAPI_v3>
{
    NSLock *threadLock;
    map_8d734ddb timingMap;
}

@property map_8d734ddb timingMap; // @synthesize timingMap;
@property(retain) NSLock *threadLock; // @synthesize threadLock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)imageFxTime:(CDUnion_2516e51e *)arg1 forParmId:(unsigned int)arg2 fromTimelineTime:(CDUnion_2516e51e)arg3;
- (void)timelineFxTime:(CDUnion_2516e51e *)arg1 fromImageTime:(CDUnion_2516e51e)arg2 forParmId:(unsigned int)arg3;
- (void)durationFxTime:(CDUnion_2516e51e *)arg1 ofImageParm:(unsigned int)arg2;
- (void)startFxTime:(CDUnion_2516e51e *)arg1 ofImageParam:(unsigned int)arg2;
- (unsigned long long)fieldOrderForImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (void)inputBFxTime:(CDUnion_2516e51e *)arg1 fromTimelineTime:(CDUnion_2516e51e)arg2;
- (void)inputAFxTime:(CDUnion_2516e51e *)arg1 fromTimelineTime:(CDUnion_2516e51e)arg2;
- (void)timelineFxTime:(CDUnion_2516e51e *)arg1 fromInputBTime:(CDUnion_2516e51e)arg2;
- (void)timelineFxTime:(CDUnion_2516e51e *)arg1 fromInputATime:(CDUnion_2516e51e)arg2;
- (void)durationFxTimeOfInputBToTransition:(CDUnion_2516e51e *)arg1;
- (void)durationFxTimeOfInputAToTransition:(CDUnion_2516e51e *)arg1;
- (void)startFxTimeOfInputBToTransition:(CDUnion_2516e51e *)arg1;
- (void)startFxTimeOfInputAToTransition:(CDUnion_2516e51e *)arg1;
- (double)transitionTimeFractionAtTime:(double)arg1;
- (double)imageTimeForParmId:(unsigned int)arg1 forEffect:(id)arg2 fromTimelineTime:(double)arg3;
- (double)inputBTimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (double)inputATimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (double)inputTimeForFilter:(id)arg1 fromTimelineTime:(double)arg2;
- (double)timelineTimeFromImageTime:(double)arg1 forParmId:(unsigned int)arg2 forEffect:(id)arg3;
- (double)timelineTimeFromInputBTime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputATime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputTime:(double)arg1 forFilter:(id)arg2;
- (double)durationForEffect:(id)arg1;
- (double)startTimeForEffect:(id)arg1;
- (double)outPointOfTimelineForEffect:(id)arg1;
- (double)inPointOfTimelineForEffect:(id)arg1;
- (unsigned long long)fieldOrderForInputBToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputAToTransition:(id)arg1;
- (double)durationOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)durationOfInputBToTransition:(id)arg1;
- (double)durationOfInputAToTransition:(id)arg1;
- (double)durationOfInputToFilter:(id)arg1;
- (double)startTimeOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)startTimeOfInputBToTransition:(id)arg1;
- (double)startTimeOfInputAToTransition:(id)arg1;
- (double)startTimeOfInputToFilter:(id)arg1;
- (void)inputFxTime:(CDUnion_2516e51e *)arg1 fromTimelineTime:(CDUnion_2516e51e)arg2;
- (void)timelineFxTime:(CDUnion_2516e51e *)arg1 fromInputTime:(CDUnion_2516e51e)arg2;
- (void)outPointFxTimeOfTimelineForEffect:(CDUnion_2516e51e *)arg1;
- (void)inPointFxTimeOfTimelineForEffect:(CDUnion_2516e51e *)arg1;
- (void)durationFxTimeOfInputToFilter:(CDUnion_2516e51e *)arg1;
- (void)startFxTimeOfInputToFilter:(CDUnion_2516e51e *)arg1;
- (void)durationFxTimeForEffect:(CDUnion_2516e51e *)arg1;
- (void)startFxTimeForEffect:(CDUnion_2516e51e *)arg1;
- (void)sampleDuration:(CDUnion_2516e51e *)arg1;
- (void)frameDuration:(CDUnion_2516e51e *)arg1;
- (unsigned long long)timelineFpsDenominatorForEffect:(id)arg1;
- (unsigned long long)timelineFpsNumeratorForEffect:(id)arg1;
- (unsigned long long)fieldOrderForInputToFilter:(id)arg1;
- (void)setTimingData:(id)arg1;
- (struct FxRemoteTiming)remoteTiming;
- (void)dealloc;
- (id)init;

@end

