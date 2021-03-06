//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIO/MIOObject.h>

@class MIOInputReel, NSMutableArray;

@interface MIOInputSegment : MIOObject
{
    NSMutableArray *mSubSegments;
    unsigned int mCurrentSubSegment;
    MIOInputReel *mParentReel;
}

+ (id)segment;
- (void)removeFromFlatSubSegmentsArray;
- (void)addToFlatSubSegmentsArray;
- (void)subSegmentErrorChanged:(int)arg1;
- (void)subSegmentStatusChanged:(int)arg1;
- (void)updateReelIndex:(unsigned int)arg1;
- (id)parentReel;
- (void)setParentReel:(id)arg1;
- (id)subSegments;
- (id)currentSubSegment;
- (void)setCurrentSubSegment:(unsigned int)arg1;
- (BOOL)isLastInReel;
- (unsigned long long)count;
- (id)subSegmentAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfSubSegment:(id)arg1;
- (unsigned int)index;
- (void)removeLastSubSegment;
- (void)removeSubSegment:(id)arg1;
- (void)addSubSegment:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

