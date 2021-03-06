//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TLKTimelineView;
@protocol TLKTimelineViewDelegate;

@interface TLKDelegateProxy : NSObject
{
    struct {
        unsigned int willBeginReloadOperation:1;
        unsigned int heightForItemComponent:1;
        unsigned int layerForContainer:1;
        unsigned int layerClassForItemComponent:1;
        unsigned int layerForLane:1;
        unsigned int didUpdateItemLayer:1;
        unsigned int timecodeAtTime:1;
        unsigned int marqueeWillSelectObjects:1;
        unsigned int layoutSublayersForItem:1;
        unsigned int layoutSublayersOfVideoLayer:1;
        unsigned int layoutSublayersOfAudioLayer:1;
        unsigned int badgeLayersForItem:1;
        unsigned int RESERVED:20;
    } _respondsToSelector;
    TLKTimelineView *_timelineView;
    id <TLKTimelineViewDelegate> _delegate;
}

@property(nonatomic) id <TLKTimelineViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
- (id)badgeLayersForItem:(id)arg1 currentBadges:(id)arg2;
- (void)layoutSublayersOfAudioLayer:(id)arg1 forItem:(id)arg2;
- (void)layoutSublayersOfVideoLayer:(id)arg1 forItem:(id)arg2;
- (void)layoutSublayers:(id)arg1 forItem:(id)arg2 needsLayout:(BOOL)arg3;
- (void)marqueeWillSelectObjects:(id)arg1;
- (id)timecodeAtTime:(CDStruct_1b6d18a9)arg1;
- (void)didUpdateItemLayer:(id)arg1;
- (id)layerForLaneFragment:(id)arg1;
- (Class)layerClassForItemComponentFragment:(id)arg1;
- (id)layerForLayoutContext:(id)arg1;
- (double)heightForItemComponent:(id)arg1 proposedHeight:(double)arg2;
- (void)willBeginReloadOperation:(id)arg1;
- (id)initWithTimelineView:(id)arg1;

@end

