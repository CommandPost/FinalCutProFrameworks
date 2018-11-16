//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "NSMenuDelegate.h"

@class CATextLayer, CHChannelBase, CHChannelFolder, FFAnchoredTimelineModule, FFChannelChangeController, FFCurveEditorBackgroundLayer, FFCurveEditorSelection, FFEffect, FFEffectStack, FFResponderLayerCheckbox, NSArray, NSMutableArray, NSProThemeFacet, NSString, OZDecibelFormatter, TLKButtonLayer, TLKThemeBackedLayer;

__attribute__((visibility("hidden")))
@interface FFCurveEditorLayer : CALayer <NSMenuDelegate>
{
    TLKThemeBackedLayer *_fadeInLayer;
    TLKThemeBackedLayer *_fadeOutLayer;
    TLKThemeBackedLayer *_marqueeLayer;
    TLKButtonLayer *_menuButtonLayer;
    TLKButtonLayer *_disclosureButtonLayer;
    CALayer *_marqueeLeftLayer;
    CALayer *_marqueeRightLayer;
    FFCurveEditorBackgroundLayer *_backgroundLayer;
    FFResponderLayerCheckbox *_checkBoxLayer;
    NSMutableArray *_keyLayers;
    NSMutableArray *_curveLayers;
    CATextLayer *_nameLayer;
    CALayer *_foregroundLayer;
    CALayer *_maskLayer;
    FFEffect *_effect;
    FFEffectStack *_effectStack;
    id <FFCurveEditorEffectDelegate> _effectDelegate;
    NSProThemeFacet *_fadeAsset;
    NSProThemeFacet *_fadeAssetFocused;
    struct CGColor **_fadeColor;
    struct CGColor **_curveColor;
    struct CGColor **_curveColorPressed;
    struct CGColor **_curveColorRollover;
    struct CGColor **_curveColorPressedOutline;
    struct CGColor **_fadeCurveColor;
    CHChannelBase *_channel;
    CHChannelFolder *_rootChannel;
    NSArray *_channels;
    vector_419cd555 _samplesY;
    vector_10091177 _samplesX;
    unsigned int _numberOfSamples;
    BOOL _dirty;
    FFCurveEditorSelection *_selection;
    FFCurveEditorSelection *_menuSelection;
    struct CGRect _selectionRect;
    double _selectionMin;
    double _selectionMax;
    NSMutableArray *_snapPoints;
    struct CGPoint _initialMouseLocation;
    struct CGPoint _mouseOrigin;
    struct CGPoint _lastMousePos;
    struct CGPoint _lastSelectionPos;
    BOOL _startDrag;
    BOOL _snapping;
    BOOL _selecting;
    BOOL _collapsed;
    BOOL _isMouseDown;
    BOOL _showValue;
    BOOL _offsetLevel;
    BOOL _segmentWasCreated;
    BOOL _didSelectNewSegment;
    BOOL _keyframeWasCreated;
    BOOL _curveIsPositive;
    BOOL _rollover;
    BOOL _isObserving;
    BOOL _soloAnimation;
    BOOL _fineAdjustment;
    int _direction;
    FFCurveEditorSelection *_rolloverSelection;
    BOOL _isOverlay;
    BOOL _isAudio;
    struct CGRect _clippedRect;
    OZDecibelFormatter *_decibelFormatter;
    FFAnchoredTimelineModule *_timeline;
    NSString *_actionName;
    id _item;
    FFChannelChangeController *_changeController;
    id <FFChannelChangeControllerDivorcedDelegate> _channelChangeDelegate;
    BOOL _isModelLayer;
}

