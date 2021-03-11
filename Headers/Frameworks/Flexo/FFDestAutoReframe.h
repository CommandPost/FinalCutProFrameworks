//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFDestVideoAnalyzerController.h>

#import <Flexo/FFDestAnalyzerProtocol-Protocol.h>

@class FFImage, FFVideoAnalysisCollatedSaliency, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFDestAutoReframe : FFDestVideoAnalyzerController <FFDestAnalyzerProtocol>
{
    FFImage *_incomingImage;
    CDStruct_1b6d18a9 _incomingImageTime;
    NSMutableArray *_collatedFaces;
    FFVideoAnalysisCollatedSaliency *_collatedSaliency;
    _Atomic void *_dft_sync;
    struct {
        unsigned int shouldTerminate:1;
        unsigned int trackingInProgress:1;
        unsigned int isReusingAnalysisResults:1;
        unsigned int ignoreIncomingFrames:1;
        unsigned int hasIncorrectLength:1;
        unsigned int isFinishing:1;
    } _state;
    long long _currentFrame;
    long long _numFrames;
    int _framesInterval;
    long long _firstFoundFaceFrame;
    long long _firstFrame;
    long long _maxAllowedFramesToAnalyze;
    long long _analysisFrameOffset;
    int _workingSpace;
}

+ (long long)analysisFrameOffsetWithSampleDuration:(CDStruct_1b6d18a9)arg1 numFrames:(long long)arg2 maxAllowedFramesToAnalyze:(long long)arg3 isStill:(BOOL)arg4;
+ (long long)firstFrameWithStartTime:(CDStruct_1b6d18a9)arg1 sampleDuration:(CDStruct_1b6d18a9)arg2 rationalFramesInterval:(int)arg3;
+ (int)rationalFramesInterval:(int)arg1 sampleDuration:(CDStruct_1b6d18a9)arg2 fieldDominance:(int)arg3;
+ (int)framesIntervalWithSampleDuration:(CDStruct_1b6d18a9)arg1 fieldDominance:(int)arg2;
+ (long long)maxAllowedFramesToAnalyzeWithSampleDuration:(CDStruct_1b6d18a9)arg1 framesInterval:(int)arg2;
- (void)_mergeFacesWithCurrentResults:(id)arg1;
- (unsigned long long)_findFaceMatch:(id)arg1;
- (int)_pushCVPixelBufferFromDest:(struct __CVBuffer **)arg1 time:(CDStruct_1b6d18a9 *)arg2;
- (int)_waitOnIncomingImageAndPerformBlock:(CDUnknownBlockType)arg1;
- (BOOL)doesSupportDataFilesWithMediaEventProject:(id)arg1 subPath:(id *)arg2 type:(id *)arg3;
- (BOOL)reuseDataForAnalyzing;
- (void)cancelAnalyzing;
- (void)finishAnalyzing;
- (void)_assignFaceIDs;
- (void)_endTracking;
- (void)startAnalyzing;
- (int)analyzeImage:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_startTrackingOnImage:(id)arg1;
- (struct CGSize)requestedImageSizeWithFilterQuality:(int *)arg1;
- (id)requestedImageInfo;
- (void)dealloc;
- (id)initWithSampleDuration:(CDStruct_1b6d18a9)arg1 anchoredObject:(id)arg2 asset:(id)arg3;
- (id)initWithSampleDuration:(CDStruct_1b6d18a9)arg1 clip:(id)arg2 asset:(id)arg3;
- (void)_commonAutoReframeInit;
- (void)_terminate;
- (void)_setIncomingImage:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (struct _Synchronize *)_synchronize;
- (struct CGRect)boundingBoxInTimeRange:(CDStruct_e83c9415)arg1 forOriginalItem:(id)arg2 frameSize:(struct CGSize)arg3 sequenceBounds:(struct CGRect)arg4;
- (struct _Annotation)_annotationForOriginalItem:(id)arg1 defaultRect:(struct CGRect)arg2;
- (id)_newSanitizedItemsInTimeRange:(CDStruct_e83c9415)arg1;
- (void)startAnalyzingFrames;
- (void)_addFaceObservationResults:(id)arg1 toFaces:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (BOOL)getAnnotatedRect:(struct CGRect *)arg1 forOriginalItem:(id)arg2;
- (struct CGRect)annotatedRectFromOriginalItemTransform:(id)arg1 cropResult:(struct CGRect)arg2;

@end

