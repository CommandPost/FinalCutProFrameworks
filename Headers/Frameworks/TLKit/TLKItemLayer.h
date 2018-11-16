//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineLayer.h>

#import "TLKPartInfo.h"

@class CALayer, NSArray, NSString, TLKEdgeSelectionLayer, TLKItemBackgroundLayer, TLKItemContentsLayer, TLKItemSelectionLayer, TLKTextLayer;

@interface TLKItemLayer : TLKTimelineLayer <TLKPartInfo>
{
    TLKItemBackgroundLayer *_backgroundLayer;
    CALayer *_shadowLayer;
    TLKEdgeSelectionLayer *_edgeSelectionLayer;
    TLKTextLayer *_textLayer;
    TLKItemContentsLayer *_overlayContentsLayer;
    TLKItemContentsLayer *_videoContentsLayer;
    TLKItemContentsLayer *_audioContentsLayer;
    TLKItemSelectionLayer *_selectionLayer;
    CALayer *_unusedMediaOverlay;
    CALayer *_transitionMediaOverlay;
    NSArray *_badgeArray;
}

+ (struct CGRect)frameForItem:(struct CGRect)arg1 withType:(int)arg2 andContainmentType:(int)arg3;
- (id)initWithTimelineView:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)videoContentsLayer;
- (id)audioContentsLayer;
- (id)overlayContentsLayer;
- (struct CGRect)visibleBoundsOfLayer:(id)arg1 accountingForOverlap:(BOOL)arg2;
- (struct CGRect)rectForPart:(id)arg1;
- (void)_applyFiltersForItemType:(int)arg1 containmentMask:(int)arg2;
- (void)layoutSublayers;
@property(copy) NSString *displayName;
@property BOOL splitEdit;
@property BOOL sourceSplitEdit;
@property(readonly) TLKEdgeSelectionLayer *edgeSelectionLayer;
@property(readonly) TLKItemBackgroundLayer *backgroundLayer;
- (struct CGRect)transitionMediaRect;
@property(readonly) struct CGRect unusedMediaRect;
@property(readonly) struct CGRect usedMediaRect;
- (void)_updatePrecisionEditorAppearance;
- (void)_updateSelectionAppearance;
- (void)_updateLayers:(id)arg1 withDelegate:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)audioWaveFormProportionChanged;
- (void)updateAppearance;
- (id)hitTest:(struct CGPoint)arg1;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)partIdentifier;
- (id)contextMenu;
- (void)layoutTextBadges;

@end
