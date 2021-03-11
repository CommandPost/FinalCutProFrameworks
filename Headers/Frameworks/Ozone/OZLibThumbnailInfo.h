//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OZLibThumbnailInfo : NSObject
{
    unsigned int _width;
    unsigned int _height;
    double _frameRate;
    unsigned int _frames;
    NSString *_depthName;
    NSString *_codecName;
    double _pixelAspectRatio;
    unsigned int _audioTracks;
    unsigned int _audioChannels;
    unsigned long long _audioSamples;
    double _audioSampleRate;
    unsigned int _audioBytesPerSample;
    NSString *_audioCodecName;
    BOOL _isFinderIcon;
}

- (void)dealloc;
- (id)initWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 frameRate:(double)arg3 frames:(unsigned int)arg4 depthName:(id)arg5 pixelAspectRatio:(double)arg6 codeName:(id)arg7 audioTracks:(unsigned int)arg8 audioChannels:(unsigned int)arg9 audioSamples:(unsigned long long)arg10 audioSampleRate:(double)arg11 audioBytesPerSample:(unsigned int)arg12 audioCodecName:(id)arg13 isFinderIcon:(BOOL)arg14;

@end

