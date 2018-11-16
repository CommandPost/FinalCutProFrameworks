//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceAudio.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface FFAnchoredSequenceAudioSource : FFSourceAudio
{
    BOOL _untimed;
    NSSet *_roles;
    NSDictionary *_componentsPlaybackInfo;
}

+ (CDStruct_e83c9415)effectiveAudioClippedRangeForObject:(id)arg1 untimed:(BOOL)arg2;
+ (Class)streamClass;
@property(retain, nonatomic) NSDictionary *componentsPlaybackInfo; // @synthesize componentsPlaybackInfo=_componentsPlaybackInfo;
- (id)roles;
- (double)sampleRate;
- (unsigned int)numberOfChannelsForStreamAudioFlags:(unsigned long long)arg1;
- (unsigned int)numberOfChannels;
- (id)newStreamForRenderWithOptions:(id)arg1;
- (id)newStream:(id)arg1 options:(id)arg2;
- (id)_adjustAudioStreamOptions:(id)arg1;
- (CDStruct_e83c9415)timeRange;
- (CDStruct_e83c9415)clippedTimeRange:(BOOL)arg1;
- (CDStruct_e83c9415)unclippedTimeRange:(BOOL)arg1;
- (id)anchoredObject;
- (void)dealloc;
- (id)initWithProvider:(id)arg1 untimed:(BOOL)arg2 roles:(id)arg3 angleOffset:(long long)arg4 angleCount:(long long)arg5;
- (void)_rangeInvalidated:(id)arg1;

@end

