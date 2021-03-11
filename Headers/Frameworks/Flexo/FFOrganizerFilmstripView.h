//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFOrganizerImportDropResponderLayerHostView.h>

#import <Flexo/NSPopoverDelegate-Protocol.h>
#import <Flexo/NSTextFieldDelegate-Protocol.h>
#import <Flexo/NSWindowDelegate-Protocol.h>

@class CALayer, FFAnchoredTimeMarker, FFContext, FFMarkerLayer, FFOrganizerAbstractChunk, FFOrganizerFilmstripChunk, FFOrganizerFilmstripDurationLayer, FFOrganizerFilmstripViewLayout, FFPlayerModule, FigTimeRangeAndObject, LKTextField, NSArray, NSDictionary, NSEvent, NSImageView, NSMapTable, NSMutableDictionary, NSPopover, NSSet, NSString, NSTextField, NSTrackingArea, NSView;
@protocol FFOrganizerFilmstripViewDelegate;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripView : FFOrganizerImportDropResponderLayerHostView <NSTextFieldDelegate, NSWindowDelegate, NSPopoverDelegate>
{
    id <FFOrganizerFilmstripViewDelegate> _delegate;
    NSView *_dragCompositeView;
    NSImageView *_dragIconView;
    NSImageView *_dragBadgeView;
    NSTextField *_dragCount;
    CALayer *_rootLayer;
    CALayer *_marqueeSelectionFrameLayer;
    CALayer *_filmstripLayoutLayer;
    FFOrganizerFilmstripDurationLayer *_durationLayer;
    struct CGRect _marqueeSelectionFrame;
    NSArray *_marqueeActiveSelection;
    NSArray *_marqueePreviousSelection;
    BOOL _marqueeSelectionIsClips;
    BOOL _marqueeSelectionTypeIsLockedIn;
    int _dragSelectionWhereIsMouse;
    BOOL _currentlyDragOrDropping;
    BOOL _currentlyMakingSelection;
    FigTimeRangeAndObject *_dragResultSelection;
    BOOL _reloadDataCalledWhileDragging;
    FFOrganizerFilmstripViewLayout *_layout;
    NSArray *_selection;
    FigTimeRangeAndObject *_persistentPlayheadRangeOfMedia;
    CDStruct_1b6d18a9 _persistentPlayheadTime;
    FigTimeRangeAndObject *_playingRangeOfMedia;
    long long _playingRangeIndex;
    FFPlayerModule *_playerModule;
    FFContext *_playerContext;
    FigTimeRangeAndObject *_lastPlayedMedia;
    BOOL _playThroughGaps;
    BOOL _isActive;
    BOOL _isPlayerActive;
    BOOL _skimming;
    BOOL _overrideProjectProperyDisplay;
    BOOL _removingFromModule;
    BOOL _playingSelection;
    BOOL _activeSelectionUpdating;
    BOOL _singleFilmstripMode;
    double _frameHeight;
    double _audioHeight;
    double _frameDuration;
    struct CGPoint _mouseDownLocation;
    NSTrackingArea *_visibleTrackingArea;
    NSSet *_keywords;
    FFOrganizerFilmstripChunk *_skimmingFilmstripChunk;
    BOOL _usesAutoKeywordsSelectionStyle;
    BOOL _needsToUpdateScrollPosition;
    struct CGPoint _scrollPosition;
    NSDictionary *_storedSelectionRangeDataByURL;
    float _oldPlayheadChunkOffset;
    BOOL _oldOffsetWasFromPersistentPlayhead;
    NSPopover *_playheadInfoPopover;
    NSView *_playheadInfoView;
    LKTextField *_playheadInfoTextField;
    NSView *_clipActionsPlaceholder;
    struct PCProcrastinatedDispatch_t _playheadInfoDispatchContext;
    struct CGRect _actionWindowSize;
    BOOL _skimmingDelayActive;
    FFOrganizerFilmstripChunk *_skimmingDelayPrevChunk;
    double _skimmingDelayPrevTime;
    NSEvent *_delayedMouseMovedEvent;
    BOOL _needsData;
    BOOL _ignoreTimeRateChanged;
    BOOL _showsClipLabels;
    BOOL _showRanges;
    BOOL _showUsedMediaRanges;
    BOOL _disableSkimming;
    BOOL _activeToolSkims;
    BOOL _disableSnapping;
    BOOL _deferAnchoredItemSnapUpdate;
    BOOL _deferRangeInvalidations;
    BOOL _actionPerformedNotificationRegistered;
    int _clipLabelSize;
    BOOL _analysis;
    BOOL _autoScrollDelayActive;
    double _autoScrollDelayPrevTime;
    CDStruct_1b6d18a9 _skimmingHilightDuration;
    int _skimmingDurationPosition;
    FFOrganizerAbstractChunk *_mouseOverChunk;
    CDStruct_1b6d18a9 _keyDownHighlightStartTime;
    CDUnknownBlockType _keyDownHighlightCallbackBlock;
    CDStruct_1b6d18a9 _oppositeSelectionTime;
    CDStruct_e83c9415 _selectionRangeBeingExtended;
    FigTimeRangeAndObject *_selectionAnchorPoint;
    FFAnchoredTimeMarker *_highlightedMarker;
    BOOL _restoredPersistentState;
    BOOL _ignoreSelectionRestore;
    BOOL _autoScrolling;
    BOOL _shouldScrollToSelectionAfterReload;
    BOOL _shouldUpdateSelectionForDrag;
    BOOL _disableDragCursor;
    BOOL _activeWhenModuleIsActive;
    NSTextField *_editField;
    BOOL _editing;
    FFOrganizerAbstractChunk *_editingChunk;
    NSMutableDictionary *_clipBoundSnapTimes;
    NSMutableDictionary *_rangeSelectionSnapTimes;
    NSMutableDictionary *_playheadSnapTimes;
    NSMutableDictionary *_anchoredItemSnapTimes;
    FFOrganizerFilmstripChunk *_tooltipChunk;
    BOOL _hasTooltip;
    struct PCProcrastinatedDispatch_t _procrastinatedUpdateUsedMediaRanges;
    NSMapTable *_procrastinatedUsedMediaUpdateRangeMap;
    struct PCProcrastinatedDispatch_t _procrastinatedReloadData;
    BOOL _invalidateUnfilteredItemsOnFocus;
    double _contentsScaleFactor;
    BOOL _keywordEditorIsKey;
    BOOL _isDraggingMarker;
    FFMarkerLayer *_draggedMarkerLayer;
    FFOrganizerAbstractChunk *_draggingChunk;
    struct CGRect _draggedMarkerStartRect;
    FigTimeRangeAndObject *_activePaintToolRO;
    BOOL _reflowingChunks;
    BOOL _respondingToFirstResponderChange;
    BOOL _playerIsFullScreen;
    BOOL _observingEventProjectDataDidLoad;
    NSView *_actionOptionsView;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) FigTimeRangeAndObject *activePaintToolRO; // @synthesize activePaintToolRO=_activePaintToolRO;
