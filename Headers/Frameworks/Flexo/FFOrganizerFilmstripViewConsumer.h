//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerFilmstripView.h>

@class FFResponderLayerPushButton, NSTimer;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripViewConsumer : FFOrganizerFilmstripView
{
    BOOL _observingEditTool;
    BOOL _paintingRange;
    NSTimer *_clickAndHoldTimer;
    BOOL _playheadInfoCachedState;
    BOOL _playheadInfoShouldShowState;
    BOOL _showDuration;
    BOOL _showClipActions;
    BOOL _allowRangeSelection;
    FFResponderLayerPushButton *_editButtonLayer;
    struct FFProcrastinatedDispatch_t _editButtonDispatchContext;
}

- (void)displayFloatingDurationString:(id)arg1 atPoint:(struct CGPoint)arg2 withHeight:(double)arg3 atStart:(BOOL)arg4;
- (void)hideFloatingDurationString:(id)arg1;
- (void)durationPopOverDidResignKey:(id)arg1;
- (void)displaySelectionDurationAtPoint:(struct CGPoint)arg1 forRangeObject:(id)arg2;
- (BOOL)durationPopoverShouldShowAndOverrideSkimmerInfoSetting;
- (void)_setPlayheadInfoFromChunk:(id)arg1 keywords:(id)arg2 analysisKeywords:(id)arg3 markers:(id)arg4 playheadTime:(CDStruct_1b6d18a9)arg5;
- (void)playheadInfoShouldShow:(BOOL)arg1;
- (void)displayClipActionsPopoverAtPoint:(struct CGPoint)arg1 forRangeObject:(id)arg2;
- (void)clipActionPopOverDidResignKey:(id)arg1;
- (void)moveToSelectionEnd;
- (void)moveToSelectionStart;
- (void)moveToNextClipExtendingSelection:(BOOL)arg1;
- (void)moveToPreviousClipExtendingSelection:(BOOL)arg1;
- (void)progressiveClearSelection;
- (void)deactivateOrDeselectClips;
- (void)selectAll;
- (void)selectClip;
- (void)clearSelectionEndTime:(CDStruct_1b6d18a9)arg1;
- (void)clearSelectionStartTime:(CDStruct_1b6d18a9)arg1;
- (void)setSelectionEndTime:(CDStruct_1b6d18a9)arg1 clearExistingSelection:(BOOL)arg2;
- (void)setSelectionStartTime:(CDStruct_1b6d18a9)arg1 clearExistingSelection:(BOOL)arg2;
- (void)mouseUp:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setPlayingRangeOfMedia:(id)arg1;
- (void)updateSkimmingHilightDuration;
- (void)_doneDragging:(int)arg1;
- (void)_beginRangeDragSelectionForChunk:(id)arg1 event:(id)arg2;
- (void)unhandledMouseDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)_handleMouseUpForActiveToolForChunk:(id)arg1 event:(id)arg2 useCurrentSelection:(BOOL)arg3;
- (void)activeToolDidChange:(id)arg1;
- (void)_handleMarkerMouseUpAtLocation:(struct CGPoint)arg1 inChunk:(id)arg2;
- (void)markerClickAndHold:(id)arg1;
- (void)cancelMarkerDragForMarker:(id)arg1;
- (BOOL)handleClickedOnAnchoredMarkerRangeForRange:(id)arg1 andRangeOfMedia:(id)arg2 forEvent:(id)arg3;
- (void)timeRateChangedForContext:(id)arg1;
- (int)dragHighlightForCurrentState;
- (int)_activeToolSkimmerPosition;
- (void)_movePersistentPlayheadToRangeOfMedia:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (BOOL)_activeToolActsOnMouseUp;
- (void)setSkimming:(BOOL)arg1;
- (void)playPause;
- (void)_addEditButtonToLayoutAtPosition:(struct CGPoint)arg1;
- (struct CGPoint)calculateEditButtonPositionForChunk:(id)arg1 andOptionalEvent:(id)arg2;
- (void)_createEditButton;
- (id)currentEditButtonToolTipString;
- (void)_handleEditButtonClicked:(id)arg1;
- (BOOL)playheadButtonsAllowed;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)reloadData;
- (void)activeSelectionDidChange;
- (void)calculateEditButtonLocationFromSelection;
- (void)_setSelectionAroundPlayhead;
- (BOOL)_marqueeSelectionAllowedWithActiveTool;
- (void)_clearSelection;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (void)awakeFromNib;

@end

