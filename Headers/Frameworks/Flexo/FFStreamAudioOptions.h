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
    unsigned long long _streamAudioFlags;
    NSSet *_playObjects;
    NSMapTable *_streamAudioFlagsForPlayObjects;
    CDStruct_1b6d18a9 _primeDuration;
    CDStruct_e83c9415 _prerollScopeRange;
    CDStruct_e83c9415 _effectPrerollScopeRange;
    FFEffectStack *_audioEffects;
    NSArray *_sourceChannelMap;
    NSDictionary *_componentsPlaybackInfo;
    NSMapTable *_componentsPlaybackInfoForPlayObjects;
}

@property(readonly, nonatomic) CDStruct_e83c9415 effectPrerollScopeRange; // @synthesize effectPrerollScopeRange=_effectPrerollScopeRange;
@property(readonly, nonatomic) CDStruct_e83c9415 prerollScopeRange; // @synthesize prerollScopeRange=_prerollScopeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 primeDuration; // @synthesize primeDuration=_primeDuration;
@property(readonly, nonatomic) unsigned long long streamAudioFlags; // @synthesize streamAudioFlags=_streamAudioFlags;
- (id).cxx_construct;
- (id)componentsPlaybackInfoForPlayObject:(id)arg1;
- (id)componentsPlaybackInfo;
- (id)sourceChannelMap;
- (id)audioEffects;
- (BOOL)streamAudioFlagsForPlayObject:(id)arg1 streamFlags:(unsigned long long *)arg2 streamFlagsMask:(unsigned long long *)arg3;
- (id)playObjects;
- (BOOL)isForPlayback;
- (unsigned int)numChannels;
- (double)sampleRate;
- (void)dealloc;
- (id)initWithAudioOptionsForTimeRemap:(id)arg1;
- (id)initWithAudioOptionsForDescendant:(id)arg1;
- (id)initWithAudioOptions:(id)arg1;
- (id)initWithSampleRate:(double)arg1 numChannels:(unsigned int)arg2 forPlayback:(BOOL)arg3;

@end

