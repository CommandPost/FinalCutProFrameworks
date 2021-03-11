//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSProgressIndicator, NSTextField, NSWindow;

@interface FFProgressSheetController : NSWindowController
{
    NSTextField *_progressHeaderField;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressMessageField;
    NSButton *_cancelButton;
    NSWindow *_hostWindow;
    struct _NSModalSession *_session;
}

- (void)idle;
- (void)endProgressSheet;
- (void)beginProgressSheetForWindow:(id)arg1 withTitle:(id)arg2 message:(id)arg3 cancelTarget:(id)arg4 cancelAction:(SEL)arg5 indeterminate:(BOOL)arg6;
- (void)setCancelAction:(SEL)arg1;
- (void)_hideCancelButton;
- (void)setCancelTarget:(id)arg1;
- (void)setShowsIndeterminateProgress:(BOOL)arg1;
- (id)cancelButton;
- (id)progressIndicator;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)windowDidLoad;
- (id)init;

@end

