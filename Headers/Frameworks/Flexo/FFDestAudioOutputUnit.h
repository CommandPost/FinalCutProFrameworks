//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestAudio.h>

@interface FFDestAudioOutputUnit : FFDestAudio
{
    struct FFAudioGraph *_graph;
    struct FFAudioNode *_channelConformer;
    struct ComponentInstanceRecord *_outputUnit;
    BOOL _connected;
    struct OpaqueFigTimebase *_timebase;
    struct FFAudioPerfRenderHook *_perfHook;
    struct FFAudioSignalClamper *_signalClamp;
    struct FFDestAudioStartTimebaseRenderHook *_startTimebaseHook;
}

- (void)reset;
- (BOOL)isRunning;
- (void)stop;
- (void)start:(id)arg1;
- (void *)figClock;
- (void)setPullCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (void)setPullGraph:(struct FFAudioGraph *)arg1 node:(struct FFAudioNode *)arg2 elem:(unsigned int)arg3;
- (unsigned long long)maximumBufferFrames;
- (unsigned long long)maximumChannels;
- (void)setSampleRate:(double)arg1 numChannels:(unsigned long long)arg2;
- (BOOL)matchesSampleRate:(double)arg1 numChannels:(unsigned long long)arg2;
- (struct ComponentInstanceRecord *)outputUnit;
- (void)dealloc;
- (id)initWithOutputUnit:(const struct ComponentDescription *)arg1 playbackContext:(id)arg2;
- (id)initWithDeviceID:(id)arg1 playbackContext:(id)arg2;

@end

