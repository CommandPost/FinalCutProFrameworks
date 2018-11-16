//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZProViewModule.h>

@class LKMenu, LKSegmentedControl, LKSegmentedScrubber, NSImageView, NSProThemeImageView, NSProView, OZMoTimecodeFormatter, OZScaledImageView, OZTimeDisplaySwitchSegmentedControl, OZTimeDurationSwitchSegmentedControl;

@interface OZToolbarModule : OZProViewModule
{
    LKSegmentedControl *_shapeSegmentedControl;
    LKSegmentedControl *_maskSegmentedControl;
    LKSegmentedControl *_viewSegmentedControl;
    LKSegmentedControl *_toggleHUDControl;
    LKSegmentedControl *_cameraLightControl;
    LKSegmentedControl *_addLayerControl;
    NSProView *_transportControls;
    NSImageView *_backgroundImageView;
    NSProThemeImageView *_lcdImageView;
    NSProThemeImageView *_lcdGlossImageView;
    NSImageView *_lcdTimecodeLabelsImageView;
    OZScaledImageView *_dividerLineImageView;
    OZTimeDurationSwitchSegmentedControl *_currentTimeDurationSwitch;
    LKSegmentedScrubber *_timeScrubber;
    OZTimeDisplaySwitchSegmentedControl *_timeDisplaySwitch;
    OZMoTimecodeFormatter *_durationFormatter;
    LKMenu *_timeDisplaySwitchMenu;
    BOOL _isDisplayingCurrentTime;
    struct OZLibraryPresetsMap *_effectPresetsMap;
    struct OZLibraryPresetsMap *_behaviorPresetsMap;
    struct OZLibraryPresetsMap *_generatorPresetsMap;
    BOOL _oz_viewOrderedBelow;
}

- (void)dealloc;
- (id)oz_canvasModule;
- (BOOL)wantsHeaderBar;
- (struct CGSize)viewMinSize;
- (struct CGSize)viewMaxSize;
- (BOOL)wantsFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)isBackgroundGrabbable;
- (BOOL)isViewOrderedBelow;
- (void)viewDidLoad;
- (void)setHUDButtonState;
- (void)toggleTimeDisplay;
- (void)showFrames:(id)arg1;
- (void)showTimecode:(id)arg1;
- (void)showCurrentTime:(id)arg1;
- (void)showDuration:(id)arg1;
- (void)updateTimeDisplaySwitchMenu;
- (void)loadCustomFont;
- (void)notify:(unsigned int)arg1;
- (void)setTimeScrubberMaxAndMin;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)oz_paneVisibilityChanged:(id)arg1;
- (id)oz_viewSegmentObjects;
- (id)oz_shapeSegmentObjects;
- (id)oz_maskSegmentObjects;
- (void)oz_setupSegmentedControl:(id)arg1 segment:(unsigned long long)arg2 withSegmentObject:(id)arg3;
- (void)oz_buildUpCanvasSegmentedControl:(id)arg1 forItems:(id)arg2;
- (void)oz_buildUpToolbarSegmentedControl:(id)arg1 forItems:(id)arg2;
- (void)oz_buildUpSegmentedControl:(id)arg1 forItems:(id)arg2;
- (id)oz_segmentedControlHostingMenu:(id)arg1;
- (id)oz_buildPresetMenu:(const struct OZLibraryPresetsMap *)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)oz_buildMenusForAddLayerControls:(id)arg1;
- (void)updateToolbarState;
- (void)oz_presetMenuPick:(id)arg1;
- (void)oz_segmentedControlPressed:(id)arg1;
- (void)oz_setEditToolWithSegmentObject:(id)arg1;
- (void)oz_setToolWithSegmentObject:(id)arg1;
- (void)oz_setShapeOrMaskToolWithSegmentObject:(id)arg1;
- (void)cameraLightSegmentControlAction:(id)arg1;
- (void)addLayerSegmentControlAction:(id)arg1;
- (void)currentFrameAction:(id)arg1;
- (void)doDisplaySwitch:(id)arg1;
- (BOOL)isDisplayingCurrentTime;
- (void)updateCurrentFrameTextField:(double)arg1;
- (void)updateProjectDurationTextField;
@property BOOL oz_viewOrderedBelow; // @synthesize oz_viewOrderedBelow=_oz_viewOrderedBelow;
@property(readonly, nonatomic) LKSegmentedScrubber *timeScrubber; // @synthesize timeScrubber=_timeScrubber;

@end
