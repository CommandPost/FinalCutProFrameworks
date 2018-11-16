//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayer.h>

@class CALayer, CATextLayer, LKTextField, NSProThemeFacet, NSString, TLKThemeBackedLayer;

__attribute__((visibility("hidden")))
@interface FFSpeedSegmentLayer : FFResponderLayer
{
    id _item;
    id _module;
    int _globalIndex;
    int _visibleIndex;
    CDStruct_e83c9415 _timeRange;
    int _endKeyIndex;
    BOOL _lastVisibleSegment;
    double _speedValue;
    NSString *_extrapolationString;
    BOOL _selected;
    LKTextField *_speedTextField;
    CATextLayer *_speedTextLayer;
    CATextLayer *_tempTextLayer;
    TLKThemeBackedLayer *_backgroundLayer;
    TLKThemeBackedLayer *_patternLayer;
    TLKThemeBackedLayer *_menuIndicatorLayer;
    TLKThemeBackedLayer *_mascotLayer;
    struct CGRect _rect;
    struct CGRect _itemRect;
    struct CGRect _visibleRect;
    BOOL _lastSegment;
    int _keyframeWidth;
    BOOL _active;
    BOOL _showGrabber;
    BOOL _showSmoothEndTransitionMenu;
    NSProThemeFacet *_rabbitFacet;
    NSProThemeFacet *_tortoiseFacet;
    NSProThemeFacet *_reverseRabbitFacet;
    NSProThemeFacet *_reverseTortoiseFacet;
    NSProThemeFacet *_reverseFacet;
    NSProThemeFacet *_normalSpeedFacet;
    NSProThemeFacet *_slowSpeedFacet;
    NSProThemeFacet *_fastSpeedFacet;
    NSProThemeFacet *_holdSpeedFacet;
    NSProThemeFacet *_normalSpeedActiveFacet;
    NSProThemeFacet *_slowSpeedActiveFacet;
    NSProThemeFacet *_fastSpeedActiveFacet;
    NSProThemeFacet *_holdSpeedActiveFacet;
    NSProThemeFacet *_normalSpeedNarrowFacet;
    NSProThemeFacet *_slowSpeedNarrowFacet;
    NSProThemeFacet *_fastSpeedNarrowFacet;
    NSProThemeFacet *_holdSpeedNarrowFacet;
    NSProThemeFacet *_normalSpeedNarrowActiveFacet;
    NSProThemeFacet *_slowSpeedNarrowActiveFacet;
    NSProThemeFacet *_fastSpeedNarrowActiveFacet;
    NSProThemeFacet *_holdSpeedNarrowActiveFacet;
    NSProThemeFacet *_reversePatternFacet;
    NSProThemeFacet *_menuIndicatorFacet;
    NSProThemeFacet *_menuIndicatorActiveFacet;
    struct CGSize _themeFacetImageSize;
    struct CGSize _themeFacetBottomLeft;
    struct CGSize _themeFacetTopRight;
    struct CGSize _reversePatternSize;
    float _grabberWidth;
    float _menuIndicatorWidth;
    CALayer *_controlTrackLayer;
}

- (void)syntheticUIElement:(id)arg1 performAction:(id)arg2;
- (id)syntheticUIElementActions:(id)arg1;
- (void)syntheticUIElement:(id)arg1 setValue:(id)arg2 forAttribute:(id)arg3;
- (BOOL)syntheticUIElement:(id)arg1 isAttributeSettable:(id)arg2;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)syntheticUIElementAttributeNames:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)_accessibilityChildren;
- (struct CGRect)proposedAccessibilityScreenRect;
- (id)_sourceHandleElement;
- (id)_sourceHandleLayer;
- (id)_speedHandleElement;
- (id)_speedHandleLayer;
- (id)_mascotElement;
- (id)_controlTrackElement;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)segmentMenu;
- (void)_buildReverseMenuItems:(id)arg1;
- (void)_buildReverseSlowMotionMenuItem:(id)arg1;
- (void)_buildReverseFastMenuItem:(id)arg1;
- (void)applyReverse20xSpeed:(id)arg1;
- (void)applyReverseEightTimesSpeed:(id)arg1;
- (void)applyReverseFourTimesSpeed:(id)arg1;
- (void)applyReverseDoubleSpeed:(id)arg1;
- (void)applyReverseTenPercentSpeed:(id)arg1;
- (void)applyReverseQuarterSpeed:(id)arg1;
- (void)applyReverseHalfSpeed:(id)arg1;
- (void)applyReverseNormalSpeed:(id)arg1;
- (void)_buildSmoothEndTransitionMenuItem:(id)arg1;
- (BOOL)isHoldSegment;
- (BOOL)smoothEndTransitionPossible;
- (BOOL)smoothEndTransition;
- (BOOL)smoothTransitionInterpolation;
- (void)toggleSmoothEndTransition:(id)arg1;
- (void)_buildChangeEndSourceFrameMenuItems:(id)arg1;
- (void)toggleEndSourceFramePicker:(id)arg1;
- (id)_retimeEditorLayer;
- (void)_buildCustomMenuItem:(id)arg1;
- (void)_buildForwardMenuItems:(id)arg1;
- (void)_buildSlowMotionMenuItem:(id)arg1;
- (void)_buildFastForwardMenuItem:(id)arg1;
- (void)applyCustom:(id)arg1;
- (void)apply20xSpeed:(id)arg1;
- (void)applyEightTimesSpeed:(id)arg1;
- (void)applyFourTimesSpeed:(id)arg1;
- (void)applyDoubleSpeed:(id)arg1;
- (void)applyTenPercentSpeed:(id)arg1;
- (void)applyQuarterSpeed:(id)arg1;
- (void)applyHalfSpeed:(id)arg1;
- (void)applyNormalSpeed:(id)arg1;
- (void)applySetRatePreset:(double)arg1;
- (void)layoutSublayers;
- (void)updateItemRect:(struct CGRect)arg1;
- (struct CGRect)visibleRect;
- (void)setVisibleRect:(struct CGRect)arg1;
- (struct CGRect)rect;
- (void)setRect:(struct CGRect)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (void)setExtrapolationString:(id)arg1;
- (void)setLastVisibleSegment:(BOOL)arg1;
- (BOOL)lastVisibleSegment;
- (void)setEndKeyIndex:(int)arg1;
- (int)endKeyIndex;
- (int)globalIndex;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)timeRange;
- (void)setSpeedValue:(double)arg1;
- (double)speedValue;
- (void)deselectSpeedLabel;
- (void)selectSpeedLabel;
- (BOOL)isSelected;
- (id)menuIndicatorLayer;
- (BOOL)pointInMenuIndicatorRect:(struct CGPoint)arg1;
- (BOOL)pointInSpeedLabelRect:(struct CGPoint)arg1;
- (void)setShowSmoothEndTransitionMenu:(BOOL)arg1;
- (BOOL)showSmoothEndTransitionMenu;
- (void)setShowGrabber:(BOOL)arg1;
- (BOOL)showGrabber;
- (BOOL)mascotLayerHasTheme;
- (BOOL)mascotLayerHidden;
- (float)mascotLayerWidth;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)dealloc;
- (id)initWithItem:(id)arg1 rect:(struct CGRect)arg2 itemRect:(struct CGRect)arg3 module:(id)arg4 globalIndex:(int)arg5 visibleIndex:(int)arg6 lastSegment:(BOOL)arg7;

@end

