//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferencesModule.h"

@class LKButton, LKButtonCell, NSButton, NSMatrix, NSPopUpButton, NSTextField, OZColorWell;

@interface OZProjectPrefModule : NSProPreferencesModule
{
    NSTextField *_pProjectDurTF;
    NSPopUpButton *_pProjectDurPopUp;
    OZColorWell *_pProjectBackgroundColor;
    NSMatrix *_pObjectDurMatrix;
    NSTextField *_pStillDurTF;
    NSPopUpButton *_pStillDurPopUp;
    NSButton *_pScaleLargeStills;
    NSMatrix *_pCreateObjectAtMatrix;
    NSMatrix *_pNewProjectMatrix;
    LKButton *_chooseDocumentButton;
    LKButtonCell *_newProjectLabelCell;
}

- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)setNewProjectCellLabel;
- (void)chooseDocument:(id)arg1;
- (void)setNewProjectPref:(id)arg1;
- (void)setupDurationFormatterForTextField:(id)arg1 isDisplayingInFrames:(BOOL)arg2;
- (void)setScaleLargeImages:(id)arg1;
- (void)setCreateObjectAt:(id)arg1;
- (void)setStillDurationFormat:(id)arg1;
- (void)setStillDuration:(id)arg1;
- (void)setObjectDurMode:(id)arg1;
- (void)setProjectBackgroundColor:(id)arg1;
- (void)setProjectDurationFormat:(id)arg1;
- (void)setProjectDuration:(id)arg1;
- (BOOL)isResizable;
- (void)initializeFromDefaults;

@end

