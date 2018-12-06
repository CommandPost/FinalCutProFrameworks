//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFStorageLocationOutOfDiskSpaceProtocol.h"

@class FFRenderer, NSMutableArray, NSMutableSet;

@interface FFAnalyzeAndOptimizeController : NSObject <FFStorageLocationOutOfDiskSpaceProtocol>
{
    FFRenderer *_renderer;
    NSMutableSet *_optimizationTasks;
    BOOL _willCloseDown;
    BOOL _isPaused;
    BOOL _wasCancelled;
    NSMutableArray *_dests;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (unsigned int)videoCodecForURL:(id)arg1;
+ (BOOL)_isStillImage:(id)arg1;
+ (unsigned int)_videoCodecForClip:(id)arg1;
+ (BOOL)needsOptimizationForClip:(id)arg1;
+ (BOOL)clipHasProxy:(id)arg1;
+ (BOOL)needsOptimizationForFourCharCode:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (void)_appWillTerminate:(id)arg1;
- (id)displayName;
- (id)eventForClip:(id)arg1;
- (void)_addMediaRepForURLMainThread:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)clipsFromStack:(id)arg1;
- (id)clipsFromCoumpoundClip:(id)arg1;
- (void)_cancelAndWaitForTaskToFinish:(id)arg1;
- (void)_transcodeStillImage:(struct CGImageSource *)arg1 destPath:(id)arg2 downscaleFactor:(int)arg3 destExtPtr:(id *)arg4;
- (id)defaultAnalyzeAndOptimizeOptions:(BOOL)arg1;
- (void)pausedTask:(id)arg1;
- (void)resumedTask:(id)arg1;
- (void)canceledTask:(id)arg1;
- (void)analyzeAndOptimizeClipBackgroundThreadDone:(id)arg1;
- (void)assetDone:(id)arg1;
- (void)analyzeAndOptimizeClipBackgroundThread:(id)arg1 onTask:(id)arg2;
- (BOOL)verifyDiskSpaceAvailable:(id)arg1;
- (void)warnAboutOutOfDiskSpace;
- (id)preflightClip:(id)arg1 withOptions:(id)arg2;
- (void)analyzeAndOptimizeClip:(id)arg1;
- (id)preflightForCameraClips:(id)arg1;
- (void)analyzeAndOptimizeClips:(id)arg1 options:(id)arg2;
- (void)stopWritingFilesToLocation:(id)arg1;

@end

