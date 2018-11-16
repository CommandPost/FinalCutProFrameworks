//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "TLKEventDispatcherView.h"

@class CALayer, NSArray, NSMapTable, NSMutableSet, NSProTimecodeFormatter, NSSet, PMRStopwatch, TLKAbstractRangeSelectionLayer, TLKBumperBackgroundLayer, TLKBumperForegroundLayer, TLKClipTrimmerLane, TLKDataSourceProxy, TLKEventDispatcher, TLKGuideLayer, TLKInOutRangeMarker, TLKLayerManager, TLKLayoutDatabase, TLKLayoutDelegate, TLKLayoutManager, TLKPlayheadMarker, TLKPosterItemLane, TLKPrecisionEditorDividerBar, TLKPrecisionEditorTrimBar, TLKRulerLane, TLKSelectionManager, TLKThemeBackedLayer, TLKTimecodeDisplayView;

@interface TLKTimelineView : NSView <TLKEventDispatcherView>
{
    id <TLKTimelineViewDataSource> dataSource;
    id delegate;
    TLKEventDispatcher *_eventDispatcher;
    TLKSelectionManager *_selectionManager;
    TLKDataSourceProxy *_dataSourceProxy;
    struct CGPoint _positionOfPlayheadWindowCoordinates;
    CDStruct_1b6d18a9 _playheadTime;
    TLKPlayheadMarker *_playheadMarker;
    TLKThemeBackedLayer *_playheadSelectionMarker;
    CALayer *_playheadRulerFrameIndicator;
    CDStruct_1b6d18a9 _skimmingPlayheadTime;
    TLKPlayheadMarker *_skimmingPlayheadMarker;
    CALayer *_skimmingPlayheadFrameIndicator;
    CDStruct_e83c9415 _inOutTimeRange;
    TLKInOutRangeMarker *_inMarker;
    TLKInOutRangeMarker *_outMarker;
    TLKThemeBackedLayer *_inRangeLayer;
    TLKThemeBackedLayer *_outRangeLayer;
    TLKPrecisionEditorDividerBar *_precisionEditorDividerBar;
    TLKPrecisionEditorTrimBar *_precisionEditorTrimBar;
    TLKRulerLane *_rulerLane;
    TLKPosterItemLane *_posterLane;
    int _rulerStyle;
    int _mode;
    int _editingMode;
    TLKLayoutDatabase *_layoutDatabase;
    TLKLayoutManager *_layoutManager;
    TLKLayerManager *_layerManager;
    TLKLayoutDelegate *_layoutDelegate;
    NSProTimecodeFormatter *_timecodeFormatter;
    TLKTimecodeDisplayView *_timecodeDisplay;
    TLKTimecodeDisplayView *_valueDisplay;
    TLKAbstractRangeSelectionLayer *_rangeSelectionLayer;
    NSMapTable *_backgroundLayers;
    TLKBumperBackgroundLayer *_bumperBackgroundLayer;
    TLKBumperForegroundLayer *_bumperForegroundLayer;
    unsigned long long _bumperPadding;
    double _rightPadding;
    double _leftPadding;
    double _autoscrollEdgeWidth;
    id _focusOwner;
    id <TLKTimelineItem> _topLevelSelectedItem;
    id <TLKTimelineItem> _rolloverItem;
    TLKClipTrimmerLane *_clipTrimmerLane;
    long long _disabledLayerFrameUpdatesLevel;
    NSMutableSet *_markerParents;
    PMRStopwatch *_stopwatch;
    double _minEnforcedWidth;
    CDStruct_1b6d18a9 _minimumEditDuration;
    struct {
        unsigned int allowsHorizontalConnections:1;
        unsigned int playheadIsVisible:1;
        unsigned int skimming:1;
        unsigned int playMovesSkimmingHead:1;
        unsigned int animateEverything:1;
        unsigned int showAnchors:1;
        unsigned int disableFilmstripLayerUpdates:1;
        unsigned int disableAnimations:1;
        unsigned int draggingPaused:1;
        unsigned int scrolling:1;
        unsigned int precisionEditorIsOpen:1;
        unsigned int forceScrollingToPlayhead:1;
        unsigned int isPlaying:1;
        unsigned int isPlayingClip:1;
        unsigned int disableAutoZooming:1;
        unsigned int calculatedOffset:1;
        unsigned int maxZoomAmount:1;
        unsigned int useEntireTargetForDropZone:1;
        unsigned int zooming:1;
        unsigned int activeZooming:1;
        unsigned int updatingPlayheadPosition:1;
        unsigned int itemLevelSkimming:1;
        unsigned int disableSkimming:1;
        unsigned int playheadFrameIndicatorVisible:1;
        unsigned int draggingItemsShouldIncludeAnchors:1;
        unsigned int simpleClipDisplayMode:1;
        unsigned int opaque:1;
        unsigned int maintainVideoHeightOfClip:1;
        unsigned int scrollDuringPlayback:1;
        unsigned int waitToBecomeFirstResponder:1;
        unsigned int dragDropComponentSkimming:1;
        unsigned int wrappingLayoutPreservesMargins:1;
        unsigned int skipNextMouseTrackingEvent:1;
        unsigned int dragSelectsRange:1;
        unsigned int reloadKeepsContentVisible:1;
        unsigned int RESERVED:29;
    } _tlkViewFlags;
    struct {
        unsigned int respondsToVisibilityForItem:1;
        unsigned int respondsToWillDeselectObjectsSelectionMask:1;
        unsigned int respondsToWillSelectObjectsSelectionMask:1;
        unsigned int respondsToSelectionManagerDidChange:1;
        unsigned int respondsToSelectionManagerShouldChange:1;
        unsigned int respondsToSelectionManagerWillSelectTimeRange:1;
        unsigned int respondsToSelectionManagerDidSelectTimeRange:1;
        unsigned int respondsToDoubleClickedItem:1;
        unsigned int respondsToDoubleClickedAudioWaveform:1;
        unsigned int respondsToWillSetPlayheadTime:1;
        unsigned int respondsToDidSetPlayheadTime:1;
        unsigned int respondsToEnablePlayheadSkimming:1;
        unsigned int respondsToIsPlayheadSkimming:1;
        unsigned int respondsToShouldSkimPlayhead:1;
        unsigned int respondsToChangedPlayheadTimeWithEmptySelection:1;
        unsigned int respondsToLayoutSublayers:1;
        unsigned int respondsToLayoutSublayersOfVideoLayer:1;
        unsigned int respondsToLayoutSublayersOfAudioLayer:1;
        unsigned int respondsToBadgeLayersForItem:1;
        unsigned int respondsToTimelineViewFrameDuration:1;
        unsigned int respondsToTimelineViewAudioSampleDuration:1;
        unsigned int respondsToUpdateItemSkimming:1;
        unsigned int respondsToStopItemSkimming:1;
        unsigned int respondsToContextMenuForItem:1;
        unsigned int respondsToTimecodeAtTime:1;
        unsigned int respondsToAdjustTimePerMarker:1;
        unsigned int respondsToShouldSkimItem:1;
        unsigned int respondsToWillSetCurrentHandler:1;
        unsigned int respondsToDidSetCurrentHandler:1;
        unsigned int respondsToShouldOpenClipTrimmerForItem:1;
        unsigned int RESERVED:2;
    } _tlkDelegateFlags;
    struct {
        NSArray *items;
        CDUnknownBlockType block;
        CDUnknownBlockType enumeratingBlock;
    } _tlkTrackingItems;
    BOOL _ignoresSizeToFitOnResizeWithOldSuperviewSize;
    double _topMargin;
    double _bottomMargin;
    id _trimmedItem;
    CDStruct_1b6d18a9 _previousLogicalTime;
}

