//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

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

- (id)initWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 frameRate:(double)arg3 frames:(unsigned int)arg4 depthName:(id)arg5 pixelAspectRatio:(double)arg6 codeName:(id)arg7 audioTracks:(unsigned int)arg8 audioChannels:(unsigned int)arg9 audioSamples:(unsigned long long)arg10 audioSampleRate:(double)arg11 audioBytesPerSample:(unsigned int)arg12 audioCodecName:(id)arg13 isFinderIcon:(BOOL)arg14;
- (void)dealloc;

@end
