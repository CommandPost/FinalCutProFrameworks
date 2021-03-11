//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFStreamVideo.h>

__attribute__((visibility("hidden")))
@interface FFAnchoredClipVideoStream : FFStreamVideo
{
    FFStreamVideo *_stream;
}

- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5;
- (void)setRate:(double)arg1;
- (void)prerollEnd;
- (void)prerollBegin:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 sync:(id)arg3;
- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5 roi:(const struct CGRect *)arg6 graphBuildInfo:(id)arg7;
- (id)copyPixelTransform:(int)arg1 forQuality:(int)arg2;
- (id)videoProps;
- (void)dealloc;
- (id)_stream;
- (void)_invalidateStreamCacheForRange:(CDStruct_e83c9415)arg1;
- (id)anchoredObject;

@end

