//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAnchoredMarker.h>

#import "TLKPosterFrameInfoProtocol.h"
#import "TLKTimelineMarkerItem.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFAnchoredTimeMarker : FFAnchoredMarker <TLKPosterFrameInfoProtocol, TLKTimelineMarkerItem>
{
    BOOL _isTodo;
    BOOL _isCompleted;
    BOOL _isChapter;
    BOOL _isMoment;
    CDStruct_1b6d18a9 _posterOffset;
    BOOL _isSelected;
    BOOL _isHighlighted;
    BOOL _isHidden;
    BOOL _isActive;
    BOOL _displayNameIsDefault;
}

+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
@property(nonatomic) BOOL displayNameIsDefault; // @synthesize displayNameIsDefault=_displayNameIsDefault;
@property(nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) BOOL isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) CDStruct_1b6d18a9 posterOffset; // @synthesize posterOffset=_posterOffset;
@property(nonatomic) BOOL isMoment; // @synthesize isMoment=_isMoment;
@property(nonatomic) BOOL isChapter; // @synthesize isChapter=_isChapter;
@property(nonatomic) BOOL isCompleted; // @synthesize isCompleted=_isCompleted;
@property(nonatomic) BOOL isTodo; // @synthesize isTodo=_isTodo;
@property(readonly) CDStruct_1b6d18a9 timelineMarkerPosterOffset;
@property(readonly) int timelineMarkerType;
@property(readonly) id timelineContainer;
@property(readonly) int timelineItemType;
@property(readonly) id <TLKTimelineItem> transitionTimelineItemNext;
@property(readonly) id <TLKTimelineItem> transitionTimelineItemPrevious;
@property(readonly) id anchoredToTimelineItem;
- (long long)timelineVerticalIndex;
@property(readonly) CDStruct_1b6d18a9 timelineParentAnchorOffset;
@property(readonly) CDStruct_1b6d18a9 timelineAnchorOffset;
- (struct CGSize)aspectRatio;
- (BOOL)defaultPosition;
- (id)label;
- (CDStruct_1b6d18a9)posterTime;
- (CDStruct_1b6d18a9)posterTimeInContainerSpace:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 defaultPosterOffset;
- (void)clipPosterOffset;
@property(readonly, nonatomic) BOOL canBeChapter;
- (CDStruct_1b6d18a9)timeClippedToContainerRange:(CDStruct_1b6d18a9)arg1;
- (BOOL)doesContainerRangeInclude:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)_trueContainerRange;
- (id)trackType;
- (id)type;
- (BOOL)isTimeMarker;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

