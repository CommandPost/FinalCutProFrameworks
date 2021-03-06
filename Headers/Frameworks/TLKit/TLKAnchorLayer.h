//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class TLKAnchorPart, TLKItemLayoutInfo;
@protocol TLKTimelineItem;

@interface TLKAnchorLayer : CALayer
{
    int _itemType;
    int _aVContainmentType;
    TLKItemLayoutInfo *_item;
    id <TLKTimelineItem> _representedObject;
    TLKAnchorPart *_anchorBody;
    TLKAnchorPart *_anchorHead;
    TLKAnchorPart *_anchorTail;
}

@property(nonatomic) int aVContainmentType; // @synthesize aVContainmentType=_aVContainmentType;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) TLKAnchorPart *anchorTail; // @synthesize anchorTail=_anchorTail;
@property(retain, nonatomic) TLKAnchorPart *anchorHead; // @synthesize anchorHead=_anchorHead;
@property(retain, nonatomic) TLKAnchorPart *anchorBody; // @synthesize anchorBody=_anchorBody;
@property(retain, nonatomic) id <TLKTimelineItem> representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) TLKItemLayoutInfo *item; // @synthesize item=_item;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setDelegate:(id)arg1;
- (void)_removeAttachedAnchors;
- (void)invalidate;
- (void)makeVisible:(BOOL)arg1;
- (void)updateAppearance:(unsigned long long)arg1;
- (void)updateAppearance;
- (void)reflectChangedLayout;
- (void)_loadAnchorPartLayersIfNeeded;
- (id)timelineView;
- (void)dealloc;
- (id)init;

@end

