//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKButton.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface FFTransportLongPressButton : LKButton
{
    BOOL _repeatsLongPressAction;
    BOOL _isPressed;
    BOOL _isLongPress;
    SEL _longPressAction;
    SEL _shortPressAction;
    double _minLongPressTimeInterval;
    NSTimer *_longPressTimer;
}

@property(nonatomic) NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property(nonatomic) BOOL isLongPress; // @synthesize isLongPress=_isLongPress;
@property(nonatomic) BOOL isPressed; // @synthesize isPressed=_isPressed;
@property(nonatomic) BOOL repeatsLongPressAction; // @synthesize repeatsLongPressAction=_repeatsLongPressAction;
@property(nonatomic) double minLongPressTimeInterval; // @synthesize minLongPressTimeInterval=_minLongPressTimeInterval;
@property(nonatomic) SEL shortPressAction; // @synthesize shortPressAction=_shortPressAction;
@property(nonatomic) SEL longPressAction; // @synthesize longPressAction=_longPressAction;
- (void)_sendLongPressAction:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

