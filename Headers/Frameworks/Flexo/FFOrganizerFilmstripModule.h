//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEventsDetailModule.h>

#import "FFEditActionSourceProtocol.h"
#import "FFNumericEntrySource.h"
#import "FFOrganizerFilmstripClusteringDelegate.h"
#import "FFOrganizerFilmstripViewDelegate.h"
#import "FFRolesMenuDelegate.h"
#import "FFSharableContent.h"
#import "NSWindowDelegate.h"

@class FFAnalyzeMediaWindowController, FFKeywordEditor, FFMediaSidebarModule, FFModifyContentCreationDateWindowController, FFNumericEntry, FFOrganizerFilmListViewController, FFOrganizerFilmstripViewController, FFOrganizerZoomBezelSegmentedControl, FFResponderLayerHostView, FFResponderLayerPushButton, FFRolesMenuController, FFShareHelper, FFTranscodeMediaWindowController, LKMenu, LKPopOverWindow, LKPopUpButton, LKSlider, LKTextField, NSArray, NSDictionary, NSMenuItem, NSMutableArray, NSMutableDictionary, NSProButton, NSProThemeImageView, NSProView, NSString, OKPaneCapItemButton, OKPaneCapItemSlider, OKPaneCapItemView;

@interface FFOrganizerFilmstripModule : FFEventsDetailModule <FFOrganizerFilmstripViewDelegate, FFSharableContent, FFOrganizerFilmstripClusteringDelegate, FFNumericEntrySource, FFRolesMenuDelegate, NSWindowDelegate, FFEditActionSourceProtocol>
{
    NSProView *_frameDurationContainer;
    LKSlider *_frameDurationSlider;
    LKSlider *_itemSizeSlider;
    LKTextField *_frameDurationTextField;
    NSProView *_clusteringAccessoryView;
    LKPopUpButton *_clusteringMetadataPopUp;
    LKMenu *_proBackgroundContextualMenu;
    LKMenu *_consumerBackgroundContextualMenu;
    LKMenu *_clipContextualMenu;
    LKMenu *_consumerClipContextualMenu;
    LKMenu *_consumerProjectContextualMenu;
    LKMenu *_projectContextualMenu;
    LKMenu *_stacksContextualMenu;
    LKMenu *_markerContextualMenu;
    NSMenuItem *_clipRolesContextualMenuItem;
    NSMenuItem *_stackRolesContextualMenuItem;
    NSMenuItem *_openProjectMenuItem;
    NSMenuItem *_duplicateProjectMenuItem;
    LKTextField *_itemsCountTextField;
    NSProView *_zoomBezelPopOverView;
    NSProView *_zoomBezelView;
    NSProButton *_toggleAudioWaveformsCheckbox;
    FFOrganizerZoomBezelSegmentedControl *_zoomBezel;
    LKPopOverWindow *_clipAttributesPopOverWindow;
    NSProView *_clipActionOptionsView;
    NSProButton *_favoriteButton;
    NSProButton *_unfavoriteButton;
    NSProButton *_rejectButton;
    NSProButton *_editButton;
    NSProThemeImageView *_smallZoomImage;
    NSProThemeImageView *_largeZoomImage;
    FFResponderLayerHostView *_emptyPaneView;
    NSProView *_emptySearchResultsView;
    FFResponderLayerPushButton *_emptyPaneButton;
    BOOL _clusterDirection;
    BOOL _arrangeDirection;
    long long _clusterType;
    long long _arrangeType;
    BOOL _isAllProjectsMode;
    NSString *_allProjectDefaultSelectionMediaIdentifier;
    int _curDisplayViewType;
    OKPaneCapItemButton *_buttonFavorite;
    OKPaneCapItemButton *_buttonUnfavorite;
    OKPaneCapItemButton *_buttonReject;
    OKPaneCapItemButton *_buttonMark;
    OKPaneCapItemView *_spacerPaneCapItem;
    OKPaneCapItemButton *_filmstripPaneCapItem;
    OKPaneCapItemButton *_filmlistPaneCapItem;
    OKPaneCapItemView *_itemsCountPaneCapItem;
    OKPaneCapItemSlider *_sizeSliderPaneCapItem;
    OKPaneCapItemSlider *_frameDurationPaneCapItem;
    OKPaneCapItemButton *_toggleAudioWaveforms;
    OKPaneCapItemView *_zoomBezelPaneCapItem;
    NSMutableArray *_filteredRanges;
    FFTranscodeMediaWindowController *_transcodeController;
    FFAnalyzeMediaWindowController *_analyzeController;
    FFModifyContentCreationDateWindowController *_creationDateWindowController;
    FFKeywordEditor *_keywordEditor;
    FFOrganizerFilmstripViewController *_currentFilmViewController;
    FFOrganizerFilmstripViewController *_filmstripViewController;
    FFOrganizerFilmListViewController *_filmlistViewController;
    FFNumericEntry *_numericEntry;
    FFRolesMenuController *_rolesMenuController;
    FFShareHelper *_shareHelper;
    long long _favoriteFilterType;
    BOOL _paintCommand;
    CDStruct_1b6d18a9 _paintBeginTime;
    FFMediaSidebarModule *_mediaSidebarModule;
    NSArray *_activeSelection;
    NSDictionary *_filmstripContentLayout;
    NSDictionary *_filmListContentLayout;
    NSMutableDictionary *_clusterDisclosureStates;
    struct FFProcrastinatedDispatch_t _procrastinatedUpdateItemsString;
}

