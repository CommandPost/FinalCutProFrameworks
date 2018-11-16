//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferencesModule.h"

@class NSButton, NSPopUpButton, NSSlider;

@interface OZGeneralPrefModule : NSProPreferencesModule
{
    NSPopUpButton *_pStartupPopUp;
    NSSlider *_pDropPaletteDelay;
    NSButton *_pShowToolTipsButton;
    NSButton *_pLibraryCreateIcons;
    NSPopUpButton *_pLibraryDisplayFolders;
    NSButton *_pLibraryClickToPlay;
    NSButton *_pRemoveUnusedMediaButton;
}

- (void)toggleRemoveUnusedMedia:(id)arg1;
- (void)setLibraryClickToPlay:(id)arg1;
- (void)setLibraryFolderDisplay:(id)arg1;
- (void)setLibraryCreateIcons:(id)arg1;
- (void)setShowToolTipsFlag:(id)arg1;
- (void)setDropPaletteDelay:(id)arg1;
- (void)setStartupAction:(id)arg1;
- (BOOL)isResizable;
- (void)initializeFromDefaults;

@end

