//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@class LKDFRController, NSString, NSVisualEffectView;

@interface LKPanel : NSPanel
{
    BOOL _useHUDStyle;
    LKDFRController *_dfrController;
    NSString *_dfrControllerClassName;
    NSVisualEffectView *_backgroundEffectView;
}

@property(retain, nonatomic) NSString *dfrControllerClassName; // @synthesize dfrControllerClassName=_dfrControllerClassName;
@property(retain, nonatomic) LKDFRController *dfrController; // @synthesize dfrController=_dfrController;
@property(nonatomic) BOOL useHUDStyle; // @synthesize useHUDStyle=_useHUDStyle;
- (void)setTitle:(id)arg1;
- (void)setToolbar:(id)arg1;
- (void)setSnapsToEdges:(BOOL)arg1;
- (BOOL)snapsToEdges;
- (void)dealloc;
- (void)_removeEffectView;
- (void)_installEffectView;
- (void)setContentView:(id)arg1;
- (id)touchBar;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)makeKeyWindow;
- (void)orderFront:(id)arg1;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)_disableDesktopTinting;
- (void)_commonInit;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 screen:(id)arg5;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

