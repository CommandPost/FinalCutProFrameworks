//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFScheduleToken.h>

@class FFGraphBuildInformation, FFImage, FFImageAbsoluteOutputFormat, FFPixelFormat, FFSVContext, FFSchedInfo, FFSource, FFStreamVideo, NSArray, NSCondition, NSError, NSMutableArray, NSString, PCMatrix44Double;

@interface FFNoiseReductionScheduleToken : FFScheduleToken
{
    CDStruct_1b6d18a9 _requestedTime;
    CDStruct_1b6d18a9 _offset;
    CDStruct_bdcb2b0d _nrObjectCacheKey;
    NSArray *_timeArrayOfReqTimes;
    NSMutableArray *_arrayOfRepImages;
    NSArray *_cacheKeys;
    NSMutableArray *_newCacheKeys;
    NSMutableArray *_newCacheKeysSharpness;
    NSArray *_sliderSettings;
    NSString *_outputCacheString;
    struct HFVPA_NR_InstanceCreateParams_BM3D _createParamsNR;
    struct HFVPA_NR_UserConfigParams_BM3D _userParamsNR;
    unsigned int _vpaPixelFormat;
    unsigned int _vpaBitDepth;
    FFImageAbsoluteOutputFormat *_vpaInOutFormat;
    FFImageAbsoluteOutputFormat *_preserveInOutFormat;
    BOOL _isInterlaced;
    int _requestedField;
    int _appleVPAinstanceToUseForProcessing;
    BOOL _isStill;
    BOOL _isTopFieldFirst;
    BOOL _movingSliders;
    BOOL _denoise360Media;
    BOOL _outputCacheHit;
    unsigned int _mustPreserveFlags;
    int _cameraMode;
    long long _framesBefore;
    long long _framesAfter;
    long long _requestedImgArrayIndex;
    FFImage *_flattenResult;
    FFImage *_flatPreserved;
    FFStreamVideo *_inputStream;
    FFSource *_observedSource;
    FFSVContext *_context;
    FFSchedInfo *_schedInfo;
    PCMatrix44Double *_downstreamPT;
    PCMatrix44Double *_inputImagePT;
    PCMatrix44Double *_inputImagePTField2;
    FFPixelFormat *_inputImagePxFormat;
    struct CGRect _imageSpaceBounds;
    struct CGRect _imageSpaceBoundsField2;
    struct CGRect _expectedRect;
    int _maxPrioritySeen;
    struct FFThread *_threadToBoost;
    NSMutableArray *_arrayOfFlattenedBufs;
    FFScheduleToken *_inputsToken;
    _Atomic _Bool _hasBeenHinted;
    BOOL _autoHinted;
    BOOL _hasBeenImaged;
    BOOL _libraryIsClosing;
    NSCondition *_cond;
    int _state;
    NSError *_noiseReductionError;
    FFGraphBuildInformation *_buildInfo;
    NSArray *_expectedMD5s;
}

