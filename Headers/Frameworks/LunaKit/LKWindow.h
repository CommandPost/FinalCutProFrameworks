//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class LKHUDTitlebarAccessoryViewController, NSVisualEffectView;

@interface LKWindow : NSWindow
{
    BOOL _useHUDStyle;
    BOOL _displayInspectorButton;
    NSVisualEffectView *_backgroundEffectView;
    LKHUDTitlebarAccessoryViewController *_toolBarViewController;
    int _HUDStyle;
    double _backgroundOpacity;
}

@property(nonatomic) double backgroundOpacity; // @synthesize backgroundOpacity=_backgroundOpacity;
@property(nonatomic) int HUDStyle; // @synthesize HUDStyle=_HUDStyle;
@property(nonatomic) BOOL displayInspectorButton; // @synthesize displayInspectorButton=_displayInspectorButton;
@property(nonatomic) BOOL useHUDStyle; // @synthesize useHUDStyle=_useHUDStyle;
- (BOOL)hasKeyAppearance;
- (void)endContainerViewFocusUpdate;
- (void)beginContainerViewFocusUpdate;
- (void)dealloc;
- (void)removeTranslucidView;
- (void)installTranslucidView:(float)arg1;
- (void)removeEffectView;
- (void)installEffectView;
- (void)setContentView:(id)arg1;
- (void)setLevel:(long long)arg1;
- (void)updateToHUDStyle;
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
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)makeKeyWindow;
- (void)orderFront:(id)arg1;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)_disableDesktopTinting;
- (void)_commonInit;

@end

