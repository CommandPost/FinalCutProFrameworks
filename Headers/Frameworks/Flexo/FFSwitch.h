//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer, _SwitchLayer;

__attribute__((visibility("hidden")))
@interface FFSwitch : NSView
{
    id _target;
    SEL _action;
    long long _state;
    BOOL _enabled;
    _SwitchLayer *_controlLayer;
    CALayer *_maskLayer;
    _SwitchLayer *_grooveOnLayer;
    _SwitchLayer *_knobLayer;
    struct {
        unsigned int animateStateChanges:1;
    } _s_flags;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property SEL action; // @synthesize action=_action;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void)adjustKnobPositionWithAnimation:(BOOL)arg1;
- (void)updateLayersToEnableChange;
- (void)updateLayersToStateChangeWithAnimation:(BOOL)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)_sendAction;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)mouseDown:(id)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)sizeToFit;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)_teardownLayers;
- (void)_buildLayers;
@property(getter=isEnabled) BOOL enabled; // @dynamic enabled;
@property long long state; // @dynamic state;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

