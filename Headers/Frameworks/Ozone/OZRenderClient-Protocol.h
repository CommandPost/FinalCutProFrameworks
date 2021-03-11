//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol OZRenderClient
- (void)renderNodeCancelled:(const CDStruct_1b6d18a9 *)arg1 userData:(void *)arg2;
- (void)renderNodeFinished:(struct OZHGRenderNode *)arg1 result:(const shared_ptr_3bf61ddf *)arg2;

@optional
- (shared_ptr_80358429)destinationDevice;
- (int)canvasVirtualScreen;
- (int)currentVirtualScreen;
- (void)resumePlaybackAfterAbort;
- (void)pausePlaybackDuringAbort;
- (BOOL)isLooping;
- (BOOL)isPlaying;
- (void)getRenderRequestRenderParams:(struct OZRenderParams *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (const CDStruct_1b6d18a9 *)getCurrentTime;
- (void)renderJobFinished:(const shared_ptr_3bf61ddf *)arg1;
@end

