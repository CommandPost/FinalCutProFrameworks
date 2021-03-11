//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFResponderLayer.h>

#import <Flexo/NSMenuDelegate-Protocol.h>

@class CALayer, CATextLayer, CHChannelBase, CHChannelFolder, FFAnchoredTimelineModule, FFChannelChangeController, FFCurveEditorBackgroundLayer, FFCurveEditorFadeHandleLayer, FFCurveEditorSelection, FFCurveEditorSelectionList, FFEffect, FFEffectStack, FFResponderLayerRoleTintedCheckbox, FFRoleColorScheme, NSArray, NSMutableArray, NSString, OZDecibelFormatter, TLKButtonLayer, TLKImageLayer;
@protocol FFChannelChangeControllerDivorcedDelegate, FFCurveEditorEffectDelegate;

__attribute__((visibility("hidden")))
@interface FFCurveEditorLayer : FFResponderLayer <NSMenuDelegate>
{
    FFCurveEditorFadeHandleLayer *_fadeInLayer;
    FFCurveEditorFadeHandleLayer *_fadeOutLayer;
    TLKImageLayer *_marqueeLayer;
    TLKButtonLayer *_menuButtonLayer;
    TLKButtonLayer *_disclosureButtonLayer;
    CALayer *_marqueeLeftLayer;
    CALayer *_marqueeRightLayer;
    FFCurveEditorBackgroundLayer *_backgroundLayer;
    FFResponderLayerRoleTintedCheckbox *_checkBoxLayer;
    NSMutableArray *_keyLayers;
    NSMutableArray *_curveLayers;
    CATextLayer *_nameLayer;
    CALayer *_foregroundLayer;
    CALayer *_maskLayer;
    FFEffect *_effect;
    FFEffectStack *_effectStack;
    id <FFCurveEditorEffectDelegate> _effectDelegate;
    struct CGColor **_fadeColor;
    struct CGColor **_curveColorPressed;
    struct CGColor **_curveColorRollover;
    struct CGColor **_curveColorPressedOutline;
    struct CGColor **_fadeCurveColor;
    CHChannelBase *_channel;
    CHChannelFolder *_rootChannel;
    NSArray *_channels;
    vector_b67dfe3a _samplesY;
    vector_0821a7d5 _samplesX;
    unsigned int _numberOfSamples;
    BOOL _dirty;
    FFCurveEditorSelection *_selection;
    FFCurveEditorSelection *_initialSelection;
    FFCurveEditorSelection *_menuSelection;
    FFCurveEditorSelectionList *_selectedKeyframes;
    FFCurveEditorSelectionList *_initialSelectedKeyframes;
    struct CGRect _selectionRect;
    double _selectionMin;
    double _selectionMax;
    NSMutableArray *_snapPoints;
    struct CGPoint _initialMouseLocation;
    struct CGPoint _mouseOrigin;
    struct CGPoint _lastMousePos;
    struct CGPoint _lastSelectionPos;
    struct CGPoint _intialCalloutPoint;
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
    BOOL _keepSelection;
    unsigned long long _direction;
    FFCurveEditorSelection *_rolloverSelection;
    CDStruct_1b6d18a9 _draggedTimeResidual;
    BOOL _isOverlay;
    BOOL _isAudio;
    struct CGRect _clippedRect;
    OZDecibelFormatter *_decibelFormatter;
    FFAnchoredTimelineModule *_timeline;
    NSString *_actionName;
    id _item;
    CDStruct_1b6d18a9 _sequenceTimecodeFrameDuration;
    FFChannelChangeController *_changeController;
    id <FFChannelChangeControllerDivorcedDelegate> _channelChangeDelegate;
    BOOL _isModelLayer;
    BOOL _instantiatingIntrinsic;
    FFRoleColorScheme *_roleColorScheme;
    BOOL _drawOutline;
    unsigned long long _currentPredominantDragDirection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property unsigned long long currentPredominantDragDirection; // @synthesize currentPredominantDragDirection=_currentPredominantDragDirection;
@property BOOL drawOutline; // @synthesize drawOutline=_drawOutline;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityChildren;
- (id)syntheticUIElementWithPartCode:(int)arg1;
- (id)syntheticUIElementWithPart:(id)arg1;
- (BOOL)isPartAccessible:(int)arg1;
- (id)accessibilityLayerForPartCode:(int)arg1;
- (id)accessibilityNameForPartCode:(int)arg1;
- (id)accessibilityAttributeNames;
- (void)setEffectDelegate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)cursorAtPoint:(struct CGPoint)arg1;
- (id)partForMenu;
- (id)subpartAtPoint:(struct CGPoint)arg1 ignoreSelection:(BOOL)arg2;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)fadeCurveContextMenu:(BOOL)arg1;
- (id)channelContextMenu;
- (id)segmentContextMenu;
- (id)keyframeContextMenu;
- (BOOL)shouldDisplayMenu:(id)arg1;
- (void)handlePaste:(id)arg1;
- (void)handleCut:(id)arg1;
- (void)handleCopy:(id)arg1;
- (void)handlePreviousKeyframe:(id)arg1;
- (void)handleNextKeyframe:(id)arg1;
- (void)handleAddKeyframe:(id)arg1;
- (void)handleNudgeRight:(id)arg1;
- (void)handleNudgeLeft:(id)arg1;
- (void)handleNudgeDown:(id)arg1;
- (void)handleNudgeUp:(id)arg1;
- (void)handleDeleteAllKeyframes:(id)arg1;
- (void)handleDelete:(id)arg1;
- (void)nudgeUpDown:(double)arg1;
- (void)menuSetSmooth:(id)arg1;
- (void)menuSetLinear:(id)arg1;
- (void)menuDeleteKeyframes:(id)arg1;
- (void)menuSetFadeOutCurve:(id)arg1;
- (void)menuSetFadeInCurve:(id)arg1;
- (void)menuSetSpeed:(id)arg1;
- (unsigned int)speed:(id)arg1;
- (void)menuSetChannel:(id)arg1;
- (void)menuSetEffect:(id)arg1;
- (id)contextMenuForPart:(id)arg1;
- (void)displayChannelMenu;
- (unsigned long long)_curveEditDirectionForDragDirection:(unsigned long long)arg1;
- (BOOL)wantsToHandlePredominantDrag;
- (unsigned long long)_computePredominantDragDirection;
- (unsigned long long)_predominantDragDirection;
- (BOOL)hasKeyframes;
- (BOOL)shouldHandleAddKeyframe;
- (BOOL)shouldHandlePreviousKeyframe;
- (BOOL)shouldHandleNextKeyframe;
- (BOOL)shouldHandlePaste;
- (BOOL)shouldHandleCopy;
- (BOOL)shouldHandleNudgeLeftRight;
- (BOOL)shouldHandleNudgeUpDown;
- (BOOL)shouldHandleDeleteAllKeyframes;
- (BOOL)shouldHandleDelete:(BOOL)arg1;
- (unsigned int)numberOfKeyframes;
- (unsigned int)numberOfSelectedKeyframes;
- (BOOL)hasSelectedKeyframes;
- (void)collapseEffect;
- (void)enableEffect:(id)arg1;
- (void)handleMouseExited:(struct CGPoint)arg1 event:(id)arg2;
- (BOOL)handleMouseEntered:(struct CGPoint)arg1 event:(id)arg2;
- (void)handleMouseMoved:(struct CGPoint)arg1 event:(id)arg2;
- (void)handleMouseUp:(struct CGPoint)arg1 event:(id)arg2;
- (void)handleMouseCancelled:(struct CGPoint)arg1 event:(id)arg2;
- (void)handleMouseDragged:(struct CGPoint)arg1 event:(id)arg2;
- (void)handleMouseDown:(struct CGPoint)arg1 event:(id)arg2 part:(id)arg3;
- (void)_didSetMultipleChannels:(id)arg1;
- (void)_willSetMultipleChannels:(id)arg1;
- (void)_endMultipleChannelsChange;
- (void)_beginMultipleChannelsChange;
- (void)_didSetSingleChannel:(id)arg1;
- (void)_willSetSingleChannel:(id)arg1;
- (void)_endSingleChannelChange:(id)arg1;
- (void)_beginSingleChannelChange:(id)arg1;
- (void)_channelChanged:(id)arg1;
- (void)_effectChanged:(id)arg1;
- (void)_setFadeCurve:(unsigned int)arg1 forFadeIn:(BOOL)arg2;
- (struct CGPoint)offsetSelection:(id)arg1 withDelta:(struct CGPoint)arg2 modifiers:(unsigned int)arg3;
- (double)offsetKeyframesInValue:(id)arg1 delta:(double)arg2;
- (double)offsetKeyframesInTime:(id)arg1 deltaTime:(CDStruct_1b6d18a9)arg2;
- (void)offsetKeyframesInPixels:(id)arg1 delta:(double)arg2;
- (void)offsetKeyframesInValueInDb:(const CDStruct_1b6d18a9 *)arg1 maxTime:(const CDStruct_1b6d18a9 *)arg2 time:(const CDStruct_1b6d18a9 *)arg3 valueInDb:(double)arg4;
- (void)currentChannelsDeleteKeypointAt:(CDStruct_1b6d18a9)arg1;
- (void)currentChannelsAddKeypointAt:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)currentChannelsOffsetKeypoint:(CDStruct_1b6d18a9)arg1 maxTime:(CDStruct_1b6d18a9)arg2 deltaTime:(CDStruct_1b6d18a9)arg3 frameDuration:(CDStruct_1b6d18a9)arg4 overlap:(BOOL)arg5 keepBounds:(BOOL)arg6;
- (CDStruct_1b6d18a9)currentChannelsMoveKeypoint:(CDStruct_1b6d18a9)arg1 to:(CDStruct_1b6d18a9)arg2 overlap:(BOOL)arg3 keepBounds:(BOOL)arg4;
- (BOOL)currentChannelsHasKeypointAt:(CDStruct_1b6d18a9)arg1;
- (BOOL)currentChannelsHaveOnlyOneKeypointAt:(CDStruct_1b6d18a9)arg1;
- (BOOL)rootChannelHasOnlyOneKeypointAt:(CDStruct_1b6d18a9)arg1;
- (BOOL)nextKeypoint:(CDStruct_1b6d18a9 *)arg1 inChannels:(id)arg2;
- (BOOL)previousKeypoint:(CDStruct_1b6d18a9 *)arg1 inChannels:(id)arg2;
- (void)buildSnapPoints;
- (BOOL)isOverlay;
- (void)updateTextLook;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1;
- (id)channelForSelection:(id)arg1;
- (void)endAreaSelection;
- (void)clearAreaSelection;
- (void)updateAreaSelection:(struct CGPoint)arg1;
- (void)beginAreaSelection:(struct CGPoint)arg1;
- (void)selectRangeKeys:(id)arg1;
- (void)setSelectedKeyframes:(id)arg1;
- (void)setMenuSelection:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)updateSelectionLocation:(struct CGPoint)arg1;
- (void)selectKeyframesFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (void)selectKeyframesInRect:(struct CGRect)arg1;
- (void)clearSelectedKeyframes;
- (void)clearSelection;
- (id)selectionAtPoint:(struct CGPoint)arg1;
- (id)fadeSelectionAtPoint:(struct CGPoint)arg1;
- (id)curveSegmentAtTimeCoordinate:(double)arg1;
- (BOOL)hasKeyframeSelection;
- (void)updateSelection;
- (void)setRolloverSelection:(id)arg1;
- (void)selectedTimeRangeWithMinTime:(CDStruct_1b6d18a9 *)arg1 maxTime:(CDStruct_1b6d18a9 *)arg2;
- (BOOL)isValueDisplayHidden;
- (void)updateValueDisplay;
- (void)updateValueDisplayForDirection:(unsigned long long)arg1;
- (id)valueTipStringForTime:(CDStruct_1b6d18a9)arg1 value:(double *)arg2;
- (void)showValueDisplayAtPoint:(struct CGPoint)arg1 string:(id)arg2;
- (struct CGPoint)adjustValueDisplayLocationForDirection:(unsigned long long)arg1 point:(struct CGPoint)arg2;
- (CDStruct_1b6d18a9)adjustTimeToFrameBoundary:(CDStruct_1b6d18a9)arg1 floorValue:(BOOL)arg2;
- (void)removeMaskLayer;
- (void)setMaskLayer:(struct CGRect)arg1;
- (void)drawForegroundLayerWithContext:(struct CGContext *)arg1;
- (void)drawFadeWithBounds:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 fadeWidth:(double)arg3 fadeOrigin:(double)arg4 curvature:(unsigned int)arg5 enabled:(BOOL)arg6 forFadeIn:(BOOL)arg7;
- (void)layoutSublayers;
- (void)updateBackground;
- (void)updateFadeColors;
- (void)setKeyframeAsset:(id)arg1;
- (id)roleColorScheme;
- (id)channel;
- (void)setChannel:(id)arg1 keepSelection:(BOOL)arg2;
- (void)setEffect:(id)arg1 andChannel:(id)arg2 changeSelection:(BOOL)arg3;
- (void)setEffect:(id)arg1 andChannel:(id)arg2;
- (id)effect;
- (id)associatedEffect;
- (void)updateFadeHandles;
- (BOOL)showRightFade;
- (BOOL)showLeftFade;
- (void)updateChannel;
- (void)updateSamples;
- (void)updateKeyframesLayers;
- (void)updateCurveLayers;
- (void)colorSchemeHasChanged;
- (unsigned long long)findAssociatedKeyframeLayer:(CDStruct_1b6d18a9)arg1;
- (unsigned long long)findAssociatedCurveLayer:(CDStruct_1b6d18a9)arg1;
- (void)instantiateIntrinsicEffectIfNeeded;
- (struct CGPoint)fadeOutPosition;
- (struct CGPoint)fadeInPosition;
- (double)fadeWidth:(BOOL)arg1;
- (CDStruct_1b6d18a9)fadeOut;
- (CDStruct_1b6d18a9)fadeIn;
- (void)setFadeOut:(CDStruct_1b6d18a9)arg1;
- (void)setFadeIn:(CDStruct_1b6d18a9)arg1;
- (BOOL)canExpand;
- (BOOL)isCollapsed;
- (void)setCollapsed:(BOOL)arg1;
- (double)channelValueForPosition:(double)arg1;
- (CDStruct_1b6d18a9)channelTimeForPosition:(double)arg1;
- (struct CGPoint)channelPointForKeyframe:(struct _FFKeyframeInfo)arg1;
- (CDStruct_1b6d18a9)playheadTime;
- (void)setPlayheadAtTime:(CDStruct_1b6d18a9)arg1;
- (double)displayScaleX;
- (double)displayScaleY;
- (id)channelUnitsString;
- (double)channelScale;
- (double)maxValueY;
- (double)minValueY;
- (CDStruct_1b6d18a9)timeRangeEnd;
- (CDStruct_1b6d18a9)timeRangeOrigin;
- (double)timeRangeEndInPixels;
- (double)timeRangeOriginInPixels;
- (CDStruct_e83c9415)timeRange;
- (struct CGRect)adjustedRectForKeyframe:(id)arg1;
- (struct CGRect)adjustedRectForCurveSegment:(id)arg1;
- (struct CGRect)displayBounds;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)curveEditorWillBeRemoved;
- (void)curveEditorWillClose;
- (void)removeObservers:(id)arg1;
- (void)addObservers:(id)arg1;
- (id)initWithChannel:(id)arg1 rootChannel:(id)arg2 effect:(id)arg3 actionName:(id)arg4 forItem:(id)arg5 isAudio:(BOOL)arg6 isOverlay:(BOOL)arg7 timeline:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

