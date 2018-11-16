//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFShareDestinationController.h>

#import "NSSaveRolePresetAsPanelDelegate.h"

@class LKTextField, NSArrayController, NSPopUpButton, NSString, NSURL, NSView;

@interface FFShareDestinationExportMediaController : FFShareDestinationController <NSSaveRolePresetAsPanelDelegate>
{
    NSURL *_userRolePresetsDirectoryURL;
    NSURL *_oldUserRolePresetsDirectoryURL;
    BOOL _observing;
    BOOL _replaceExistingRolePreset;
    NSPopUpButton *_exportPopUpButton;
    NSPopUpButton *_videoPresetPopUpButton;
    NSPopUpButton *_videoResolutionPopUpButton;
    NSPopUpButton *_colorSpacePopUpButton;
    NSPopUpButton *_audioPresetPopUpButton;
    NSPopUpButton *_openWithPopUpButton;
    NSPopUpButton *_rolePresetPopUpButton;
    NSArrayController *_roleOutputsController;
    LKTextField *_videoPresetTextField;
    LKTextField *_videoResolutionTextField;
    LKTextField *_colorSpaceTextField;
    LKTextField *_audioPresetTextField;
    NSView *_rolesView;
    NSView *_roleOutputsView;
    LKTextField *_projectionTypeTextField;
    LKTextField *_projectionTypeLabelTextField;
}

+ (id)keyPathsForValuesAffectingMultipassIndex;
+ (id)keyPathsForValuesAffectingActionMenuLabelName;
+ (id)keyPathsForValuesAffectingCanIncludeChapter;
+ (id)keyPathsForValuesAffectingCanAddAudioRoleOutput;
+ (id)keyPathsForValuesAffectingCanAddVideoRoleOutput;
+ (id)keyPathsForValuesAffectingAddAudioRoleOutputLabel;
+ (id)keyPathsForValuesAffectingAddVideoRoleOutputLabel;
@property(nonatomic) BOOL replaceExistingRolePreset; // @synthesize replaceExistingRolePreset=_replaceExistingRolePreset;
@property LKTextField *projectionTypeLabelTextField; // @synthesize projectionTypeLabelTextField=_projectionTypeLabelTextField;
@property LKTextField *projectionTypeTextField; // @synthesize projectionTypeTextField=_projectionTypeTextField;
@property(nonatomic) NSView *roleOutputsView; // @synthesize roleOutputsView=_roleOutputsView;
@property(nonatomic) NSView *rolesView; // @synthesize rolesView=_rolesView;
@property(nonatomic) LKTextField *audioPresetTextField; // @synthesize audioPresetTextField=_audioPresetTextField;
@property(nonatomic) LKTextField *colorSpaceTextField; // @synthesize colorSpaceTextField=_colorSpaceTextField;
@property(nonatomic) LKTextField *videoResolutionTextField; // @synthesize videoResolutionTextField=_videoResolutionTextField;
@property(nonatomic) LKTextField *videoPresetTextField; // @synthesize videoPresetTextField=_videoPresetTextField;
@property(nonatomic) NSArrayController *roleOutputsController; // @synthesize roleOutputsController=_roleOutputsController;
@property(nonatomic) NSPopUpButton *rolePresetPopUpButton; // @synthesize rolePresetPopUpButton=_rolePresetPopUpButton;
@property(nonatomic) NSPopUpButton *openWithPopUpButton; // @synthesize openWithPopUpButton=_openWithPopUpButton;
@property(nonatomic) NSPopUpButton *audioPresetPopUpButton; // @synthesize audioPresetPopUpButton=_audioPresetPopUpButton;
@property(nonatomic) NSPopUpButton *colorSpacePopUpButton; // @synthesize colorSpacePopUpButton=_colorSpacePopUpButton;
@property(nonatomic) NSPopUpButton *videoResolutionPopUpButton; // @synthesize videoResolutionPopUpButton=_videoResolutionPopUpButton;
@property(nonatomic) NSPopUpButton *videoPresetPopUpButton; // @synthesize videoPresetPopUpButton=_videoPresetPopUpButton;
@property(nonatomic) NSPopUpButton *exportPopUpButton; // @synthesize exportPopUpButton=_exportPopUpButton;
@property(nonatomic, getter=isObserving) BOOL observing; // @synthesize observing=_observing;
@property(retain, nonatomic) NSURL *oldUserRolePresetsDirectoryURL; // @synthesize oldUserRolePresetsDirectoryURL=_oldUserRolePresetsDirectoryURL;
@property(retain, nonatomic) NSURL *userRolePresetsDirectoryURL; // @synthesize userRolePresetsDirectoryURL=_userRolePresetsDirectoryURL;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (BOOL)panel:(id)arg1 validateName:(id)arg2 error:(id *)arg3;
- (void)setConformingSettings:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)validateMenuItem:(id)arg1;
- (struct CGSize)optimalVideoResolution;
- (BOOL)canIncludeChapter;
- (BOOL)canAddAudioRoleOutput;
- (BOOL)canAddVideoRoleOutput;
- (id)addAudioRoleOutputLabel;
- (id)addVideoRoleOutputLabel;
- (void)saveUserRolePresets;
- (void)loadUserRolePresets;
- (id)readUserRolePresetsFromDirectoryURL:(id)arg1;
- (void)setMultipassIndex:(long long)arg1;
- (long long)multipassIndex;
@property(readonly) NSString *actionMenuLabelName;
- (void)addRecentApplication:(id)arg1;
- (id)recentApplications;
- (void)updateVideoStompSetting:(id)arg1;
- (void)updateRolesOutputView;
- (void)updateRolePresetsMenu;
- (void)updateApplicationMenu;
- (void)updateIncludeChapter;
- (void)updateAudioPresetsMenu;
- (void)updateColorSpaceMenu;
- (void)updateProjectionTypeFields;
- (void)setDoesntFitWarning;
- (id)_renderFormatForStompSetting:(id)arg1;
- (void)updateVideoResolutionMenu;
- (void)updateVideoPresetsMenu;
- (void)updateExportMenu;
- (void)showUserRolePresetsInFinder:(id)arg1;
- (void)deleteRolePreset:(id)arg1;
- (void)renameRolePreset:(id)arg1;
- (void)saveRolePresetAs:(id)arg1;
- (void)saveRolePreset:(id)arg1;
- (void)addAudioRoleOutput:(id)arg1;
- (void)addVideoRoleOutput:(id)arg1;
- (void)selectRolePreset:(id)arg1;
- (void)chooseApplication:(id)arg1;
- (void)selectAction:(id)arg1;
- (void)selectAudioPreset:(id)arg1;
- (void)selectColorSpace:(id)arg1;
- (void)selectVideoResolution:(id)arg1;
- (void)selectVideoPreset:(id)arg1;
- (void)selectExportOption:(id)arg1;
- (BOOL)displaysDeviceCompatibilityInfo;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithDestination:(id)arg1 withSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

