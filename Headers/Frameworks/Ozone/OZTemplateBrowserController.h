//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSSplitViewDelegate.h"

@class LKBox, LKButton, LKPopUpButton, LKScrollView, LKSearchField, LKSegmentedControl, LKSlider, LKTextField, NSArray, NSBox, NSImageView, NSString, NSView, OZPaneCapFooterView, OZSplitView, OZTBSearchFieldDelegate, OZTBTextFieldDelegate, OZTimecodeFormatter, QTMovieView, TBOutlineView, TMMatrix, TMScrollView, TMTemplate;

@interface OZTemplateBrowserController : NSWindowController <NSSplitViewDelegate>
{
    TBOutlineView *collectionTableView;
    LKPopUpButton *formatPopUp;
    TMScrollView *templateScrollView;
    LKScrollView *categoryScrollView;
    LKScrollView *documentCustomOptionsView;
    LKBox *templateDescriptionTextView;
    LKBox *templateOptionsBox;
    LKBox *documentAttributesView;
    LKBox *splitViewRightBox;
    NSView *templateBrowserContentView;
    OZSplitView *splitView;
    NSImageView *_dividerAffordanceView;
    NSImageView *_categoryFooterView;
    NSImageView *_thumbnailFooterView;
    QTMovieView *movieView;
    LKTextField *templateTitleTextField;
    LKTextField *templateProjectTypeTextField;
    LKTextField *templateWidthTextField;
    LKTextField *templateHeightTextField;
    LKTextField *templateDurationTextField;
    LKTextField *templateDurationLabel;
    LKTextField *templateDescriptionTextField;
    LKTextField *templateResolutionTextField;
    LKTextField *templateFieldOrderTextField;
    LKTextField *templatePARTextField;
    LKTextField *templateResolutionXLabel;
    LKTextField *templatePresetLabel;
    LKTextField *templateResolutionLabel;
    LKTextField *templateFieldOrderLabel;
    LKTextField *templatePARLabel;
    LKTextField *templateFrameRateLabel;
    LKTextField *templateResolutionStaticTextField;
    LKTextField *templateFieldOrderStaticTextField;
    LKTextField *templatePARStaticTextField;
    LKTextField *templateProjectTypeStaticTextField;
    LKTextField *templateThemeLabel;
    LKSearchField *searchField;
    LKButton *addCollectionButton;
    LKButton *removeCollectionButton;
    LKButton *closeButton;
    LKButton *openTemplateButton;
    LKButton *createFromFileButton;
    LKButton *chooseOtherTemplateButton;
    LKSlider *templateIconSlider;
    LKPopUpButton *_presetPopUp;
    LKPopUpButton *_frameRatePopUp;
    LKPopUpButton *_aspectRatioPopUp;
    LKPopUpButton *_fieldOrderPopUp;
    LKPopUpButton *_durationTypePopUp;
    LKSegmentedControl *_themeSegmentedControl;
    NSImageView *_smallIcon;
    NSImageView *_bigIcon;
    OZPaneCapFooterView *_footer;
    NSBox *_buttonSeparator1;
    NSBox *_buttonSeparator2;
    TMMatrix *templateMatrix;
    NSArray *_collections;
    NSArray *_templates;
    NSArray *_searchFilteredTemplates;
    NSArray *_userThemes;
    NSArray *_systemThemes;
    id <TMBrowserOutlineItem> _lastSelectedItem;
    TMTemplate *_template;
    OZTimecodeFormatter *_durationFormatter;
    BOOL _customOptionsAreVisible;
    BOOL _shouldSelectBlankCollection;
    BOOL _suppressUIUpdates;
    BOOL _loadingWindow;
    BOOL _isSheet;
    OZTBTextFieldDelegate *_tfDelegate;
    OZTBSearchFieldDelegate *_sfDelegate;
    BOOL _observersRegistered;
    NSString *_selectedTheme;
}

+ (id)sharedController;
+ (BOOL)isInitialized;
+ (void)closeBrowserIfOpen;
- (void)willEndSheet;
- (void)willStartSheet;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)close:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 delete:(id)arg2;
- (void)outlineView:(id)arg1 deleteWithWarning:(id)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)matrixSelectionDidChange:(id)arg1;
- (void)matrixSelectionWillChange:(id)arg1;
- (void)matrixSelectionIsChanging:(id)arg1;
- (void)matrix:(id)arg1 delete:(id)arg2;
- (void)matrix:(id)arg1 deleteWithWarning:(id)arg2;
- (id)matrix:(id)arg1 objectValueForIndex:(int)arg2;
- (unsigned int)numberOfObjectsInMatrix:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)documentWillOpen:(id)arg1;
- (void)templateDidChange:(id)arg1;
- (void)templateWillChange:(id)arg1;
- (void)templateListDidChange:(id)arg1;
- (void)templateListWillChange:(id)arg1;
- (void)collectionDidChange:(id)arg1;
- (void)collectionWillChange:(id)arg1;
- (void)collectionListDidChange:(id)arg1;
- (void)collectionListWillChange:(id)arg1;
- (void)didAddCollection:(id)arg1;
- (void)didAddTheme:(id)arg1;
- (void)_didChangeFrameRate;
- (void)removeSelectedItem:(id)arg1;
- (void)removeSelectedItemDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)removeSelectedItemWithWarning:(id)arg1;
- (id)selectedDocument;
- (id)selectedItem;
- (id)selectedTheme;
- (id)selectedCollection;
- (id)selectedFormat;
- (void)setPreviewMovieForPath:(id)arg1;
- (void)refreshTemplatePreview;
- (void)refreshTemplateList:(BOOL)arg1;
- (void)refreshCollectionList;
- (id)allDocumentsWithTheme:(id)arg1 scan:(BOOL)arg2;
- (id)systemThemes;
- (id)userThemes;
- (void)chooseOtherTemplate:(id)arg1;
- (void)createFromFile:(id)arg1;
- (void)removeSelectedOutlineItem:(id)arg1;
- (void)resizeTemplateIcons:(id)arg1;
- (float)maxIconSliderValue;
- (float)iconSliderValue;
- (void)toggleDurationDisplay:(id)arg1;
- (void)openTemplate:(id)arg1;
- (double)getPARFromPopup;
- (void)_getFrameRate:(double *)arg1 andNTSC:(char *)arg2;
- (void)createNewCollection:(id)arg1;
- (void)updateUIAndAnimate:(BOOL)arg1 forceUIChange:(int)arg2;
- (void)updateUIAndAnimate:(BOOL)arg1;
- (void)selectFrameRate:(id)arg1;
- (void)selectPreset:(id)arg1;
- (int)_getFrameratePopUpIndexForFramerate:(double)arg1;
- (void)removeTheme:(id)arg1;
- (void)createNewTheme:(id)arg1;
- (void)selectTheme:(id)arg1;
- (void)openDocumentWithClips:(id)arg1;
- (void)newDocument:(id)arg1;
- (void)openTemplateBrowser:(id)arg1;
- (void)importAsDocument:(id)arg1;
- (void)importFiles:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setShowAll;
- (BOOL)showAll;
- (void)buildPresetsMenu;
- (void)categoryViewFrameChange:(id)arg1;
- (void)windowDidLoad;
- (void)showWindow:(id)arg1;
- (void)updateThemeMenu;
- (void)updateThemeLabel;
- (void)dealloc;
- (id)init;
- (void)_saveDefaultUIPositions;
- (void)updateSearchResults;
- (void)enableDisableTemplateButton;
- (BOOL)_areDurationAndResolutionValid;
- (BOOL)_isCustomPresetSelected;
- (void)selectBlankCollection;

@end

