//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamAudioOptions.h>

@interface FFMutableStreamAudioOptions : FFStreamAudioOptions
{
}

- (void)setComponentsPlaybackInfo:(id)arg1;
- (void)setAudioEffects:(id)arg1;
- (void)setScopeRange:(CDStruct_e83c9415)arg1;
- (void)setTailTime:(unsigned int)arg1;
- (void)clearStreamAudioFlagsForPlayObject:(id)arg1;
- (void)setStreamAudioFlags:(unsigned long long)arg1 withMask:(unsigned long long)arg2 forPlayObject:(id)arg3;
- (void)setPlayObjects:(id)arg1;
- (void)removeStreamAudioFlags:(unsigned long long)arg1;
- (void)addStreamAudioFlags:(unsigned long long)arg1;
- (void)setStreamAudioFlags:(unsigned long long)arg1;
- (void)setForPlayback:(BOOL)arg1;
- (void)setNumChannels:(unsigned int)arg1;
- (void)setSampleRate:(double)arg1;

@end

