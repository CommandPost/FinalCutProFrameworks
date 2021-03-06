//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/TLKItemLayer.h>

@class CALayer, FFAnchoredObject, FFOrganizedLane, FFRoleColorScheme, FFTimelineItemAppearance, PEOffscreenItemIndicatorLayer, TLKItemBackgroundLayer;
@protocol FFStorylineLane;

__attribute__((visibility("hidden")))
@interface PETimelineItemLayer : TLKItemLayer
{
    FFRoleColorScheme *_currentColorScheme;
    BOOL _wantsHighlightLayer;
    FFTimelineItemAppearance *_appearance;
    PEOffscreenItemIndicatorLayer *_offscreenItemIndicatorLayer;
    CALayer *_highlightLayer;
    FFOrganizedLane *_organizedLane;
}

@property(readonly) FFOrganizedLane *organizedLane; // @synthesize organizedLane=_organizedLane;
@property(retain, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(nonatomic) BOOL wantsHighlightLayer; // @synthesize wantsHighlightLayer=_wantsHighlightLayer;
@property(retain, nonatomic) PEOffscreenItemIndicatorLayer *offscreenItemIndicatorLayer; // @synthesize offscreenItemIndicatorLayer=_offscreenItemIndicatorLayer;
@property(retain, nonatomic) FFTimelineItemAppearance *appearance; // @synthesize appearance=_appearance;
- (BOOL)allowsItemComponentDragging;
- (void)layoutAccessoryLayerWithBounds:(struct CGRect)arg1 backgroundFrame:(struct CGRect)arg2 audioOnlyOffSpineItem:(BOOL)arg3;
- (void)hideSecondaryComponentWebbingLayer;
- (id)_findComponentWebbingSuperlayer;
- (void)setContentsScale:(double)arg1;
- (void)showSecondaryComponentWebbingLayer;
- (void)invalidate;
- (id)newAnchorLayer;
- (double)waveformHeight;
- (double)filmstripHeight;
- (double)titleHeight;
- (void)_updateTitleVisibility;
- (void)updateFocusMode;
- (void)_updateBackgroundFillLayerColor;
- (void)_updateLayerColors;
- (void)colorSchemeHasChanged;
- (void)_enumerateLayersUsingBlock:(CDUnknownBlockType)arg1;
- (id)_backgroundFillLayerColor:(id)arg1;
- (id)_highlightedColorForColor:(id)arg1;
- (void)_setBackgroundFillLayerWithColor:(id)arg1;
- (void)updateFilmstripsHeight;
- (void)updateAppearance:(unsigned long long)arg1;
- (void)_applyAppearanceBoxMetrics;
- (void)_discardHighlightLayer;
- (void)_makeHighlightLayer;
- (void)layoutSublayers;
- (BOOL)wantsFilmstripLayer;
- (BOOL)focused;
@property(readonly) FFAnchoredObject *anchoredObject;
- (BOOL)shouldHighlight;
@property(readonly) id <FFStorylineLane> storyLane;
@property(readonly) TLKItemBackgroundLayer *itemBackgroundLayer;
@property(readonly) FFRoleColorScheme *colorScheme;
- (void)dealloc;
- (id)initWithTimelineView:(id)arg1;

@end

