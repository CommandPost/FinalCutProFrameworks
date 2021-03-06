//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFResponderLayerButton.h>

__attribute__((visibility("hidden")))
@interface FFResponderLayerDisclosureButton : FFResponderLayerButton
{
    long long _state;
    BOOL _animationInProgress;
    BOOL _restoreToRolloverState;
    id _target;
    SEL _action;
}

@property(nonatomic) long long state; // @synthesize state=_state;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)_restoreThemeStateAfterAcutation;
- (void)mouseExited:(id)arg1;
- (BOOL)mouseEntered:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (void)_handleButtonActuated;
- (void)setPressedHandlerWithTarget:(id)arg1 action:(SEL)arg2;
- (void)configureWithState:(long long)arg1;

@end

