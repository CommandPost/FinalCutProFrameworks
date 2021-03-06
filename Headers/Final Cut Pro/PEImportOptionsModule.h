//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

@class FFEventRecord, FFImportTapeModule, FFLibrary, FFRoleGroupOverridePopupController, LKButton, LKPopUpButton, LKTextField, NSArray, NSMatrix, PEImportOptionsBox, PEImportOptionsScrollingView;

@interface PEImportOptionsModule : LKViewModule
{
    PEImportOptionsScrollingView *_scrollingView;
    NSMatrix *_eventRadioButtonMatrix;
    LKPopUpButton *_eventPopUpMenu;
    LKPopUpButton *_libraryPopUpMenu;
    LKTextField *_newEventNameTextField;
    PEImportOptionsBox *_filesBox;
    NSMatrix *_importLocationRadioButtonMatrix;
    LKButton *_finderTagKeywordsCheckBox;
    LKButton *_folderKeywordsCheckBox;
    PEImportOptionsBox *_analyzeVideoBox;
    LKButton *_removePulldownVideoCheckBox;
    LKButton *_balanceColorVideoCheckBox;
    LKButton *_findPeopleKeywordsCheckBox;
    LKButton *_findPeopleConsolidateKeywordsCheckBox;
    LKButton *_smartCollectionKeywordsCheckBox;
    LKButton *_optimizeMediaTranscodingCheckBox;
    LKButton *_proxyMediaTranscodingCheckBox;
    LKButton *_createProResProxyRadioButton;
    LKButton *_createH264ProxyRadioButton;
    LKPopUpButton *_proxySizingPopup;
    PEImportOptionsBox *_analyzeAudioBox;
    LKButton *_fixAudioCheckBox;
    LKButton *_groupAudioCheckBox;
    LKButton *_removeSilentChannelsAudioCheckBox;
    LKPopUpButton *_roleGroupOverridePopUpMenu;
    LKButton *_useTrackNamesFromMetadataCheckBox;
    BOOL _shouldCreateNewEvent;
    BOOL _noValue;
    BOOL _hasOptimizableClips;
    BOOL _hasClipsWithPulldown;
    BOOL _hasFileSystemItems;
    BOOL _hasREDClips;
    BOOL _observingTranscodingCheckBoxes;
    BOOL _observingAudioRoleGroupOverride;
    FFLibrary *_targetImportLibrary;
    FFEventRecord *_selectedEventRecord;
    FFLibrary *_selectedLibraryForNewEvent;
    FFImportTapeModule *_tapeModule;
    NSArray *_allOptionsBoxes;
    FFRoleGroupOverridePopupController *_roleGroupOverridePopupController;
}

@property(retain, nonatomic) FFRoleGroupOverridePopupController *roleGroupOverridePopupController; // @synthesize roleGroupOverridePopupController=_roleGroupOverridePopupController;
@property(nonatomic) BOOL observingAudioRoleGroupOverride; // @synthesize observingAudioRoleGroupOverride=_observingAudioRoleGroupOverride;
@property(nonatomic) BOOL observingTranscodingCheckBoxes; // @synthesize observingTranscodingCheckBoxes=_observingTranscodingCheckBoxes;
@property(retain, nonatomic) NSArray *allOptionsBoxes; // @synthesize allOptionsBoxes=_allOptionsBoxes;
@property(nonatomic) BOOL hasREDClips; // @synthesize hasREDClips=_hasREDClips;
@property(nonatomic) BOOL hasFileSystemItems; // @synthesize hasFileSystemItems=_hasFileSystemItems;
@property(nonatomic) BOOL hasClipsWithPulldown; // @synthesize hasClipsWithPulldown=_hasClipsWithPulldown;
@property(nonatomic) BOOL hasOptimizableClips; // @synthesize hasOptimizableClips=_hasOptimizableClips;
@property(retain, nonatomic) FFImportTapeModule *tapeModule; // @synthesize tapeModule=_tapeModule;
@property(nonatomic) BOOL noValue; // @synthesize noValue=_noValue;
@property(nonatomic) BOOL shouldCreateNewEvent; // @synthesize shouldCreateNewEvent=_shouldCreateNewEvent;
@property(retain, nonatomic) FFLibrary *selectedLibraryForNewEvent; // @synthesize selectedLibraryForNewEvent=_selectedLibraryForNewEvent;
@property(retain, nonatomic) FFEventRecord *selectedEventRecord; // @synthesize selectedEventRecord=_selectedEventRecord;
@property(retain, nonatomic) FFLibrary *targetImportLibrary; // @synthesize targetImportLibrary=_targetImportLibrary;
- (void)showREDTranscodeCheckBoxSheet:(BOOL)arg1;
- (void)stopObservingTranscodingCheckBoxes;
- (void)startObservingTranscodingCheckBoxes;
- (void)showHideButtonClicked:(id)arg1;
- (void)updateTargetInfoForSelectedItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)importOrganizerModule;
- (BOOL)validateOptions:(BOOL)arg1;
- (void)eventRadioButtonClicked:(id)arg1;
- (void)updateCopyToLibraryRadioButton;
- (void)roleGroupSelected:(id)arg1;
- (void)eventSelected:(id)arg1;
- (void)librarySelected:(id)arg1;
- (void)_updateRoleGroupOverridePopup;
- (BOOL)validateMenuItem:(id)arg1;
- (void)rebuildEventMenus;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (id)allControls;
- (void)bindCheckBox:(id)arg1 toUserDefaultsKey:(id)arg2;
- (void)takeGeometryLayoutFromDictionary:(id)arg1;
- (void)dealloc;

@end

