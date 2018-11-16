//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class LKSplashView, NSButton, NSTextField, NSView, NSWindow;

@interface LKAboutPanel : NSObject <NSWindowDelegate>
{
    NSWindow *_panel;
    LKSplashView *_splashView;
    NSView *_aboutView;
    NSTextField *_versionText;
    NSTextField *_copyrightText;
    NSTextField *_statusText;
    NSButton *_closeButton;
    BOOL _isSplash;
}

+ (id)sharedAboutPanel;
- (void)dealloc;
- (id)versionString;
- (id)buildVersionString;
- (void)orderFrontSplash:(id)arg1;
- (void)orderOutSplash:(id)arg1;
- (void)orderFrontAboutPanel:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)orderOutAboutPanel:(id)arg1;
- (void)showLicenseAgreement:(id)arg1;
- (void)showAcknowledgements:(id)arg1;
- (void)toggleAlternateVersion:(id)arg1;
- (void)loadNib;
- (void)updateNib;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
@property BOOL isSplash; // @synthesize isSplash=_isSplash;

@end