- (id)initWithChannel:(id)arg1 rootChannel:(id)arg2 effect:(id)arg3 actionName:(id)arg4 forItem:(id)arg5 isAudio:(BOOL)arg6 isOverlay:(BOOL)arg7 timeline:(id)arg8;
- (void)addObservers:(id)arg1;
- (void)removeObservers:(id)arg1;
- (void)curveEditorWillClose;
- (void)curveEditorWillBeRemoved;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)dealloc;
- (struct CGRect)displayBounds;
- (struct CGRect)adjustedRectForCurveRect:(struct CGRect)arg1;
- (CDStruct_e83c9415)timeRange;
- (double)minValueY;
- (double)maxValueY;
- (double)channelScale;
- (id)channelUnitsString;
- (double)displayScaleY;
- (double)displayScaleX;
- (void)setPlayheadAtTime:(CDStruct_1b6d18a9)arg1;
- (struct CGPoint)convertFromChannelCoords:(struct _FFKeyframeInfo)arg1;
- (CDStruct_1b6d18a9)convertPositionToChannelTime:(double)arg1;
- (double)convertPositionToChannelValue:(double)arg1;
- (void)setCollapsed:(BOOL)arg1;
- (BOOL)isCollapsed;
- (BOOL)canExpand;
- (void)setFadeIn:(CDStruct_1b6d18a9)arg1;
- (void)setFadeOut:(CDStruct_1b6d18a9)arg1;
- (double)fadeWidth:(BOOL)arg1;
- (struct CGPoint)fadeInPosition;
- (struct CGPoint)fadeOutPosition;
- (unsigned long long)findAssociatedCurveLayer:(CDStruct_1b6d18a9)arg1;
- (unsigned long long)findAssociatedKeyframeLayer:(CDStruct_1b6d18a9)arg1;
- (void)refreshCurveLayers;
- (void)refreshKeyframesLayers;
- (void)refreshSamples;
- (void)refreshChannel;
- (BOOL)showLeftFade;
- (BOOL)showRightFade;
- (void)refreshMixHandles;
- (id)associatedEffect;
- (id)effect;
- (void)setEffect:(id)arg1 andChannel:(id)arg2;
- (void)setChannel:(id)arg1;
- (id)channel;
- (void)setKeyframeAsset:(id)arg1;
- (void)updateBackground;
- (void)layoutSublayers;
- (void)drawFadeWithBounds:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 fadeWidth:(double)arg3 curvature:(unsigned int)arg4 enabled:(BOOL)arg5 forFadeIn:(BOOL)arg6;
- (void)drawForegroundLayerWithContext:(struct CGContext *)arg1;
- (void)setMaskLayer:(struct CGRect)arg1;
- (void)removeMaskLayer;
- (void)showValueDisplayAtPoint:(struct CGPoint)arg1 string:(id)arg2 direction:(int)arg3;
- (void)updateSelection;
- (BOOL)hasKeyframeSelection;
- (id)selectionAtPoint:(struct CGPoint)arg1;
- (void)clearSelection;
- (void)beginAreaSelection:(struct CGPoint)arg1;
- (void)updateAreaSelection:(struct CGPoint)arg1;
- (void)endAreaSelection;
- (id)channelForSelection:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (void)updateTextLook;
- (BOOL)isOverlay;
- (void)buildSnapPoints;
- (BOOL)previousKeypoint:(CDStruct_1b6d18a9 *)arg1 inChannels:(id)arg2;
- (BOOL)nextKeypoint:(CDStruct_1b6d18a9 *)arg1 inChannels:(id)arg2;
- (BOOL)rootChannelHasOnlyOneKeypointAt:(CDStruct_1b6d18a9)arg1;
- (BOOL)currentChannelsHaveOnlyOneKeypointAt:(CDStruct_1b6d18a9)arg1;
- (BOOL)currentChannelsHasKeypointAt:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)currentChannelsMoveKeypoint:(CDStruct_1b6d18a9)arg1 to:(CDStruct_1b6d18a9)arg2 overlap:(BOOL)arg3 keepBounds:(BOOL)arg4;
- (void)currentChannelsAddKeypointAt:(CDStruct_1b6d18a9)arg1;
- (void)currentChannelsDeleteKeypointAt:(CDStruct_1b6d18a9)arg1;
- (struct CGPoint)offsetSelection:(id)arg1 withDelta:(struct CGPoint)arg2;
- (void)_setFadeCurve:(unsigned int)arg1 forFadeIn:(BOOL)arg2;
- (void)_effectChanged:(id)arg1;
- (void)_channelChanged:(id)arg1;
- (void)_beginSingleChannelChange:(id)arg1;
- (void)_endSingleChannelChange:(id)arg1;
- (void)_willSetSingleChannel:(id)arg1;
- (void)_didSetSingleChannel:(id)arg1;
- (void)_beginMultipleChannelsChange;
- (void)_endMultipleChannelsChange;
- (void)_willSetMultipleChannels:(id)arg1;
- (void)_didSetMultipleChannels:(id)arg1;
- (void)handleMouseDown:(struct CGPoint)arg1 event:(id)arg2 part:(id)arg3;
- (void)handleMouseDragged:(struct CGPoint)arg1 event:(id)arg2;
- (void)handleMouseUp:(struct CGPoint)arg1 event:(id)arg2;
- (void)handleMouseMoved:(struct CGPoint)arg1 event:(id)arg2;
- (BOOL)handleMouseEntered:(struct CGPoint)arg1 event:(id)arg2;
- (void)handleMouseExited:(struct CGPoint)arg1 event:(id)arg2;
- (void)enableEffect:(id)arg1;
- (void)collapseEffect;
- (BOOL)shouldHandleKeyEvent;
- (BOOL)canAddKeyframe;
- (BOOL)hasKeyframes;
- (void)displayChannelMenu;
- (id)contextMenuForPart:(id)arg1;
- (void)menuSetEffect:(id)arg1;
- (void)menuSetChannel:(id)arg1;
- (unsigned int)speed:(id)arg1;
- (void)menuSetSpeed:(id)arg1;
- (void)menuSetFadeInCurve:(id)arg1;
- (void)menuSetFadeOutCurve:(id)arg1;
- (void)handleDelete:(id)arg1;
- (void)handleNudgeUp:(id)arg1;
- (void)handleNudgeDown:(id)arg1;
- (void)handleNudgeLeft:(id)arg1;
- (void)handleNudgeRight:(id)arg1;
- (void)handleAddKeyframe:(id)arg1;
- (void)handleNextKeyframe:(id)arg1;
- (void)handlePreviousKeyframe:(id)arg1;
- (BOOL)shouldDisplayMenu:(id)arg1;
- (id)segmentContextMenu;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (id)channelContextMenu;
- (id)fadeCurveContextMenu:(BOOL)arg1;
- (id)subpartAtPoint:(struct CGPoint)arg1 ignoreSelection:(BOOL)arg2;
- (id)partForMenu;
- (id)cursorAtPoint:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setEffectDelegate:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

