//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FFAudioWaveformGenerator : NSObject
{
    struct FFPeaks *_peaks;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (id)peaksDataConvert:(id)arg1 fromSampleRate:(double)arg2 toSampleRate:(double)arg3;
- (id)peaksDataForRequest:(id)arg1 synchronously:(BOOL)arg2 waveformHandlePixels:(unsigned int)arg3;
- (id)peaksDataForRequest:(id)arg1 synchronously:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

