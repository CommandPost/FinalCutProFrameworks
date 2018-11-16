//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FFLibraryBackupInfo, FFLibraryBackupTask, NSAlert, NSPopUpButton;

__attribute__((visibility("hidden")))
@interface FFLibraryBackupChooser : NSView
{
    FFLibraryBackupTask *_controller;
    FFLibraryBackupInfo *_backup;
    NSAlert *_alert;
    NSPopUpButton *_popup;
}

+ (id)chooseBackup:(id)arg1;
@property(nonatomic) NSPopUpButton *popup; // @synthesize popup=_popup;
@property(nonatomic) NSAlert *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) FFLibraryBackupInfo *backup; // @synthesize backup=_backup;
@property(retain, nonatomic) FFLibraryBackupTask *controller; // @synthesize controller=_controller;
- (void)backupItemSelected:(id)arg1;
- (void)chooseOther:(id)arg1;
- (void)dealloc;

@end
