//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

@class FFREDClip, FFVideoProps;

__attribute__((visibility("hidden")))
@interface FFSourceVideoRED : FFSourceVideo
{
    FFREDClip *_clip;
    FFVideoProps *_videoProps;
    CDStruct_e83c9415 _timeRange;
}

+ (Class)streamClass;
+ (id)type;
- (id).cxx_construct;
- (id)codecName;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (id)nativeVideoProps;
- (long long)timecodeDisplayDropFrame;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (CDStruct_e83c9415)timeRange;
- (void)dealloc;
- (id)initWithProvider:(id)arg1 clip:(id)arg2;

@end

