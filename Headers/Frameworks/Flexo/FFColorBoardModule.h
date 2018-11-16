//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

@class FFColorBoardContentViewController, LKButton, LKPaneCapSegmentedControl, LKSegmentedControl, LKTextField, NSProView, NSProWindow, NSView;

__attribute__((visibility("hidden")))
@interface FFColorBoardModule : LKViewModule
{
    BOOL _colorBoardIsActive;
    FFColorBoardContentViewController *_colorBoardContentViewController;
    NSProView *_headerView;
    NSProView *_footerView;
    NSView *_contentContainerView;
    LKPaneCapSegmentedControl *_secondariesControl;
    LKSegmentedControl *_maskControl;
    LKTextField *_maskLabel;
    LKSegmentedControl *_presetControl;
    NSProWindow *_presetWindow;
    LKTextField *_presetNameField;
    LKButton *_presetOKButton;
    LKButton *inspectorButton;
    LKTextField *_colorAdjustmentLabel;
    LKButton *_inspectorButton;
}

+ (void)loadControllersAndDataSources;
+ (id)sharedColorBoardModule;
@property(nonatomic) LKTextField *colorAdjustmentLabel; // @synthesize colorAdjustmentLabel=_colorAdjustmentLabel;
@property(retain, nonatomic) LKButton *inspectorButton; // @synthesize inspectorButton=_inspectorButton;
@property(retain, nonatomic) LKButton *presetOKButton; // @synthesize presetOKButton=_presetOKButton;
@property(retain, nonatomic) LKTextField *presetNameField; // @synthesize presetNameField=_presetNameField;
@property(retain, nonatomic) NSProWindow *presetWindow; // @synthesize presetWindow=_presetWindow;
@property(retain, nonatomic) LKSegmentedControl *presetControl; // @synthesize presetControl=_presetControl;
@property(retain, nonatomic) LKTextField *maskLabel; // @synthesize maskLabel=_maskLabel;
@property(retain, nonatomic) LKSegmentedControl *maskControl; // @synthesize maskControl=_maskControl;
@property(retain, nonatomic) LKPaneCapSegmentedControl *secondariesControl; // @synthesize secondariesControl=_secondariesControl;
@property(retain, nonatomic) NSView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) NSProView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSProView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) FFColorBoardContentViewController *colorBoardContentViewController; // @synthesize colorBoardContentViewController=_colorBoardContentViewController;
@property(nonatomic) BOOL colorBoardIsActive; // @synthesize colorBoardIsActive=_colorBoardIsActive;
- (void)setAnchoredObjects:(id)arg1 withContext:(id)arg2;
- (id)moduleFooterAccessoryView;
- (BOOL)wantsFooterBar;
- (id)moduleHeaderAccessoryView;
- (BOOL)wantsHeaderBar;
- (void)moduleDidHide;
- (void)moduleDidUnhide;
- (void)loadPresetMenu:(id)arg1;
- (id)presetMenu;
- (void)closePresetWindow;
- (void)openPresetWindow;
- (void)syncToAnchoredObject:(id)arg1;
- (void)syncToCurrentColorCorrection;
- (void)loadColorCorrectionMenu:(id)arg1;
- (id)colorCorrectionMenu;
- (void)menuNeedsUpdate:(id)arg1;
- (void)switchToInspectorModule:(id)arg1;
- (void)newPresetNameCancelAction:(id)arg1;
- (void)newPresetNameOKAction:(id)arg1;
- (void)saveAsPresetAction:(id)arg1;
- (void)usePresetAction:(id)arg1;
- (void)resetAllPucks:(id)arg1;
- (void)resetPucksOnCurrentBoard:(id)arg1;
- (void)delete:(id)arg1;
- (void)resetSelectedPuck:(id)arg1;
- (void)stepForward:(id)arg1;
- (void)nudgePuckRight:(id)arg1;
- (void)stepBackward:(id)arg1;
- (void)nudgePuckLeft:(id)arg1;
- (void)down:(id)arg1;
- (void)nudgePuckDown:(id)arg1;
- (void)up:(id)arg1;
- (void)nudgePuckUp:(id)arg1;
- (void)selectNextPuck:(id)arg1;
- (void)selectPreviousPuck:(id)arg1;
- (void)selectNextTabViewItemAction:(id)arg1;
- (void)selectPreviousTabViewItemAction:(id)arg1;
- (void)switchToExposureTab:(id)arg1;
- (void)switchToSaturationTab:(id)arg1;
- (void)switchToColorTab:(id)arg1;
- (void)addCorrection:(id)arg1;
- (void)switchColorCorrectionMask:(id)arg1;
- (void)switchColorCorrectionAction:(id)arg1;
- (void)selectNextColorCorrection:(id)arg1;
- (void)selectPreviousColorCorrection:(id)arg1;
- (void)toggleInsideColorMask:(id)arg1;
- (void)toggleColorCorrectionOff:(id)arg1;
- (id)localModuleActions;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)notificationHandler:(id)arg1;
- (void)releaseNotifications;
- (void)registerNotifications;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)contentViewControllerView;
- (id)contentViewController;
- (id)identifier;
- (void)loadContentView;
- (void)viewWillBeRemoved;
- (void)viewDidLoad;
- (void)viewWasInstalled;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;

@end