@property(nonatomic) BOOL ignoresSizeToFitOnResizeWithOldSuperviewSize; // @synthesize ignoresSizeToFitOnResizeWithOldSuperviewSize=_ignoresSizeToFitOnResizeWithOldSuperviewSize;
@property(retain, nonatomic) id trimmedItem; // @synthesize trimmedItem=_trimmedItem;
@property CDStruct_1b6d18a9 previousLogicalTime; // @synthesize previousLogicalTime=_previousLogicalTime;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property CDStruct_1b6d18a9 minimumEditDuration; // @synthesize minimumEditDuration=_minimumEditDuration;
@property double minEnforcedWidth; // @synthesize minEnforcedWidth=_minEnforcedWidth;
@property(retain) TLKSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(retain, nonatomic) TLKDataSourceProxy *dataSourceProxy; // @synthesize dataSourceProxy=_dataSourceProxy;
- (void)setCurveEditorDraggedItem:(id)arg1;
- (void)setSuspendLayerUpdatesForAnchoredClips:(BOOL)arg1;
@property(readonly) BOOL isScrolling;
- (BOOL)shouldSuspendLayerUpdateForItem:(id)arg1;
- (void)endTrackingItems;
- (void)beginTrackingItems:(id)arg1 enumeratingWithBlock:(CDUnknownBlockType)arg2;
- (void)beginTrackingItems:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)startEditingTitleForItem:(id)arg1;
- (struct CGRect)adjustedHitTargetForRect:(struct CGRect)arg1;
- (void)setRenderInfoNeedsDisplay;
- (CDStruct_1b6d18a9)_adjustTimePerMarker:(CDStruct_1b6d18a9)arg1;
- (id)_timecodeAtTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_audioSampleDuration;
- (CDStruct_1b6d18a9)_frameDuration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopListeningToUserDefaults;
- (void)_startListeningToUserDefaults;
- (id)_userDefaultKeysForIdentifier:(id)arg1;
- (void)gotoEnd:(id)arg1;
- (void)gotoStart:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)_selectAllInMultipleTracksMode;
- (void)selectClipAtPlayhead:(id)arg1;
- (void)selectClip:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)shouldSkimItem:(id)arg1 atTime:(CDStruct_1b6d18a9 *)arg2 didSnap:(char *)arg3;
- (id)_skimmingPlayheadFrameIndicator;
- (id)_skimmingPlayheadMarker;
- (void)stopItemSkimming;
- (void)updateItemSkimming:(id)arg1 layer:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
@property BOOL showAnchors;
- (BOOL)shouldSkimPlayhead;
- (BOOL)isPlayheadSkimming;
- (void)enablePlayheadSkimming:(BOOL)arg1;
- (BOOL)disabledAllSkimming;
- (void)setDisabledAllSkimming:(BOOL)arg1;
- (BOOL)canOpenClipTrimmerForItem:(id)arg1;
- (void)_closeClipTrimmerImmediately;
- (void)openClipTrimmerForItem:(id)arg1;
- (void)_unwrapTimelineBeforeOpeningClipTrimmerForItem:(id)arg1;
@property(readonly) BOOL isClipTrimmerOpen;
- (id)_clipTrimmerLane;
- (id)_clipTrimmedItem;
- (void)_updatePrecisionEditorTrimBar;
- (void)_precisionEditorTrimBarNeedsLayout;
- (void)_setIsPrecisionEditorOpen:(BOOL)arg1;
- (BOOL)canOpenPrecisionEditor;
- (BOOL)canOpenPrecisionEditorForItem:(id)arg1;
- (BOOL)_isItemValidForPrecisionEditor:(id)arg1;
- (void)openPrecisionEditor;
- (void)closePrecisionEditor;
- (void)openPreviousPrecisionEditorItem;
- (void)openNextPrecisionEditorItem;
- (void)_closePrecisionEditorImmediately:(BOOL)arg1;
- (void)_openPrecisionEditorWithLeftItem:(id)arg1 rightItem:(id)arg2 transition:(id)arg3;
- (int)precisionEditorState;
@property(readonly) BOOL isPrecisionEditorOpen;
- (id)globalPrecisionEditorContainer;
- (id)_posterItemLane;
- (id)_rulerLane;
- (id)_playheadMarker;
@property BOOL playingClip;
@property BOOL playing;
@property BOOL playheadIsSnapped;
@property BOOL skimmingPlayheadIsSnapped;
@property BOOL playheadFrameIndicatorVisible;
@property BOOL showsPlayhead;
- (void)setSkimmingPlayheadTime:(CDStruct_1b6d18a9)arg1;
@property(readonly) CDStruct_1b6d18a9 skimmingPlayheadTime;
- (void)_setSkimmingPlayheadTime:(CDStruct_1b6d18a9)arg1 animate:(BOOL)arg2;
- (BOOL)_playheadSkimming;
- (void)_setPlayheadSkimming:(BOOL)arg1;
- (BOOL)_playMoveSkimmingPlayhead;
- (void)_setPlayMoveSkimmingPlayhead:(BOOL)arg1;
@property BOOL dragDropComponentSkimming;
@property BOOL draggingItemsShouldIncludeAnchors;
@property BOOL itemLevelSkimming;
- (void)hideSkimmingPlayhead;
- (void)showSkimmingPlayhead;
- (CDStruct_1b6d18a9)activePlayheadTime;
@property(readonly) CDStruct_1b6d18a9 actualPlayheadTime;
@property CDStruct_1b6d18a9 playheadTime;
- (void)hideItemLevelSkimmingPlayhead;
- (void)setPlayheadTime:(CDStruct_1b6d18a9)arg1 animate:(BOOL)arg2;
- (void)_setPlayheadTime:(CDStruct_1b6d18a9)arg1 animate:(BOOL)arg2 snap:(BOOL)arg3;
- (void)_setPlayheadTime:(CDStruct_1b6d18a9)arg1 snap:(BOOL)arg2;
- (void)_setPlayheadTime:(CDStruct_1b6d18a9)arg1 animate:(BOOL)arg2;
- (void)_setPlayheadTime:(CDStruct_1b6d18a9)arg1;
- (void)skimmingStateChanged;
@property CDStruct_1b6d18a9 logicalStartTime;
@property CDStruct_e83c9415 inOutTimeRange;
- (void)_updateInOutMarkerPositions;
- (void)_updateInOutMarker:(BOOL)arg1;
@property BOOL showsInOutMarker;
- (BOOL)setSelectedRange:(CDStruct_e83c9415 *)arg1 clickedItem:(id)arg2;
- (void)_clearAllRangeSelections;
- (void)_updateRangeSelections;
- (void)_updateRangeSelectionsNonWrapping;
- (void)_updateRangeSelectionsWrapping;
- (void)_extendRangeSelectionLayerForTornEdges:(id)arg1;
- (id)_rangeSelectionLayer;
- (void)showTimecodeDisplay:(BOOL)arg1;
- (void)showTimecodeDisplayAtRect:(struct CGRect)arg1 displayTime:(CDStruct_1b6d18a9)arg2 deltaTime:(CDStruct_1b6d18a9)arg3 type:(unsigned long long)arg4 mode:(unsigned long long)arg5 displaySubframes:(BOOL)arg6;
- (id)stringFromTime:(CDStruct_1b6d18a9)arg1 displaySubframes:(BOOL)arg2 displaySign:(BOOL)arg3;
- (id)timecodeDisplay;
- (BOOL)isValueDisplayHidden;
- (void)showValueDisplay:(BOOL)arg1;
- (id)valueDisplay;
- (void)reloadSelectedTransitionLayers;
- (void)_sendPlayheadSelectionChanged;
- (void)selectionManager:(id)arg1 didSelectTimeRange:(CDStruct_e83c9415)arg2 withObjects:(id)arg3;
- (CDStruct_e83c9415)selectionManager:(id)arg1 willSelectTimeRange:(CDStruct_e83c9415)arg2 withObjects:(id)arg3;
- (void)selectionManagerDidChange:(id)arg1;
- (id)selectionManager:(id)arg1 willSelectObjects:(id)arg2 byExtendingSelection:(BOOL)arg3 selectionMask:(unsigned long long)arg4;
- (id)selectionManager:(id)arg1 willDeselectObjects:(id)arg2 selectionMask:(unsigned long long)arg3;
- (BOOL)selectionManagerShouldChange:(id)arg1;
@property BOOL dragSelectsRange;
- (id)partIdentifier;
- (id)partArrayAtPoint:(struct CGPoint)arg1;
- (BOOL)audioComponent;
- (void)addPartsAtPoint:(struct CGPoint)arg1 inLayer:(id)arg2 toArray:(id)arg3;
- (void)_hackWrappingPartArrayAtPoint:(struct CGPoint)arg1 forRangeSelectionLayer:(id)arg2 partArray:(id)arg3;
- (void)_logPartArray:(id)arg1 atPoint:(struct CGPoint)arg2;
@property(nonatomic) BOOL skipNextMouseTrackingEvent;
@property(retain) id <TLKTimelineItem> topLevelSelectedItem;
@property id focusOwner;
- (void)_closeAllAccessoryHostLayers;
- (void)setUpperAccessoryLayer:(id)arg1 lowerAccessoryLayer:(id)arg2 forItem:(id)arg3 withTitle:(id)arg4;
- (void)removeAccessoryHostLayerForItem:(id)arg1;
- (void)_removeAccessoryHostLayerForItem:(id)arg1;
- (void)setAccessoryLayer:(id)arg1 forItem:(id)arg2 withTitle:(id)arg3;
- (BOOL)getAccessoryLayersForItem:(id)arg1 upperLayer:(id *)arg2 lowerLayer:(id *)arg3;
- (id)accessoryLayerForItem:(id)arg1;
- (id)getAudioLayerForComponent:(id)arg1;
- (id)getAudioSplitLayerForItem:(id)arg1;
- (id)getAudioLayerForItem:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setNextResponder:(id)arg1;
- (void)removeEventHandlerWithIdentifier:(id)arg1;
- (void)addTrackingHandlerWithIdentifier:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;
- (BOOL)eventDispatcher:(id)arg1 shouldHandleException:(id)arg2;
- (id)eventDispatcher;
- (void)_initializeEventDispatcher;
@property(retain) id <TLKTimelineItem> rolloverItem;
- (void)setDraggingPaused:(BOOL)arg1;
@property(readonly, nonatomic) BOOL draggingPaused;
- (struct CGRect)draggableBounds;
- (id)contextMenuForItem:(id)arg1;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)_activeFirstResponderChanged:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (CDStruct_1b6d18a9)staticTimeWhenTrimmingEdge:(id)arg1 trimType:(int)arg2 ofItem:(id)arg3;
- (void)clipViewBoundsChanged:(id)arg1;
- (void)_trimExcessPaddingOnScroll;
- (void)_delayEnableAnimationsAfterScrolling;
- (void)_scrollToDefaultPosition;
- (void)scrollItemsToVisible:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 forContainer:(id)arg2;
- (void)scrollBy:(double)arg1;
- (void)scrollTime:(CDStruct_1b6d18a9)arg1 toLocation:(double)arg2;
- (BOOL)isAutoscrolling;
- (void)setDisableAutoZooming:(BOOL)arg1;
- (void)_delayHeightUpdate;
@property double anchorMultiplier;
@property double heightAdjustment;
@property double audioWaveFormProportion;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)sizeToFitWithVisibleRectState:(id)arg1;
- (void)restoreVisibleRectState:(id)arg1;
- (id)savedVisibleRectState;
- (void)tile;
- (void)_tileBumperLayer;
@property(readonly) struct CGRect decenderBounds;
@property(readonly) struct CGRect decenderRect;
- (double)currentBumperWidth;
- (void)alignContentLayerToBumperPadding;
- (void)setBumperPadding:(unsigned long long)arg1;
- (unsigned long long)bumperPadding;
- (void)warpCursorFromPoint:(struct CGPoint *)arg1 toPoint:(struct CGPoint *)arg2;
- (CDStruct_1b6d18a9)timeForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForLocation:(double)arg1;
- (void)_updateTileSize;
@property(nonatomic) BOOL wrappingLayoutPreservesMargins;
@property(nonatomic) BOOL wraps;
- (void)_resetMarginsAndPadding;
- (void)_hackFirstLineFragmentWhenSwitchingToWrappingMode:(BOOL)arg1;
- (id)itemAtPoint:(struct CGPoint)arg1;
- (void)_delayLayoutUpdate;
@property int rulerPlacementMode;
@property BOOL waitToBecomeFirstResponder;
@property BOOL scrollDuringPlayback;
@property int displayMode;
@property BOOL showClipTitlesOnly;
- (CDStruct_1b6d18a9)timePerPointAtLocation:(double)arg1;
- (CDStruct_e83c9415)visibleTimeRangeForItem:(id)arg1;
- (CDStruct_e83c9415)visibleTimeRange;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromContainer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toContainer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromContainer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toContainer:(id)arg2;
- (struct CGRect)convertRectToContentSpace:(struct CGRect)arg1;
- (struct CGRect)convertRectFromContentSpace:(struct CGRect)arg1;
- (struct CGPoint)convertPointToContentSpace:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromContentSpace:(struct CGPoint)arg1;
- (struct _TLKRange)convertLocationRange:(struct _TLKRange)arg1 fromItem:(id)arg2;
- (struct _TLKRange)convertLocationRange:(struct _TLKRange)arg1 toItem:(id)arg2;
- (struct _TLKRange)locationRangeForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)timeFromLocation:(double)arg1;
- (CDStruct_1b6d18a9)convertPlayheadTimeToLayoutTimespace:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)convertLayoutTimeToPlayheadTimespace:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)timeRangeOfRect:(struct CGRect)arg1;
@property(copy) NSProTimecodeFormatter *timecodeFormatter;
@property(nonatomic) BOOL showsTransitionPlaceholders;
@property BOOL maintainVideoHeightOfClip;
@property BOOL simpleClipDisplayMode;
@property int editingMode;
@property int selectionMode;
@property int rulerStyle;
- (void)setTimePerPixel:(CDStruct_1b6d18a9)arg1;
@property CDStruct_1b6d18a9 timeUnitDuration;
- (BOOL)_activeZooming;
- (void)_updateActiveZoomingFlag;
- (CDStruct_1b6d18a9)timePerPixel;
- (void)setFrameSize:(struct CGSize)arg1;
- (int)contentLayerAlignment;
- (void)_updateScrollElasticity;
- (struct CGSize)_constrainedFrameSize:(struct CGSize)arg1;
- (BOOL)_timePreservingMode;
- (BOOL)notifyDoubleClickedAudioWaveformOfItem:(id)arg1;
- (BOOL)notifyDoubleClickedItem:(id)arg1;
- (void)setNeedsDisplayForItems:(id)arg1;
- (void)reloadData;
- (void)_updateFilmstripItems:(id)arg1;
- (void)reloadWithTracksAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)reloadWithItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)_reloadWithItemsAdded:(id)arg1 removed:(id)arg2 modified:(id)arg3 viewState:(id)arg4;
- (void)_updateTrackingItems;
- (BOOL)_shouldClosePrecisionEditorWithItemsAdded:(id)arg1 removed:(id)arg2;
- (void)_closeAccessoryLayersWithAddedItems:(id)arg1;
- (struct CGRect)clippingRect;
@property id <TLKTimelineViewDataSource> dataSource;
- (void)disableLayerFrameUpdates;
- (void)enableLayerFrameUpdates;
- (BOOL)shouldUpdateLayerFrames;
- (void)_delayEnableAnimations;
@property BOOL disableAnimations;
- (id)precisionEditorTrimBar;
- (id)precisionEditorDividerBar;
@property(readonly) TLKGuideLayer *guideLayer;
- (struct CGRect)centeredRectForFutureSpineItem:(id)arg1;
- (id)framesForItem:(id)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (void)setBottomTrackPadding:(double)arg1;
- (double)bottomTrackPadding;
- (void)setTopTrackPadding:(double)arg1;
- (double)topTrackPadding;
- (void)setHyphenationFactor:(double)arg1;
- (double)hyphenationFactor;
@property(readonly, nonatomic) double minTimeUnitDurationFactor;
@property int timeUnits;
- (void)setMinThumbnailCount:(double)arg1;
- (double)minThumbnailCount;
@property struct CGSize itemSpacing;
@property(nonatomic) BOOL reloadKeepsContentVisible;
@property BOOL useEntireTargetForDropZone;
@property(nonatomic) BOOL allowsMultipleTracks;
@property BOOL allowsHorizontalConnections;
- (void)handleTimingModelDidChange:(id)arg1;
- (void)_stopListeningToNotificationsFromTimingModel:(id)arg1;
- (void)_startListeningToNotificationsFromTimingModel:(id)arg1;
- (void)awakeFromNib;
- (id)menuForEvent:(id)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)setOpaque:(BOOL)arg1;
- (void)_clipViewBoundsDidChange:(id)arg1;
- (void)_clipViewFrameDidChange:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)stopwatch;
@property(readonly) NSSet *timelineItems;
- (id)layoutManager;
- (id)layoutDatabase;
- (id)layerManager;
@property id <TLKTimelineViewDelegate> delegate;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (CDStruct_1b6d18a9)accessibilityTimePerPointAtLocation:(double)arg1;
- (id)accessibilityLocalizedString:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityVerticalUnitDescription;
- (id)accessibilityHorizontalUnitDescription;
- (id)accessibilitySelectedChildren;
- (id)accessibilityChildren:(BOOL)arg1;
- (id)accessibilityChildrenForItem:(id)arg1 visibleOnly:(BOOL)arg2;
- (void)accessibilityAddLayer:(id)arg1 toArray:(id)arg2 visibleOnly:(BOOL)arg3;
- (struct CGRect)_accessibilityRectForItemFrame:(struct CGRect)arg1;
- (struct CGRect)_playheadRect;
- (void)handlerDidUpdateSkimming:(id)arg1;
- (BOOL)timelineHandler:(id)arg1 willPerformDraggingUpdated:(id)arg2 error:(id *)arg3;
- (BOOL)timelineHandler:(id)arg1 willPerformDraggingExited:(id)arg2 error:(id *)arg3;
- (BOOL)timelineHandler:(id)arg1 willPerformDraggingEnded:(id)arg2 error:(id *)arg3;
- (BOOL)timelineHandler:(id)arg1 willPerformDraggingEntered:(id)arg2 error:(id *)arg3;
- (void)handlerDidStopTracking:(id)arg1;
- (void)handlerDidCancelTracking:(id)arg1;
- (void)handlerDidContinueTracking:(id)arg1;
- (void)handlerDidStartTracking:(id)arg1;
- (void)handlerWillStopTracking:(id)arg1;
- (void)handlerWillCancelTracking:(id)arg1;
- (void)handlerWillContinueTracking:(id)arg1;
- (void)handlerWillStartTracking:(id)arg1;
- (void)eventDispatcher:(id)arg1 didSetCurrentHandler:(id)arg2;
- (void)eventDispatcher:(id)arg1 willSetCurrentHandler:(id)arg2;
- (CDStruct_e83c9415)_subframeRoundedRangeForTime:(CDStruct_1b6d18a9)arg1;
- (id)badgeLayersForItem:(id)arg1 currentBadges:(id)arg2;
- (void)layoutSublayersOfAudioLayer:(id)arg1 forItem:(id)arg2;
- (void)layoutSublayersOfVideoLayer:(id)arg1 forItem:(id)arg2;
- (void)layoutSublayers:(id)arg1 forItem:(id)arg2;
- (void)_updatePlayheadPositionAnimate:(BOOL)arg1 scroll:(BOOL)arg2;
- (void)_updateXPositionOfPlayhead;
- (BOOL)_isSkimming;
- (void)_removeTopLevelHandlerIdentifier:(id)arg1;
- (void)_addTopLevelHandlerIdentifier:(id)arg1;
- (void)_setupTopLevelHandlers;
- (void)_updateTopLevelSelectionIndicator;
- (void)_tilePlayhead;
- (double)_playheadOffsetFromTop;
- (long long)zoomStep;
- (void)setZoomStep:(long long)arg1;
- (void)zoomInByStep:(long long)arg1;
- (void)zoomToFit:(id)arg1;
- (void)zoomToRange:(CDStruct_e83c9415)arg1 withPadding:(double)arg2;
- (void)zoomToRange:(CDStruct_e83c9415)arg1;
@property double zoomFactor;
@property int viewMaximumZoomAmount;
- (void)zoomByFactor:(double)arg1;
- (void)updateItemLevelSkimmingPlayhead;
- (void)preserveStateForZoomOperation:(CDUnknownBlockType)arg1;
- (CDStruct_1b6d18a9)_calculateMaxThumbnailDuration;
- (CDStruct_1b6d18a9)_calculateMinThumbnailDuration;
- (void)_getMaxTPP:(CDStruct_1b6d18a9 *)arg1 minTPP:(CDStruct_1b6d18a9 *)arg2;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)setDisableFilmstripLayerUpdates:(BOOL)arg1;
- (BOOL)disableFilmstripLayerUpdates;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)_removeUnnededContainerBackgroundsForTracks:(id)arg1;
- (void)_layoutTrackBackgrounds;
- (void)_layoutSpineBackground;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)_shouldSuppressFlickerForLayer:(id)arg1 actionKey:(id)arg2;
- (BOOL)_allowImplicitAnimations;
- (void)_updateItemLayersInVisibleRect:(struct CGRect)arg1;
- (void)_updateLayoutManagersInVisibleRect:(struct CGRect)arg1;
- (void)synchronizeLayerAppearanceForItems:(id)arg1;
- (void)_synchronizeLayerSelectionMasks;
- (void)_reloadVisibleLayers;
- (id)_addContentLayerWithName:(id)arg1 toLayer:(id)arg2 layerClass:(Class)arg3;
- (id)_contentLayerWithName:(id)arg1;

@end

