//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFRoleColorScheme, NSArray, NSIndexPath, NSSet, NSString;

@protocol FFStorylineLane <NSObject>
@property(copy, nonatomic) NSSet *storyItems;
@property(nonatomic) id <FFStorylineLane> parentStoryLane;
@property(copy, nonatomic) NSArray *childStoryLanes;
@property(readonly, nonatomic) NSIndexPath *indexPath;
@property(readonly, nonatomic) unsigned long long nestingLevel;
@property(readonly, nonatomic, getter=isHidden) BOOL hidden;
@property(retain, nonatomic) FFRoleColorScheme *colorScheme;
@property(readonly, nonatomic) BOOL allowsShowsComponents;
@property(readonly, nonatomic) BOOL hidable;
@property(readonly, nonatomic) BOOL empty;
@property(readonly, nonatomic) NSString *identifier;
@property(nonatomic) BOOL isPrimaryLane;
@property(nonatomic) BOOL showsComponents;
@property(nonatomic) BOOL highlighted;
@property(nonatomic) int focusMode;
@property(nonatomic) BOOL enabled;
@property(nonatomic) BOOL arranged;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) int laneType;
- (void)removeStoryItemsObject:(id <FFStorylineItem>)arg1;
- (void)addStoryItemsObject:(id <FFStorylineItem>)arg1;
- (id <FFStorylineLane>)childStoryLaneWithName:(NSString *)arg1;
- (void)enumerateStorylineItemsRecursivelyUsingBlock:(void (^)(id <FFStorylineItem>, char *))arg1;
- (void)enumerateStorylineLanesRecursivelyUsingBlock:(void (^)(id <FFStorylineLane>, char *))arg1;
- (void)addChildStoryLanesObject:(id <FFStorylineLane>)arg1;
- (void)removeChildStoryLanesObject:(id <FFStorylineLane>)arg1;
- (void)insertObject:(id <FFStorylineLane>)arg1 inChildStoryLanesAtIndex:(unsigned long long)arg2;
@end