@property NSView *actionOptionsView; // @synthesize actionOptionsView=_actionOptionsView;
@property(nonatomic) BOOL activeWhenModuleIsActive; // @synthesize activeWhenModuleIsActive=_activeWhenModuleIsActive;
@property(readonly, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(nonatomic) BOOL currentlyMakingSelection; // @synthesize currentlyMakingSelection=_currentlyMakingSelection;
@property(retain, nonatomic) FFOrganizerAbstractChunk *mouseOverChunk; // @synthesize mouseOverChunk=_mouseOverChunk;
@property(retain, nonatomic) FFOrganizerFilmstripChunk *skimmingDelayPrevChunk; // @synthesize skimmingDelayPrevChunk=_skimmingDelayPrevChunk;
@property(retain, nonatomic) FFOrganizerFilmstripChunk *skimmingFilmstripChunk; // @synthesize skimmingFilmstripChunk=_skimmingFilmstripChunk;
@property(retain) NSPopover *playheadInfoPopover; // @synthesize playheadInfoPopover=_playheadInfoPopover;
@property(nonatomic) BOOL disableDragCursor; // @synthesize disableDragCursor=_disableDragCursor;
@property(nonatomic) BOOL shouldScrollToSelectionAfterReload; // @synthesize shouldScrollToSelectionAfterReload=_shouldScrollToSelectionAfterReload;
@property(nonatomic) BOOL ignoreSelectionRestore; // @synthesize ignoreSelectionRestore=_ignoreSelectionRestore;
@property(nonatomic) BOOL singleFilmstripMode; // @synthesize singleFilmstripMode=_singleFilmstripMode;
@property(retain, nonatomic) NSDictionary *_storedSelectionRangeDataByURL; // @synthesize _storedSelectionRangeDataByURL;
@property(nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;
@property(nonatomic) double frameHeight; // @synthesize frameHeight=_frameHeight;
@property(readonly, retain, nonatomic) FFOrganizerFilmstripViewLayout *filmstripViewLayout; // @synthesize filmstripViewLayout=_layout;
@property(nonatomic) BOOL removingFromModule; // @synthesize removingFromModule=_removingFromModule;
@property(nonatomic) BOOL skimming; // @synthesize skimming=_skimming;
@property(nonatomic) BOOL analysis; // @synthesize analysis=_analysis;
@property(retain, nonatomic) NSSet *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) id <FFOrganizerFilmstripViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controlTextDidEndEditingNotification:(id)arg1;
- (void)endEditing;
- (void)cancelEditing;
- (BOOL)commitEditing;
- (void)removeEditor;
- (void)installEditorForChunk:(id)arg1;
- (long long)orderForView:(id)arg1;
- (id)editField;
- (struct CGRect)editFieldFrameForChunk:(id)arg1;
- (void)syntheticUIElement:(id)arg1 performAction:(id)arg2;
- (id)syntheticUIElementActions:(id)arg1;
- (void)syntheticUIElement:(id)arg1 setValue:(id)arg2 forAttribute:(id)arg3;
- (void)_activateOnlySelectionMarker:(id)arg1;
- (void)_shiftSelectionRangeByOffset:(CDStruct_1b6d18a9)arg1 delta:(long long)arg2 contextIndex:(unsigned long long)arg3 rangeObject:(id)arg4;
- (void)_setSelectionRangeHandleTime:(CDStruct_1b6d18a9)arg1 contextIndex:(unsigned long long)arg2 rangeObject:(id)arg3;
- (void)_assignNewSelectionRange:(CDStruct_e83c9415)arg1 contextIndex:(unsigned long long)arg2 rangeObject:(id)arg3;
- (void)_setPlayheadTime:(CDStruct_1b6d18a9)arg1 contextIndex:(unsigned long long)arg2 rangeObject:(id)arg3;
- (id)syntheticUIElementAttributeNames:(id)arg1;
- (BOOL)syntheticUIElement:(id)arg1 isAttributeSettable:(id)arg2;
- (id)syntheticUIElement:(id)arg1 attributeValue:(id)arg2;
- (void)_accessibilityPerformActionLoadSequenceOrAppendSelection:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_mediaNameElementWithRangeObject:(id)arg1;
- (id)_selectionRangeElementWithSelectionMarker:(id)arg1 contextIndex:(unsigned long long)arg2;
- (id)_mediaElementWithRangeObject:(id)arg1;
- (id)_chunkContainerElementWithChunkContainer:(id)arg1;
- (id)_clusterHeaderDisclosureElementWithChunkContainer:(id)arg1;
- (id)_clusterHeaderElementWithChunkContainer:(id)arg1;
- (id)_playheadElementAsPersistent:(BOOL)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (struct CGRect)_accessibilityRectForClusterHeader:(id)arg1 disclosureRect:(struct CGRect *)arg2;
- (struct CGRect)_accessibilityRectForRangeObject:(id)arg1 part:(int)arg2;
- (struct CGPoint)_snapPoint:(struct CGPoint)arg1 withRange:(id)arg2;
- (CDStruct_1b6d18a9)_snapTime:(CDStruct_1b6d18a9)arg1 withRange:(id)arg2;
- (id)_allSnapTimesForRange:(id)arg1;
- (void)_updateAnchoredItemSnapTimesForClip:(id)arg1;
- (void)_updateAnchoredItemSnapTimes;
- (void)_updatePlayheadSnapTimes;
- (void)_updateRangeSelectionSnapTimes;
- (void)_updateClipBoundSnapTimes;
- (void)_updateSnapTimes;
- (id)markerAtPlayheadReturningMarkerTime:(CDStruct_1b6d18a9 *)arg1;
- (id)draggedMarkerLayer;
- (void)_setHighlightedMarker:(id)arg1;
- (id)_firstMarkerMatchingOption:(int)arg1 relativeToTime:(CDStruct_1b6d18a9)arg2 inRangeOfMedia:(id)arg3 itemTypes:(id)arg4;
- (id)_firstMarkerMatchingOption:(int)arg1 relativeToTime:(CDStruct_1b6d18a9)arg2 startSearchAtRangeOfMedia:(id)arg3 foundAtRangeOfMedia:(id *)arg4 foundAtTime:(CDStruct_1b6d18a9 *)arg5 itemTypes:(id)arg6;
- (void)popoverDidClose:(id)arg1;
- (void)removePlayheadInfoPopoverWithAnimation:(BOOL)arg1;
- (void)_updatePlayheadInfoPopover:(BOOL)arg1 animate:(BOOL)arg2;
- (BOOL)durationPopoverShouldShowAndOverrideSkimmerInfoSetting;
- (void)playheadInfoShouldShow:(BOOL)arg1;
- (void)_deferredUpdatePlayheadInfoPopover;
- (id)_playheadInfoPopoverWithChunk:(id)arg1 keywords:(id)arg2 analysisKeywords:(id)arg3 markers:(id)arg4 playheadTime:(CDStruct_1b6d18a9)arg5;
- (void)_setPlayheadInfoFromChunkAndUpdatePopover:(id)arg1 keywords:(id)arg2 analysisKeywords:(id)arg3 markers:(id)arg4 playheadTime:(CDStruct_1b6d18a9)arg5 popover:(id)arg6;
- (void)_setPlayheadInfoFromChunk:(id)arg1 keywords:(id)arg2 analysisKeywords:(id)arg3 markers:(id)arg4 playheadTime:(CDStruct_1b6d18a9)arg5;
- (void)willRemoveFromModule;
- (void)didInstallInModule;
- (id)filmstripModule;
- (id)_markersForSequence:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)_analysisKeywordDisplayNamesForSequence:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)_keywordsForSequence:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setAutoKeywordsSelectionStyle:(BOOL)arg1;
- (void)didRemoveKeywordsWithRanges:(id)arg1 onSequence:(id)arg2 animationRange:(CDStruct_e83c9415)arg3;
- (void)willRemoveKeywordsWithRanges:(id)arg1 onSequence:(id)arg2 animationRange:(CDStruct_e83c9415)arg3;
- (void)didAddKeywordsNamed:(id)arg1 removeKeywordsNamed:(id)arg2 onSequence:(id)arg3 forRange:(CDStruct_e83c9415)arg4;
- (void)willAddKeywordsNamed:(id)arg1 removeKeywordsNamed:(id)arg2 onSequence:(id)arg3 forRange:(CDStruct_e83c9415)arg4;
- (id)_imageWithKeywordNames:(id)arg1;
- (id)_chunkForRangeOfMedia:(id)arg1;
- (void)displayFloatingDurationString:(id)arg1 atPoint:(struct CGPoint)arg2 withHeight:(double)arg3 atStart:(BOOL)arg4;
- (void)hideFloatingDurationString:(id)arg1;
- (id)filmstripHideDurationString;
- (void)displaySelectionDurationAtPoint:(struct CGPoint)arg1 forRangeObject:(id)arg2;
- (id)selectionDurationForRangeObject:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)sequenceAwareSkimMedia:(id)arg1;
- (id)stripLeadingZerosFromTimeString:(id)arg1;
- (struct CGRect)actionPopoverFrame;
- (void)displayClipActionsPopoverAtPoint:(struct CGPoint)arg1 forRangeObject:(id)arg2;
- (void)clipActionPopOverDidResignKey:(id)arg1;
- (void)syncFilmstripBackground:(BOOL)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) FFContext *context;
@property(readonly, nonatomic) FFPlayerModule *playerModule; // @synthesize playerModule=_playerModule;
- (void)displayPlayer;
- (BOOL)_canDisplayPlayer;
- (void)timeRateChangedForContext:(id)arg1;
- (void)_updatePlayerFromContext:(id)arg1 scrollToPlayhead:(BOOL)arg2;
- (void)loopRangeEndReachedForContext:(id)arg1 withObject:(id)arg2;
- (void)loopRangeStartReachedForContext:(id)arg1 withObject:(id)arg2;
- (BOOL)keepPlaying;
- (void)_movePlayheadsToNearestRangesOfMedia;
- (void)_nearestRangeOfMedia:(id *)arg1 andTime:(CDStruct_1b6d18a9 *)arg2;
- (void)_moveToHeadOfNextClipWithRate:(id)arg1;
- (void)_moveToTailOfPrevClipWithRate:(id)arg1;
- (id)nextClipToPlay;
- (id)previousClipToPlay;
- (void)_movePlayerToRangeOfMedia:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2 forSkimming:(BOOL)arg3 force:(BOOL)arg4;
- (void)_movePlayerToRangeOfMedia:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)_movePlayerWithDictionary:(id)arg1;
- (void)_movePlayerToPoint:(struct CGPoint)arg1;
- (void)_movePersistentPlayheadToRangeOfMedia:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)playFromPersistentPlayhead;
- (void)playClipUnderPlayhead;
- (void)playToOut;
- (void)playSelection;
- (void)playPause;
- (void)_loadPlayerWithRangeOfMedia:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)_setPlayingRangeOfMedia:(id)arg1;
- (void)restorePlayheadTo:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)playingRangeOfMedia;
- (id)persistentPlayheadRangeOfMedia;
- (CDStruct_1b6d18a9)persistentPlayheadTime;
- (CDStruct_1b6d18a9)playingTime;
- (void)_playerUnloadedFilmstripMedia;
- (void)_stopPlayback;
- (void)endKeyDownActionHighlightForRanges:(id)arg1;
- (void)keyDownHighlight:(int)arg1 forRangeAndObjects:(id)arg2;
- (BOOL)isKeyDownHighlightInProgress;
- (void)endKeyDownHighlight;
- (void)beginKeyDownHilight:(int)arg1 atTime:(CDStruct_1b6d18a9)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)screenRectForMarkerLayer:(id)arg1;
- (struct CGRect)playheadFrame;
- (struct CGRect)selectedBadgeChunkRect;
- (BOOL)revealAndSelectRange:(id)arg1 playheadTime:(CDStruct_1b6d18a9)arg2;
- (void)activateSelectedRangesOfMedia:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)addSelectionRange:(id)arg1 extendingSelection:(BOOL)arg2;
- (void)setSelectedRangesOfMedia:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)setSelectedRangesOfMedia:(id)arg1 byExtendingSelection:(BOOL)arg2 onlyClearAffected:(BOOL)arg3;
- (void)activeSelectionDidChange;
- (id)_conformArray:(id)arg1 toBaseRanges:(id)arg2;
- (id)_conformArray:(id)arg1 toBaseRangesMapTable:(id)arg2;
- (id)selectedRangesOfMedia;
- (void)_updateScrollPosition;
- (void)takeViewFocus;
- (void)performColorMatch;
- (void)highlightMarker:(id)arg1 inRangeOfMedia:(id)arg2 alwaysEdit:(BOOL)arg3;
- (void)moveToRelativeEdit:(BOOL)arg1;
- (CDStruct_1b6d18a9)_adjustEndTimeToIncludeFrameUnderPlayhead:(CDStruct_1b6d18a9)arg1;
- (id)_selectionMarkersToSelectFromAnchorToClickedClip:(id)arg1 mediaTime:(CDStruct_1b6d18a9)arg2 createRange:(BOOL)arg3;
- (id)_clipsToSelectFromAnchorToClickedClip:(id)arg1;
- (id)_activeSelectionMarkersFromArray:(id)arg1;
- (BOOL)_anySelectionMarkersAreActiveForClip:(id)arg1;
- (BOOL)_allSelectionMarkersAreActive:(id)arg1;
- (void)_selectMarkerMatchingOption:(int)arg1 alwaysEdit:(BOOL)arg2;
- (void)selectPreviousMarkerAndAlwaysEdit:(BOOL)arg1;
- (void)selectNextMarkerAndAlwaysEdit:(BOOL)arg1;
- (void)moveToRangeOfMedia:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)moveToSelectionEnd;
- (void)moveToSelectionStart;
- (void)moveToFirstSelectedClip;
- (void)moveToNextClipExtendingSelection:(BOOL)arg1;
- (void)moveToPreviousClipExtendingSelection:(BOOL)arg1;
- (void)moveToLastClip;
- (void)moveToFirstClip;
- (void)moveToEndOfClip;
- (void)moveToStartOfClip;
- (void)_moveToClip:(id)arg1 extendSelection:(BOOL)arg2;
- (BOOL)_shouldSelectClips;
- (id)_selectedRangesOverlappingRange:(id)arg1;
- (BOOL)selectionOverlapsRangeObject:(id)arg1;
- (void)_deactivateAllSelections;
- (id)_selectionWithRangeOfMediaRemoved:(id)arg1;
- (void)selectClipAtPlayhead:(id)arg1;
- (void)clearSelectionAndPlayer;
- (void)clearPlayer;
- (void)_hidePlayheads;
- (void)clearSelection;
- (void)progressiveClearSelection;
- (void)deactivateOrDeselectClips;
- (void)selectAll;
- (void)selectClip;
- (void)clearSelectionEndTime:(CDStruct_1b6d18a9)arg1;
- (void)clearSelectionStartTime:(CDStruct_1b6d18a9)arg1;
- (void)setSelectionEndTime:(CDStruct_1b6d18a9)arg1 clearExistingSelection:(BOOL)arg2;
- (void)setSelectionStartTime:(CDStruct_1b6d18a9)arg1 clearExistingSelection:(BOOL)arg2;
- (id)_filteredRangeForRangeAndObject:(id)arg1;
- (unsigned long long)_indexOfRangeInFilteredRanges:(id)arg1;
- (void)_addSelectionRangesFromSelectionMarkersForClip:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)filteredClipForRangeOfMedia:(id)arg1;
- (void)scrollRangeOfMediaToVisible:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)scrollRangeOfMediaToVisible:(id)arg1 scrollToBeginning:(BOOL)arg2;
- (void)scrollSelectionIntoView;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)updateLayout;
- (id)checkForModifierKeyEvents:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (BOOL)_handleActiveToolForChunk:(id)arg1 event:(id)arg2;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)_setMouseCursorForPoint:(struct CGPoint)arg1;
- (BOOL)_dragShouldBeginFromMouseDown:(id)arg1;
- (BOOL)_dragCanBeginFromSomeMouseMotion;
- (BOOL)_dragCanBeginFromVerticalMouseMotion;
- (BOOL)_dragCanBeginFromHorizontalMouseMotion;
- (void)_dragClipsOutOfOrganizer:(struct CGPoint)arg1 withEvent:(id)arg2 andRangeAndObjects:(id)arg3;
- (id)dragImageOfSize:(struct CGSize)arg1;
- (void)_dragClipsOutOfOrganizer:(struct CGPoint)arg1 event:(id)arg2;
- (void)_doneDragging:(int)arg1;
- (struct CGPoint)_pointOfSelectionHandleClosestToPoint:(struct CGPoint)arg1 getOpositeSelectionTime:(CDStruct_1b6d18a9 *)arg2 rangeBeingExtended:(CDStruct_e83c9415 *)arg3;
- (void)_moveClosestRangeSelectionHandleToPoint:(struct CGPoint)arg1;
- (void)_updateDragSelectionBetweenPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2 modifyExisting:(BOOL)arg3;
- (void)_warpMouseToPoint:(struct CGPoint)arg1;
- (struct CGPoint)_constrainPoint:(struct CGPoint)arg1 toRect:(struct CGRect)arg2;
- (void)_trackRangeDragSelectionEventsModifyExisting:(int)arg1;
- (void)_beginRangeDragSelectionForChunk:(id)arg1 event:(id)arg2;
- (void)_endMarqueeSelection;
- (void)_beginMarqueeSelectionExtendingSelection:(BOOL)arg1;
- (id)_defaultStillRangeOfMediaForChunk:(id)arg1;
- (void)_updateMouseLocation:(struct CGPoint)arg1 event:(id)arg2 force:(BOOL)arg3;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_mouseMovedToPoint:(struct CGPoint)arg1 andEvent:(id)arg2;
- (void)_delayedMouseMoved;
- (void)_cancelDelayedMouseMoved;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_handleMouseDown:(id)arg1 inProjectChunk:(id)arg2;
- (void)unhandledMouseDown:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)unhandledCursorUpdateAtPoint:(struct CGPoint)arg1 event:(id)arg2;
- (void)rightMouseDown:(id)arg1;
- (void)setOverrideProjectProperyDisplay:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_clipViewFrameOrBoundsDidChange:(id)arg1;
- (void)setAutoScrollDelayActive:(BOOL)arg1;
- (BOOL)autoScrollDelayActive;
- (void)boundsDidChangeNotification:(id)arg1;
- (void)frameDidChangeNotification:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_addNotificationObserversForWindow:(id)arg1;
- (void)_removeNotificationObserversForWindow:(id)arg1;
- (void)viewDidUnhide;
- (void)firstResponderChanged:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)viewDidChangeBackingProperties;
- (void)windowBackingScaleFactorChanged:(id)arg1;
- (void)keywordEditorChanged:(id)arg1;
- (void)sequenceFormatChanged:(id)arg1;
- (void)notificationHandler:(id)arg1;
- (void)_setAutoScrolling:(BOOL)arg1;
- (void)activeToolDidChange:(id)arg1;
- (void)_documentWasRemoved:(id)arg1;
- (void)_moduleLayoutDidChange:(id)arg1;
- (void)_playerDidExitFullScreen:(id)arg1;
- (void)_playerWillEnterFullScreen:(id)arg1;
@property(nonatomic) double audioHeight;
- (void)_restorePlayheadChunkScrollOffsetAfterReload;
- (id)_clusterFilteredRangesByMetadataValue:(id)arg1;
- (void)_reflowChunks;
- (void)_hidePlayerLayer:(BOOL)arg1;
- (BOOL)_rangesContainClip:(id)arg1;
- (void)_delayedReflowPlayer;
- (void)_reflowPlayer;
- (void)reloadData;
- (void)selectOrganizerItemWithRange:(id)arg1;
- (void)_syncToFilteredRanges;
- (void)_toggleEmptyAndSearchViews:(BOOL)arg1;
- (void)_hideEmptyPaneView:(BOOL)arg1 hideEmptySearchResultsView:(BOOL)arg2;
- (void)synchronousReloadData;
- (void)setNeedsData:(BOOL)arg1;
- (void)_removeActionPerformedNotificationObserver;
- (void)_addActionPerformedNotificationObserver;
- (void)rangeInvalidated:(id)arg1 forChunkContainer:(id)arg2 originalMedia:(id)arg3;
- (BOOL)_reloadIfInvalWillFilterDifferently:(id)arg1;
- (void)updateClipThumbnails;
- (void)updateThumbnails;
- (void)_eventProjectDataDidLoad:(id)arg1;
- (BOOL)shouldDelayInvalidateUnfilteredItemsFor:(id)arg1;
- (void)restoreViewState;
- (void)_restorePlayheadsAndStuff;
- (id)_conformRangeToVisibleRanges:(id)arg1 trimmedToRange:(CDStruct_e83c9415)arg2;
- (id)contentLayoutDictionary;
- (void)takeContentLayoutDictionary:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)updateTrackingAreas;
- (void)awakeFromNib;
- (void)_restorePersistentState;
- (id)makeBackingLayer;
- (void)_setupRootLayer;
- (void)dealloc;
- (void)clearSkimmingHilightForSelectionAndSkimmerPosition:(int)arg1;
- (void)setSkimmingHilightForSelectionAndSkimmerPosition:(int)arg1;
- (void)setSkimmingHilightDuration:(CDStruct_1b6d18a9)arg1 skimmerPosition:(int)arg2;
- (void)setSkimmingHighlightColor:(id)arg1;
@property(nonatomic) int clipLabelSize;
@property(nonatomic) BOOL showsClipLabels;
@property(nonatomic) BOOL showUsedMediaRanges;
@property(nonatomic) BOOL showRanges;
- (void)setdeferAnchoredItemSnapUpdate:(BOOL)arg1;
- (void)setDisableSnapping:(BOOL)arg1;
- (BOOL)disableSnapping;
- (void)_deferredSetDisableSkimming:(id)arg1;
- (void)setDisableSkimming:(BOOL)arg1;
- (BOOL)disableSkimming;
- (id)markerEditorDelegate;
- (id)skimmingDelegate;
@property(nonatomic) BOOL deferRangeInvalidations;
- (BOOL)_isImportFilmListViewMode;
- (BOOL)_isImportFilmstripViewMode;
- (BOOL)_isOrganizerFilmListViewMode;
- (BOOL)_isOrganizerFilmstripViewMode;
- (void)_unregisterObservers;
- (void)_registerObservers;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