+ (CDStruct_d20431f8)getCurrentNRStats;
+ (void)waitForPendingNoiseReductionsForLibrary:(id)arg1;
+ (void)enableNoiseReductionProcessing:(BOOL)arg1 forLibrary:(id)arg2;
+ (id)sharedCacheNR;
+ (id)newNoiseReductionTokenBySchedulingOrCacheLookup:(id)arg1 key:(CDStruct_bdcb2b0d)arg2 noiseReductionObjectBelongsToLibrary:(BOOL)arg3 library:(id)arg4 time:(CDStruct_1b6d18a9)arg5 duration:(CDStruct_1b6d18a9)arg6 context:(id)arg7 schedInfo:(id)arg8 downstreamPT:(id)arg9 isScheduling:(BOOL)arg10 offset:(CDStruct_1b6d18a9)arg11 withSliderSettings:(id)arg12 isStill:(BOOL)arg13 fieldOrder:(int)arg14 denoise360Media:(BOOL)arg15 frameDuration:(CDStruct_1b6d18a9)arg16 sampleDuration:(CDStruct_1b6d18a9)arg17 effectSourceToObserve:(id)arg18 abortIfOutputCacheMiss:(BOOL)arg19 effectStreamVideoProps:(id)arg20;
+ (void)initialize;
- (id)description;
- (_Bool)hiPriority;
- (void)performWaitForMode:(int)arg1;
- (_Bool)needsWaitForMode:(int)arg1;
- (void)processForMode:(int)arg1;
- (_Bool)readyToProcessForMode:(int)arg1;
- (void)markForLibraryIsClosing;
- (_Bool)tokenIsCompleteOrCanceled;
- (id)_getFlatPreservedDataNow:(id)arg1;
- (id)_getFlatImageNow;
- (void)_prepFlatImageNow;
- (HGRef_265f9e4c)newRearranged360OutputImageAfterDenoise:(id)arg1 retPF:(id *)arg2 retCS:(struct CGColorSpace **)arg3;
- (HGRef_265f9e4c)newRearranged360OutputImage_StereoOverUnder:(id)arg1 retPF:(id *)arg2 retCS:(struct CGColorSpace **)arg3;
- (HGRef_265f9e4c)newRearranged360OutputImage_mono:(id)arg1 retPF:(id *)arg2 retCS:(struct CGColorSpace **)arg3;
- (int)denoiseSequentialMode:(char *)arg1 inputRowBytes:(long long)arg2 outputBaseAddress:(char *)arg3 outputRowBytes:(long long)arg4 filterParams:(struct HFVPA_NR_ProcessFrameParams_BM3D)arg5;
- (int)denoiseRandomMode:(id)arg1 inputRowBytes:(long long)arg2 outputBaseAddress:(char *)arg3 outputRowBytes:(long long)arg4 filterParams:(struct HFVPA_NR_ProcessFrameParams_BM3D)arg5;
- (id)newStoredDenoisedOutputBufferInCache:(id)arg1 outputImageCache:(id)arg2 outputImageKeyString:(id)arg3 originalAlpha:(id)arg4;
- (id)newOutputCVBufferFromAppleVPA:(id)arg1 denoiseMode:(int)arg2;
- (void)_storeDataFromNoiseReductionOutput:(id)arg1;
- (id)newDenoisedResult:(id)arg1;
- (id)newOutputImageFromCache:(id)arg1;
- (void)setupInputsToAppleVPA:(long long)arg1 height:(long long)arg2;
- (void)_dumpFFPixelBuffer:(id)arg1;
- (id)_bitmapImageRep:(id)arg1;
- (id)newArrayOfFlattenedPxBuffers:(CDStruct_f51ed29d *)arg1;
- (HGRef_265f9e4c)newRearranged360InputImage_mono:(id)arg1 pxNewBounds:(struct CGRect *)arg2;
- (HGRef_265f9e4c)newRearranged360InputImage_StereoOverUnder:(id)arg1 pxNewBounds:(struct CGRect *)arg2;
- (HGRef_265f9e4c)newRearranged360InputImageToDenoise:(id)arg1 pxNewBounds:(struct CGRect *)arg2 justBoundsNoGraph:(_Bool)arg3;
- (id)copyNoiseReductionImageWithBuildInfo:(id)arg1;
- (id)_newRepresentationalImage;
- (void)_ensureUnderlyingImages:(id)arg1;
- (id)_copyLibraryLockForProvider:(id)arg1;
- (id)newConformedImageToInputStreamSize:(id)arg1 expectedRect:(struct CGRect)arg2 streamPixelTransform:(id)arg3 workingSpace:(int)arg4;
- (BOOL)needCompositeBackground:(struct CGRect)arg1 expectedRect:(struct CGRect)arg2;
- (struct CGRect)appleVPAToOriginal_360Bounds:(struct CGRect)arg1;
- (struct CGRect)originalToAppleVPA_360Bounds:(struct CGRect)arg1;
- (HGRef_265f9e4c)newReOrientedNodeFor360Denoise:(HGRef_265f9e4c)arg1 pxSPaceBounds:(struct CGRect)arg2;
- (void)_assertInputSourcesScheduled;
- (void)_scheduleInputSources:(id)arg1;
- (void)updatePrioritySeenNR:(int)arg1;
- (_Bool)hintWillImageSoon;
- (id)copyErrorInfoStoppingAfterFirstError:(BOOL)arg1;
- (_Bool)areStatusFlagsClear:(unsigned int)arg1;
- (_Bool)waitForFinalStateBeforeTimeout:(id)arg1;
- (_Bool)waitForStatusFlagsToClear:(unsigned int)arg1 beforeDate:(id)arg2;
- (unsigned int)scheduleStatusInformation;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)_removeEffectSourceChangedNotificationAlreadyHoldingLock:(_Bool)arg1;
- (void)_installEffectSourceChangedNotification:(id)arg1;
- (void)effectSourceChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithStream:(id)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 offset:(CDStruct_1b6d18a9)arg7 withSliderSettings:(id)arg8 isStill:(BOOL)arg9 fieldOrder:(int)arg10 denoise360Media:(BOOL)arg11 frameDuration:(CDStruct_1b6d18a9)arg12 sampleDuration:(CDStruct_1b6d18a9)arg13 effectSourceToObserve:(id)arg14 abortIfOutputCacheMiss:(BOOL)arg15 effectStreamVideoProps:(id)arg16;
- (id)getOutputCacheKeyString:(id)arg1;
- (id)newInputCacheKeysForTimeArrayWithSharpness;
- (id)newInputCacheKeysForTimeArrayWithoutSharpness:(int)arg1 height:(int)arg2;
- (id)newCacheKeysForRequestedTimes:(id)arg1;
- (id)newArrayOfMD5OsForRequestedTimesWithRetInfo:(struct FFFDenoiseInputTokenInfo *)arg1;
- (id)newImageTimeArray:(CDStruct_1b6d18a9)arg1 inputStream:(id)arg2 samplesBefore:(int)arg3 samplesAfter:(int)arg4 frameDuration:(CDStruct_1b6d18a9)arg5 sampleDuration:(CDStruct_1b6d18a9)arg6;
- (int)_internalGetStateWithLock;
- (void)_setError:(int)arg1 info:(id)arg2 shouldUncache:(_Bool)arg3 uncacheReason:(const char *)arg4 alreadyHoldingLock:(_Bool)arg5;
- (void)_setError:(int)arg1 info:(id)arg2 alreadyHoldingLock:(_Bool)arg3;
- (void)_setError:(id)arg1 alreadyHoldingLock:(_Bool)arg2 alreadyCheckedState:(_Bool)arg3;
- (void)_setError:(id)arg1 alreadyHoldingLock:(_Bool)arg2;
- (void)_removeSelfFromNRCache:(const char *)arg1;

@end

