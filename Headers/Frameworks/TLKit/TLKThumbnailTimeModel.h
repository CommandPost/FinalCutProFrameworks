//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKTimingModel.h>

@interface TLKThumbnailTimeModel : TLKTimingModel
{
    double *_adjustedTimeUnits;
    double *_timescaleSteps;
}

- (double)adjustedTimeUnitsOfLongestSegment;
- (void)reloadWithContainer:(id)arg1 inLayoutDatabase:(id)arg2;
- (void)_calculateItemSpacingBefore:(double *)arg1 spacingAfter:(double *)arg2 spineItems:(id)arg3 inContainer:(id)arg4 layoutDatabase:(id)arg5;
- (void)_calculatePEEditorItemSpacingBefore:(double *)arg1 spacingAfter:(double *)arg2 spineItems:(id)arg3 lastSegmentIndex:(unsigned long long)arg4 withContainerInfo:(id)arg5;
- (double)calculateWidthFromDuration:(CDStruct_1b6d18a9)arg1 forItem:(id)arg2 inContainer:(id)arg3 layoutDatabase:(id)arg4 adjustedTimeUnits:(double *)arg5;
- (double)calculateMinWidthForItem:(id)arg1 layoutDatabase:(id)arg2;
- (void)_loadTimeRanges:(CDStruct_e83c9415 *)arg1 forSpineItems:(id)arg2 inLayoutDatabase:(id)arg3;
- (void)setZoomStep:(long long)arg1;
- (void)setTimeUnitDuration:(CDStruct_1b6d18a9)arg1;
- (long long)closestZoomStep:(CDStruct_1b6d18a9)arg1;
- (int)timeUnits;
- (void)dealloc;
- (id)init;
- (long long)numberZoomSteps;

@end

