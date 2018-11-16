//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamVideo.h>

__attribute__((visibility("hidden")))
@interface FFAnchoredClipVideoStream : FFStreamVideo
{
    FFStreamVideo *_stream;
}

- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4;
- (void)setRate:(double)arg1;
- (void)prerollEnd;
- (void)prerollBegin:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 sync:(id)arg3;
- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4 roi:(const struct CGRect *)arg5;
- (id)pixelTransformToField2ForQuality:(int)arg1;
- (id)pixelTransformToField1ForQuality:(int)arg1;
- (id)pixelTransformToFrameForQuality:(int)arg1;
- (id)videoProps;
- (void)dealloc;
- (id)_stream;
- (void)_invalidateStreamCacheForRange:(CDStruct_e83c9415)arg1;
- (id)anchoredObject;

@end

