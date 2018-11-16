//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFDataListLaneNodeCache;

@interface FFDataListLanesBuilder : NSObject
{
    id <FFStorylineLane> _captionsTopLevel;
    FFDataListLaneNodeCache *_laneNodeCache;
    FFDataListLaneNodeCache *_proxyLaneNodeCache;
}

@property(retain, nonatomic) FFDataListLaneNodeCache *proxyLaneNodeCache; // @synthesize proxyLaneNodeCache=_proxyLaneNodeCache;
@property(retain, nonatomic) FFDataListLaneNodeCache *laneNodeCache; // @synthesize laneNodeCache=_laneNodeCache;
- (void)_configureAllLaneNodesWithRootNode:(id)arg1 nodeChildren:(id)arg2 storyPresentation:(id)arg3 captionsInitiallyExpanded:(id)arg4;
- (id)_recursivelyBuildNodesForLanes:(id)arg1 withParentNode:(id)arg2 storyPresentation:(id)arg3 depth:(unsigned long long)arg4;
- (id)_rebuildChildrenWithRootLaneNode:(id)arg1 withTopLevelLanes:(id)arg2 filter:(int)arg3 storyPresentation:(id)arg4;
- (id)_rebuildCaptionsWithRootLaneNode:(id)arg1 withTopLevelLanes:(id)arg2 storyPresentation:(id)arg3;
- (id)_rebuildRootLaneNode:(id)arg1 withTopLevelLanes:(id)arg2 storyPresentation:(id)arg3;
- (id)_findRootLaneNode:(id)arg1;
- (id)_rebuildRootLaneNodeWithStoryPresentation:(id)arg1 captionsInitiallyExpanded:(id)arg2;
- (id)rebuildWithStoryPresentation:(id)arg1 captionsInitiallyExpanded:(id)arg2;
- (void)dealloc;
- (id)init;

@end

