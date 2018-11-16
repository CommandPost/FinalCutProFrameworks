//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStreamVideo.h>

@class FFREDClip, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFStreamVideoRED : FFStreamVideo
{
    struct dispatch_semaphore_s *_semaphore;
    struct dispatch_queue_s *_serialQueue;
    NSMutableArray *_outstandingScheduleTokens;
    FFREDClip *_clip;
    BOOL _rocketAvailable;
    int _fileIndex;
    unsigned long long _videoOffset;
    unsigned long long _videoSize;
    int _fileIndexOfOpenFile;
    int _fd;
}

- (unsigned int)getFrameData:(char *)arg1 dataSize:(unsigned int)arg2;
- (unsigned int)seekToFrame:(unsigned int)arg1;
- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4 roi:(const struct CGRect *)arg5;
- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4;
- (void)removeToken:(id)arg1;
- (id)copyOrCreateScheduleTokenAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2;
- (id)videoProps;
- (void)dealloc;
- (id)initWithSource:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;

@end
