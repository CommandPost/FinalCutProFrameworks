//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamDelegatingVideo.h>

@class FFPixelBuffer;

__attribute__((visibility("hidden")))
@interface FFStreamVideoLongGOPAnalysis : FFStreamDelegatingVideo
{
    FFPixelBuffer *_dummyBuf;
}

- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4 roi:(const struct CGRect *)arg5;
- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4;
- (id)_newDummyImage:(struct CGRect)arg1 pt:(id)arg2;
- (_Bool)_passThruIsPossibleForSD:(CDStruct_1b6d18a9)arg1 atTime:(CDStruct_1b6d18a9)arg2 context:(id)arg3;
- (void)dealloc;

@end

