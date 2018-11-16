//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIO/MIOObject.h>

@class MIOInputDevice, MIOInputQueue, MIOInputSubSegment, MIORADManager, NSMutableArray, NSString;

@interface MIORADCore : MIOObject
{
    MIOInputDevice *mInputDevice;
    MIOInputQueue *mQueue;
    MIORADManager *mRADManager;
    MIOInputSubSegment *mCurrentIngestSubSegment;
    id mDelegate;
    BOOL mIsIngesting;
    BOOL mIsPaused;
    BOOL mIsTearingDown;
    NSMutableArray *mAutoIngestVolumesInProgress;
    NSString *mDestinationPath;
    id <FFRADAnalyzerControllerDelegate> _dominantMotionTracker;
}

+ (id)core;
+ (id)coreWithPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)metadataKeys;
- (id)metadataKeysForLogging;
- (id)metadataDictionaryWithType:(id)arg1 formatter:(id)arg2 description:(id)arg3;
- (id)extendedMetadataDictionaryWithType:(id)arg1 formatter:(id)arg2 valueTransformer:(id)arg3 description:(id)arg4 editable:(BOOL)arg5;
- (id)metadataDefinitions;
- (void)updateRADMetadataInDictionary:(id)arg1;
@property(retain, nonatomic) MIOInputDevice *inputDevice; // @synthesize inputDevice=mInputDevice;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)addRADClipsToQueue:(id)arg1 destinationObject:(id)arg2 allowDuplicates:(BOOL)arg3;
- (id)addRADClipToQueue:(id)arg1 destinationObject:(id)arg2 allowDuplicates:(BOOL)arg3;
- (void)insertRADClipInQueue:(id)arg1 atIndex:(unsigned int)arg2 destinationObject:(id)arg3;
- (void)removeInTransferSubSegment:(id)arg1;
- (void)emptyQueueExceptSubSegmentInProgress;
- (void)removeSubSegmentWithID:(id)arg1;
- (void)stopIngestAwaitingOtherThreads;
- (void)stopIngest;
- (void)tickleQueue;
- (void)addVolumeToAutoIngestList:(id)arg1;
- (void)prepareInputDeviceForClipType:(int)arg1;
- (void)setDestinationPath:(id)arg1;
- (void)startIngestingSubSegment:(id)arg1;
- (void)pauseIngest;
- (void)resumeIngest;
- (void)ingestShouldPause:(id)arg1;
- (void)ingestShouldResume:(id)arg1;
- (void)segmentIngestDidBegin:(id)arg1;
- (void)segmentIngestDidComplete:(id)arg1;
- (id)dominantMotionTracker;
- (void)setDominantMotionTracker:(id)arg1;
- (BOOL)validPlugin:(id)arg1;
@property BOOL isTearingDown; // @synthesize isTearingDown=mIsTearingDown;
@property BOOL isPaused; // @synthesize isPaused=mIsPaused;
@property BOOL isIngesting; // @synthesize isIngesting=mIsIngesting;
@property(retain) MIOInputSubSegment *currentIngestSubSegment; // @synthesize currentIngestSubSegment=mCurrentIngestSubSegment;
@property MIORADManager *radManager; // @synthesize radManager=mRADManager;
@property(retain) MIOInputQueue *queue; // @synthesize queue=mQueue;

@end

