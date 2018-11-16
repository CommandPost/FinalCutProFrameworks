//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol OZRenderClient
- (void)renderNodeCancelled:(const CDStruct_1b6d18a9 *)arg1 userData:(void *)arg2;
- (void)renderNodeFinished:(struct OZHGRenderNode *)arg1 result:(const shared_ptr_7e020609 *)arg2;

@optional
- (void)resumePlaybackAfterAbort;
- (void)pausePlaybackAfterAbort;
- (BOOL)isLooping;
- (BOOL)isPlaying;
- (void)getRenderRequestRenderParams:(struct OZRenderParams *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (const CDStruct_1b6d18a9 *)getCurrentTime;
@end

