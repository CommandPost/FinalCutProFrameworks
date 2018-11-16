//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTabModule.h"

#import "FFEditActionSourceProtocol.h"
#import "FFEffectLibraryModuleDelegate.h"
#import "FFOrganizerDelegate.h"
#import "FFOrganizerSkimmingDelegate.h"

@class FFContentBrowserWrapperModule, LKButton, LKTextField, NSNumber, NSString, NSView;

@interface PEMediaBrowserContainerModule : LKTabModule <FFEditActionSourceProtocol, FFOrganizerDelegate, FFOrganizerSkimmingDelegate, FFEffectLibraryModuleDelegate>
{
    NSNumber *_desiredModePostLayout;
    int _mode;
    FFContentBrowserWrapperModule *_contentBrowserModule;
    BOOL _hiddenAfterLayout;
    struct CGRect _desiredFrameAfterLayout;
    NSView *_accessoryViewBackground;
    LKTextField *_paneCapTitle;
    LKButton *_paneCapCategoryButton;
    NSView *_accessoryView;
    LKButton *_closeButton;
    LKButton *_4kFilterCheckBox;
    BOOL _observingTimeline;
}

- (struct CGRect)animationStartRectForEditAction:(id)arg1;
- (id)animationViewForEditAction:(id)arg1;
- (struct CGImage *)newAnimationImageForEditAction:(id)arg1;
- (BOOL)writeDataForEditAction:(id)arg1 toPasteboardWithName:(id)arg2;
- (id)dataForEditAction:(id)arg1;
- (BOOL)canSourceDataForEditAction:(id)arg1;
- (void)didFinishRelinkingForOrganizerModule:(id)arg1;
- (void)willBeginRelinkingForOrganizerModule:(id)arg1;
- (void)writeSelectionToPasteboard:(id)arg1;
- (void)module:(id)arg1 didDoubleClickWithEffect:(id)arg2;
- (void)module:(id)arg1 didDoubleClickWithEffectID:(id)arg2;
- (void)module:(id)arg1 setCategoryTextField:(id)arg2;
- (void)stopUsingMedia:(id)arg1;
- (void)setNoItemsInfoTextVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (id)organizerSelection;
- (id)timelineSelection;
- (id)selectionOwner;
- (void)organizerModule:(id)arg1 didSelectItems:(id)arg2;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
- (BOOL)canBeginPlaying;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginSkimming;
- (id)editorModule;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 loadingBlock:(CDUnknownBlockType)arg4 unloadingBlock:(CDUnknownBlockType)arg5;
- (id)organizerDelegate;
- (id)markerEditorDelegate;
- (id)skimmingDelegate;
- (void)makeSequenceActive:(id)arg1;
- (void)makeProjectActive:(id)arg1;
- (BOOL)revealBinObject:(id)arg1 andRange:(CDStruct_5c5366e1)arg2;
- (void)toggle4k:(id)arg1;
- (void)hideMediaBrowser:(id)arg1;
- (void)selectBrowserMode:(id)arg1;
- (void)selectThemesMode:(id)arg1;
- (void)selectGeneratorsMode:(id)arg1;
- (void)selectTransitionsMode:(id)arg1;
- (void)selectTitlesMode:(id)arg1;
- (void)selectEffectsMode:(id)arg1;
- (void)selectBrowserModeCore:(int)arg1;
- (unsigned long long)labelAlignment;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (id)moduleAccessoryView;
- (id)contentLayoutDictionary;
- (void)displayPostAutoLayout;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)submoduleLayoutArray;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewWasInstalled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sequenceFormatChanged:(id)arg1;
- (void)set4kCheckboxForSequence:(id)arg1;
- (int)currentEffectsMode;
- (void)setMode:(int)arg1;
- (void)setBrowserMode:(BOOL)arg1;
- (void)updatePaneCapTitle;
- (unsigned long long)revealAnimationStyle;
- (struct CGSize)viewMinSize;
- (id)mainContainerIdentifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

