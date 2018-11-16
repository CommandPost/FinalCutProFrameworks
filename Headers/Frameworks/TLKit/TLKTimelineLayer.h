//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKAccessibilityLayer.h>

@class CALayer, CALayer<TLKItemLayerInfo>, NSArray, TLKAbstractEdgeSelectionLayer, TLKAbstractItemBackgroundLayer, TLKAnchorLayer, TLKItemComponentFragment, TLKTimelineView;

@interface TLKTimelineLayer : TLKAccessibilityLayer
{
    TLKItemComponentFragment *_itemComponentFragment;
    id <TLKTimelineItem> _representedObject;
    NSArray *_markerLayers;
    CALayer *_dropFeedbackLayer;
    CDStruct_e83c9415 _dropHighlightRange;
    struct {
        unsigned int hasDragHandle:1;
        unsigned int sourceSplitEdit:1;
        unsigned int splitEdit:1;
        unsigned int audioComponent:1;
        unsigned int hideUnusedMediaOverlay:1;
        unsigned int mouseOverLayer:1;
        unsigned int RESERVED:18;
    } _tlkItemFlags;
    BOOL _unusedAudioMediaRectChangedFromDefault;
    unsigned long long _selectionMask;
    TLKAbstractItemBackgroundLayer *_backgroundLayer;
    TLKAbstractEdgeSelectionLayer *_edgeSelectionLayer;
    CALayer<TLKItemLayerInfo> *_overlayContentsLayer;
    TLKAnchorLayer *_anchorLayer;
    struct CGRect _unusedMediaRect;
    struct CGRect _unusedAudioMediaRect;
    struct CGRect _transitionMediaRect;
    struct CGRect _intersectionRect;
    struct CGRect _previousIntersectionRect;
    struct CGRect _visibleRect;
}

+ (struct CGRect)frameForItem:(struct CGRect)arg1 withType:(int)arg2 andContainmentType:(int)arg3;
+ (struct CGRect)frameRectForRect:(struct CGRect)arg1;
@property(retain, nonatomic) TLKAnchorLayer *anchorLayer; // @synthesize anchorLayer=_anchorLayer;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) CDStruct_e83c9415 dropHighlightRange; // @synthesize dropHighlightRange=_dropHighlightRange;
@property(nonatomic) CALayer<TLKItemLayerInfo> *overlayContentsLayer; // @synthesize overlayContentsLayer=_overlayContentsLayer;
@property(nonatomic) TLKAbstractEdgeSelectionLayer *edgeSelectionLayer; // @synthesize edgeSelectionLayer=_edgeSelectionLayer;
@property(nonatomic) TLKAbstractItemBackgroundLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property BOOL unusedAudioMediaRectChangedFromDefault; // @synthesize unusedAudioMediaRectChangedFromDefault=_unusedAudioMediaRectChangedFromDefault;
@property(nonatomic) struct CGRect previousIntersectionRect; // @synthesize previousIntersectionRect=_previousIntersectionRect;
@property(nonatomic) struct CGRect intersectionRect; // @synthesize intersectionRect=_intersectionRect;
@property(nonatomic) struct CGRect transitionMediaRect; // @synthesize transitionMediaRect=_transitionMediaRect;
@property(nonatomic) struct CGRect unusedAudioMediaRect; // @synthesize unusedAudioMediaRect=_unusedAudioMediaRect;
@property(nonatomic) struct CGRect unusedMediaRect; // @synthesize unusedMediaRect=_unusedMediaRect;
@property(nonatomic) unsigned long long selectionMask; // @synthesize selectionMask=_selectionMask;
@property(nonatomic) TLKItemComponentFragment *itemComponentFragment; // @synthesize itemComponentFragment=_itemComponentFragment;
- (void)setBounds:(struct CGRect)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (void)layoutAccessoryLayerWithBounds:(struct CGRect)arg1 backgroundFrame:(struct CGRect)arg2 audioOnlyOffSpineItem:(BOOL)arg3;
- (void)createOverlayContentsLayerIfNeeded;
- (struct CGRect)rectForPart:(id)arg1;
- (void)audioWaveFormProportionChanged;
- (void)updateAppearance:(unsigned long long)arg1;
- (void)updateAppearance;
- (void)layoutSublayers;
- (void)setNeedsLayout;
- (void)invalidate;
- (CDStruct_e83c9415)dropHighlightRegion;
@property(nonatomic) BOOL mouseOverLayer;
@property(nonatomic) BOOL hideUnusedMediaOverlay;
@property(nonatomic) BOOL audioComponent;
@property(nonatomic) BOOL sourceSplitEdit;
@property(nonatomic) BOOL splitEdit;
- (id)associatedLayers;
@property(retain, nonatomic) NSArray *markerLayers;
- (void)setAnchoredLayerOpacity:(float)arg1;
- (id)anchorLayers;
- (id)newAnchorLayer;
@property(retain, nonatomic) id <TLKTimelineItem> representedObject;
@property(readonly, nonatomic) TLKTimelineView *timelineView;
- (void)dealloc;
- (id)initWithTimelineView:(id)arg1;
- (struct CGRect)visibleBoundsOfLayer:(id)arg1 accountingForOverlap:(BOOL)arg2;

@end

