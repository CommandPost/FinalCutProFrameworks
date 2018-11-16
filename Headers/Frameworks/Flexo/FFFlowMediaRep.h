//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMediaRep.h>

@class FFBackgroundTask, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface FFFlowMediaRep : FFMediaRep
{
    CDStruct_e83c9415 _range;
    FFBackgroundTask *_backgroundTask;
    CDStruct_bdcb2b0d _segmentMD5;
    NSString *_folderForMD5;
    NSIndexSet *_cachedHasVectors;
}

+ (id)copyClassDescription;
- (id)renderFileFolderURL;
- (id)renderFilesPaths;
- (void)storeFlowVectors:(id)arg1 frameWidth:(int)arg2 frameHeight:(int)arg3 vectorRes:(unsigned int)arg4 sampleOffset:(long long)arg5 imageBuffer:(id)arg6;
- (void)anaylyzeRange:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 endTime:(CDStruct_1b6d18a9)arg3 totalFrames:(int)arg4 finishedFrames:(int)arg5 step:(int)arg6 task:(id)arg7 allFrames:(int)arg8 field:(int)arg9;
- (void)setCachedFlowVectors:(id)arg1;
- (void)_updateCachedFlowVectors:(long long)arg1 checkDisk:(BOOL)arg2 isInitializing:(BOOL)arg3;
- (void)_sendFlowVectorsInvalFor:(id)arg1;
- (void)_sendFlowVectorsInvalForTransferToMainThread:(id)arg1;
- (void)_runBackgroundFlowAnalysisTask:(id)arg1 onTask:(id)arg2;
- (BOOL)opticalFlowAnalysisInBackground;
- (BOOL)performOpticalFlowAnalysis;
- (id)initWithMedia:(id)arg1;
- (void)dealloc;
- (id)newFlowVectorsAtTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2;
- (id)newScheduledFlowVectorsAtTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)hasFlowVectorForTime:(CDStruct_1b6d18a9)arg1 mediaStartTime:(CDStruct_1b6d18a9)arg2;
- (void)setFlowVectors:(CDStruct_e83c9415)arg1;
- (CDStruct_1b6d18a9)sampleDuration;
- (void)setSampleDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_60067b7e)md5Key;
- (void)maxFlow:(void *)arg1 width:(int)arg2 height:(int)arg3 vectorRes:(unsigned int)arg4 maxX:(int *)arg5 maxY:(int *)arg6;
- (void)drawVectorsIntoBuffer:(id)arg1 motionVector:(void *)arg2 vectorRes:(unsigned int)arg3 drawArrow:(BOOL)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (id)analysisURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyForMedia:(id)arg1;

@end
