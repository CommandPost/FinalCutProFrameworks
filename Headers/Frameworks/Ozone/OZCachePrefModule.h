//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferencesModule.h"

@class LKBox, NSButton, NSMatrix, NSPopUpButton, NSTextField;

@interface OZCachePrefModule : NSProPreferencesModule
{
    NSTextField *_pProjectCacheTF;
    NSButton *_pFootageCachingButton;
    NSButton *_pAutosaveButton;
    NSTextField *_pAutosaveIntervalTF;
    NSTextField *_pAutosaveCopiesPerProjectTF;
    NSTextField *_pAutosaveMaxProjectsTF;
    NSTextField *_pAutosaveVaultPathTF;
    LKBox *_pAutosaveSettingsContainer;
    NSPopUpButton *_pFreezePresetPopUp;
    NSPopUpButton *_pFreezeUpdatingPopUp;
    NSMatrix *_pFreezeCacheLimitMatrix;
    NSTextField *_pFreezeCacheMaxSizeTF;
    NSPopUpButton *_pFreezeCacheMaxSizePopUp;
    NSTextField *_pFreezeCachePathTF;
    NSMatrix *_pOpticalFlowCacheMatrix;
    NSTextField *_pOpticalFlowCachePathTF;
    NSButton *_pDeleteRetimingCacheButton;
}

- (void)revealRetimingCache:(id)arg1;
- (void)deleteRetimingCache:(id)arg1;
- (void)chooseOpticalFlowCachePath:(id)arg1;
- (void)setOpticalFlowCacheMode:(id)arg1;
- (void)buildPresetList;
- (void)deleteFreezeCache:(id)arg1;
- (BOOL)_alertDeleteFreezeCache;
- (void)chooseFreezeCachePath:(id)arg1;
- (void)setFreezeCacheSizeUnit:(id)arg1;
- (void)setFreezeCacheSize:(id)arg1;
- (void)setFreezeCacheLimit:(id)arg1;
- (void)setFreezeUpdating:(id)arg1;
- (void)setFreezePreset:(id)arg1;
- (void)recursiveEnable:(BOOL)arg1 view:(id)arg2;
- (void)resetAutosaveVaultPath:(id)arg1;
- (void)chooseAutosaveVaultPath:(id)arg1;
- (void)setAutosaveMaxProjects:(id)arg1;
- (void)setAutosaveCopiesPerProject:(id)arg1;
- (void)setAutosaveInterval:(id)arg1;
- (void)setAutosave:(id)arg1;
- (void)setCacheFootageFlag:(id)arg1;
- (void)setProjectCacheSize:(id)arg1;
- (BOOL)isResizable;
- (void)initializeFromDefaults;

@end

