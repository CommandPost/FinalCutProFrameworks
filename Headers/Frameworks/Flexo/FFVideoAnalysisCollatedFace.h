//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFVideoAnalysisCollatedItem.h>

__attribute__((visibility("hidden")))
@interface FFVideoAnalysisCollatedFace : FFVideoAnalysisCollatedItem
{
    double _angle;
    double _junkiness;
}

- (id)description;
- (void)mergeWithItem:(id)arg1;
- (double)importanceScore;
- (struct CGRect)salientFaceBoundsInTimeRange:(CDStruct_e83c9415)arg1 salientTimeRange:(CDStruct_e83c9415 *)arg2 motion:(double *)arg3 angle:(double *)arg4 junkiness:(double *)arg5;
- (id)newCollatedFrameForTimeRange:(CDStruct_e83c9415)arg1 boundingBox:(struct CGRect)arg2 motion:(double)arg3;
- (id)sceneProperties;
- (float)similarityScore:(id)arg1;
- (double)junkinessForTimeRange:(CDStruct_e83c9415)arg1;
- (double)angleForTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) double junkiness; // @dynamic junkiness;
@property(readonly, nonatomic) double angle; // @dynamic angle;
- (id)initWithObservation:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 sampleDuration:(CDStruct_1b6d18a9)arg3 framesInterval:(int)arg4;

@end

