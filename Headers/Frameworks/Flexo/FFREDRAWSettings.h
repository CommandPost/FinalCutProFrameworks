//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class FFPlayer, LKButton, LKPanel, LKPopUpButton, LKSlider, LKTextField, NSImageView, NSView, PISegmentedScrubber;

__attribute__((visibility("hidden")))
@interface FFREDRAWSettings : NSObject <NSWindowDelegate>
{
    id <FFREDRAWSettingsDelegate> _delegate;
    id <FFREDRAWSettingsDataSource> _dataSource;
    LKPanel *_panel;
    NSView *_controlsView;
    LKButton *_applyButton;
    LKPopUpButton *_presetsControl;
    NSImageView *_itemIcon;
    LKTextField *_itemLabel;
    LKPopUpButton *_colorSpaceButton;
    LKPopUpButton *_gammaButton;
    LKPopUpButton *_ISOButton;
    LKSlider *_kelvinSlider;
    PISegmentedScrubber *_kelvinScrubber;
    LKTextField *_kelvinSuffix;
    LKSlider *_tintSlider;
    PISegmentedScrubber *_tintScrubber;
    LKTextField *_tintSuffix;
    LKSlider *_FLUTControlSlider;
    PISegmentedScrubber *_FLUTControlScrubber;
    LKTextField *_FLUTControlSuffix;
    LKSlider *_shadowSlider;
    PISegmentedScrubber *_shadowScrubber;
    LKTextField *_shadowSuffix;
    LKSlider *_DRXSlider;
    PISegmentedScrubber *_DRXScrubber;
    LKTextField *_DRXSuffix;
    LKSlider *_saturationSlider;
    PISegmentedScrubber *_saturationScrubber;
    LKTextField *_saturationSuffix;
    LKSlider *_contrastSlider;
    PISegmentedScrubber *_contrastScrubber;
    LKTextField *_contrastSuffix;
    LKSlider *_brightnessSlider;
    PISegmentedScrubber *_brightnessScrubber;
    LKTextField *_brightnessSuffix;
    LKSlider *_exposureSlider;
    PISegmentedScrubber *_exposureScrubber;
    LKTextField *_exposureSuffix;
    id _panelCloseButton;
    struct {
        unsigned int isLoaded:1;
        unsigned int hasHUDOpen:1;
        unsigned int isDirty:1;
    } _state;
    FFPlayer *_player;
    BOOL _cachedScrubHQ;
}

+ (id)shared;
@property(nonatomic) LKTextField *itemLabel; // @synthesize itemLabel=_itemLabel;
@property(nonatomic) NSImageView *itemIcon; // @synthesize itemIcon=_itemIcon;
@property(nonatomic) LKPopUpButton *presetsControl; // @synthesize presetsControl=_presetsControl;
@property(nonatomic) LKButton *applyButton; // @synthesize applyButton=_applyButton;
@property(nonatomic) NSView *controlsView; // @synthesize controlsView=_controlsView;
@property(nonatomic) LKPanel *panel; // @synthesize panel=_panel;
@property(nonatomic) id <FFREDRAWSettingsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <FFREDRAWSettingsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resyncControlsWithUpdatedDirtyStatus;
- (void)resyncControls;
- (void)endSegmentedScrubberAction:(id)arg1;
- (void)startSegmentedScrubberAction:(id)arg1;
- (void)endSliderAction:(id)arg1;
- (void)startSliderAction:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)controlValueDidChange:(id)arg1;
- (void)revertToRMDSettings:(id)arg1;
- (void)revertToNeutralSettings:(id)arg1;
- (void)revertToCameraOriginal:(id)arg1;
- (void)menuSelectedItemDidChange:(id)arg1;
- (void)closeAndCancelSettings:(id)arg1;
- (void)cancelSettings:(id)arg1;
- (void)saveSettings:(id)arg1;
- (void)_revertToRMDSettings:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (id)_complimentaryControlForControl:(id)arg1;
- (void)awakeFromNib;
- (void)reloadData;
- (void)setPlayer:(id)arg1;
- (BOOL)isHUDVisible;
- (void)closeHUD;
- (void)openHUD;
- (void)dealloc;
- (id)init;

@end

