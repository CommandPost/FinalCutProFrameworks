//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMediaRep.h>

#import <Flexo/FFBackgroundTaskTarget-Protocol.h>

@class FFBackgroundTask, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface FFFlowMediaRep : FFMediaRep <FFBackgroundTaskTarget>
{
    CDStruct_e83c9415 _range;
    long long _mode;
    CDStruct_bdcb2b0d _md5HQ;
    FFBackgroundTask *_backgroundTask;
    NSString *_folderForMD5;
    NSString *_folderForMediumQualityMD5;
    NSIndexSet *_cachedHasVectors;
    NSIndexSet *_cachedHasMediumQualityVectors;
}

+ (BOOL)supportsSecureCoding;
+ (void)_processQueuedInvals;
+ (id)copyClassDescription;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)analysisURLs;
- (void)drawVectorsIntoBuffer:(id)arg1 motionVector:(void *)arg2 vectorRes:(unsigned int)arg3 drawArrow:(BOOL)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (CDStruct_bdcb2b0d)segmentMD5ForMode:(long long)arg1;
- (struct CGRect)pixelSpaceFrameBounds;
- (CDStruct_1b6d18a9)sampleDuration;
- (unsigned int)flowResolution;
- (void)setFlowVectors:(CDStruct_e83c9415)arg1 mode:(long long)arg2;
- (void)setFlow:(CDStruct_e83c9415)arg1 mode:(long long)arg2 info:(id)arg3;
- (BOOL)hasFlowVectorForTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2 mode:(long long)arg3;
- (id)newScheduledFlowVectorsAtTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2 mode:(long long)arg3;
- (id)newFlowVectorsAtTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2 mode:(long long)arg3;
- (id)_copyCurrentCachedVectorsIndexSetForMode:(long long)arg1;
- (void)dealloc;
- (id)initWithMedia:(id)arg1;
- (BOOL)performOpticalFlowAnalysisWithMode:(long long)arg1 info:(id)arg2;
- (void)_backgroundTaskCompleted;
- (BOOL)opticalFlowAnalysisInBackgroundWithMode:(long long)arg1 info:(id)arg2;
- (void)_runBackgroundFlowAnalysisTask:(id)arg1 onTask:(id)arg2;
- (void)_runBackgroundHighQualityFlowAnalysisTask:(id)arg1 onTask:(id)arg2;
- (BOOL)_shouldRunAnalysis;
- (void)_queueInvalForRange:(CDStruct_e83c9415)arg1 andMode:(long long)arg2;
- (void)_postInvalForRange:(id)arg1 mode:(long long)arg2;
- (void)_updateCachedFlowVectors:(long long)arg1 checkDisk:(BOOL)arg2 isInitializing:(BOOL)arg3 mode:(long long)arg4;
- (void)setCachedMediumQualityFlowVectors:(id)arg1 isInitializing:(BOOL)arg2;
- (void)setCachedFlowVectors:(id)arg1 isInitializing:(BOOL)arg2;
- (void)analyzeSubRange:(id)arg1 startFrame:(int)arg2 endFrame:(int)arg3 infoForTracker:(id)arg4;
- (BOOL)storeFlowVectors:(id)arg1 sampleOffset:(long long)arg2 mode:(long long)arg3 error:(id *)arg4;
- (id)copySegStoreRef:(id *)arg1;
- (id)_rendererStorageLocation;
- (id)renderFileFolderURL;
- (void)invalidateMD5HQAndRange;

@end

