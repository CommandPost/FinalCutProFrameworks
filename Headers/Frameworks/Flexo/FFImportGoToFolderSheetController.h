//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTextFieldDelegate.h"

@class FFImportOrganizerModule, NSButton, NSOperationQueue, NSProgressIndicator, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface FFImportGoToFolderSheetController : NSWindowController <NSTextFieldDelegate>
{
    NSTextField *_pathTextField;
    NSTextField *_errorTextField;
    NSProgressIndicator *_progressIndicator;
    NSButton *_goButton;
    NSButton *_cancelButton;
    FFImportOrganizerModule *_organizer;
    BOOL _userDeleted;
    BOOL _isAutoCompleting;
    BOOL _isSpinning;
    NSOperationQueue *_autoCompleteOperationQueue;
    NSOperationQueue *_goToURLOperationQueue;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancel:(id)arg1;
- (void)go:(id)arg1;
- (void)goToURLMainThread:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)dealloc;
- (id)initWithOrganizer:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

