//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerFilmstripModule.h>

@class FFCapsController, LKButton, LKMenu, LKPopOverWindow, LKSlider, LKTextField, NSPopUpButton, NSProThemeImageView, NSProView, NSString, NSView, OKPaneCapItemMenu;

@interface FFConsumerOrganizerFilmstripModule : FFOrganizerFilmstripModule
{
    NSPopUpButton *_filterPopupButton;
    NSProView *_eventNameContainer;
    LKButton *_eventNameButton;
    LKButton *_selectionInfoButton;
    LKButton *_clipAppearanceButton;
    NSProThemeImageView *_minClipHeightImage;
    NSProThemeImageView *_maxClipHeightImage;
    LKSlider *_clipHeightSlider;
    LKSlider *_thumbnailDurationSlider;
    LKTextField *_thumbnailDurationText;
    LKButton *_showAudioWaveformsChk;
    struct CGRect _thumbnailDurationTextRect;
    BOOL _editPaintInProgress;
    NSString *_eventTitle;
    NSView *headerView;
    OKPaneCapItemMenu *filterMenuPaneCapItem;
    LKPopOverWindow *clipAppearanceHUD;
    FFCapsController *capsController;
    LKMenu *filterMenu;
    NSProView *clipAppearanceHUDView;
}

+ (id)defaultModuleNibName;
@property(retain, nonatomic) NSProView *clipAppearanceHUDView; // @synthesize clipAppearanceHUDView;
@property(retain, nonatomic) LKMenu *filterMenu; // @synthesize filterMenu;
@property(retain, nonatomic) FFCapsController *capsController; // @synthesize capsController;
@property(retain, nonatomic) LKPopOverWindow *clipAppearanceHUD; // @synthesize clipAppearanceHUD;
@property(retain, nonatomic) OKPaneCapItemMenu *filterMenuPaneCapItem; // @synthesize filterMenuPaneCapItem;
@property(retain, nonatomic) NSView *headerView; // @synthesize headerView;
- (id)localModuleActions;
- (void)refreshFilterMenu;
- (id)filterPulldownMenu;
- (void)updateItemsString;
- (void)setActiveSelection:(id)arg1;
@property(nonatomic) SEL backButtonAction;
@property(nonatomic) id backButtonTarget;
- (void)filterMenuAction:(id)arg1;
- (void)searchFieldAction:(id)arg1;
- (void)searchAction:(id)arg1;
- (void)thumbnailDurationAction:(id)arg1;
- (void)clipHeightSliderAction:(id)arg1;
- (void)toggleClipAppearanceAudioWaveformsAction:(id)arg1;
- (void)clipAppearanceAction:(id)arg1;
- (void)syncThumbnailDurationStringToIndex:(long long)arg1;
- (double)durationValueIndexToThumbnailDurationValue:(long long)arg1;
- (long long)thumbnailDurationValueToDurationValueIndex:(double)arg1;
- (void)clipAppearanceHUDNotificationHandler:(id)arg1;
- (void)popOverWindowDidCancel:(id)arg1;
- (void)showClipAppearanceHUD;
- (BOOL)isClipAppearanceHUDDisplayed;
- (void)_headerFrameChanged:(id)arg1;
- (void)_updateHeaderTitle;
- (void)_updateHeaderOrnamentsForSelectedNodes:(id)arg1;
- (void)syncSearchFieldFilters;
- (void)syncFilterMenuLabel;
- (void)syncContentStatusMessage;
- (void)setFrameDuration:(double)arg1;
- (void)syncControls;
- (void)syncToSelection;
- (void)setContents:(id)arg1;
- (void)setupHeader;
- (void)setupEventNameButtons;
- (void)setupCapsController;
- (void)setupViews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)awakeFromNib;

@end