+ (id)viewTypeMenuGlyph;
+ (id)viewTypeMenuLabel;
+ (id)keyPathsForValuesAffectingSelectedItems;
@property(readonly) BOOL isAllProjectsMode; // @synthesize isAllProjectsMode=_isAllProjectsMode;
@property(nonatomic) NSProView *emptySearchResultsView; // @synthesize emptySearchResultsView=_emptySearchResultsView;
@property(nonatomic) FFResponderLayerHostView *emptyPaneView; // @synthesize emptyPaneView=_emptyPaneView;
@property(nonatomic) FFMediaSidebarModule *mediaSidebarModule; // @synthesize mediaSidebarModule=_mediaSidebarModule;
@property(retain) FFOrganizerFilmListViewController *filmlistViewController; // @synthesize filmlistViewController=_filmlistViewController;
@property(retain) FFOrganizerFilmstripViewController *filmstripViewController; // @synthesize filmstripViewController=_filmstripViewController;
@property FFOrganizerFilmstripViewController *currentFilmViewController; // @synthesize currentFilmViewController=_currentFilmViewController;
@property int curDisplayViewType; // @synthesize curDisplayViewType=_curDisplayViewType;
@property long long arrangeType; // @synthesize arrangeType=_arrangeType;
@property long long clusterType; // @synthesize clusterType=_clusterType;
@property BOOL arrangeDirection; // @synthesize arrangeDirection=_arrangeDirection;
@property BOOL clusterDirection; // @synthesize clusterDirection=_clusterDirection;
- (void)exportXML:(id)arg1;
- (BOOL)canExportXML;
- (void)exportToFinalCut:(id)arg1;
- (BOOL)canExportToFinalCut;
- (id)exportXMLItems;
- (struct CGRect)animationStartRectForEditAction:(id)arg1;
- (id)animationViewForEditAction:(id)arg1;
- (struct CGImage *)newAnimationImageForEditAction:(id)arg1;
- (BOOL)writeDataForEditAction:(id)arg1 toPasteboardWithName:(id)arg2;
- (id)dataForEditAction:(id)arg1;
- (BOOL)canSourceDataForEditAction:(id)arg1;
- (id)mediaForEditAction:(id)arg1;
- (void)pasteAdjustmentsAudioEffect:(id)arg1;
- (void)pasteAdjustmentsVideoEffect:(id)arg1;
- (void)pasteAdjustmentsAudioLevels:(id)arg1;
- (void)pasteAdjustmentsColor:(id)arg1;
- (void)pasteAdjustmentsAll:(id)arg1;
- (void)pasteAdjustmentsCore:(int)arg1;
- (BOOL)operationForPasteAdjustments:(int)arg1 targetObject:(id)arg2 sourceObject:(id)arg3 error:(id *)arg4;
- (id)actionNameForPasteAdjustments:(int)arg1;
- (struct CGImage *)newFlyImageForEditAction:(id)arg1;
- (struct CGRect)originatingRectForEditAction:(id)arg1 fromView:(id)arg2;
- (id)originatingView;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)moduleForAction:(SEL)arg1;
- (id)shareHelper;
- (CDStruct_1b6d18a9)currentSequenceTime;
- (BOOL)performAction:(id)arg1 withMediaRange:(id)arg2 error:(id *)arg3 operationBefore:(CDUnknownBlockType)arg4 operationAfter:(CDUnknownBlockType)arg5 operation:(CDUnknownBlockType)arg6;
- (BOOL)performAction:(id)arg1 withMediaRanges:(id)arg2 error:(id *)arg3 operationBefore:(CDUnknownBlockType)arg4 operationAfter:(CDUnknownBlockType)arg5 operation:(CDUnknownBlockType)arg6;
- (void)_ensureModuleIsVisible;
- (void)setMaintianFilmstripSelectionOnNextUpdate:(BOOL)arg1;
- (void)deactivateActiveSelections;
- (void)deactivateRangeOfMedia:(id)arg1;
- (void)activateSelectionMarkers:(id)arg1 extendingSelection:(BOOL)arg2;
- (void)removeAllSelectionMarkersFromClips:(id)arg1;
- (void)removeSelectionMarkers:(id)arg1 onlyRemoveOverlap:(BOOL)arg2 addSelectionMarkers:(id)arg3 extendingSelection:(BOOL)arg4;
- (void)modifySelectionMarkersFromClip:(id)arg1 removeRange:(CDStruct_e83c9415)arg2 onlyRemoveOverlap:(BOOL)arg3 rangeToAdd:(CDStruct_e83c9415)arg4 newSelection:(id)arg5 extending:(BOOL)arg6;
- (id)_inactiveWholeClipMarkersFromArray:(id)arg1 excludingSelectionRanges:(id)arg2;
- (void)toggleKeywordEditor:(id)arg1;
- (void)hideKeywordEditor:(id)arg1;
- (void)orderFrontKeywordEditor:(id)arg1;
- (void)removeAnalysisKeywordMarker:(id)arg1;
- (void)removeKeywordMarker:(id)arg1;
- (void)removeAllAnalysisKeywordsFromSelection:(id)arg1;
- (void)removeAllKeywordsFromSelection:(id)arg1;
- (void)addKeywordGroup9:(id)arg1;
- (void)addKeywordGroup8:(id)arg1;
- (void)addKeywordGroup7:(id)arg1;
- (void)addKeywordGroup6:(id)arg1;
- (void)addKeywordGroup5:(id)arg1;
- (void)addKeywordGroup4:(id)arg1;
- (void)addKeywordGroup3:(id)arg1;
- (void)addKeywordGroup2:(id)arg1;
- (void)addKeywordGroup1:(id)arg1;
- (BOOL)_selectionIntersectsAnalysisKeywords;
- (BOOL)_selectionIntersectsKeywords;
- (BOOL)_mediaRanges:(id)arg1 intersectsKeywordsOfType:(id)arg2;
- (BOOL)_mediaRangesIntersectsKeywords:(id)arg1;
- (void)_removeAnalysisKeywordMarker;
- (void)_removeKeywordMarker;
- (void)_removeAllAnalysisKeywordsFromSelection;
- (void)_removeAllKeywordsFromSelection;
- (BOOL)_removeAllAnalysisKeywordsFromSequence:(id)arg1 inRange:(CDStruct_e83c9415)arg2 error:(id *)arg3;
- (BOOL)_removeAllKeywordsFromSequence:(id)arg1 inRange:(CDStruct_e83c9415)arg2 error:(id *)arg3 animate:(BOOL)arg4;
- (BOOL)_intersectsKeywordsOfType:(id)arg1 inSequence:(id)arg2 byRange:(CDStruct_e83c9415)arg3 getRangesAndKeywords:(id *)arg4 leadingRangesAndKeywords:(id *)arg5 trailingRangesAndKeywords:(id *)arg6;
- (id)currentKeywords;
- (void)_addKeywordsFromGroup:(unsigned int)arg1;
- (void)showKeywordEditor;
- (void)_toggleKeywordEditor;
- (void)_hideKeywordEditor;
- (void)_updateKeywordEditorForKeywordChange;
- (void)_orderFrontKeywordEditor;
- (void)_updateKeywordEditorForPlayingRangeOfMediaChange;
- (void)_updateKeywordEditorForSelectionChange;
- (void)_updateKeywordEditorOrderFront:(BOOL)arg1 makeFirstResponder:(BOOL)arg2;
- (void)_updateMediaRanges:(id)arg1 addedKeywordNames:(id)arg2 removedKeywordNames:(id)arg3;
- (id)_currentKeywordingMediaRanges;
- (id)_sortedKeywordNamesForMediaRanges:(id)arg1;
- (BOOL)actionMoveMarker:(id)arg1 toRange:(id)arg2 error:(id *)arg3;
- (BOOL)markerEditorIsShown;
- (void)hideMarkerEditor;
- (void)showMarkerEditorForMarkerLayer:(id)arg1 object:(id)arg2;
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(id)arg2;
- (void)_revealAndSelectMediaRange:(id)arg1;
- (void)_revealAndSelectMediaRanges:(id)arg1;
- (void)_selectMediaRange:(id)arg1;
- (void)_selectMediaRanges:(id)arg1;
- (void)_revealMediaRange:(id)arg1;
- (void)_revealMediaRanges:(id)arg1;
- (void)openItemFromRangeObject:(id)arg1;
- (void)collapseSelectionIntoVariant:(id)arg1;
- (void)makeVariantGroupFromSelection:(id)arg1;
- (id)_newStackFromSelection:(id)arg1;
- (void)selectNextVariantInSelection:(id)arg1;
- (void)selectPreviousVariantInSelection:(id)arg1;
- (void)_selectVariantInSelection:(BOOL)arg1;
- (void)doMute:(id)arg1;
- (void)volumeDown:(id)arg1;
- (void)volumeUp:(id)arg1;
- (void)_performVolumeAdjustment:(double)arg1 actionName:(id)arg2;
- (void)moveItemsToLibrary:(id)arg1;
- (void)moveToLibrary:(id)arg1;
- (void)copyItemsToLibrary:(id)arg1;
- (void)copyToLibrary:(id)arg1;
- (void)_mmToLibrary:(id)arg1 isCopy:(BOOL)arg2;
- (void)mergeClips:(id)arg1;
- (void)allowTimelineEditing:(id)arg1;
- (BOOL)allowTimelineEditingState;
- (BOOL)canAllowTimelineEditing;
- (void)openInTimeline:(id)arg1;
- (BOOL)canOpenInTimeline;
- (id)openInTimelineMenuTitle;
- (BOOL)revealObject:(id)arg1 andRange:(CDStruct_e83c9415)arg2 atPlayhead:(CDStruct_1b6d18a9)arg3;
- (BOOL)mediaRangesVisible:(id)arg1;
- (void)removeFilters;
- (void)relinkFiles:(id)arg1;
- (BOOL)canRelinkFiles;
- (void)copyQueueCanceled:(id)arg1;
- (void)ingestManagerStoppedIngest:(id)arg1;
- (void)moveToTrash:(id)arg1;
- (BOOL)canMoveToTrash;
- (BOOL)_deleteClips:(id)arg1 warnUser:(BOOL)arg2 error:(id *)arg3;
- (id)_mediaToMigrateForClips:(id)arg1 mediaRefsToDelete:(id)arg2;
- (id)_mediaRefsToDeleteForClips:(id)arg1;
- (BOOL)_pasteFromPasteboardWithName:(id)arg1 error:(id *)arg2;
- (BOOL)_canPasteFromPasteboardWithName:(id)arg1;
- (void)revealInFinder:(id)arg1;
- (BOOL)canRevealInFinder;
- (void)breakApartClipItems:(id)arg1;
- (BOOL)canBreakApartClipItems;
- (void)duplicate:(id)arg1;
- (void)snapshotProject:(id)arg1;
- (void)snapshotProjects:(id)arg1;
- (BOOL)canSnapshotProject;
- (void)_updateBrowserWithObject:(id)arg1;
- (void)consolidateFiles:(id)arg1;
- (void)purgeProjectRenderFiles:(id)arg1;
- (void)purgeRenderFiles:(id)arg1;
- (void)_duplicateMediaRanges:(id)arg1 intoArray:(id)arg2;
- (id)createNewSequence:(int)arg1 withName:(id)arg2 wantsSettings:(BOOL)arg3 defaultLibrary:(id)arg4;
- (id)createNewSequence:(int)arg1;
- (void)newEventUsingDefaultLibrary:(id)arg1;
- (id)_findMostCommonVideoProps:(id)arg1 forBestGuessedOnly:(BOOL)arg2;
- (long long)_findMostCommonDisplayDropFrame:(id)arg1 forVideoProps:(id)arg2;
- (BOOL)_mixedTCTracksClockTimeInSelection:(id)arg1;
- (CDStruct_1b6d18a9)_findSmallestStartingTime:(id)arg1 frameDuration:(CDStruct_1b6d18a9)arg2 dropFrame:(long long)arg3;
- (void)newProject:(id)arg1;
- (void)createCompoundClip:(id)arg1;
- (void)createMultiAngleClip:(id)arg1;
- (void)settingsSheetClosing:(int)arg1 sequence:(id)arg2 actionName:(id)arg3 settingsModule:(id)arg4;
- (id)createClip:(id)arg1;
- (void)_workOnMultiAngleCreationSequence:(id)arg1 project:(id)arg2 actionName:(id)arg3 selection:(id)arg4;
- (void)_addSelectedEdits:(id)arg1 toSequence:(id)arg2;
- (void)_arrangeEditsIntoAngles:(id)arg1 arrangeBy:(int)arg2 syncBy:(int)arg3 orderBy:(int)arg4 fineSyncByAudio:(int)arg5;
- (void)extendFavoriteRangeFromPreviousMoment:(id)arg1;
- (void)delete:(id)arg1;
- (void)reject:(id)arg1;
- (void)unfavorite:(id)arg1;
- (void)favorite:(id)arg1;
- (void)favoriteDown:(id)arg1;
- (void)endPaintingEdit;
- (void)beginPaintingEdit;
- (void)_addFavoriteRangeType:(id)arg1 range:(id)arg2;
- (void)_addFavoriteForRangesOfMedia:(id)arg1 markerCategory:(id)arg2;
- (void)markSelection:(id)arg1;
- (BOOL)_markedRangeInSelection;
- (id)_markerAtPersistentPlayhead;
- (id)_markerAtPlayhead;
- (BOOL)_markerExistsAtPlayhead;
- (void)nudgeMarkerLeft:(id)arg1;
- (void)nudgeMarkerRight:(id)arg1;
- (void)nudgeMarker:(BOOL)arg1;
- (void)markMarkerUncomplete:(id)arg1;
- (void)markMarkerComplete:(id)arg1;
- (void)_markMarker:(id)arg1 complete:(BOOL)arg2;
- (void)makeMarkerNote:(id)arg1;
- (void)makeMarkerToDo:(id)arg1;
- (void)editMarker:(id)arg1;
- (BOOL)_selectionIntersectsMarkers;
- (void)addMarkerAndAlwaysEdit:(BOOL)arg1 isToDo:(BOOL)arg2 isChapter:(BOOL)arg3 isMoment:(BOOL)arg4;
- (void)addMomentMarker:(id)arg1;
- (void)addChapterMarker:(id)arg1;
- (void)addToDoMarker:(id)arg1;
- (void)addMarker:(id)arg1;
- (void)addAndEditMarker:(id)arg1;
- (void)deleteMarkersInSelection:(id)arg1;
- (BOOL)_deleteMarkersFromObjects:(id)arg1;
- (BOOL)deleteSpecificMarker:(id)arg1;
- (void)deleteMarker:(id)arg1;
- (void)copyMarker:(id)arg1;
- (void)cutMarker:(id)arg1;
- (void)deleteMarkerFromMenu:(id)arg1;
- (void)copyMarkerFromMenu:(id)arg1;
- (void)cutMarkerFromMenu:(id)arg1;
- (void)modifyMarkerFromMenu:(id)arg1;
- (void)showTimecodeEntryPlusDelta:(id)arg1;
- (void)showTimecodeEntryMinusDelta:(id)arg1;
- (void)showTimecodeEntryPlayhead:(id)arg1;
- (void)showTimecodeEntryDuration:(id)arg1;
- (int)_getNumericEntryType;
- (void)numericEntryDidEndWithType:(int)arg1 timecode:(id)arg2 direction:(int)arg3;
- (BOOL)canToggleDeltaAndAbsolute:(int)arg1;
- (id)runtimeTimecode;
- (id)timecodeFormatter;
- (id)numericEntry;
- (void)extendDown:(id)arg1;
- (void)extendUp:(id)arg1;
- (void)down:(id)arg1;
- (void)up:(id)arg1;
- (void)gotoOut:(id)arg1;
- (void)gotoIn:(id)arg1;
- (void)editPreviousMarker:(id)arg1;
- (void)previousMarker:(id)arg1;
- (void)editNextMarker:(id)arg1;
- (void)nextMarker:(id)arg1;
- (void)previousEdit:(id)arg1;
- (void)nextEdit:(id)arg1;
- (void)playProject:(id)arg1;
- (void)playRateMinus32X:(id)arg1;
- (void)playRateMinus16X:(id)arg1;
- (void)playRateMinus8X:(id)arg1;
- (void)playRateMinus4X:(id)arg1;
- (void)playRateMinus2X:(id)arg1;
- (void)playRateMinus1X:(id)arg1;
- (void)playRate32X:(id)arg1;
- (void)playRate16X:(id)arg1;
- (void)playRate8X:(id)arg1;
- (void)playRate4X:(id)arg1;
- (void)playRate2X:(id)arg1;
- (void)playRate1X:(id)arg1;
- (void)playToOut:(id)arg1;
- (void)playReverse:(id)arg1;
- (void)playAroundCurrentFrame:(id)arg1;
- (void)playFromBeginningOfClip:(id)arg1;
- (void)playInToOut:(id)arg1;
- (void)stepForward10Frames:(id)arg1;
- (void)stepBackward10Frames:(id)arg1;
- (void)stepForwardSubframe:(id)arg1;
- (void)stepBackwardSubframe:(id)arg1;
- (void)stepForwardField:(id)arg1;
- (void)stepBackwardField:(id)arg1;
- (void)stepForward:(id)arg1;
- (void)stepBackward:(id)arg1;
- (void)playFromStart:(id)arg1;
- (void)gotoEnd:(id)arg1;
- (void)gotoStart:(id)arg1;
- (void)rewindUp:(id)arg1;
- (void)rewindDown:(id)arg1;
- (void)rewind:(id)arg1;
- (void)fastForwardUp:(id)arg1;
- (void)fastForwardDown:(id)arg1;
- (void)fastForward:(id)arg1;
- (void)playSelected:(id)arg1;
- (void)playFromAlternatePlayhead:(id)arg1;
- (void)stopPlayingUp:(id)arg1;
- (void)stopPlayingDown:(id)arg1;
- (void)stopPlaying:(id)arg1;
- (void)playPause:(id)arg1;
- (BOOL)canDisplayPlayer;
- (void)revealAncestor:(id)arg1;
- (void)modifyContentCreationDate:(id)arg1;
- (void)analyzeAndFix:(id)arg1;
- (void)transcodeMedia:(id)arg1;
- (void)addNewSelectionEnd:(id)arg1;
- (void)addNewSelectionStart:(id)arg1;
- (void)setSelectionEnd:(id)arg1;
- (void)setSelectionStart:(id)arg1;
- (void)clearSelection:(id)arg1;
- (void)selectClip:(id)arg1;
- (void)clearSelectionEnd:(id)arg1;
- (void)clearSelectionStart:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (id)selectedItems;
- (void)moveToRangeOfMedia:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)toggleFavoritesAndAllFilters:(id)arg1;
- (void)favoriteFilterMenu:(id)arg1;
- (void)setFavoriteFilter:(int)arg1;
- (void)setFiltersDictionary:(id)arg1;
- (long long)favFilterType;
- (id)filterPulldownMenu;
- (void)refreshFilterMenu;
- (void)_setFavoriteFilter:(int)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)openClickedOnProject:(id)arg1;
- (id)selectedRangesForCopyOrMove;
- (void)setShowListMode:(id)arg1;
- (void)setShowFilmstripMode:(id)arg1;
- (void)paste:(id)arg1;
- (void)toggleShowDateRangesInEventList:(id)arg1;
- (void)showUsedMediaRanges:(id)arg1;
- (void)showMarkedRanges:(id)arg1;
- (void)showSkimmerInfo:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)snapshotClip:(id)arg1;
- (void)importClipsWithKeywords:(id)arg1 toEvent:(id)arg2;
- (void)displayClipInPlayer:(id)arg1;
- (id)_skimmingOrSelectedMediaItems;
- (id)_skimmingMediaItems;
- (struct CGRect)screenRectForMarkerLayer:(id)arg1;
- (struct CGRect)playheadFrame;
- (struct CGRect)selectedRangeFrame;
- (void)scrollSelectionIntoView;
- (id)selectedRangesOfMediaForTimelineEditing;
- (id)selectedRangesOfMedia;
- (void)changeClipLabelSize:(id)arg1;
- (void)decreaseThumbnailSize:(id)arg1;
- (void)increaseThumbnailSize:(id)arg1;
- (double)thumbnailSizeStep;
- (void)zoomToFit:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)showOneFramePerFilmstrip:(id)arg1;
- (void)showFewerFilmstripFrames:(id)arg1;
- (void)showMoreFilmstripFrames:(id)arg1;
- (double)frameDuration;
- (void)setFrameDuration:(double)arg1;
- (void)performColorMatch:(id)arg1;
- (void)shiftDelete:(id)arg1;
- (void)bladeAll:(id)arg1;
- (void)modifySolo:(id)arg1;
- (void)solo:(id)arg1;
- (void)toggleAudioComponents:(id)arg1;
- (void)splitEdit:(id)arg1;
- (void)detachAudio:(id)arg1;
- (void)enableOrDisableEdit:(id)arg1;
- (void)addTransition:(id)arg1;
- (void)flashAndHoldLastFrame:(id)arg1;
- (void)fadeToDream:(id)arg1;
- (void)fadeToSepia:(id)arg1;
- (void)fadeToBlackAndWhite:(id)arg1;
- (void)retimeReset:(id)arg1;
- (void)retimeReverseClip:(id)arg1;
- (void)toggleRetimeEditor:(id)arg1;
- (void)retimeSpeedRampFromZero:(id)arg1;
- (void)retimeSpeedRampToZero:(id)arg1;
- (void)retimeJumpCut30FramesAtMarkers:(id)arg1;
- (void)retimeJumpCut20FramesAtMarkers:(id)arg1;
- (void)retimeJumpCut10FramesAtMarkers:(id)arg1;
- (void)retimeJumpCut5FramesAtMarkers:(id)arg1;
- (void)retimeJumpCut3FramesAtMarkers:(id)arg1;
- (void)retimeRewindx4:(id)arg1;
- (void)retimeRewindx2:(id)arg1;
- (void)retimeRewindx1:(id)arg1;
- (void)retimeInstantReplayTenPercent:(id)arg1;
- (void)retimeInstantReplayQuarter:(id)arg1;
- (void)retimeInstantReplayHalf:(id)arg1;
- (void)retimeInstantReplay:(id)arg1;
- (void)retimeConformSpeed:(id)arg1;
- (void)retimeCustomSpeed:(id)arg1;
- (void)retimeBladeSpeed:(id)arg1;
- (void)retimeHold:(id)arg1;
- (void)retimeNormal:(id)arg1;
- (void)retimeFastx20:(id)arg1;
- (void)retimeFastx8:(id)arg1;
- (void)retimeFastx4:(id)arg1;
- (void)retimeFastx2:(id)arg1;
- (void)retimeSlowTenPercent:(id)arg1;
- (void)retimeSlowQuarter:(id)arg1;
- (void)retimeSlowHalf:(id)arg1;
- (void)toggleMatchAudio:(id)arg1;
- (void)toggleMatchColor:(id)arg1;
- (void)toggleBalanceColor:(id)arg1;
- (void)toggleColorCorrectionOff:(id)arg1;
- (id)defaultEventForNewProject;
- (id)project;
- (id)_extractReferenceClipsForProjects:(id)arg1;
- (void)_updateUnfilteredRanges;
- (id)sidebarRanges;
- (void)_selectMostRecentlySelectedProjectInAllProjects;
- (id)_filteredMediaRanges:(id)arg1 usingFolder:(id)arg2;
- (id)_filteredMediaRanges:(id)arg1 forFiltersDictionary:(id)arg2;
- (id)mediaRangesForClipSet:(id)arg1;
- (id)mediaRangesForClipArray:(id)arg1;
- (void)shareDestinationPicker:(id)arg1;
- (id)shareSelection:(id)arg1;
- (double)maxItemSize;
- (double)minItemSize;
- (double)itemSize;
- (void)setItemSize:(double)arg1;
- (void)_restoreProjectRelatedSelectionStates;
- (void)_saveProjectRelatedSelectionStates;
- (void)_restoreProjectRelatedPersistentStates;
- (void)_saveProjectRelatedPersistentStates;
- (BOOL)selectedItemsIncludeStill;
@property(retain) NSArray *activeSelection; // @synthesize activeSelection=_activeSelection;
- (id)selectedClips;
- (id)filterRanges:(id)arg1;
- (BOOL)shouldAlwaysPlacePlayhead;
- (void)performEditAction;
- (BOOL)editActionAllowed;
- (void)performPlayheadButton1Action;
- (BOOL)action1OrAction2;
- (BOOL)wantsPlayheadActions;
- (BOOL)wantsRanges;
- (BOOL)wantsSkimmerInfo;
- (id)clipActionOptionsView;
- (BOOL)canEditDisplayName;
- (void)playingRangeOfMediaDidChange;
- (void)playingRangeOfMediaWillChange;
- (void)persistentPlayheadRangeOfMediaDidChange;
- (void)persistentPlayheadRangeOfMediaWillChange;
- (void)selectionDidChangeToTime:(CDStruct_e83c9415)arg1 inObject:(id)arg2;
- (void)selectionDidChangeToObject:(id)arg1;
- (void)selectedRangesOfMediaDidChange;
- (id)unfilteredRanges;
- (id)filteredRanges;
- (void)_updateFilteredRanges;
- (id)_filterRanges:(id)arg1;
- (id)_hiddenRangesForMedia:(id)arg1;
- (void)organizerFilmstripViewDidReloadData:(id)arg1;
- (unsigned long long)filmstripView:(id)arg1 writeRangesOfMedia:(id)arg2 toPasteboard:(id)arg3;
- (id)module;
- (BOOL)canBeginPlaying;
- (BOOL)canSkimWithAudio;
- (BOOL)canBeginSkimming;
- (void)makeSequenceActive:(id)arg1;
- (id)defaultEditDurationString;
- (id)editorModule;
- (void)stopUsingMedia:(id)arg1;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 loadingBlock:(CDUnknownBlockType)arg4 unloadingBlock:(CDUnknownBlockType)arg5;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (id)context;
- (BOOL)isSkimmingSkimmable:(struct NSObject *)arg1 owner:(id)arg2;
- (void)stopSkimmingForOwner:(id)arg1;
- (BOOL)startSkimmingWithSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 allowPlayback:(BOOL)arg4 owner:(id)arg5;
- (void)_removeClusterItemsFromSelection:(id)arg1;
- (void)setAllClusterDisclosedStates:(BOOL)arg1;
- (void)setDisclosedState:(BOOL)arg1 forCluster:(id)arg2;
- (BOOL)disclosedStateForCluster:(id)arg1;
- (id)_disclosedClusterKeyForMetadataKey:(id)arg1 andCluster:(id)arg2;
- (id)_groupClipsByMultipleEvents:(id)arg1 itemMap:(id)arg2;
- (id)_makeClipsCluster;
- (id)_makeProjectsCluster;
- (id)_itemsClusteredByMajorType:(id)arg1;
- (id)itemsClusteredByMetadataValue:(id)arg1;
- (void)_divideItems:(id)arg1 intoProjects:(id *)arg2 andClips:(id *)arg3;
- (id)_splitClips:(id)arg1 intoEventMapAndEventList:(id *)arg2;
- (id)_itemsClusteredByMetadata:(id)arg1;
- (BOOL)allClustersClosed;
- (BOOL)hasFilteredItems;
- (BOOL)hasUnFilteredItems;
- (BOOL)_isContentItemAtIndex:(long long)arg1 ofTypeClass:(Class)arg2;
- (id)_itemsArrangeByMetadata:(id)arg1;
- (void)reclusterContents:(BOOL)arg1;
- (void)setArrangeByMetadataKey:(id)arg1;
- (id)_arrangeByMetadataKey;
- (id)_clusteringMetadataKey;
- (void)arrangebySortOrderAction:(id)arg1;
- (void)clusteringSortOrderAction:(id)arg1;
- (void)arrangingingPopUpAction:(id)arg1;
- (void)clusteringPopUpAction:(id)arg1;
- (BOOL)_sidebarSelectionIsMultipleProjects;
- (BOOL)_shouldClusterBySidebarGroup;
- (BOOL)isClustering;
- (void)bezelHUDDidResignKey:(id)arg1;
- (void)reenableZoomBezel;
- (void)popOverWindowDidCancel:(id)arg1;
- (void)popUpClipAttributes:(id)arg1;
- (void)shouldEditRolesForRolesMenuController:(id)arg1;
- (void)rolesMenuController:(id)arg1 shouldAddRole:(id)arg2 toAnchoredObjects:(id)arg3;
- (id)anchoredObjectsForRolesMenuController:(id)arg1;
- (id)contextualMenuForSelection:(id)arg1;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)updateItemsString;
- (id)numberOfItemsString;
- (id)stripLeadingZerosFromTimeString:(id)arg1;
- (void)invalidateFilteredItems;
- (void)invalidateUnfilteredItems;
- (void)setContents:(id)arg1;
- (void)_restoreFiltersForEvent;
- (void)_storeFiltersForEvent;
- (id)_projectForContents;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)initializeEmptyEventSearchResultsViews;
- (BOOL)wantsImportMediaButton;
- (void)initializeEmptySearchResultsView;
- (void)initializeEmptyPaneView;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)showImportPanel:(id)arg1;
- (void)toggleAudioWaveforms:(id)arg1;
- (void)setShowAudioWaveforms:(BOOL)arg1;
- (BOOL)showAudioWaveforms;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (struct CGSize)viewMinSize;
- (void)firstResponderChanged:(id)arg1;
- (void)keywordEditorChangedKey:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (void)viewFrameChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)localModuleActions;
- (void)syncToDisplayViewType;
- (void)switchDisplayViews:(int)arg1;
- (id)newListViewController;
- (void)toggleListMode:(id)arg1;
- (BOOL)selectionHasNoMulticamClips;
- (BOOL)selectionCanBecomeAMulticamClip;
- (BOOL)hasAngles:(id)arg1;
- (BOOL)selectionCanSynchOrTranscode;
- (BOOL)selectionCanTranscode;
- (BOOL)_isReadOnly;
- (BOOL)containedInImportModule;
- (void)moduleDidBecomeVisible:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)identifier;
- (void)dealloc;
- (id)init;
@property BOOL skimming;

@end

