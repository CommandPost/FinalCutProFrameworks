//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSPopUpButton, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface FFQTMovieExportDialogController : NSViewController
{
    NSPopUpButton *_renderFormatMenu;
    NSTextField *_videoSettingsLabel;
    NSString *_videoFormatString;
    NSString *_audioFormatString;
}

- (id)selectedRenderFormat;
- (void)renderFormatMenuAction:(id)arg1;
- (void)dealloc;
- (id)initWithSequence:(id)arg1;

@end

