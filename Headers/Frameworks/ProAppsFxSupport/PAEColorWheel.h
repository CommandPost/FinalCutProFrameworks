//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <ProAppsFxSupport/CALayerDelegate-Protocol.h>

@class NSString;

@interface PAEColorWheel : NSControl <CALayerDelegate>
{
    id _target;
    SEL _action;
    NSString *_label;
    long long _phase;
    double _radiusValue;
    double _thetaValue;
    double _saturationValue;
    double _lightValue;
    double _sliderMinMaxRange;
    double _vectorNormalSpeed;
    long long _thumbControlLook;
    long long _eyeDropperState;
    void *_paeftcw_priv;
    struct {
        unsigned int saturationControlHidden:1;
        unsigned int eyeDropperHidden:1;
        unsigned int indicatorHidden:1;
        unsigned int labelHidden:1;
        unsigned int grabbedThumb:1;
    } _cw_flags;
    struct {
        double radius;
        double theta;
        double r;
        double g;
        double b;
    } _indicator;
}

+ (id)colorWheelWithLabel:(id)arg1;
+ (id)colorWheel;
@property double vectorNormalSpeed; // @synthesize vectorNormalSpeed=_vectorNormalSpeed;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)syntheticUIElement:(id)arg1 performAction:(id)arg2;
- (id)syntheticUIElementActions:(id)arg1;
- (void)syntheticUIElement:(id)arg1 setValue:(id)arg2 forAttribute:(id)arg3;
- (BOOL)syntheticUIElement:(id)arg1 isAttributeSettable:(id)arg2;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_accessiblityUnignoredChildren;
- (id)_lightIndicatorUIElement;
- (id)_saturationIndicatorUIElement;
- (id)_vectorIndicatorUIElement;
- (id)_resetButtonUIElement;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)selectNextPuck:(id)arg1;
- (void)selectPreviousPuck:(id)arg1;
- (void)_selectPreviousPart;
- (void)_selectNextPart;
- (void)resetWheel;
- (void)resetSelectedPuck:(id)arg1;
- (void)delete:(id)arg1;
- (void)_resetSelectedPart;
- (void)gotoHeadOfPlayRange:(id)arg1;
- (void)gotoTailOfPlayRange:(id)arg1;
- (void)nextFrame:(id)arg1;
- (void)previousFrame:(id)arg1;
- (void)nudgePuckLeft:(id)arg1;
- (void)stepBackward:(id)arg1;
- (void)nudgePuckRight:(id)arg1;
- (void)stepForward:(id)arg1;
- (void)nudgePuckDown:(id)arg1;
- (void)down:(id)arg1;
- (void)nudgePuckUp:(id)arg1;
- (void)up:(id)arg1;
- (void)_moveSelectedPart:(int)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_trackMouseOnTangent:(id)arg1 setter:(SEL)arg2 valueKeyPath:(id)arg3 scale:(double)arg4 rangeScale:(double)arg5 sliderMinMaxRange:(double)arg6 currentValue:(double)arg7 defaultValue:(double)arg8 minValue:(double)arg9 maxValue:(double)arg10 controlCenterPoint:(const struct CGPoint *)arg11 controlWidthInRadians:(double)arg12 inverted:(BOOL)arg13 thumbSelected:(char *)arg14 shouldMakeFirstResponder:(char *)arg15;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_makeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)_setPart:(int)arg1 highlighted:(BOOL)arg2;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)removeFromSuperview;
- (void)viewDidUnhide;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
@property(getter=isLabelHidden) BOOL labelHidden; // @dynamic labelHidden;
@property(getter=isIndicatorHidden) BOOL indicatorHidden; // @dynamic indicatorHidden;
- (void)_setIndicatorHidden:(BOOL)arg1;
@property(getter=saturationControlIsHidden) BOOL saturationControlHidden; // @dynamic saturationControlHidden;
- (void)setIndicatorRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (void)setIndicatorRadius:(double)arg1 theta:(double)arg2;
- (struct CGPoint)controlPoint;
@property long long thumbControlLook; // @dynamic thumbControlLook;
@property double sliderMinMaxRange; // @dynamic sliderMinMaxRange;
@property double lightValue; // @dynamic lightValue;
- (void)_setLightObjectValue:(id)arg1;
- (void)_setLightValue:(double)arg1;
@property double saturationValue; // @dynamic saturationValue;
- (void)_setSaturationObjectValue:(id)arg1;
- (void)_setSaturationValue:(double)arg1;
@property double thetaValue; // @dynamic thetaValue;
- (void)_setThetaValue:(double)arg1;
@property double radiusValue; // @dynamic radiusValue;
- (void)_setRadiusValue:(double)arg1;
@property long long phase; // @dynamic phase;
- (id)_colorWheelLayer;
@property(copy, nonatomic) NSString *label; // @dynamic label;
- (void)_setupToolTipRects;
- (id)_labelLayer;
- (struct CGRect)_resetButtonRect;
- (id)_resetButtonLayer;
- (struct CGRect)_wheelBoundingBox;
- (void)_redisplayLightElements;
- (void)_redisplaySaturationElements;
- (void)_redisplayRadiusThetaElements;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLabel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

