//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFBackgroundTaskTarget-Protocol.h>
#import <Flexo/FFStorageLocationOutOfDiskSpaceProtocol-Protocol.h>

@class FFRenderer, NSMapTable, NSMutableSet;

@interface FFAnalyzeAndOptimizeController : NSObject <FFStorageLocationOutOfDiskSpaceProtocol, FFBackgroundTaskTarget>
{
    NSMutableSet *_optimizationTasks;
    BOOL _willCloseDown;
    BOOL _wasCancelled;
    FFRenderer *_renderer;
    struct FFSynchronizable *_rendererLock;
    NSMapTable *_clipAnalysesQueue;
    struct PCProcrastinatedDispatch_t _procrastinatedOutOfDiskSpaceWarningContext;
}

+ (BOOL)needsOptimizationForFourCharCode:(unsigned int)arg1;
+ (BOOL)optimizationTaskQueuedForClip:(id)arg1;
+ (BOOL)proxyTaskQueuedForClip:(id)arg1;
+ (BOOL)_taskQueued:(id)arg1 forClip:(id)arg2;
+ (BOOL)assetHasProxy:(id)arg1;
+ (BOOL)clipHasProxy:(id)arg1;
+ (BOOL)canMakeProxyForAsset:(id)arg1;
+ (BOOL)_assetHasProxy:(id)arg1 status:(int)arg2;
+ (BOOL)needsOptimizationForClip:(id)arg1;
+ (BOOL)_needsOptimizationForClip:(id)arg1 prefersOptimize:(BOOL)arg2;
+ (BOOL)_needOptimizationOrHasProxyForClip:(id)arg1 forEachAssetBlock:(CDUnknownBlockType)arg2;
+ (BOOL)_needsOptimizationForAsset:(id)arg1 status:(int)arg2 prefersOptimize:(BOOL)arg3;
+ (BOOL)needsOptimizationForAsset:(id)arg1;
+ (int)syncMedia:(id)arg1 repType:(id)arg2;
+ (BOOL)needsOptimizationForStill:(id)arg1;
+ (BOOL)_needsCacheForLargeStill:(id)arg1;
+ (BOOL)_needsOptimizationForAudioFormat:(id)arg1;
+ (unsigned int)_videoCodecForAsset:(id)arg1;
+ (BOOL)_isAssetStillImage:(id)arg1;
+ (unsigned int)videoCodecForURL:(id)arg1;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (id).cxx_construct;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)stopWritingFilesToLocation:(id)arg1;
- (BOOL)actionPerformAnalyzeAndOptimizeClips:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)analyzeAndOptimizeClips:(id)arg1 options:(id)arg2;
- (void)_analyzeAndOptimizeClips:(id)arg1 options:(id)arg2 forAssetImport:(BOOL)arg3;
- (id)preflightForCameraClips:(id)arg1;
- (id)preflightClip:(id)arg1 withOptions:(id)arg2;
- (void)warnAboutEncodingHDRWithProRes;
- (BOOL)clipsHaveHDRMedia:(id)arg1;
- (void)warnAboutOutOfDiskSpaceWithDetails:(id)arg1;
- (BOOL)verifyDiskSpaceAvailable:(id)arg1;
- (unsigned long long)audioFormatFor32BitClipTranscode:(id)arg1;
- (id)renderFormatFor32BitClipTranscode:(id)arg1;
- (void)analyzeAndOptimizeClipBackgroundThread:(id)arg1 onTask:(id)arg2;
- (BOOL)transcodeAsset:(id)arg1 options:(id)arg2 toLibrary:(id)arg3 analysisBlock:(CDUnknownBlockType)arg4 onTask:(id)arg5 error:(id *)arg6;
- (CDStruct_fc4be55c)calcProxyTranscodeInfoForAsset:(id)arg1 options:(id)arg2;
- (void)performTaskBlock:(CDUnknownBlockType)arg1 onTask:(id)arg2;
- (id)_commitTemporaryMediaAtURL:(id)arg1 mediaRepType:(id)arg2 fileName:(id)arg3 forAsset:(id)arg4 useTempMediaLocation:(BOOL)arg5 tempExternalMediaLocation:(id)arg6;
- (id)_tmpFilenameFromName:(id)arg1 identifier:(id)arg2 proxy:(BOOL)arg3;
- (id)_optimizedVideoFormatForCodec:(unsigned int)arg1 colorSpace:(struct CGColorSpace *)arg2;
- (struct AudioStreamBasicDescription)_optimizedAudioFileFormatForFormat:(struct AudioStreamBasicDescription)arg1;
- (void)_assetCopyQueueCompleted:(id)arg1;
- (void)transcodeAudioOnlyAsset:(id)arg1;
- (void)_analyzeAndOptimizeClip:(id)arg1 forAssetImport:(BOOL)arg2;
- (void)_audioAnalyzeClip:(id)arg1 forAssetImport:(BOOL)arg2;
- (void)assetDone:(id)arg1;
- (void)analyzeAndOptimizeClipBackgroundThreadDone;
- (void)canceledTask:(id)arg1;
- (void)resumedTask:(id)arg1;
- (void)pausedTask:(id)arg1;
- (void)scheduleTask:(id)arg1;
- (BOOL)confirmIsPaused:(id)arg1;
- (id)defaultAnalyzeAndOptimizeOptions:(BOOL)arg1;
- (void)_transcodeStillImage:(struct CGImageSource *)arg1 destPath:(id)arg2 downscaleFactor:(int)arg3 destExtPtr:(id *)arg4;
- (void)_cancelAndWaitForTaskToFinish:(id)arg1;
- (id)clipsFromCoumpoundClip:(id)arg1;
- (id)clipsFromStack:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_addMediaRepForAsset:(id)arg1 libraryMediaRepURL:(id)arg2 mediaRepType:(id)arg3;
- (void)_addMediaRepHelper:(id)arg1;
- (id)eventForClip:(id)arg1;
- (id)displayName;
- (void)_appWillTerminate:(id)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)init;

@end

