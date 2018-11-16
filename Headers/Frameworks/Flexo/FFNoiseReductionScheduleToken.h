//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFScheduleToken.h>

@class FFGraphBuildInformation, FFImage, FFImageAbsoluteOutputFormat, FFPixelFormat, FFSVContext, FFSchedInfo, FFStreamVideo, NSArray, NSCondition, NSError, NSMutableArray, NSString, PCMatrix44Double;

@interface FFNoiseReductionScheduleToken : FFScheduleToken
{
    CDStruct_1b6d18a9 _requestedTime;
    CDStruct_1b6d18a9 _offset;
    NSArray *_timeArrayOfReqTimes;
    NSMutableArray *_arrayOfRepImages;
    NSArray *_cacheKeys;
    NSMutableArray *_newCacheKeys;
    NSArray *_sliderSettings;
    NSString *_outputCacheString;
    struct VPA_NR_InstanceCreateParams_BM3D _createParamsNR;
    struct VPA_NR_UserConfigParams_BM3D _userParamsNR;
    FFImageAbsoluteOutputFormat *_vpaInOutFormat;
    FFImageAbsoluteOutputFormat *_alphaInOutFormat;
    BOOL _isInterlaced;
    int _requestedField;
    BOOL _isStill;
    BOOL _isTopFieldFirst;
    BOOL _movingSliders;
    BOOL _denoise360Media;
    BOOL _outputCacheHit;
    BOOL _needToUpscaleBackToFullFrameField1;
    BOOL _needToUpscaleBackToFullFrameField2;
    BOOL _mustPreserveAlpha;
    int _cameraMode;
    long long _framesBefore;
    long long _framesAfter;
    long long _requestedImgArrayIndex;
    FFImage *_flattenResult;
    FFImage *_flatAlpha;
    FFStreamVideo *_inputStream;
    FFSVContext *_context;
    FFSchedInfo *_schedInfo;
    PCMatrix44Double *_downstreamPT;
    PCMatrix44Double *_inputImagePT;
    PCMatrix44Double *_inputImagePTField2;
    PCMatrix44Double *_pixelTransform_Field1Squared;
    PCMatrix44Double *_pixelTransform_Field2Squared;
    FFPixelFormat *_inputImagePxFormat;
    struct CGRect _imageSpaceBounds;
    struct CGRect _imageSpaceBoundsField2;
    struct CGRect _expectedRect;
    int _maxPrioritySeen;
    struct FFThread *_threadToBoost;
    NSMutableArray *_arrayOfFlattenedBufs;
    FFScheduleToken *_inputsToken;
    BOOL _hasBeenHinted;
    BOOL _autoHinted;
    BOOL _hasBeenImaged;
    NSCondition *_cond;
    int _state;
    NSError *_noiseReductionError;
    FFGraphBuildInformation *_buildInfo;
}

