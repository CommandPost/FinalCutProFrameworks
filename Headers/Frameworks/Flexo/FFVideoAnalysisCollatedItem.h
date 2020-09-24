//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFVideoAnalysisCollatedItem : NSObject
{
    int _itemId;
    float _confidence;
    struct CGRect _boundingBox;
    double _motion;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _durationTime;
    CDStruct_1b6d18a9 _sampleDuration;
    int _framesInterval;
    NSMutableArray *_collatedFrames;
    void *_ci_priv;
}

@property(readonly, nonatomic) int framesInterval; // @synthesize framesInterval=_framesInterval;
@property(readonly, nonatomic) CDStruct_1b6d18a9 sampleDuration; // @synthesize sampleDuration=_sampleDuration;
@property(nonatomic) CDStruct_1b6d18a9 durationTime; // @synthesize durationTime=_durationTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(nonatomic) int itemId; // @synthesize itemId=_itemId;
- (id)description;
- (const vector_885b733d *)_boxes;
- (void)_pushBox:(const struct box_t *)arg1;
- (struct CGRect)salientBoundsInTimeRange:(CDStruct_e83c9415)arg1 salientTimeRange:(CDStruct_e83c9415 *)arg2 motion:(double *)arg3;
- (double)importanceScore;
- (void)mergeWithItem:(id)arg1;
- (id)_salientItemInTimeRange:(CDStruct_e83c9415)arg1;
- (id)sceneProperties;
@property(readonly, nonatomic) NSArray *collatedFrames; // @dynamic collatedFrames;
- (id)newCollatedFrameForTimeRange:(CDStruct_e83c9415)arg1 boundingBox:(struct CGRect)arg2 motion:(double)arg3;
- (void)_calcKeyframes;
- (double)motionForTimeRange:(CDStruct_e83c9415)arg1;
- (void)_motions:(vector_b67dfe3a *)arg1 inTimeRange:(CDStruct_e83c9415)arg2;
- (struct CGRect)centroidBoxForTimeRange:(CDStruct_e83c9415)arg1;
- (struct CGPoint)centroidForTimeRange:(CDStruct_e83c9415)arg1;
- (vector_885b733d)_boxesInTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)timeRange;
@property(readonly, nonatomic) double motion; // @dynamic motion;
@property(readonly, nonatomic) struct CGRect boundingBox; // @dynamic boundingBox;
- (void)dealloc;
- (id)initWithObservation:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 sampleDuration:(CDStruct_1b6d18a9)arg3 framesInterval:(int)arg4;

@end
