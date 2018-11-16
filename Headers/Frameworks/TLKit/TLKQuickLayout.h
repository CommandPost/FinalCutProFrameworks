//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLKItemLayoutEngine.h"

@class NSMutableSet, NSString, TLKTimelineView;

@interface TLKQuickLayout : NSObject <TLKItemLayoutEngine>
{
    BOOL _updateItemContents;
    BOOL _resolveCollisions;
    TLKTimelineView *_timelineView;
    double _xMovement;
    NSMutableSet *_collidedItems;
}

+ (id)quickLayoutWithTimelineView:(id)arg1;
@property(retain) NSMutableSet *collidedItems; // @synthesize collidedItems=_collidedItems;
@property BOOL resolveCollisions; // @synthesize resolveCollisions=_resolveCollisions;
@property BOOL updateItemContents; // @synthesize updateItemContents=_updateItemContents;
@property double xMovement; // @synthesize xMovement=_xMovement;
@property(retain) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void)enumerateExposedRectsBetweenRect:(struct CGRect)arg1 newRect:(struct CGRect)arg2 trimSide:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateItemsInContainer:(id)arg1 aboveSpine:(BOOL)arg2 range:(struct _TLKRange)arg3 block:(CDUnknownBlockType)arg4;
- (void)enumerateSiblingsFor:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)rippleAnchorItemsForItem:(id)arg1 oldFrame:(struct CGRect)arg2 newFrame:(struct CGRect)arg3 trimmedItem:(id)arg4;
- (void)rippleDownstreamItemsForItemComponent:(id)arg1 oldFrame:(struct CGRect)arg2 newFrame:(struct CGRect)arg3;
- (void)scrollTimelineForItemComponent:(id)arg1 newTimeRange:(CDStruct_e83c9415)arg2 trimSide:(long long)arg3;
- (BOOL)itemComponentAtStartMediaLimit:(id)arg1;
- (void)resolveCollisionsWithStaticItems:(id)arg1 trimSide:(long long)arg2 oldFrame:(struct CGRect)arg3 newFrame:(struct CGRect)arg4;
- (void)resolveCollisionsWithItemComponent:(id)arg1 trimSide:(long long)arg2 oldFrame:(struct CGRect)arg3 newFrame:(struct CGRect)arg4;
- (void)updateContentsOfItem:(id)arg1;
- (double)transitionOverlapForItemComponent:(id)arg1;
- (void)resetLayoutForModifiedItems;
- (void)updateItemComponent:(id)arg1 newTimeRange:(CDStruct_e83c9415)arg2 trimSide:(long long)arg3;
- (void)updateTransitionItemComponent:(id)arg1 newTimeRange:(CDStruct_e83c9415)arg2 trimSide:(long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

