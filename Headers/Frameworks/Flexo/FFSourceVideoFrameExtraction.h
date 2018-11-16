//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceVideo.h>

@class FFSource, FFVideoProps;

__attribute__((visibility("hidden")))
@interface FFSourceVideoFrameExtraction : FFSourceVideo
{
    FFSource *_input;
    int _frameExtractionMode;
    FFVideoProps *_nativeVideoProps;
}

+ (Class)streamClass;
- (id)initWithProvider:(id)arg1 input:(id)arg2 andMode:(int)arg3;
- (void)dealloc;
- (id)input;
- (int)frameExtractionMode;
- (id)nativeVideoProps;
- (CDStruct_e83c9415)timeRange;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (double)preferredScaleFactorForQuality:(int)arg1;

@end

