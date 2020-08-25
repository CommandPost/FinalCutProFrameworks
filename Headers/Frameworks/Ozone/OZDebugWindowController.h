//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTabViewDelegate.h"

@class LKButton, LKPopUpButton, LKSlider, LKTextField, LKTextView, NSString, NSView;

@interface OZDebugWindowController : NSWindowController <NSTabViewDelegate>
{
    LKTextView *_textView;
    NSView *_tabParentView;
    NSView *_debugOptionsView;
    NSView *_loggingView;
    LKTextField *_templatePathTF;
    LKPopUpButton *_saveOptionsPopup;
    LKButton *_skipPreviewsButton;
    LKPopUpButton *_kernelType;
    LKSlider *_supersamples;
    LKTextField *_sceneHashTF;
    LKButton *_allowDropZoneAsPlaceholderButton;
    LKButton *_allowAnimatedStillsButton;
    LKButton *_doNotSaveUISettingsButton;
    LKButton *_enableMetalRenderingButton;
    LKButton *_enableMetalOSCsButton;
    LKButton *_reduceMetalShaderPrecisionButton;
    LKButton *_animalStyleButton;
}

+ (id)sharedController;
- (void)doNotSaveUISettings:(id)arg1;
- (void)allowAnimatedStills:(id)arg1;
- (void)allowDropZoneAsPlaceholder:(id)arg1;
- (void)updateSceneHash:(id)arg1;
- (void)skipTemplatePreviews:(id)arg1;
- (void)generateTemplatePreviews:(id)arg1;
- (void)chooseTemplatePath:(id)arg1;
- (void)updateDebugValues;
- (void)setLoggingOptions:(id)arg1;
- (void)setRenderingOptions:(id)arg1;
- (void)clearTextView:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

