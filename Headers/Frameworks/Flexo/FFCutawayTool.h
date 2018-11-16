//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAdjustmentTool.h>

@class FFAdjustmentToolSlider, FFChannelChangeController, FFKeyerOSC, FFProOSC, FFSegmentedControl, FFSimpleMaskOSC, LKButton, LKColorWell, LKMenu, LKSegmentedControl, LKTextField, NSArray, NSMutableArray, NSPopUpButton, NSTextField, NSView;

@interface FFCutawayTool : FFAdjustmentTool
{
    NSView *_adjustmentToolbarView;
    NSPopUpButton *_cutawayMode;
    FFAdjustmentToolSlider *_keyerSoftness;
    NSTextField *_keyerSoftnessLabel;
    LKSegmentedControl *_keyerCleanupIndex;
    NSTextField *_keyerCleanupLabel;
    FFAdjustmentToolSlider *_cutawayOpacity;
    NSTextField *_cutawayOpacityLabel;
    FFAdjustmentToolSlider *_cutawayFade;
    LKTextField *_cutawayFadeInSeconds;
    NSPopUpButton *_pipEffect;
    FFAdjustmentToolSlider *_pipEffectTransition;
    LKTextField *_pipEffectTransitionInSeconds;
    FFSegmentedControl *_pipBorderWidthIndex;
    LKColorWell *_pipBorderColor;
    LKButton *_pipBorderColorDisabled;
    LKButton *_pipDropShadow;
    FFSegmentedControl *_sbsLeftRight;
    FFAdjustmentToolSlider *_sbsSlide;
    LKTextField *_sbsSlideInSeconds;
    NSView *_cutawayView;
    NSView *_keyerView;
    NSView *_pipView;
    NSView *_sbsView;
    LKMenu *_modeMenu;
    LKMenu *_pipEffectMenu;
    FFChannelChangeController *_changeController;
    FFKeyerOSC *_keyerOSC;
    FFSimpleMaskOSC *_maskOSC;
    FFProOSC *_transformOSC;
    _Bool _activeTool;
    BOOL _colorSliderChange;
    NSMutableArray *_cutawayModeTitles;
    NSMutableArray *_pipEffectTitles;
    NSArray *_selectedItems;
}

+ (BOOL)removeCutawayEffectsForObject:(id)arg1;
+ (int)modeForObject:(id)arg1;
+ (id)sideBySideEffectForObject:(id)arg1;
+ (id)pipTransitionEffectForObject:(id)arg1;
+ (id)transformEffectForObject:(id)arg1 createIfAbsent:(BOOL)arg2;
+ (id)blendEffectForObject:(id)arg1;
+ (id)blendEffectForObject:(id)arg1 createIfAbsent:(BOOL)arg2;
+ (id)maskEffectForObject:(id)arg1;
+ (id)keyerEffectForObject:(id)arg1 createIfAbsent:(BOOL)arg2;
+ (id)toolTip;
+ (id)toolbarFacetSelected;
+ (id)toolbarFacet;
+ (id)displayName;
+ (void)initialize;
+ (id)groups;
@property(copy, nonatomic) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
- (void)awakeFromNib;
- (void)resetChannelsForObject:(id)arg1;
- (void)setAdjustmentStateFromDictionary:(id)arg1;
- (int)_updateChannelsAndAdjustmentStateForSingleSelection:(id)arg1;
- (int)_updateChannelsAndAdjustmentStateForMultipleSelectionWithMode:(int)arg1;
- (id)_copySelectedCutawayModes;
- (id)newAdjustmentDictionaryForSelection:(id)arg1;
- (id)dropShadowChannelForFolder:(id)arg1;
- (id)borderColorChannelForFolder:(id)arg1;
- (id)borderWidthChannelForFolder:(id)arg1;
- (id)pipTransitionDurationChannelForFolder:(id)arg1;
- (id)pipTransitionTypeChannelForFolder:(id)arg1;
- (id)slideDurationChannelForFolder:(id)arg1;
- (id)leftChannelForFolder:(id)arg1;
- (id)softnessChannelForFolder:(id)arg1;
- (void)endColorChange:(id)arg1;
- (void)startColorChange:(id)arg1;
- (void)endSliderAction:(id)arg1;
- (void)startSliderAction:(id)arg1;
- (id)_sliderActionName:(id)arg1;
- (void)cleanBgAction:(id)arg1;
- (void)reset:(id)arg1;
- (void)ok:(id)arg1;
- (void)setSlideDurationInSeconds:(id)arg1;
- (void)slideDuration:(id)arg1;
- (void)changeLeftRight:(id)arg1;
- (void)dropShadow:(id)arg1;
- (void)borderColor:(id)arg1;
- (void)setBorderWidth:(id)arg1;
- (void)setPIPEffectTransitionInSeconds:(id)arg1;
- (void)changePIPEffectTransition:(id)arg1;
- (void)changePIPEffect:(id)arg1;
- (void)setPIPEffect:(int)arg1 forObject:(id)arg2;
- (void)setFadeInSeconds:(id)arg1;
- (void)fade:(id)arg1;
- (void)opacity:(id)arg1;
- (void)softness:(id)arg1;
- (void)changeCutawayMode:(id)arg1;
- (void)setCutawayMode:(int)arg1;
- (id)adjustmentsToolbarView;
- (void)_fillPipEffectTitle;
- (void)_fillCutawayModeTitle;
- (id)_titleForPipEffect:(int)arg1;
- (id)_titleForCutawayMode:(int)arg1;
- (void)selectedItemsChanged:(id)arg1;
- (void)resetTransformEffectAndRemoveOSCForObject:(id)arg1;
- (void)setupTransformEffectOSCForObject:(id)arg1;
- (void)removePIPTransitionEffectForObject:(id)arg1;
- (void)createPIPTransitionEffectWithType:(long long)arg1 object:(id)arg2;
- (void)removeSideBySideEffectForObject:(id)arg1;
- (void)createSideBySideEffectForObject:(id)arg1;
- (void)resetBlendEffectForObject:(id)arg1;
- (void)removeKeyerEffectAndOSC_ifFound:(id)arg1;
- (void)setKeyerEffectAndOSC_createIfNotFound:(_Bool)arg1 object:(id)arg2;
- (void)resignActiveTool;
- (void)becomeActiveTool;
- (id)onScreenControlsForTool;
- (id)selectionToWorkOn;
- (BOOL)supportsMultipleSelection;
- (BOOL)allowsEffectOSCs;
- (BOOL)handlesSelection;
- (BOOL)skims;
- (id)changeController;
- (void)dealloc;
- (void)_removeAllOSCs;
- (id)init;

@end

