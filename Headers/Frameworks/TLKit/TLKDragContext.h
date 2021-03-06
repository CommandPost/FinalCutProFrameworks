//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TLKContainerInfo, TLKItemComponentInfo, TLKItemLaneInfo, TLKTimelineView;

@interface TLKDragContext : NSObject
{
    TLKTimelineView *_timelineView;
    TLKContainerInfo *_container;
    long long _layoutRegion;
    TLKItemLaneInfo *_lane;
    long long _dropPlacementMode;
    TLKItemComponentInfo *_referenceItemComponent;
    NSArray *_draggedObjects;
    id _clickedObject;
    struct CGPoint _clickedPosition;
    struct CGPoint _pointInView;
    CDStruct_1b6d18a9 _insertionTime;
}

@property(readonly) struct CGPoint pointInView; // @synthesize pointInView=_pointInView;
@property struct CGPoint clickedPosition; // @synthesize clickedPosition=_clickedPosition;
@property(retain) id clickedObject; // @synthesize clickedObject=_clickedObject;
@property(copy) NSArray *draggedObjects; // @synthesize draggedObjects=_draggedObjects;
@property(retain) TLKItemComponentInfo *referenceItemComponent; // @synthesize referenceItemComponent=_referenceItemComponent;
@property long long dropPlacementMode; // @synthesize dropPlacementMode=_dropPlacementMode;
@property(retain) TLKItemLaneInfo *lane; // @synthesize lane=_lane;
@property long long layoutRegion; // @synthesize layoutRegion=_layoutRegion;
@property(retain) TLKContainerInfo *container; // @synthesize container=_container;
@property CDStruct_1b6d18a9 insertionTime; // @synthesize insertionTime=_insertionTime;
@property(retain) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (void)updateWithPoint:(struct CGPoint)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithTimelineView:(id)arg1;

@end

