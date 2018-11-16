//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSProgressIndicator, NSTextField;

__attribute__((visibility("hidden")))
@interface FFProgressSheetController : NSWindowController
{
    NSTextField *_progressHeaderField;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressMessageField;
    NSButton *_cancelButton;
}

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
