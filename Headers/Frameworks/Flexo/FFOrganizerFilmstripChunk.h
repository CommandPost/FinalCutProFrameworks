//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFOrganizerAbstractChunk.h>

@class CALayer, CATextLayer, FFFilmstrip, FFFilmstripBezelLayer, FFFilmstripSelectionLayer, FFOrganizerFilmstripChunkImportProgressLayer, FFOrganizerFilmstripChunkMaskingLayer, FFOrganizerFilmstripClipLabelLayer, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripChunk : FFOrganizerAbstractChunk
{
    FFFilmstrip *_filmstrip;
    CDStruct_e83c9415 _chunkRange;
    CDStruct_e83c9415 _filmstripRange;
    CDStruct_1b6d18a9 _timePerThumb;
    FFOrganizerFilmstripChunkMaskingLayer *_filmstripMaskLayer;
    NSMutableArray *_selectionLayers;
    FFFilmstripSelectionLayer *_draggingSelectionLayer;
    CDStruct_e83c9415 _draggingSelectionRange;
    BOOL _DraggingSelectionLayerShowHandles;
    CALayer *_selectionContainerLayer;
    FFFilmstripSelectionLayer *_skimmingHilightLayer;
    CALayer *_stillBadgeLayer;
    CALayer *_stackBadgeLayer;
    CALayer *_compoundClipBadgeLayer;
    CALayer *_multiCamClipBadgeLayer;
    CALayer *_synchedClipBadgeLayer;
    CALayer *_psdClipBadgeLayer;
    CALayer *_360ClipBadgeLayer;
    CALayer *_clipBadgeLayer;
    CALayer *_hfrClipBadgeLayer;
    CALayer *_ccClipBadgeLayer;
    CALayer *_metadataClipBadgeLayer;
    CALayer *_durationLayer;
    CALayer *_shadowLayer;
    CATextLayer *_durationTextLayer;
    NSMutableDictionary *_markerRangeToLayerMap;
    NSMutableArray *_rangeLayers;
    NSMutableArray *_usedMediaLayers;
    FFFilmstripBezelLayer *_bezelLayer;
    FFOrganizerFilmstripClipLabelLayer *_titleLayer;
    FFOrganizerFilmstripChunkImportProgressLayer *_importProgressLayer;
    CDStruct_1b6d18a9 _playheadTime;
    CDStruct_1b6d18a9 _skimmingHilightDuration;
    int _skimmingDurationPosition;
    NSArray *_selectionMarkers;
    NSArray *_selection;
    NSArray *_keywordRanges;
    NSMutableSet *_usedMediaRanges;
    NSMutableArray *_markerRanges;
    BOOL _shouldShowStackBadges;
    BOOL _shouldShowCompoundBadge;
    BOOL _shouldShowMultiCamBadge;
    BOOL _shouldShowSynchedClipBadge;
    BOOL _shouldShowPSDBadge;
    BOOL _shouldShow360Badge;
    BOOL _shouldShowHFRBadge;
    BOOL _shouldShowCCBadge;
    BOOL _shouldShowDuration;
    BOOL _inImportWindow;
    BOOL _focused;
    BOOL _showInactive;
    BOOL _dragingSelectionHighlight;
    BOOL _ghosted;
    double _cornerRadius;
    BOOL _shouldShowClipBadge;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) CDStruct_1b6d18a9 timePerThumb; // @synthesize timePerThumb=_timePerThumb;
