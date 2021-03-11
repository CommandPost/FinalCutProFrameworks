//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTextField, NSWindow;

@interface LKCommandDialogManager : NSObject
{
    NSWindow *_renameDialog;
    NSTextField *_renameField;
    NSWindow *_currentDialog;
    long long _renameReturnCode;
}

+ (id)defaultManager;
- (void)accept:(id)arg1;
- (void)cancel:(id)arg1;
- (BOOL)_validateCommandSetRename;
- (id)runCommandSetRenameDialog:(id)arg1 modalForWindow:(id)arg2;

@end

