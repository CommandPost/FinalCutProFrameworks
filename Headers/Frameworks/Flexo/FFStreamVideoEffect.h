//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFStreamVideo.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FFStreamVideoEffect : FFStreamVideo
{
    NSMutableDictionary *_inputInfos;
}

- (int)getOutputCameraMode;
- (int)getInputCameraMode;
- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5 roi:(const struct CGRect *)arg6 graphBuildInfo:(id)arg7;
- (id)_newGeneratorThumbnailForEffect:(id)arg1 context:(id)arg2;
- (id)_newOfflineImageForEffect:(id)arg1 context:(id)arg2;
- (id)_newLoadingImageForEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 graphBuildInfo:(id)arg7;
- (id)_newImageFromNSImage:(id)arg1 context:(id)arg2;
- (id)videoProps;
- (struct CGRect)bounds;
- (_Bool)shouldCheckCacheForTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2 props:(id)arg3;
- (void)setRate:(double)arg1;
- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5;
- (id)getPassThruAtTime:(CDStruct_1b6d18a9)arg1 offset:(CDStruct_1b6d18a9 *)arg2 sampleDur:(CDStruct_1b6d18a9)arg3 context:(id)arg4 channelOffset:(CDStruct_1b6d18a9)arg5;
- (void)prerollEnd;
- (void)prerollBegin:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 sync:(id)arg3;
- (void)closeInputStreamForKey:(id)arg1;
- (id)openInputStreamForKey:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;
- (id)inputIdentifierForKey:(id)arg1;
- (CDStruct_1b6d18a9)inputOffsetForKey:(id)arg1;
- (id)inputStreamForKey:(id)arg1 retOffset:(CDStruct_1b6d18a9 *)arg2;
- (id)inputStreamForKey:(id)arg1;
- (id)allInputStreamKeysEnumerator;
- (void)dealloc;
- (id)initWithSource:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;

@end

