//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FFOrganizerUtils : NSObject
{
}

+ (id)TemporaryFigTimeRangesCollapseRangeAndObjects:(id)arg1;
+ (_Bool)TemporaryFigTimeMutableRangeAndObjects:(id)arg1 addUnsortedRangeAndObjects:(id)arg2;
+ (CDStruct_1b6d18a9)adjustTime:(CDStruct_1b6d18a9)arg1 ToFrameBoundaryForSequence:(id)arg2;
+ (BOOL)showFilteringUIForSidebarSelection:(id)arg1;
+ (id)titleForSidebarSelection:(id)arg1;
+ (id)componentToRoundedRect:(struct CGRect)arg1 radius:(float)arg2 thickness:(float)arg3;
+ (void)addToPath:(id)arg1 frame:(struct CGRect)arg2 radius:(float)arg3;
+ (BOOL)descendantLayer:(id)arg1 containsPoint:(struct CGPoint)arg2 inSpaceOfLayer:(id)arg3;
+ (void)setClippingForRect:(struct CGRect)arg1 leftEdgeType:(int)arg2 rightEdgeType:(int)arg3 cornerRadius:(double)arg4;
+ (id)clippingPathForRect:(struct CGRect)arg1 leftEdgeType:(int)arg2 rightEdgeType:(int)arg3 cornerRadius:(double)arg4;
+ (void)writeDebugTiffFromCGImageRef:(struct CGImage *)arg1 toFileName:(id)arg2;
+ (void)writeDebugTiffFromNSImage:(id)arg1 toFileName:(id)arg2;
+ (BOOL)objectOfFigTimeRangeAndObject:(id)arg1 isEqualToObjectOfFigTimeRangeAndObject:(id)arg2;
+ (id)rangesFromArray:(id)arg1 withMatchingSequence:(id)arg2;
+ (BOOL)figTimeRangeAndObjectIsProject:(id)arg1;
+ (id)convertFTRO:(id)arg1 forOrganizer:(BOOL)arg2;
+ (id)arrayOfFtrosForExportingFromOrganizer:(id)arg1;
+ (id)ftroForExportingFromOrganizer:(id)arg1;
+ (id)sequenceFromFigTimeRangeAndObject:(id)arg1;
+ (id)sequenceFromFigTimeRangeAndObject:(id)arg1 inflateSequenceIfNecessary:(BOOL)arg2;
+ (id)newFigTimeRangeAndObjectWithRange:(CDStruct_e83c9415)arg1 andSequence:(id)arg2;
+ (BOOL)useDataItemObjectsInFigTimeRangeAndObjects;
+ (CDStruct_e83c9415)removeRoundingFlagFromFigTimeRange:(CDStruct_e83c9415)arg1;
+ (CDStruct_1b6d18a9)removeRoundingFlagFromFigTime:(CDStruct_1b6d18a9)arg1;
+ (CDStruct_e83c9415)constrainRange:(CDStruct_e83c9415)arg1 byFrameBoundaryForSequence:(id)arg2;
+ (void)removeSelectionMarkersFromClip:(id)arg1 atRange:(CDStruct_e83c9415)arg2 onlyRemoveOverlap:(BOOL)arg3;
+ (void)addSelectionMarkerToClip:(id)arg1 atRange:(CDStruct_e83c9415)arg2;
+ (id)selectionMarkerRangeAtTime:(CDStruct_1b6d18a9)arg1 forClip:(id)arg2;
+ (id)regionsToSelectForClip:(id)arg1 afterTime:(CDStruct_1b6d18a9)arg2;
+ (id)regionsToSelectForClip:(id)arg1 beforeTime:(CDStruct_1b6d18a9)arg2;
+ (id)regionsToSelectForClip:(id)arg1;
+ (id)getSelectionMarkersForClip:(id)arg1;
+ (CDStruct_e83c9415)rangeAroundTime:(CDStruct_1b6d18a9)arg1 headDuration:(CDStruct_1b6d18a9)arg2 tailDuration:(CDStruct_1b6d18a9)arg3 boundingRange:(CDStruct_e83c9415)arg4;
+ (id)figTimeRangeAndObjectArrayToMapTable:(id)arg1;
+ (id)mapTableKeyForFigTimeRangeAndObject:(id)arg1;
+ (id)containingRangeForRangeAndObject:(id)arg1 fromRanges:(id)arg2;
+ (id)collapseOrganizerItems:(id)arg1;
+ (id)subtractFigTimeRange:(CDStruct_e83c9415)arg1 fromFigTimeRangeAndObject:(id)arg2;
+ (id)removeRange:(id)arg1 fromArray:(id)arg2 onlyRemoveOverlap:(BOOL)arg3;
+ (id)combineSelectionArray:(id)arg1 withSelectionArray:(id)arg2;
+ (BOOL)figTimeRange:(CDStruct_e83c9415)arg1 containsOrIsEmptyAtTime:(CDStruct_1b6d18a9)arg2;
+ (BOOL)figTimeRange:(CDStruct_e83c9415)arg1 intersectsWithOrIsEmptyLike:(CDStruct_e83c9415)arg2;
+ (BOOL)figTimeRangeObject:(id)arg1 containsFigTimeRangeObject:(id)arg2;
+ (BOOL)figTimeRangeObject:(id)arg1 exactlyEqualsFigTimeRangeObject:(id)arg2;
+ (BOOL)figTimeRangeAndObject:(id)arg1 overlapsFigTimeRangeObjectInArray:(id)arg2;
+ (BOOL)figTimeRangeObject:(id)arg1 intersectsWithOrIsEmptyLike:(id)arg2;

@end

