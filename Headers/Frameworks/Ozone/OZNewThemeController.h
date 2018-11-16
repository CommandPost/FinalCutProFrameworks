//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSTextField, TMTheme;

@interface OZNewThemeController : NSWindowController
{
    NSTextField *nameTextField;
    NSTextField *messageTextField;
    NSButton *createButton;
    TMTheme *_newTheme;
    BOOL _creatingTheme;
}

- (void)ThemeListDidChange:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)validateName;
- (void)create:(id)arg1;
- (void)cancel:(id)arg1;
- (id)newTheme;
- (void)openModalDialogue;
- (void)openModalSheetForWindow:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

@end

