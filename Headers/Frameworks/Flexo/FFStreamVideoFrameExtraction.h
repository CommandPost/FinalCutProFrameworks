//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamVideo.h>

__attribute__((visibility("hidden")))
@interface FFStreamVideoFrameExtraction : FFStreamVideo
{
    FFStreamVideo *_input;
}

- (id)input;
- (void)dealloc;
- (id)videoProps;
- (CDStruct_e83c9415)timeRange;
- (id)pixelTransformToFrameForQuality:(int)arg1;
- (id)pixelTransformToField1ForQuality:(int)arg1;
- (id)pixelTransformToField2ForQuality:(int)arg1;
- (void)prerollBegin:(CDStruct_1b6d18a9)arg1 rate:(double)arg2 sync:(id)arg3;
- (void)prerollEnd;
- (void)setRate:(double)arg1;
- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4 roi:(struct CGRect *)arg5;
- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3;

@end

