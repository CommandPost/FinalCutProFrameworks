//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKTimelineLayer.h>

#import <TLKit/TLKAccessibilityProtocol-Protocol.h>
#import <TLKit/TLKPartInfo-Protocol.h>

@class CALayer, NSArray, NSColor, NSMutableArray, NSString, TLKAbstractEdgeSelectionLayer, TLKAbstractItemBackgroundLayer, TLKAbstractItemSelectionLayer, TLKFilmstripLayer, TLKItemContentsLayer, TLKItemContentsLayerMock, TLKPrecisionEditorTransitionClipLayer, TLKPrecisionEditorUnusedMediaOverlayLayer, TLKRoundedSideLayer;

@interface TLKItemLayer : TLKTimelineLayer <TLKAccessibilityProtocol, TLKPartInfo>
{
    TLKAbstractItemBackgroundLayer *_backgroundLayer;
    CALayer *_filmstripDividerLayer;
    TLKAbstractEdgeSelectionLayer *_edgeSelectionLayer;
    CALayer *_transitionBorderLayer;
    TLKItemContentsLayer *_overlayContentsLayer;
    TLKItemContentsLayerMock *_overlayContentsLayerMock;
    TLKFilmstripLayer *_videoContentsLayer;
    TLKFilmstripLayer *_audioContentsLayer;
    TLKAbstractItemSelectionLayer *_selectionLayer;
    TLKRoundedSideLayer *_disabledLayer;
    TLKPrecisionEditorUnusedMediaOverlayLayer *_unusedMediaOverlay;
    TLKPrecisionEditorTransitionClipLayer *_transitionMediaOverlay;
    TLKPrecisionEditorUnusedMediaOverlayLayer *_unusedAudioMediaOverlay;
    TLKPrecisionEditorTransitionClipLayer *_transitionAudioMediaOverlay;
    CALayer *_leadingEdgeVideoStitchingLayer;
    CALayer *_trailingEdgeVideoStitchingLayer;
    CALayer *_leadingEdgeAudioStitchingLayer;
    CALayer *_trailingEdgeAudioStitchingLayer;
    NSMutableArray *_rangeItemLayers;
    struct CGRect _transitionMediaRect;
    struct CGRect _unusedMediaRect;
    struct CGRect _unusedAudioMediaRect;
    unsigned int _unusedAudioMediaRectChangedFromDefault:1;
    BOOL _leadingVideoThroughEditVisible;
    BOOL _trailingVideoThroughEditVisible;
    BOOL _leadingAudioThroughEditVisible;
    BOOL _trailingAudioThroughEditVisible;
    BOOL _disableTextBadges;
    double _titleHeight;
    double _filmstripHeight;
    double _waveformHeight;
    struct NSEdgeInsets _videoFilmstripEdgeInsets;
}

