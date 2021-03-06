//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <LunaKit/NSPopoverDelegate-Protocol.h>

@class NSButton, NSImage, NSImageView, NSPopover, NSString, NSTextField;

@interface LKWarningPreviewController : NSViewController <NSPopoverDelegate>
{
    NSString *_userDefaultsKey;
    NSString *_message;
    NSImage *_iconImage;
    NSImageView *_iconImageView;
    NSTextField *_messageTextField;
    NSButton *_dissmissButton;
    NSPopover *_hostingPopover;
}

- (void)dealloc;
- (void)popoverDidClose:(id)arg1;
- (void)_closeMe:(id)arg1;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)viewDidLoad;
- (id)initWithMessage:(id)arg1 userDefaultsKey:(id)arg2 iconImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

