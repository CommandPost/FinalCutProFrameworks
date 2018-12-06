//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class TLKAnchorLayer, TLKTimelineView;

@interface TLKTimelineLayer : CALayer
{
    id _representedObject;
    TLKAnchorLayer *_anchorLayer;
    struct {
        unsigned int hasDragHandle:1;
        unsigned int selectionMask:8;
        unsigned int sourceSplitEdit:1;
        unsigned int splitEdit:1;
        unsigned int hideUnusedMediaOverlay:1;
        unsigned int RESERVED:20;
    } _tlkItemFlags;
    TLKTimelineView *_timelineView;
}

+ (struct CGRect)frameRectForRect:(struct CGRect)arg1;
+ (struct CGRect)frameForItem:(struct CGRect)arg1 withType:(int)arg2 andContainmentType:(int)arg3;
- (struct CGRect)visibleBoundsOfLayer:(id)arg1 accountingForOverlap:(BOOL)arg2;
- (id)initWithTimelineView:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;
@property(nonatomic) id <TLKTimelineItem> representedObject;
@property(retain, nonatomic) TLKAnchorLayer *anchorLayer;
- (id)anchorLayers;
@property(nonatomic) BOOL splitEdit;
@property(nonatomic) BOOL sourceSplitEdit;
@property(nonatomic) BOOL hideUnusedMediaOverlay;
- (void)invalidate;
@property(nonatomic) unsigned long long selectionMask;
- (void)updateAppearance;
- (id)hitTest:(struct CGPoint)arg1;
- (void)audioWaveFormProportionChanged;
- (id)_briefDescriptionForLayer:(id)arg1;
- (id)_subtreeDescriptionForLayer:(id)arg1 withDepth:(long long)arg2 compact:(BOOL)arg3;
- (id)_fullSubtreeDescription;
- (id)_subtreeDescription;

@end

