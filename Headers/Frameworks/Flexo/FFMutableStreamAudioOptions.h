//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFStreamAudioOptions.h>

@interface FFMutableStreamAudioOptions : FFStreamAudioOptions
{
}

- (void)removeStreamAudioPrivateFlags:(unsigned long long)arg1;
- (void)addStreamAudioPrivateFlags:(unsigned long long)arg1;
- (void)setStreamAudioPrivateFlags:(unsigned long long)arg1;
- (void)setComponentsPlaybackInfo:(id)arg1;
- (void)setAudioChannelMap:(id)arg1;
- (void)setAudioEffects:(id)arg1;
- (void)setPrerollScopeRange:(CDStruct_e83c9415)arg1;
- (void)setLeadingPrimeDuration:(CDStruct_1b6d18a9)arg1 trailingPrimeDuration:(CDStruct_1b6d18a9)arg2;
- (void)clearStreamAudioFlagsForObject:(id)arg1;
- (void)setStreamAudioFlags:(unsigned int)arg1 withMask:(unsigned int)arg2 forObject:(id)arg3;
- (void)setPlayObjectsWithOptions:(id)arg1;
- (void)setIndirectPlayObjects:(id)arg1;
- (void)setPlayObjects:(id)arg1;
- (void)setPlayRoles:(id)arg1;
- (void)removeStreamAudioFlags:(unsigned int)arg1;
- (void)addStreamAudioFlags:(unsigned int)arg1;
- (void)setStreamAudioFlags:(unsigned int)arg1;
- (void)setForPlayback:(BOOL)arg1;
- (void)setChannelValenceID:(unsigned int)arg1;
- (void)setNumChannels:(unsigned int)arg1;
- (void)setSampleRate:(double)arg1;

@end

