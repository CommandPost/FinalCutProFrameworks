//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamVideo.h>

@class FFImage, FFVideoProps, NSOperation, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface FFStreamVideoCG : FFStreamVideo
{
    NSRecursiveLock *_streamPrivatelock;
    FFVideoProps *_videoProps;
    FFImage *_pendingImages[5];
    FFImage *_completedImages[5];
    NSOperation *_asyncOps[5];
}

- (id)description;
- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5 roi:(const struct CGRect *)arg6 graphBuildInfo:(id)arg7;
- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5;
- (id)_newScheduledImageAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2 forScheduling:(BOOL)arg3;
- (void)_installScheduleOpIfNeeded:(CDStruct_bdcb2b0d)arg1 qualityIndex:(int)arg2 priority:(int)arg3 forScheduling:(BOOL)arg4;
- (id)pixelTransformToField2ForQuality:(int)arg1;
- (id)pixelTransformToField1ForQuality:(int)arg1;
- (id)videoProps;
- (void)dealloc;
- (id)initWithSource:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;

@end

