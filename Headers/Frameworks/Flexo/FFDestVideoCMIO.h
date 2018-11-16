//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestVideo.h>

@class MIODeviceManager, MIOOutputCore, NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFDestVideoCMIO : FFDestVideo
{
    struct OpaqueFigClock *_clock;
    NSLock *_queueLock;
    NSMutableArray *_renderedFrames;
    MIOOutputCore *_outputCore;
    MIODeviceManager *_deviceManager;
    BOOL _isRunning;
    BOOL _needsUpdate;
    char *_testBuffer1;
    char *_testBuffer2;
    long long _lastPushTime;
}

- (id)initWithSampleDuration:(CDStruct_1b6d18a9)arg1;
- (void)releaseOutputDevice;
- (void)dealloc;
- (CDStruct_1b6d18a9)sampleDuration;
- (void)flush:(BOOL)arg1;
- (void)pushFrame:(id)arg1;
- (unsigned char)hasData;
- (id)newFrameFromField1:(id)arg1 field2:(id)arg2 fieldDominance:(int)arg3;
- (unsigned char)getFrame:(char *)arg1;
- (void)start;
- (void)stop;
- (BOOL)wantsMoreFrames;
- (int)imageLocation;
- (void)setNeedsUpdate:(BOOL)arg1;
- (BOOL)needsUpdate;
- (int)drawFieldsInterlaced;
- (int)fieldDominance;
- (struct CGColorSpace *)colorSpace;
- (id)supportedPixelFormats;
- (void *)figClock;

@end

