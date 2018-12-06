//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredObject.h>

#import "TLKTimelineItem.h"

@class NSString;

@interface FFAnchoredObject (TLKTimelineItem) <TLKTimelineItem>
@property(readonly, copy) NSString *timelineDisplayName;
@property(readonly) long long timelineVerticalIndex;
@property(readonly) id <TLKTimelineItem> anchoredToTimelineItem;
- (id)anchoredTimelineItems;
@property(readonly) CDStruct_1b6d18a9 timelineAnchorOffset;
@property(readonly) CDStruct_1b6d18a9 timelineParentAnchorOffset;
@property(readonly) struct CGSize aspectRatio;
- (BOOL)_isPlaceholder:(id)arg1;
@property(readonly) int timelineItemType;
@property(readonly) int timelineAVContainmentType;
@property(readonly) id <TLKTimelineItem> timelineContainer;
@end

