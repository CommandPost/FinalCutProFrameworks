//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol FFDataListLanesDataSource <NSObject>
@property(readonly, nonatomic) id <FFDataListLaneProtocol> timelineIndexRootLane;
@property(nonatomic) BOOL pause;
- (NSArray *)timelineIndexVideoLanes:(id)arg1;
- (void)timelineIndex:(id)arg1 retrieveToggleLanes:(id *)arg2 forTargetLane:(id <FFDataListLaneProtocol>)arg3 includeChildLanes:(BOOL)arg4;
- (void)timelineIndex:(id)arg1 retrieveSoloLanes:(id *)arg2 otherLanes:(id *)arg3 forTargetLane:(id <FFDataListLaneProtocol>)arg4 includeChildLanes:(BOOL)arg5;
- (BOOL)inSimpleClipModeForTimelineIndex:(id)arg1;
- (NSString *)durationOfHighlightedForTimelineIndex:(id)arg1;
- (unsigned long long)numberOfRoleGroupsForTimelineIndex:(id)arg1;
- (void)timelineIndex:(id)arg1 focusChangedToLane:(id <FFDataListLaneProtocol>)arg2;
- (void)timelineIndex:(id)arg1 setValue:(BOOL)arg2 ofState:(int)arg3 forLanes:(NSArray *)arg4 extendFocus:(BOOL)arg5;
- (NSArray *)timelineIndex:(id)arg1 fetchState:(int)arg2 forLanes:(NSArray *)arg3;
- (BOOL)timelineIndex:(id)arg1 dragLane:(id <FFDataListLaneProtocol>)arg2 proposedLane:(id <FFDataListLaneProtocol>)arg3 proposedIndex:(long long)arg4 retargetInfo:(struct FFDataListLanesDropRetargetingInfo *)arg5 validateOnly:(BOOL)arg6;
@end
