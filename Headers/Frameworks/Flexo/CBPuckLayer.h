//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayer.h>

@class CBPuckController;

__attribute__((visibility("hidden")))
@interface CBPuckLayer : FFResponderLayer
{
    BOOL _enabled;
    BOOL _inMouseEvent;
    BOOL _allowPositionAnimation;
    struct CGPoint _mouseDownPoint;
    struct CGPoint _mouseDownOffset;
    CBPuckController *_puckController;
}

- (id)initWithPuckController:(id)arg1;
- (void)dealloc;
- (int)boardType;
- (void)becomeFocusOwner;
- (void)resignFocusOwner;
- (void)addNotificationObservers;
- (void)notificationHandler:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragCanceled:(id)arg1;
- (void)setupLayer;
- (id)actionForKey:(id)arg1;
- (void)setPosition:(struct CGPoint)arg1 withAnimation:(BOOL)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (void)nudgePuck:(struct CGPoint)arg1;
- (void)removeLayerFromPuckController;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawNormalPuckImage;
- (void)drawDisabledPuckImage;
- (void)drawPressedPuckImage;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
@property(retain, nonatomic) CBPuckController *puckController; // @synthesize puckController=_puckController;
@property(nonatomic) struct CGPoint mouseDownOffset; // @synthesize mouseDownOffset=_mouseDownOffset;
@property(nonatomic) struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=_mouseDownPoint;
@property(nonatomic) BOOL allowPositionAnimation; // @synthesize allowPositionAnimation=_allowPositionAnimation;
@property(nonatomic) BOOL inMouseEvent; // @synthesize inMouseEvent=_inMouseEvent;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;

@end

