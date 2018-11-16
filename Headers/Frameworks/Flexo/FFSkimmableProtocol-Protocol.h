//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFAnchoredObject, FFProvider, FFSubRangeMD5Info, FFVideoProps, NSSet, NSString;

@protocol FFSkimmableProtocol
- (void)addThumbMD5Info:(FFSubRangeMD5Info *)arg1 contentsScale:(double)arg2;
- (FFSubRangeMD5Info *)thumbMD5InfoForTime:(CDStruct_1b6d18a9)arg1 contentsScale:(double)arg2;
- (CDStruct_1b6d18a9)containerToLocalTime:(CDStruct_1b6d18a9)arg1 container:(FFAnchoredObject *)arg2;
- (CDStruct_1b6d18a9)localToContainerTime:(CDStruct_1b6d18a9)arg1 container:(FFAnchoredObject *)arg2;
- (CDStruct_e83c9415)unclippedRange;
- (CDStruct_e83c9415)untimedAudioClippedRange;
- (CDStruct_e83c9415)untimedClippedRange;
- (CDStruct_e83c9415)combinedAudioVideoClippedRange;
- (CDStruct_e83c9415)audioClippedRange;
- (CDStruct_e83c9415)clippedRange;
- (BOOL)ceilingTime:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)floorTime:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (BOOL)floorTimeToSampleBoundary:(CDStruct_1b6d18a9 *)arg1 temporalResolutionMode:(int)arg2 error:(id *)arg3;
- (CDStruct_1b6d18a9)sampleDuration;
- (double)audioSampleRate;
- (FFVideoProps *)videoProps;
- (long long)timecodeDisplayDropFrame;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (CDStruct_1b6d18a9)timeOffset;
- (BOOL)hasVideo;
- (BOOL)hasAudio;
- (CDStruct_e83c9415)mediaRange;
- (id <FFModelLocking>)modelLockingObject;
- (NSString *)displayName;
- (FFProvider *)newProviderWithEffectCount:(long long)arg1 showObjects:(NSSet *)arg2 roles:(NSSet *)arg3 angleOffset:(long long)arg4 angleCount:(long long)arg5;
- (FFProvider *)newProviderWithEffectCount:(long long)arg1 showObjects:(NSSet *)arg2;
- (FFProvider *)newProviderWithEffectCount:(long long)arg1;
- (FFProvider *)newProvider;
@end