+ (void)resetNumUpdateAppearanceCalls;
+ (void)logNumUpdateAppearanceCalls;
+ (BOOL)wantsTitlesOnTransitions;
+ (void)setWantsTitlesOnTransitions:(BOOL)arg1;
+ (struct CGRect)frameForItem:(struct CGRect)arg1 withType:(int)arg2 andContainmentType:(int)arg3;
@property(retain, nonatomic) TLKItemContentsLayerMock *overlayContentsLayerMock; // @synthesize overlayContentsLayerMock=_overlayContentsLayerMock;
@property(readonly) TLKAbstractItemSelectionLayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(readonly) double waveformHeight; // @synthesize waveformHeight=_waveformHeight;
@property(readonly) double filmstripHeight; // @synthesize filmstripHeight=_filmstripHeight;
@property(readonly) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property struct NSEdgeInsets videoFilmstripEdgeInsets; // @synthesize videoFilmstripEdgeInsets=_videoFilmstripEdgeInsets;
@property BOOL disableTextBadges; // @synthesize disableTextBadges=_disableTextBadges;
@property(readonly, nonatomic) BOOL trailingAudioThroughEditVisible; // @synthesize trailingAudioThroughEditVisible=_trailingAudioThroughEditVisible;
@property(readonly, nonatomic) BOOL leadingAudioThroughEditVisible; // @synthesize leadingAudioThroughEditVisible=_leadingAudioThroughEditVisible;
@property(readonly, nonatomic) BOOL trailingVideoThroughEditVisible; // @synthesize trailingVideoThroughEditVisible=_trailingVideoThroughEditVisible;
@property(readonly, nonatomic) BOOL leadingVideoThroughEditVisible; // @synthesize leadingVideoThroughEditVisible=_leadingVideoThroughEditVisible;
@property(nonatomic) struct CGRect unusedAudioMediaRect; // @synthesize unusedAudioMediaRect=_unusedAudioMediaRect;
@property(nonatomic) struct CGRect unusedMediaRect; // @synthesize unusedMediaRect=_unusedMediaRect;
@property(nonatomic) struct CGRect transitionMediaRect; // @synthesize transitionMediaRect=_transitionMediaRect;
@property(readonly, copy, nonatomic) NSArray *rangeItemLayers; // @synthesize rangeItemLayers=_rangeItemLayers;
@property NSColor *textColor;
- (void)_debugShowContentLayersIfNeeded;
- (BOOL)layoutRangeItemLayers;
- (id)contextMenu;
- (id)partIdentifier;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_updateTransitionAppearanceAsAudioOnly:(BOOL)arg1;
- (BOOL)isTrailingAudioThroughEditVisible;
- (BOOL)isLeadingAudioThroughEditVisible;
- (BOOL)isTrailingVideoThroughEditVisible;
- (BOOL)isLeadingVideoThroughEditVisible;
- (struct CGColor *)backgroundColorForThroughEditInBetweenClipsWithDifferentAngles;
- (struct CGColor *)backgroundColorForThroughEditInBetweenClipsWithSameAngle;
- (struct CGColor *)throughEditDefaultBackgroundColor;
- (struct CGColor *)throughEditBackgroundColorForAngle:(int)arg1;
- (void)updateThroughEditLayer:(id *)arg1 name:(id)arg2 isVisible:(BOOL)arg3 angle:(int)arg4;
- (void)updateLayerAppearanceForThroughEdit:(int)arg1;
- (void)updateThroughEditsAppearance;
- (int)containmentTypeMaskWithVideoThroughEditMasks;
- (void)updateAppearance:(unsigned long long)arg1;
- (BOOL)isLayerWideEnoughForThroughEditStitchingLayer;
- (BOOL)shouldShowTrailingAudioStitchingLayer;
- (BOOL)shouldShowLeadingAudioStitchingLayer;
- (BOOL)shouldShowTrailingVideoStitchingLayer;
- (BOOL)shouldShowLeadingVideoStitchingLayer;
- (BOOL)_isTrailingAudioThroughEditVisible;
- (BOOL)_isLeadingAudioThroughEditVisible;
- (BOOL)_isTrailingVideoThroughEditVisible;
- (BOOL)_isLeadingVideoThroughEditVisible;
- (void)updateAppearance;
- (void)audioWaveFormProportionChanged;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)addSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setDelegate:(id)arg1;
- (id)newAnchorLayer;
- (void)_updateSelectionAppearance;
- (void)_updateEdgeSelectionAppearance;
- (void)createOverlayContentsLayerIfNeeded;
- (void)createEdgeSelectionIfNeeded;
- (void)_updatePrecisionEditorAppearance;
@property(nonatomic) BOOL unusedAudioMediaRectChangedFromDefault;
@property(readonly, nonatomic) struct CGRect usedMediaRect;
@property(readonly) TLKAbstractEdgeSelectionLayer *edgeSelectionLayer;
@property(readonly) TLKAbstractItemBackgroundLayer *backgroundLayer;
@property BOOL roundedBottomAudioComponent;
@property BOOL audioComponent;
@property BOOL sourceSplitEdit;
@property BOOL splitEdit;
@property(readonly) BOOL wantsFilmstripLayer;
@property(readonly) BOOL showItemLaneIndex;
@property(copy) NSString *displayName;
- (void)layoutSublayers;
- (void)_layoutSublayers;
- (void)todo_updateForNoFilmStripPlayerAudioFrame:(struct CGRect *)arg1 audioWaveFormProportion:(double)arg2;
- (void)todo_layoutAudioVideoSublayersTimelineView:(id)arg1 representedObject:(id)arg2 audioWaveFormProportion:(double)arg3 sourceSplitEdit:(BOOL)arg4;
- (void)todo_updateVideoPortionAudioWaveFormProportion:(double)arg1;
- (void)todo_updateAudioPortionSourceSplitEdit:(BOOL)arg1 audioWaveFormProportion:(double)arg2;
- (void)todo_updateAttributesOfContentsLayersSplitEdit:(BOOL)arg1 audioComponent:(BOOL)arg2;
- (void)todo_updateContentsLayerItemHeight:(double)arg1 titleHeight:(double)arg2 containmentMask:(int)arg3 splitEdit:(BOOL)arg4 audioComponent:(BOOL)arg5 disableFilmstripLayerUpdates:(BOOL)arg6 audioFrame:(struct CGRect *)arg7 videoFrame:(struct CGRect *)arg8 audioWaveFormProportion:(double)arg9 backgroundFrame:(struct CGRect)arg10 itemType:(int)arg11;
- (void)updateBackgroundAndSelectionLayersBounds:(struct CGRect)arg1 itemType:(int)arg2 containmentMask:(int)arg3 sourceSplitEdit:(BOOL)arg4 spineItem:(BOOL)arg5 backgroundFrame:(struct CGRect *)arg6 selectionFrame:(struct CGRect *)arg7;
- (void)todo_updateContentsLayer_VideoOnlyAndAVClip:(int)arg1 containmentMask:(int)arg2 disableFilmstripLayerUpdates:(BOOL)arg3 splitEdit:(BOOL)arg4 backgroundFrame:(struct CGRect)arg5 videoFrame_p:(struct CGRect *)arg6 audioFrame_p:(struct CGRect *)arg7 audioWaveFormProportion:(double)arg8 audioComponent:(BOOL)arg9;
- (void)todo_updateContentsLayer_AudioOnlyAndAudioComponents:(BOOL)arg1 audioFrame_p:(struct CGRect *)arg2 audioWaveFormProportion:(double)arg3 backgroundFrame:(struct CGRect)arg4 containmentMask:(int)arg5;
- (void)_updateSecondaryComponentAndClosedClipBackgroundAndSelectionLayers:(struct CGRect)arg1 selectionFrame:(struct CGRect)arg2 backgroundFrame_p:(struct CGRect *)arg3 selectionFrame_p:(struct CGRect *)arg4;
- (void)_updatePrimaryComponentBackgroundAndSelectionLayer:(struct CGRect *)arg1 bounds:(struct CGRect)arg2 frame:(struct CGRect)arg3 selectionFrame_p:(struct CGRect *)arg4;
- (void)_updateThroughEditsForNoContentLayers:(double)arg1 audioFrame_p:(struct CGRect *)arg2;
- (void)_updateVideoThroughEditLayers:(struct CGRect *)arg1;
- (void)_updateAudioThroughEditLayers:(struct CGRect)arg1 audioStitchingFrame:(struct CGRect)arg2 audioWaveFormProportion:(double)arg3;
- (void)todo_setupAudioContentsLayer;
- (void)_updateSelectionLayers:(struct CGRect)arg1 selectionFrame:(struct CGRect)arg2 backgroundLayerFrame:(struct CGRect)arg3 backgroundFrame_p:(struct CGRect *)arg4 selectionFrame_p:(struct CGRect *)arg5;
- (void)_updateGeneratorBackgroundAndSelectionLayer:(struct CGRect)arg1 backgroundFrame_p:(struct CGRect *)arg2 selectionFrame_p:(struct CGRect *)arg3;
- (void)_updateOverlayContentsLayer:(BOOL)arg1 overlayFrame:(struct CGRect)arg2 overlayNeedsLayout_p:(char *)arg3 timelineView:(id)arg4 representedObject:(id)arg5;
- (void)_updateDisabledLayer:(BOOL)arg1 audioComponent:(BOOL)arg2 sourceSplitEdit:(BOOL)arg3 selectionFrame:(struct CGRect)arg4;
- (void)_legacyLayoutSublayers;
- (void)_legacyUpdateTextLayerWithBadgeAreaBounds:(struct CGRect)arg1 andFilters:(id)arg2;
- (void)_legacyLayoutTextBadges;
- (BOOL)isAudioOnlyOffSpineItem;
- (void)todo_updateFilmstripDividersInBounds:(struct CGRect)arg1 audioFrame:(struct CGRect)arg2;
- (void)_updateOverlayTimeSegments;
- (void)_updateAVTimeSegments;
- (void)_updateTimeSegmentsOfLayers:(id)arg1;
- (void)layoutAccessoryLayerWithBounds:(struct CGRect)arg1 backgroundFrame:(struct CGRect)arg2 audioOnlyOffSpineItem:(BOOL)arg3;
- (void)_applyFiltersForContainmentMask:(int)arg1;
- (struct CGRect)rectForPart:(id)arg1;
- (struct CGRect)_rectForTitlePart;
@property(readonly, nonatomic) double audioWaveFormHeight;
- (struct CGRect)visibleBoundsOfLayer:(id)arg1 accountingForOverlap:(BOOL)arg2;
- (id)overlayContentsLayer;
- (id)audioContentsLayer;
- (id)videoContentsLayer;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTimelineView:(id)arg1;
- (BOOL)isContainingViewFirstResponder;
- (double)minimumHeightRequiredForTitleArea;
- (BOOL)shouldShowTitleArea;
- (BOOL)showsVideoContent;
- (BOOL)showsAudioContent;
@property(readonly) BOOL audioOnly;
- (void)syntheticUIElement:(id)arg1 performAction:(id)arg2;
- (id)syntheticUIElement:(id)arg1 actionDescription:(id)arg2;
- (id)syntheticUIElementActions:(id)arg1;
- (void)syntheticUIElement:(id)arg1 setValue:(id)arg2 forAttribute:(id)arg3;
- (BOOL)_nudgeItemByTimeOffset:(CDStruct_1b6d18a9)arg1;
- (BOOL)_trimEdge:(id)arg1 byTimeOffset:(CDStruct_1b6d18a9)arg2 trimType:(int)arg3;
- (BOOL)syntheticUIElement:(id)arg1 isAttributeSettable:(id)arg2;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)syntheticUIElementAttributeNames:(id)arg1;
- (id)syntheticUIElementHelp:(id)arg1;
- (id)syntheticUIElementValueDescription:(id)arg1;
- (id)syntheticUIElementValue:(id)arg1;
- (CDStruct_1b6d18a9)syntheticUIElementTime:(id)arg1;
- (id)syntheticUIElementTitle:(id)arg1;
- (id)syntheticUIElementSize:(id)arg1;
- (id)syntheticUIElementPosition:(id)arg1;
- (struct CGRect)syntheticUIElementRect:(id)arg1;
- (id)syntheticUIElementDescription:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilityShowContextMenu;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (struct CGRect)accessibilityRect;
- (id)accessibilityParent;
- (id)accessibilityHandles;
- (id)accessibilityChildren;
- (id)accessibilityChildren:(id)arg1;
- (id)accessibilityChildren:(id)arg1 handlesOnly:(BOOL)arg2;
- (id)accessibilityIsSelected;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityDescription;
- (id)accessibilityRole;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (struct CGRect)accessibilityRectForPart:(id)arg1;
- (BOOL)isTransition;
- (id)accessibilityPartAtPoint:(struct CGPoint)arg1;
- (BOOL)containsPart:(id)arg1 atPoint:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

