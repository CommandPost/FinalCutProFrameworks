//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamVideo.h>

__attribute__((visibility("hidden")))
@interface FFAssetVideoStream : FFStreamVideo
{
    FFStreamVideo *_inputStream;
    BOOL _alreadyFoundCachedStill;
}

- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4;
- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4 roi:(const struct CGRect *)arg5 graphBuildInfo:(id)arg6;
- (BOOL)_maybeQueueToStillCache:(CDStruct_1b6d18a9)arg1 context:(id)arg2 adjustedContext:(id)arg3 downstreamPT:(id)arg4;
- (id)_downgradedContextBasedOnDownStreamPT:(id)arg1 context:(id)arg2;
- (void)setRate:(double)arg1;
- (void)prerollEnd;
- (void)prerollBegin:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 sync:(id)arg3;
- (id)videoProps;
- (void)dealloc;
- (id)initWithSource:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;
- (id)_inputVideoStream;
- (id)asset;

@end

