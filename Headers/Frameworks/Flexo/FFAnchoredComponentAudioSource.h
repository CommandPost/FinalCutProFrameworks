//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSourceAudio.h>

@class FFAnchoredComponent, FFSource, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFAnchoredComponentAudioSource : FFSourceAudio
{
    NSMutableArray *_openStreams;
    FFSource *_source;
    FFAnchoredComponent *_component;
}

+ (Class)streamClass;
- (id)initWithProvider:(id)arg1 component:(id)arg2 effectCount:(long long)arg3;
- (void)dealloc;
- (id)_source;
- (id)newStream:(id)arg1 options:(id)arg2;
- (void)_removeStreamFromOpenStreamsList:(id)arg1;
- (void)_invalidateSourceCacheForRange:(CDStruct_e83c9415)arg1;
- (void)rangeInvalidated:(id)arg1;
- (CDStruct_e83c9415)timeRange;
- (CDStruct_1b6d18a9)nativeSampleDuration;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (long long)timecodeDisplayDropFrame;
- (unsigned int)numberOfChannels;
- (double)sampleRate;
- (id)displayName;
- (id)component;

@end
