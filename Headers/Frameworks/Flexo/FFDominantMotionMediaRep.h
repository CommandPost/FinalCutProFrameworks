//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMediaRep.h>

#import <Flexo/FFBackgroundTaskTarget-Protocol.h>

@class FFBackgroundTask, FFPixelBuffer, FFRenderer, FFStreamVideo, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FFDominantMotionMediaRep : FFMediaRep <FFBackgroundTaskTarget>
{
    FFStreamVideo *_stream;
    FFPixelBuffer *_pixelBuffer1;
    FFPixelBuffer *_pixelBuffer2;
    FFBackgroundTask *_backgroundTask;
    FFRenderer *_renderer;
    BOOL _wasCancelled;
    int _allFrames;
    float _finishedFrames;
    int _handleForAnalysis;
    NSMutableDictionary *_analysisData;
    struct FFLocklessQueue<FigTimeRangeAndObject *> *_requests;
}

+ (BOOL)supportsSecureCoding;
+ (int)inertiaCamPickedCount;
+ (int)smoothCamPickedCount;
+ (id)copyClassDescription;
@property(retain, nonatomic) FFPixelBuffer *pixelBuffer2; // @synthesize pixelBuffer2=_pixelBuffer2;
@property(retain, nonatomic) FFPixelBuffer *pixelBuffer1; // @synthesize pixelBuffer1=_pixelBuffer1;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)analysisURLs;
- (id)analysisURL;
- (void)requestAnalysisForRange:(CDStruct_e83c9415)arg1 effect:(id)arg2 algorithmRequested:(long long)arg3 is360Stereo:(BOOL)arg4;
- (void)requestAnalysisForRange:(CDStruct_e83c9415)arg1 effect:(id)arg2;
- (void)_requestAnalysisForRange:(CDStruct_e83c9415)arg1 effect:(id)arg2 algorithmRequested:(long long)arg3 inertiaCamLowConfidence:(BOOL)arg4 is360Stereo:(BOOL)arg5;
- (id)correctionTransformsForRange:(CDStruct_e83c9415)arg1 correctionAmount:(float)arg2;
- (id)correctionTransformsForRangeDT:(CDStruct_e83c9415)arg1 correctionAmount:(float)arg2;
- (id)smoothTransformsForRange:(CDStruct_e83c9415)arg1 referenceFrameIndex:(long long)arg2;
- (id)smoothTransformsForRange:(CDStruct_e83c9415)arg1 smoothingAmount:(float)arg2 canDoTripod:(char *)arg3 wantToDoTripod:(BOOL)arg4 referenceFrameIndex:(long long)arg5;
- (id)smoothTransformsForRange:(CDStruct_e83c9415)arg1 translationSmooth:(float)arg2 rotationSmooth:(float)arg3 scaleSmooth:(float)arg4;
- (id)smoothTransformsForRange360:(CDStruct_e83c9415)arg1 referenceFrameIndex:(long long)arg2;
- (id)smoothTransformsForRangeDT2:(CDStruct_e83c9415)arg1 smoothingAmount:(float)arg2 canDoTripod:(char *)arg3 wantToDoTripod:(BOOL)arg4 referenceFrameIndex:(long long)arg5;
- (id)smoothTransformsForRangeDT:(CDStruct_e83c9415)arg1 translationSmooth:(float)arg2 rotationSmooth:(float)arg3 scaleSmooth:(float)arg4;
- (id)shakyRangesForRange:(CDStruct_e83c9415)arg1 smoothingAmount:(float)arg2 canDoTripod:(char *)arg3 wantToDoTripod:(BOOL)arg4 referenceFrameIndex:(long long)arg5;
- (id)shakyRangesForRange:(CDStruct_e83c9415)arg1 translationSmooth:(float)arg2 rotationSmooth:(float)arg3 scaleSmooth:(float)arg4;
- (id)shakyRangesForRangeDT2:(CDStruct_e83c9415)arg1 smoothingAmount:(float)arg2 canDoTripod:(char *)arg3 wantToDoTripod:(BOOL)arg4 referenceFrameIndex:(long long)arg5;
- (id)shakyRangesForRangeDT:(CDStruct_e83c9415)arg1 translationSmooth:(float)arg2 rotationSmooth:(float)arg3 scaleSmooth:(float)arg4;
- (id)_rangesFromIndexSet:(id)arg1;
- (void)_closeIndexGapsSmallerThan:(unsigned long long)arg1 indexes:(id *)arg2;
- (unsigned long long)_largestContiguousIndexGreaterThanOrEqualTo:(unsigned long long)arg1 indexes:(id)arg2;
- (void)_checkShakinessDT2:(struct HFDominantMotionTracker2Interface *)arg1 index:(int)arg2 start:(int)arg3 end:(int)arg4 lastX:(double *)arg5 lastY:(double *)arg6 shakyIndexes:(id *)arg7 uncertainIndexes:(id *)arg8;
- (void)_checkShakinessDT:(struct HFDominantMotionTrackerInterface *)arg1 index:(int)arg2 start:(int)arg3 end:(int)arg4 lastX:(double *)arg5 lastY:(double *)arg6 shakyIndexes:(id *)arg7 uncertainIndexes:(id *)arg8;
- (BOOL)alreadyAnalyzedRange:(CDStruct_e83c9415)arg1 checkInertiaCam:(BOOL)arg2 lowConfidence:(char *)arg3 track360:(BOOL)arg4;
- (BOOL)alreadyAnalyzedRange:(CDStruct_e83c9415)arg1;
- (struct _NSRange)indexRangeFromRange:(CDStruct_e83c9415)arg1;
- (BOOL)alreadyAnalyzedRange:(CDStruct_e83c9415)arg1 checkInertiaCam:(BOOL)arg2 mediaStartTime:(CDStruct_1b6d18a9)arg3 sampleDuration:(CDStruct_1b6d18a9)arg4;
- (void)offloadAnalysisDataFromTracker:(void *)arg1 useInertiaCam:(BOOL)arg2 lowConfidence:(BOOL)arg3 inSubRange:(struct _NSRange)arg4 info:(id)arg5 track360:(BOOL)arg6;
- (id)stream;
- (int)fieldDominance;
- (CDStruct_1b6d18a9)sampleDuration;
- (CDStruct_1b6d18a9)frameDuration;
- (CDStruct_1b6d18a9)mediaEndTime;
- (CDStruct_1b6d18a9)mediaStartTime;
- (void)dealloc;
- (id)initWithMedia:(id)arg1;
- (BOOL)_startBackgroundTask;
- (void)_runBackgroundDominantmotionAnalysisTask:(id)arg1 onTask:(id)arg2;
- (void)canceledTask:(id)arg1;
- (void)resumedTask:(id)arg1;
- (void)pausedTask:(id)arg1;
- (BOOL)confirmIsPaused:(id)arg1;
- (void)_performAnalysisOnRange:(CDStruct_e83c9415)arg1 onTask:(id)arg2 algorithmRequested:(int)arg3 inertiaCamLowConfidence:(BOOL)arg4 algorithmUsed:(int *)arg5 is360Stereo:(BOOL)arg6;
- (void)analyzeSubRange:(id)arg1 analysisRange:(struct _NSRange)arg2 visibleRange:(struct _NSRange)arg3 algorithmRequested:(int)arg4 inertiaCamLowConfidence:(BOOL)arg5 algorithmUsed:(int *)arg6 is360Stereo:(BOOL)arg7 sampleDuration:(CDStruct_1b6d18a9)arg8;
- (int)_analyzeUseRendererForRange:(struct _NSRange)arg1 visibleRange:(struct _NSRange)arg2 useInertiaCam:(BOOL)arg3 forceInertiaCam:(BOOL)arg4 track360:(BOOL)arg5 is360Stereo:(BOOL)arg6 runningTask:(id)arg7 sampleDuration:(CDStruct_1b6d18a9)arg8;
- (void)_reportTime:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_notifyDoneWithRange:(CDStruct_e83c9415)arg1 effect:(id)arg2 algorithmUsed:(int)arg3 algorithmRequested:(int)arg4;
- (id)backgroundTask;
- (int)allFrames;
- (void)increaseFinishedFrames:(float)arg1;
- (float)finishedFrames;
- (void)setupTrackerForRange360:(CDStruct_e83c9415)arg1 tracker:(struct HFDominant360MotionTrackerSimpleInterface *)arg2 startFrame:(int)arg3 endFrame:(int)arg4;
- (void)setupTrackerForRangeDT2:(CDStruct_e83c9415)arg1 tracker:(struct HFDominantMotionTracker2Interface *)arg2 startFrame:(int)arg3 endFrame:(int)arg4;
- (void)setupTrackerForRangeDT:(CDStruct_e83c9415)arg1 tracker:(struct HFDominantMotionTrackerInterface *)arg2 startFrame:(int)arg3 endFrame:(int)arg4;
- (void)cacheAnalysisDataForRange:(struct _NSRange)arg1 analysisData:(id)arg2 track360:(BOOL)arg3;
- (void)cacheAnalysisData;
- (id)newMutableAnalysisDataForRange:(struct _NSRange)arg1;
- (id)mutableAnalysisData;
- (id)analysisDataForRange:(struct _NSRange)arg1 track360:(BOOL)arg2;
- (struct _NSRange)rangeGrownByHandleForAnalysis:(struct _NSRange)arg1;
- (id)analysisData;
- (id)stabilizationFileURLForRange:(struct _NSRange)arg1 track360:(BOOL)arg2;
- (id)stabilizationFileURLs;
- (id)stabilizationFileURL;
- (id)mediaFileName;
- (id)stabilizationFolderURL;
- (BOOL)_useInertiaCamOpenCL;

@end

