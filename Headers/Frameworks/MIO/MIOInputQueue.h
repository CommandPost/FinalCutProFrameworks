//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIO/MIOObject.h>

@class MIOTimecode, NSMutableArray;

@interface MIOInputQueue : MIOObject
{
    NSMutableArray *mReels;
    unsigned int mCurrentReelIndex;
    MIOTimecode *mDuration;
    NSMutableArray *_flatSubSegmentsArray;
}

+ (id)queue;
+ (id)keyPathsForValuesAffectingSubSegments;
- (id)currentReel;
- (unsigned int)currentReelIndex;
- (void)setCurrentReelIndex:(unsigned int)arg1;
- (id)subSegments;
- (unsigned long long)count;
- (unsigned int)reelCount;
- (id)reelAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfReel:(id)arg1;
- (id)reels;
- (void)replaceObjectInReelsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)replaceReelsAtIndexes:(id)arg1 withReels:(id)arg2;
- (void)removeObjectFromReelsAtIndex:(unsigned int)arg1;
- (void)removeReelsAtIndexes:(id)arg1;
- (void)insertReels:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inReelsAtIndex:(unsigned int)arg2;
- (unsigned int)countOfReels;
- (void)setReels:(id)arg1;
- (void)removeSubSegmentFromFlatSubSegmentsArray:(id)arg1;
- (void)removeAllSubSegments;
- (void)removeSubSegment:(id)arg1;
- (void)removeSegment:(id)arg1;
- (void)removeReel:(id)arg1;
- (void)addSubSegmentToFlatSubSegmentsArray:(id)arg1;
- (id)insertSubSegmentForRADClip:(id)arg1 atIndex:(unsigned int)arg2 forBin:(id)arg3;
- (id)addSubSegmentForRADClip:(id)arg1 forBin:(id)arg2;
- (void)addSubSegment:(id)arg1 withCorrespondingClip:(id)arg2 reelName:(id)arg3;
- (void)addReelForRADVolume:(id)arg1;
- (void)addReel:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addReel:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

