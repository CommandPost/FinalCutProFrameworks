//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorParameterController.h>

@class LKButton, NSAttributedString, NSImage, NSString, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorButtonParameterController : FFInspectorParameterController
{
    NSView *_view;
    NSString *_title;
    NSString *_alternateTitle;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedAlternateTitle;
    NSImage *_image;
    NSImage *_alternateImage;
    unsigned long long _imagePosition;
    unsigned long long _buttonType;
    long long _state;
    NSString *_keyEquivalent;
    unsigned long long _keyEquivalentModifierMask;
    long long _maxAcceleratorLevel;
    unsigned long long _bezelStyle;
    float _delay;
    float _interval;
    id _target;
    SEL _action;
    LKButton *_button;
    struct {
        unsigned int bordered:1;
        unsigned int transparent:1;
        unsigned int showsBorderOnlyWhileMouseInside:1;
        unsigned int allowsMixedState:1;
        unsigned int springLoaded:1;
        unsigned int enabled:1;
    } _ibpc_flags;
}

+ (double)verticalSpacingForButton;
+ (Class)cellClassForButton;
+ (Class)classForButton;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)view;
- (void)setPropertiesForControl:(id)arg1;
- (void)unbindControl:(id)arg1;
- (void)bindControl:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)controlValueForKey:(id)arg1;
- (void)setControlValue:(id)arg1 forKey:(id)arg2;
- (void)setControlFormatter:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (void)setPeriodicDelay:(float)arg1 interval:(float)arg2;
@property BOOL showsBorderOnlyWhileMouseInside; // @dynamic showsBorderOnlyWhileMouseInside;
@property BOOL allowsMixedState; // @dynamic allowsMixedState;
- (void)allowsMixedState:(BOOL)arg1;
@property unsigned long long bezelStyle; // @dynamic bezelStyle;
@property long long maxAcceleratorLevel; // @dynamic maxAcceleratorLevel;
@property(getter=isSpringLoaded) BOOL springLoaded; // @dynamic springLoaded;
@property unsigned long long keyEquivalentModifierMask; // @dynamic keyEquivalentModifierMask;
@property(copy, nonatomic) NSString *keyEquivalent; // @dynamic keyEquivalent;
@property(getter=isTransparent) BOOL transparent; // @dynamic transparent;
@property(getter=isEnabled) BOOL enabled; // @dynamic enabled;
@property(getter=isBordered) BOOL bordered; // @dynamic bordered;
@property long long state; // @dynamic state;
@property unsigned long long buttonType; // @dynamic buttonType;
@property unsigned long long imagePosition; // @dynamic imagePosition;
@property(nonatomic) NSImage *alternateImage; // @dynamic alternateImage;
@property(nonatomic) NSImage *image; // @dynamic image;
@property(copy, nonatomic) NSAttributedString *attributedAlternateTitle; // @dynamic attributedAlternateTitle;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @dynamic attributedTitle;
@property(copy, nonatomic) NSString *alternateTitle; // @dynamic alternateTitle;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;

@end

