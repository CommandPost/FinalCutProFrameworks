//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFCPSViewController.h>

@class FFAdjustmentToolSlider, FFAnchoredSequence, FFCPSClapperboardView, FFCPSShadowView, LKBox, LKButton, LKPopUpButton, LKTextField, NSString;

__attribute__((visibility("hidden")))
@interface FFCPSProjectEditVC : FFCPSViewController
{
    LKTextField *_titleLabel;
    LKTextField *_currentTheme;
    LKTextField *_transitionDurationValue;
    LKTextField *_editDurationValue;
    LKTextField *_editsLabel;
    LKTextField *_transitionsLabel;
    LKTextField *_themeLabel;
    LKButton *_doneButton;
    LKButton *_setThemeButton;
    LKButton *_autoContentCheckBox;
    LKButton *_trimBackgroundMusicCheckBox;
    LKPopUpButton *_photoPlacementPopup;
    FFAdjustmentToolSlider *_transitionDurationSlider;
    FFAdjustmentToolSlider *_editDurationSlider;
    FFCPSClapperboardView *_projectPosterView;
    FFCPSShadowView *_shadowView;
    LKBox *_separatorLine;
    BOOL _changingTheme;
    NSString *_currentThemeName;
    LKTextField *_debugLabel;
    FFAnchoredSequence *_observedSequence;
}

@property(retain, nonatomic) LKTextField *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) NSString *currentThemeName; // @synthesize currentThemeName=_currentThemeName;
@property(nonatomic) BOOL changingTheme; // @synthesize changingTheme=_changingTheme;
@property(retain, nonatomic) LKButton *trimBackgroundMusicCheckBox; // @synthesize trimBackgroundMusicCheckBox=_trimBackgroundMusicCheckBox;
@property(retain, nonatomic) LKButton *autoContentCheckBox; // @synthesize autoContentCheckBox=_autoContentCheckBox;
@property(retain, nonatomic) LKBox *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) FFCPSShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) FFCPSClapperboardView *projectPosterView; // @synthesize projectPosterView=_projectPosterView;
@property(retain, nonatomic) FFAdjustmentToolSlider *editDurationSlider; // @synthesize editDurationSlider=_editDurationSlider;
@property(retain, nonatomic) FFAdjustmentToolSlider *transitionDurationSlider; // @synthesize transitionDurationSlider=_transitionDurationSlider;
@property(retain, nonatomic) LKPopUpButton *photoPlacementPopup; // @synthesize photoPlacementPopup=_photoPlacementPopup;
@property(retain, nonatomic) LKButton *setThemeButton; // @synthesize setThemeButton=_setThemeButton;
@property(retain, nonatomic) LKButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) LKTextField *themeLabel; // @synthesize themeLabel=_themeLabel;
@property(retain, nonatomic) LKTextField *transitionsLabel; // @synthesize transitionsLabel=_transitionsLabel;
@property(retain, nonatomic) LKTextField *editsLabel; // @synthesize editsLabel=_editsLabel;
@property(retain, nonatomic) LKTextField *editDurationValue; // @synthesize editDurationValue=_editDurationValue;
@property(retain, nonatomic) LKTextField *transitionDurationValue; // @synthesize transitionDurationValue=_transitionDurationValue;
@property(retain, nonatomic) LKTextField *currentTheme; // @synthesize currentTheme=_currentTheme;
@property(retain, nonatomic) LKTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setPosterViewForEvent:(id)arg1;
- (double)mappedValueForDurationSlider:(double)arg1;
- (void)setDisplayToSequence:(id)arg1;
- (void)setTransitionSliderMax:(id)arg1;
- (void)clearDisplay;
- (void)syncDisplayToEditDurationSlider;
- (void)syncDisplayToTransitionDurationSlider;
- (void)syncToDataItemList;
- (void)editDurationSliderAction:(id)arg1;
- (void)transitionDurationSliderAction:(id)arg1;
- (void)photoPlacementPopupAction:(id)arg1;
- (void)setThemeAction:(id)arg1;
- (void)trimBackgroundMusicAction:(id)arg1;
- (void)autoContentAction:(id)arg1;
- (void)_autoContentAction:(BOOL)arg1;
- (void)doneEditingAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)notificationHandler:(id)arg1;
- (void)removeNotifications;
- (void)installNotifications;
- (void)saveChanges;
- (void)viewControllerWillChangeContent;
- (void)viewControllerWillHide;
- (void)containingModuleWillHide;
- (int)projectTimeScale;
- (id)project;
- (id)eventRecord;
- (id)sequenceInfo;
- (id)sequenceRecord;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNib;

@end

