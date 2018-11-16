//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamOptions.h>

@class FFEffectStack, NSArray, NSDictionary, NSMapTable, NSSet;

@interface FFStreamAudioOptions : FFStreamOptions
{
    double _sampleRate;
    unsigned int _numChannels;
    BOOL _forPlayback;
    unsigned int _channelValenceID;
    unsigned int _streamAudioFlags;
    NSSet *_playRoles;
    NSSet *_playObjects;
    NSSet *_indirectPlayObjects;
    NSMapTable *_streamAudioFlagsForPlayObjects;
    CDStruct_1b6d18a9 _primeDuration;
    CDStruct_e83c9415 _prerollScopeRange;
    FFEffectStack *_audioEffects;
    NSArray *_audioChannelMap;
    NSDictionary *_componentsPlaybackInfo;
    unsigned long long _streamAudioPrivateFlags;
}

@property(readonly, nonatomic) CDStruct_e83c9415 prerollScopeRange; // @synthesize prerollScopeRange=_prerollScopeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 primeDuration; // @synthesize primeDuration=_primeDuration;
@property(readonly, nonatomic) unsigned int streamAudioFlags; // @synthesize streamAudioFlags=_streamAudioFlags;
- (unsigned long long)streamAudioPrivateFlags;
- (id)componentsPlaybackInfo;
- (id)audioChannelMap;
- (id)audioEffects;
- (BOOL)streamAudioFlagsForPlayObject:(id)arg1 streamFlags:(unsigned int *)arg2 streamFlagsMask:(unsigned int *)arg3;
- (id)playObjects:(int)arg1;
- (id)playRoles;
- (unsigned int)channelValenceID;
- (BOOL)isForPlayback;
- (unsigned int)numChannels;
- (double)sampleRate;
- (void)dealloc;
- (id)initWithAudioOptionsForChannelValenceStream:(id)arg1;
- (id)initWithAudioOptionsForComponent:(id)arg1;
- (id)initWithAudioOptionsForTimeRemap:(id)arg1;
- (id)initWithAudioOptionsForDescendant:(id)arg1;
- (id)initWithAudioOptions:(id)arg1;
- (id)initWithSampleRate:(double)arg1 numChannels:(unsigned int)arg2 forPlayback:(BOOL)arg3;

@end

