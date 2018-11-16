//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestVideoAnalyzerController.h>

#import "FFDestAnalyzerControllerDelegate.h"
#import "FaceRecognitionManagerDetectionDelegate.h"

@class FFFaceDetectionInfoCollection, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFFaceDetection : FFDestVideoAnalyzerController <FaceRecognitionManagerDetectionDelegate, FFDestAnalyzerControllerDelegate>
{
    int _downSampleRate;
    int _numFramesReceived;
    int _frameNo;
    int _currGOF;
    CDStruct_e83c9415 _timeRangeOfCurrGOF;
    int _numOfFramesWithFacesInCurrGOF;
    double _totalLargestFaceAreaInCurrGOF;
    int _totalNumOfFacesInCurrGOF;
    NSMutableArray *rangesOfFramesContainingPeopleType[3];
    NSMutableArray *rangesOfFramesContainingShotType[3];
    NSMutableArray *rangesOfFramesContainingOneSetOfKeywords[9];
    FFFaceDetectionInfoCollection *collectionOfPerFrameData;
    CDUnknownBlockType _analyzeImage;
    BOOL _skipPerFrameAnalysis;
    BOOL _createSmartCollectionFolders;
    BOOL _consolidateFindPeopleResults;
}

- (void)_removeExistingKeywords:(id)arg1;
- (id)initWithAnchoredObject:(id)arg1 createSmartCollectionFolders:(BOOL)arg2 consolidateFindPeopleResults:(BOOL)arg3;
- (void)_processFrameImage:(struct CGImage *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)performFaceDetectionOnFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_printRanges:(id)arg1;
- (void)collapseRanges:(id)arg1;
- (void)_analyzeGOF:(int *)arg1 shotType:(int *)arg2;
- (void)_summarizeFaceDetectionRanges;
- (void)endFaceDetection;
- (void)_saveFaceDetectionData;
- (struct CGImage *)getCGImageOfPhoto:(void *)arg1 userInfo:(void **)arg2 maxDimension:(double)arg3 sender:(id)arg4 context:(void *)arg5;
- (void)releaseCGImage:(struct CGImage *)arg1 ofPhoto:(void *)arg2 withUserInfo:(void *)arg3 sender:(id)arg4 context:(void *)arg5;
- (id)getDateOriginalOfPhoto:(void *)arg1 withUserInfo:(void *)arg2 shutterSpeedValue:(double *)arg3 apertureValue:(double *)arg4 ISOSpeedRating:(double *)arg5 sender:(id)arg6 context:(void *)arg7;
- (struct CGAffineTransform)transformForProvidedImageSpaceToOriginalImageOfPhoto:(void *)arg1 withUserInfo:(void *)arg2 sender:(id)arg3 context:(void *)arg4;
- (struct CGAffineTransform)transformForOriginalImageSpaceToPovidedImageSpaceOfPhoto:(void *)arg1 withUserInfo:(void *)arg2 sender:(id)arg3 context:(void *)arg4;
- (BOOL)validateFace:(id)arg1 ofPhoto:(void *)arg2 withUserInfo:(void *)arg3 sender:(id)arg4 context:(void *)arg5 debugString:(id)arg6;
- (BOOL)writeDetectionAndThumbnailInfoOfFaces:(id)arg1 ofPhoto:(void *)arg2 withUserInfo:(void *)arg3 sender:(id)arg4 context:(void *)arg5;
- (void)logDetectFace:(id)arg1 ofPhoto:(void *)arg2 debugString:(id)arg3 sender:(id)arg4 context:(void *)arg5;
- (void)dealloc;
- (void)start;
- (CDUnknownBlockType)analyzeImage;
- (void)finish;
- (void)cancel;
- (BOOL)reuseDataForAnalyzing;
- (BOOL)doesSupportDataFilesWithMediaEventProject:(id)arg1 subPath:(id *)arg2 type:(id *)arg3;
- (id)assignAnalyzeImageCallback;

@end

