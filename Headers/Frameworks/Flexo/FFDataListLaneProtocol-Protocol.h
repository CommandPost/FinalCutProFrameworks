//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFRoleColorScheme, NSArray;

@protocol FFDataListLaneProtocol <NSObject>
@property(nonatomic) BOOL roleGroupHidesSingleRole;
@property(nonatomic) int nodeClassification;
@property(retain, nonatomic) FFRoleColorScheme *nodeColorScheme;
@property(nonatomic) BOOL nodeWasArrangedBeforeShowingComponents;
@property(nonatomic) BOOL nodeShowsComponents;
@property(nonatomic) long long nodeIsEnabled;
@property(nonatomic) BOOL nodeIsHighlighted;
@property(nonatomic) BOOL nodeIsFocused;
@property(nonatomic) long long nodeIsArranged;
@property(nonatomic) BOOL nodeAllowsShowsComponents;
@property(nonatomic) BOOL nodeAllowsEnabled;
@property(nonatomic) BOOL nodeAllowsFocused;
@property(nonatomic) BOOL nodeAllowsArranged;
@property(readonly, nonatomic) unsigned long long nestingLevel;
@property(readonly, nonatomic) BOOL draggable;
@property(readonly, retain, nonatomic) id representedObject;
@property(readonly, nonatomic) NSArray *childLanes;
@property(readonly, nonatomic) id <FFDataListLaneProtocol> parentLane;
- (double)cellHeight;
@end
