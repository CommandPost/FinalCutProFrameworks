//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTextField.h"

@class NSView, OZLabelTextPulsator, OZViewController;

@interface OZLabelText : LKTextField
{
    OZViewController *_pController;
    BOOL _isDropTarget;
    BOOL _isHUD;
    BOOL _shouldDoMenu;
    BOOL _isDoingMenu;
    NSView *_pRetargetedView;
    BOOL _isRetargetting;
    OZLabelTextPulsator *_pPulsator;
}

+ (Class)animStatusClass;
- (struct OZChannelBase *)excludeChanForChanBase:(struct OZChannelBase *)arg1;
- (void)setIsBold:(BOOL)arg1;
- (void)setAnimStatusClass:(Class)arg1;
- (void)setController:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)mouseDown:(id)arg1;
- (id)findRetargetedViewForEvent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setShouldDoMenu:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (void)stopPulsing;
- (void)startPulsing;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setStringValue:(id)arg1 andAlignment:(unsigned long long)arg2;
- (void)setStringValue:(id)arg1;
- (void)dealloc;
- (void)setHidden:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;

@end

