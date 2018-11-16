//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProvider.h>

@class FFMedia;

@interface FFProviderOffline : FFProvider
{
    FFMedia *_media;
    CDStruct_e83c9415 _mediaRange;
    BOOL _hasVideo;
    BOOL _hasAudio;
    double _audioSampleRate;
    long long _audioChannelCount;
    long long _audioSourceCount;
    int _offlineReason;
}

+ (id)newProvider;
@property(readonly) long long audioSourceCount; // @synthesize audioSourceCount=_audioSourceCount;
@property(readonly) long long audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
@property(readonly) double audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(readonly) int offlineReason; // @synthesize offlineReason=_offlineReason;
@property(retain) FFMedia *media; // @synthesize media=_media;
- (id).cxx_construct;
- (id)newOfflineImage;
- (id)displayName;
- (id)nativeVideoProps;
- (void)_setupSources;
- (void)dealloc;
- (id)initWithMedia:(id)arg1;
- (id)initWithMedia:(id)arg1 offlineReason:(int)arg2;
- (id)_imageForOfflineReason:(int)arg1 wants4x3:(BOOL)arg2;
- (id)_descriptionForOfflineReason:(int)arg1;
- (id)_newImageForOfflineReason:(int)arg1;
- (void)_setupSourcesForAudio:(CDStruct_e83c9415)arg1;
- (void)_setupSourcesForVideo:(CDStruct_e83c9415)arg1 andAudio:(BOOL)arg2;
- (id)init;

@end

