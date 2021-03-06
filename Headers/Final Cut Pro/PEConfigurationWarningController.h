//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSWindow;

@interface PEConfigurationWarningController : NSWindowController
{
    NSWindow *_sheet;
    NSButton *_dontShowButton;
    NSButton *_okButton;
}

+ (BOOL)warnIfNecessary:(struct CGSize)arg1 inWindow:(id)arg2;
+ (void)setWarningPostponed:(BOOL)arg1;
+ (BOOL)warningPostponed;
+ (void)setWarningEnabled:(BOOL)arg1;
+ (BOOL)warningEnabled;
- (void)OK:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;

@end