+ (CDStruct_2ec95fd7)getCurrentNRStats;
+ (void)waitForPendingNoiseReductionsForLibrary:(id)arg1;
+ (void)enableNoiseReductionProcessing:(BOOL)arg1 forLibrary:(id)arg2;
+ (id)sharedCacheNR;
+ (id)newNoiseReductionTokenBySchedulingOrCacheLookup:(id)arg1 key:(CDStruct_bdcb2b0d)arg2 library:(id)arg3 time:(CDStruct_1b6d18a9)arg4 duration:(CDStruct_1b6d18a9)arg5 context:(id)arg6 schedInfo:(id)arg7 downstreamPT:(id)arg8 isScheduling:(BOOL)arg9 offset:(CDStruct_1b6d18a9)arg10 withSliderSettings:(id)arg11 isStill:(BOOL)arg12 fieldOrder:(int)arg13 denoise360Media:(BOOL)arg14 frameDuration:(CDStruct_1b6d18a9)arg15 sampleDuration:(CDStruct_1b6d18a9)arg16 abortIfOutputCacheMiss:(BOOL)arg17 effectStreamVideoProps:(id)arg18;
+ (void)initialize;
- (id)description;
- (_Bool)hiPriority;
- (void)performWaitForMode:(int)arg1;
- (_Bool)needsWaitForMode:(int)arg1;
- (void)processForMode:(int)arg1;
- (_Bool)readyToProcessForMode:(int)arg1;
- (int)state;
- (id)_getFlatAlphaNow:(id)arg1;
- (id)_getFlatImageNow;
- (void)_prepFlatImageNow;
- (HGRef_265f9e4c)newRearranged360OutputImageAfterDenoise:(id)arg1 retPF:(id *)arg2 retCS:(struct CGColorSpace **)arg3;
- (HGRef_265f9e4c)newRearranged360OutputImage_StereoOverUnder:(id)arg1 retPF:(id *)arg2 retCS:(struct CGColorSpace **)arg3;
- (HGRef_265f9e4c)newRearranged360OutputImage_mono:(id)arg1 retPF:(id *)arg2 retCS:(struct CGColorSpace **)arg3;
- (int)denoiseSequentialMode:(char *)arg1 inputRowBytes:(long long)arg2 outputBaseAddress:(char *)arg3 outputRowBytes:(long long)arg4 filterParams:(struct VPA_NR_ProcessFrameParams_BM3D)arg5;
- (int)denoiseRandomMode:(id)arg1 inputRowBytes:(long long)arg2 outputBaseAddress:(char *)arg3 outputRowBytes:(long long)arg4 filterParams:(struct VPA_NR_ProcessFrameParams_BM3D)arg5;
- (id)newStoredDenoisedOutputBufferInCache:(struct __CVBuffer *)arg1 outputImageCache:(id)arg2 outputImageKeyString:(id)arg3 originalAlpha:(id)arg4;
- (struct __CVBuffer *)newOutputCVBufferFromAppleVPA:(id)arg1 denoiseMode:(int)arg2;
- (void)_storeDataFromNoiseReductionOutput:(id)arg1;
- (id)newDenoisedResult:(id)arg1;
- (id)newOutputImageFromCache:(id)arg1;
- (struct __CFDictionary *)copyOutputBufferAttributes;
- (void)setupInputsToAppleVPA:(long long)arg1 height:(long long)arg2;
- (void)_dumpFFPixelBuffer:(id)arg1;
- (id)_bitmapImageRep:(id)arg1;
- (id)newArrayOfFlattenedPxBuffers:(CDStruct_302d8f15 *)arg1;
- (HGRef_265f9e4c)newRearranged360InputImage_mono:(id)arg1 pxNewBounds:(struct CGRect *)arg2;
- (HGRef_265f9e4c)newRearranged360InputImage_StereoOverUnder:(id)arg1 pxNewBounds:(struct CGRect *)arg2;
- (HGRef_265f9e4c)newRearranged360InputImageToDenoise:(id)arg1 pxNewBounds:(struct CGRect *)arg2 justBoundsNoGraph:(_Bool)arg3;
- (id)newInterleavedFieldBuffer:(id)arg1 field2:(id)arg2 options:(CDStruct_302d8f15 *)arg3 pixelTransform_field1Squared:(id)arg4 pixelTransform_field2Squared:(id)arg5 arrayIndex:(long long)arg6;
- (id)copyNoiseReductionImageWithBuildInfo:(id)arg1;
- (id)_newRepresentationalImage;
- (void)_ensureUnderlyingImages:(id)arg1;
- (id)newConformedImageToInputStreamSize:(id)arg1 expectedRect:(struct CGRect)arg2 streamPixelTransform:(id)arg3 workingSpace:(int)arg4;
- (BOOL)needCompositeBackground:(struct CGRect)arg1 expectedRect:(struct CGRect)arg2;
- (struct CGRect)appleVPAToOriginal_360Bounds:(struct CGRect)arg1;
- (struct CGRect)originalToAppleVPA_360Bounds:(struct CGRect)arg1;
- (HGRef_265f9e4c)newReOrientedNodeFor360Denoise:(HGRef_265f9e4c)arg1 pxSPaceBounds:(struct CGRect)arg2;
- (void)_assertInputSourcesScheduled;
- (void)_scheduleInputSources:(id)arg1 arrayOfScheduleTokens:(id)arg2;
- (void)updatePrioritySeenNR:(int)arg1;
- (_Bool)hintWillImageSoon;
- (id)copyErrorInfoStoppingAfterFirstError:(BOOL)arg1;
- (_Bool)areStatusFlagsClear:(unsigned int)arg1;
- (_Bool)waitForStatusFlagsToClear:(unsigned int)arg1 beforeDate:(id)arg2;
- (unsigned int)scheduleStatusInformation;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithStream:(id)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 offset:(CDStruct_1b6d18a9)arg7 withSliderSettings:(id)arg8 isStill:(BOOL)arg9 fieldOrder:(int)arg10 denoise360Media:(BOOL)arg11 frameDuration:(CDStruct_1b6d18a9)arg12 sampleDuration:(CDStruct_1b6d18a9)arg13 abortIfOutputCacheMiss:(BOOL)arg14 effectStreamVideoProps:(id)arg15;
- (id)getOutputCacheKeyString:(id)arg1;
- (id)newInputCacheKeysForTimeArray:(int)arg1 height:(int)arg2;
- (id)newCacheKeysForRequestedTimes:(id)arg1;
- (id)newArrayOfFFSCheduleTokensForRequestedTimesWithRetInfo:(struct FFFDenoiseInputTokenInfo *)arg1;
- (id)_newFPTForOrigContext:(id)arg1 chosenContext:(id)arg2;
- (id)_newAltContext:(id)arg1;
- (id)newImageTimeArray:(CDStruct_1b6d18a9)arg1 inputStream:(id)arg2 samplesBefore:(int)arg3 samplesAfter:(int)arg4 frameDuration:(CDStruct_1b6d18a9)arg5 sampleDuration:(CDStruct_1b6d18a9)arg6;
- (void)_setError:(int)arg1 info:(id)arg2 alreadyHoldingLock:(_Bool)arg3;
- (void)_setError:(id)arg1 alreadyHoldingLock:(_Bool)arg2;

@end
