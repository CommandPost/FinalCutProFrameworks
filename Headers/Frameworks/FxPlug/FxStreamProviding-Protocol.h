//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FxStreamProviding
- (unsigned int)timeScaleForStream:(id)arg1;
- (double)startTimeForStream:(id)arg1;
- (double)durationForStream:(id)arg1;
- (double)frameDurationForStream:(id)arg1;
- (BOOL)isStreamPremultiplied:(id)arg1;
- (double)pixelAspectForStream:(id)arg1;
- (BOOL)isContextTypeSupported:(int)arg1 bySample:(id)arg2;
- (unsigned long long)fieldOrderForSample:(id)arg1;
- (BOOL)isSamplePredetermined:(id)arg1;
- (id)requiredSamplesForSample:(id)arg1;
- (id)evaluateSample:(id)arg1 withOptions:(id)arg2;
- (id)domainOfDefinitionForSample:(id)arg1;
@end
