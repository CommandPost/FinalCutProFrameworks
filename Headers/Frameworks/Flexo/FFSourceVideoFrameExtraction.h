//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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
- (double)preferredScaleFactorForQuality:(int)arg1;
- (id)newSubRangeMD5InfoForSampleDuration:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3 checkCancelBlock:(CDUnknownBlockType)arg4;
- (CDStruct_e83c9415)timeRange;
- (id)nativeVideoProps;
- (int)frameExtractionMode;
- (id)input;
- (void)dealloc;
- (id)initWithProvider:(id)arg1 input:(id)arg2 andMode:(int)arg3;

@end

