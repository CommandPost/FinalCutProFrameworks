//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFDest.h>

@class FFPlayer, FFReducedRateTracker, FFSummaryDescCacher, NSMutableArray, NSObject;
@protocol FFDestVideoDelegate;

__attribute__((visibility("hidden")))
@interface FFDestVideo : FFDest
{
    NSObject<FFDestVideoDelegate> *_delegate;
    FFPlayer *_player;
    CDStruct_1b6d18a9 _sampleDuration;
    CDStruct_1b6d18a9 _frameDuration;
    int _fieldDominance;
    struct CGRect _sequenceBounds;
    FFReducedRateTracker *_rrt;
    BOOL _enableDropReporting;
    struct FFSynchronizable *_dropInfosLock;
    NSMutableArray *_dropInfos;
    FFSummaryDescCacher *_summaryDescCacher;
    BOOL enableDrawAllAngles;
}

+ (BOOL)supportsOSCs;
+ (BOOL)automaticallyNotifiesObserversForEnableDrawAllAngles;
+ (void)initialize;
+ (void)registerForDrawInterlaced:(id)arg1;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (int)drawInterlacedUserPref;
@property(retain) FFReducedRateTracker *reducedRateTracker; // @synthesize reducedRateTracker=_rrt;
@property(readonly) CDStruct_1b6d18a9 frameDuration; // @synthesize frameDuration=_frameDuration;
@property(readonly) CDStruct_1b6d18a9 sampleDuration; // @synthesize sampleDuration=_sampleDuration;
@property BOOL enableDrawAllAngles; // @synthesize enableDrawAllAngles;
- (void)notifyDestOfUIDrawingParameterChange;
- (void)resetDropInfos;
- (id)copyDropInfosByPoppingAndReturnEnableReporting:(char *)arg1;
- (void)recordDropInfo:(id)arg1;
- (BOOL)enableDropReporting;
- (void)notifyDestPlayerChangedRenderLocation:(const struct FxDeviceSet *)arg1;
- (void)setEnableDropReporting:(BOOL)arg1;
- (_Bool)performOverfullRecovery;
- (_Bool)supportsOverfullRecovery;
- (id)copyEstimatedVRAMRequirements:(int)arg1 reqInfoHint:(id)arg2;
- (int)destRecommendedFFSVPriority;
- (_Bool)inefficientFrameDurationWarning:(CDStruct_1b6d18a9)arg1 sampleDuration:(CDStruct_1b6d18a9)arg2;
- (unsigned int)outputMaxLatencyInFrames;
- (id)summaryDescription;
- (id)description;
- (void)setLastHealthMetric:(float)arg1 diskHealth:(float)arg2;
- (void)skippedFrame:(CDStruct_1b6d18a9)arg1 outOfSequence:(BOOL)arg2;
- (_Bool)shouldSkipFrame:(CDStruct_1b6d18a9)arg1 playRate:(double)arg2;
- (void)setNeedsUpdate:(BOOL)arg1;
- (struct CGRect)sequenceBounds;
- (int)drawFieldsInterlaced;
- (const char *)_getFrameQueueStatusString;
- (int)getFrameQueueStatus;
- (void)pushFrame:(id)arg1;
- (void)liveFlushWithRunout:(unsigned int)arg1 playerTime:(CDStruct_1b6d18a9)arg2 rate:(double)arg3;
- (void)flush:(BOOL)arg1;
- (BOOL)internal_wantsDithering:(id)arg1;
- (void)wantsDithering:(id)arg1;
- (void)rangeCheckZebraMode;
- (void)requestedBackground;
- (void)maxSupportedSize;
- (struct CGSize)requestedImageSizeWithFilterQuality:(int *)arg1;
- (void)supportedPixelFormats;
- (void)colorSpace;
- (int)influenceOnExecLocation;
- (void)imageLocation;
- (id)requestedImageInfo;
- (BOOL)drawsInUIWindow;
- (id)newDrawPropertiesForFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)queueDuration;
- (CDStruct_1b6d18a9)frameDurationForMaximumOutputRate;
- (void)setSampleDuration:(CDStruct_1b6d18a9)arg1 fieldDominance:(int)arg2 sequenceBounds:(struct CGRect)arg3 sequenceCameraMode:(int)arg4;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

