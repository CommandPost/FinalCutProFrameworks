//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class FFRoleColorScheme, NSArray, NSSet, NSString;
@protocol FFOrganizedLaneObserving;

@protocol FFOrganizedLaneDataSource <NSObject>
- (id)findLaneByID:(NSString *)arg1;
- (void)removeObserver:(id <FFOrganizedLaneObserving>)arg1;
- (void)addObserver:(id <FFOrganizedLaneObserving>)arg1;
- (BOOL)moveChildLanes:(NSArray *)arg1 toIndex:(unsigned long long)arg2 forOrganizedLane:(id)arg3;
- (BOOL)canMoveChildLanes:(NSArray *)arg1 toIndex:(unsigned long long)arg2 forOrganizedLane:(id)arg3;
- (BOOL)canMoveOrganizedLane:(id)arg1;
- (FFRoleColorScheme *)colorSchemeForOrganizedLane:(id)arg1;
- (NSSet *)itemsForOrganizedLane:(id)arg1;
- (NSString *)uidForOrganizedLane:(id)arg1;
- (BOOL)pinnedStateForOrganizedLane:(id)arg1;
- (void)setHidden:(BOOL)arg1 forOrganizedLane:(id)arg2;
- (BOOL)hiddenForOrganizedLane:(id)arg1;
- (void)setShowsComponents:(BOOL)arg1 forOrganizedLane:(id)arg2;
- (BOOL)showsComponentsForOrganizedLane:(id)arg1;
- (BOOL)canShowComponentsForOrganizedLane:(id)arg1;
- (void)setArrangedState:(BOOL)arg1 forOrganizedLane:(id)arg2;
- (BOOL)arrangedStateForOrganizedLane:(id)arg1;
- (BOOL)canArrangeOrganizedLane:(id)arg1;
- (BOOL)enabledStateForOrganizedLane:(id)arg1;
- (BOOL)canEnableOrganizedLane:(id)arg1;
- (void)setHighlightedState:(BOOL)arg1 forOrganizedLane:(id)arg2;
- (BOOL)highlightedStateForOrganizedLane:(id)arg1;
- (void)setFocusedState:(int)arg1 forOrganizedLane:(id)arg2;
- (int)focusedStateForOrganizedLane:(id)arg1;
- (BOOL)canFocusOrganizedLane:(id)arg1;
- (int)typeForOrganizedLane:(id)arg1;
- (NSArray *)childLanesForOrganizedLane:(id)arg1;
- (id)parentLaneForOrganizedLane:(id)arg1;
- (id)rootLane;
- (void)endTransaction;
- (void)beginTransaction;
@end

