//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class LKHUDTitlebarAccessoryViewController, NSVisualEffectView;

@interface LKWindow : NSWindow
{
    BOOL _useHUDStyle;
    BOOL _displayInspectorButton;
    NSVisualEffectView *_backgroundEffectView;
    LKHUDTitlebarAccessoryViewController *_toolBarViewController;
}

@property(nonatomic) BOOL displayInspectorButton; // @synthesize displayInspectorButton=_displayInspectorButton;
@property(nonatomic) BOOL useHUDStyle; // @synthesize useHUDStyle=_useHUDStyle;
- (BOOL)hasKeyAppearance;
- (void)endContainerViewFocusUpdate;
- (void)beginContainerViewFocusUpdate;
- (void)dealloc;
- (void)removeEffectView;
- (void)installEffectView;
- (void)setContentView:(id)arg1;
- (BOOL)_processKeyboardUIKey:(id)arg1;
- (void)_resetFirstResponder;
- (void)setToolbar:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)HUDMenu;
- (void)setHUDMenu:(id)arg1;
- (BOOL)snapsToEdges;
- (void)setSnapsToEdges:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 screen:(id)arg5;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (void)_makeHUD;
- (void)awakeFromNib;
- (void)_commonInit;

@end

