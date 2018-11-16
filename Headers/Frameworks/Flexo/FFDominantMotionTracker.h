//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestVideoAnalyzerController.h>

#import "FFDestAnalyzerProtocol.h"

@class FFPixelBuffer, FFPlayerFrame;

__attribute__((visibility("hidden")))
@interface FFDominantMotionTracker : FFDestVideoAnalyzerController <FFDestAnalyzerProtocol>
{
    struct _NSRange _calculationRange;
    struct _NSRange _scanRange;
    int _hdmtiFieldDominance;
    FFPlayerFrame *_incomingFrame;
    FFPixelBuffer *_pixelBufferCtx0;
    FFPixelBuffer *_pixelBufferCtx1;
    struct {
        unsigned int shouldTerminate:1;
        unsigned int estimationInProgress:1;
        unsigned int hasIncorrectLength:1;
        unsigned int createSmartCollectionFolders:1;
        unsigned int isReusingAnalysisResults:1;
    } _state;
    void *_FFDominantMotionTrackerPrivate;
}

- (id).cxx_construct;
- (BOOL)isProgressive;
- (id)setIncomingFrame:(id)arg1;
- (id)newDominantMotionMediaRep;
- (int)pushFrameFromDest:(void **)arg1 buffer2:(void **)arg2;
- (int)pushFrameFromDest:(void **)arg1;
- (void)terminate;
- (void)storeResultsInAsset;
- (void)joinTrackerThread;
- (void)endEstimation;
- (void)startEstimatedMotionOnFrame:(id)arg1;
- (BOOL)reuseDataForAnalyzing;
- (void)cancelAnalyzing;
- (void)finishAnalyzing;
- (void)startAnalyzing;
- (int)analyzePlayerFrame:(id)arg1;
- (void)dealloc;
- (id)initWithSampleDuration:(CDStruct_1b6d18a9)arg1 clip:(id)arg2 asset:(id)arg3 createSmartCollectionFolders:(BOOL)arg4;

@end

