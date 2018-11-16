//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamVideo.h>

@class FFImage, FFVideoProps;

__attribute__((visibility("hidden")))
@interface FFStreamVideoLayeredPSD : FFStreamVideo
{
    struct FFSynchronizable *_videoPropsLock;
    FFVideoProps *_videoProps;
    FFImage *_layerImage;
}

- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5 roi:(const struct CGRect *)arg6 graphBuildInfo:(id)arg7;
- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5;
- (void)_setupLayerImage:(CDStruct_1b6d18a9)arg1 context:(id)arg2 downstreamPT:(id)arg3;
- (id)pixelTransformToField2ForQuality:(int)arg1;
- (id)pixelTransformToField1ForQuality:(int)arg1;
- (id)videoProps;
- (void)dealloc;
- (id)initWithSource:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;

@end

