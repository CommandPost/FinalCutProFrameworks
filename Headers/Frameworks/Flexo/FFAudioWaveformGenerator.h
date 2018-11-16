//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFAudioWaveformGenerator : NSObject
{
    struct FFPeaks *_peaks;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (id)peaksDataConvert:(id)arg1 fromSampleRate:(double)arg2 toSampleRate:(double)arg3;
- (id)peaksDataForRequest:(id)arg1 synchronously:(BOOL)arg2 wasFinalQuality:(char *)arg3 waveformHandlePixels:(unsigned int)arg4;
- (id)peaksDataForRequest:(id)arg1 synchronously:(BOOL)arg2 wasFinalQuality:(char *)arg3;
- (void)dealloc;
- (id)init;

@end