@property(nonatomic) CDStruct_e83c9415 filmstripRange; // @synthesize filmstripRange=_filmstripRange;
@property(nonatomic) CDStruct_e83c9415 chunkRange; // @synthesize chunkRange=_chunkRange;
@property(readonly, nonatomic) FFOrganizerFilmstripClipLabelLayer *titleLayer; // @synthesize titleLayer=_titleLayer;
@property(readonly, nonatomic) NSArray *selectionLayers; // @synthesize selectionLayers=_selectionLayers;
@property(nonatomic) BOOL shouldShowDuration; // @synthesize shouldShowDuration=_shouldShowDuration;
@property(nonatomic) BOOL shouldShowCCBadge; // @synthesize shouldShowCCBadge=_shouldShowCCBadge;
@property(nonatomic) BOOL shouldShowHFRBadge; // @synthesize shouldShowHFRBadge=_shouldShowHFRBadge;
@property(nonatomic) BOOL shouldShowClipBadge; // @synthesize shouldShowClipBadge=_shouldShowClipBadge;
@property(nonatomic) BOOL shouldShow360Badge; // @synthesize shouldShow360Badge=_shouldShow360Badge;
@property(nonatomic) BOOL shouldShowPSDBadge; // @synthesize shouldShowPSDBadge=_shouldShowPSDBadge;
@property(nonatomic) BOOL shouldShowSynchedClipBadge; // @synthesize shouldShowSynchedClipBadge=_shouldShowSynchedClipBadge;
@property(nonatomic) BOOL shouldShowMultiCamBadge; // @synthesize shouldShowMultiCamBadge=_shouldShowMultiCamBadge;
@property(nonatomic) BOOL shouldShowCompoundBadge; // @synthesize shouldShowCompoundBadge=_shouldShowCompoundBadge;
@property(nonatomic) BOOL shouldShowStackBadges; // @synthesize shouldShowStackBadges=_shouldShowStackBadges;
@property(retain, nonatomic) FFFilmstrip *filmstrip; // @synthesize filmstrip=_filmstrip;
- (id)tooltipStringAtPoint:(struct CGPoint)arg1;
- (id)tooltipRects;
- (struct CGRect)editFrame;
- (id)editLayer;
- (struct CGRect)visibleFilmstripFrameInSpaceOfLayer:(id)arg1;
- (CDStruct_e83c9415)timeRange;
- (BOOL)isStill;
- (void)setContentsScale:(double)arg1;
- (double)contentsScale;
- (void)_updateSkimmingHilightForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)skimmingHighlightRange;
- (CDStruct_e83c9415)currentHighlightRangeForTime:(CDStruct_1b6d18a9)arg1;
- (void)setSkimmingHightlightColor:(id)arg1;
- (void)setSkimmingHilightDuration:(CDStruct_1b6d18a9)arg1 skimmerPosition:(int)arg2;
- (CDStruct_1b6d18a9)playheadTime;
- (void)setPlayheadTime:(CDStruct_1b6d18a9)arg1;
- (void)showInactiveSelections:(BOOL)arg1;
- (void)showHandlesForSelection:(id)arg1;
- (void)setDragSelectionHighlight:(int)arg1;
- (void)setGhostSelection:(BOOL)arg1;
- (void)setFocused:(BOOL)arg1;
- (void)setShowDuration:(BOOL)arg1;
- (id)rangeOfMediaForChunk;
- (struct CGPoint)constrainPointToFilmstrip:(struct CGPoint)arg1;
- (CDStruct_1b6d18a9)mediaPlaybackTimeForPoint:(struct CGPoint)arg1 inSpaceOfFilmstripLayer:(id)arg2;
- (BOOL)markerAreaContainsPoint:(struct CGPoint)arg1;
- (id)markerAtPoint:(struct CGPoint)arg1;
- (struct CGRect)markerRectAtPoint:(struct CGPoint)arg1;
- (id)markerLayerAtPoint:(struct CGPoint)arg1;
- (id)rangeAtPoint:(struct CGPoint)arg1;
- (BOOL)titleAreaContainsPoint:(struct CGPoint)arg1;
- (BOOL)displayNameContainsPoint:(struct CGPoint)arg1;
- (BOOL)badgeContainsPoint:(struct CGPoint)arg1;
- (BOOL)selectionSliderContainPoint:(struct CGPoint)arg1;
- (BOOL)thumbnailContainsPoint:(struct CGPoint)arg1;
- (id)selectionContainsPoint:(struct CGPoint)arg1 isActive:(char *)arg2;
- (id)handlesContainPoint:(struct CGPoint)arg1;
- (BOOL)hasFilmstripAtPoint:(struct CGPoint)arg1 inSpaceOfLayer:(id)arg2;
- (BOOL)hasFilmstrip;
- (id)_selectionLayer:(id)arg1 handlesContainPoint:(struct CGPoint)arg2;
@property(readonly, nonatomic) NSArray *markerLayers;
@property NSArray *markerRanges;
- (void)updateMarkersInRange:(CDStruct_e83c9415)arg1;
@property NSArray *keywordRanges;
- (void)addUsedMediaRanges:(id)arg1;
- (void)resetUsedMediaRanges;
- (void)setDraggingSelectionRange:(CDStruct_e83c9415)arg1 showHandles:(BOOL)arg2;
- (void)setSelectedRangesOfMedia:(id)arg1 selectionMarkers:(id)arg2;
- (void)_removeAllSelectionLayers;
- (void)_removeSelectionsForRange:(id)arg1;
- (id)_rangeObjectForLayer:(id)arg1;
- (id)_selectionLayerForRange:(id)arg1;
- (id)_addSelectionLayer;
- (id)_createSelectionLayer;
- (void)updateIfNeeded;
- (void)releaseLayer;
- (BOOL)hasLayer;
- (void)_setupSkimmingHighlightLayer;
- (id)layer;
- (id)bezelLayer;
- (id)displayName;
- (id)description;
- (void)dealloc;
- (BOOL)isEquivalentToChunk:(id)arg1;
- (id)initWithRangeOfMedia:(id)arg1 chunkRange:(CDStruct_e83c9415)arg2 filmstripRange:(CDStruct_e83c9415)arg3 chunkFrame:(struct CGRect)arg4 thumbHeight:(double)arg5 audioHeight:(double)arg6 numberOfThumbs:(double)arg7 showLabel:(BOOL)arg8 clipLabelSize:(int)arg9 maxThumbWidth:(double)arg10 timePerThumb:(CDStruct_1b6d18a9)arg11 contentsScale:(double)arg12 squareThumbs:(BOOL)arg13 singleFilmstripMode:(BOOL)arg14;

@end

