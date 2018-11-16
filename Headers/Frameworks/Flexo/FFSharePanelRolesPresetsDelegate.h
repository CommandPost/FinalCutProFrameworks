//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSaveRolePresetAsPanelDelegate.h"

@class CKSource, FFShareExportMediaDestination, NSPopUpButton, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FFSharePanelRolesPresetsDelegate : NSObject <NSSaveRolePresetAsPanelDelegate>
{
    BOOL _replaceExistingRolePreset;
    BOOL _isObservingDestination;
    NSURL *_userRolePresetsDirectoryURL;
    FFShareExportMediaDestination *_destination;
    CKSource *_source;
    NSPopUpButton *_rolesAsButton;
}

@property(retain, nonatomic) NSPopUpButton *rolesAsButton; // @synthesize rolesAsButton=_rolesAsButton;
@property(retain, nonatomic) CKSource *source; // @synthesize source=_source;
@property(retain, nonatomic) FFShareExportMediaDestination *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSURL *userRolePresetsDirectoryURL; // @synthesize userRolePresetsDirectoryURL=_userRolePresetsDirectoryURL;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)panel:(id)arg1 validateName:(id)arg2 error:(id *)arg3;
- (void)showUserRolePresetsInFinder:(id)arg1;
- (void)deleteRolePreset:(id)arg1;
- (void)renameRolePreset:(id)arg1;
- (void)saveRolePresetAs:(id)arg1;
- (void)saveRolePreset:(id)arg1;
- (void)selectRolePreset:(id)arg1;
- (void)saveUserRolePresets;
- (void)loadUserRolePresets;
- (id)readUserRolePresetsFromDirectoryURL:(id)arg1;
- (id)newRolesAsMenu;
- (void)populateMenu:(id)arg1 withPresets:(id)arg2;
- (void)updateRolesAsMenu;
- (void)syncPopUpButtonSelectionToCurrentRolePreset:(id)arg1;
- (BOOL)rolesAsButtonShouldBeEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingDestination;
- (void)startObservingDestination;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

