//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Flexo/FFOrganizerFilmstripViewProtocol-Protocol.h>

@class FFOrganizerFilmstripView;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripViewController : NSViewController <FFOrganizerFilmstripViewProtocol>
{
    FFOrganizerFilmstripView *_filmstripView;
    BOOL _selectedRangesObserverAttached;
}

@property BOOL selectedRangesObserverAttached; // @synthesize selectedRangesObserverAttached=_selectedRangesObserverAttached;
@property(readonly) FFOrganizerFilmstripView *filmstripView; // @synthesize filmstripView=_filmstripView;
- (void)performEditAction;
- (BOOL)editActionAllowed;
- (void)performPlayheadButton1Action;
- (BOOL)action1OrAction2;
- (BOOL)wantsPlayheadActions;
- (BOOL)wantsRanges;
- (BOOL)wantsSkimmerInfo;
- (void)restorePlayheadTo:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)persistentPlayheadMediaRange;
- (CDStruct_1b6d18a9)persistentPlayheadTime;
- (struct CGRect)playheadFrame;
- (void)setAnalysis:(BOOL)arg1;
- (struct CGRect)screenRectForMarkerLayer:(id)arg1;
- (void)performColorMatch;
- (void)setAudioHeight:(double)arg1;
- (double)audioHeight;
- (void)synchronousReloadData;
- (void)setNeedsData:(BOOL)arg1;
- (void)setDeferRangeInvalidations:(BOOL)arg1;
- (BOOL)removeObserversAndNotifications:(id)arg1;
- (BOOL)attachObserversAndNotifications:(id)arg1;
- (void)didRemoveKeywordsWithRanges:(id)arg1 onSequence:(id)arg2 animationRange:(CDStruct_e83c9415)arg3;
- (void)willRemoveKeywordsWithRanges:(id)arg1 onSequence:(id)arg2 animationRange:(CDStruct_e83c9415)arg3;
- (void)didAddKeywordsNamed:(id)arg1 removeKeywordsNamed:(id)arg2 onSequence:(id)arg3 forRange:(CDStruct_e83c9415)arg4;
- (void)willAddKeywordsNamed:(id)arg1 removeKeywordsNamed:(id)arg2 onSequence:(id)arg3 forRange:(CDStruct_e83c9415)arg4;
- (void)setKeywords:(id)arg1;
- (id)keywords;
- (void)setAutoKeywordsSelectionStyle:(BOOL)arg1;
- (void)setFrameHeight:(double)arg1;
- (double)frameHeight;
- (void)setFrameDuration:(double)arg1;
- (double)frameDuration;
- (void)setClipLabelSize:(int)arg1;
- (int)clipLabelSize;
- (void)setShowsClipLabels:(BOOL)arg1;
- (BOOL)showsClipLabels;
- (void)scrollRangeOfMediaToVisible:(id)arg1 scrollToBeginning:(BOOL)arg2;
- (void)moveToRangeOfMedia:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)moveToNextClipExtendingSelection:(BOOL)arg1;
- (void)moveToPreviousClipExtendingSelection:(BOOL)arg1;
- (void)moveToLastClip;
- (void)moveToFirstClip;
- (void)moveToEndOfClip;
- (void)moveToStartOfClip;
- (void)moveToFirstSelectedClip;
- (void)moveToSelectionEnd;
- (void)moveToSelectionStart;
- (void)activeSelectionDidChange;
- (BOOL)revealAndSelectRange:(id)arg1 playheadTime:(CDStruct_1b6d18a9)arg2;
- (void)selectionDidChangeToTime:(CDStruct_e83c9415)arg1 inObject:(id)arg2;
- (void)selectionDidChangeToObject:(id)arg1;
- (id)rangeToSelectAfterDelete;
- (void)syncMarkerToRange:(id)arg1;
- (void)syncSelectionToRange:(id)arg1;
- (void)matchSelectionToPreviousModeSelection:(id)arg1;
- (void)setMaintianFilmstripSelectionOnNextUpdate:(BOOL)arg1;
- (void)scrollSelectionIntoView;
- (struct CGRect)selectedBadgeChunkRect;
- (void)addArbitraryRange:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectArbitraryRange:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)selectedRangesOfMediaForTimelineEditing;
- (id)selectedRangesOfMediaForSwitchingDisplayMode;
- (id)selectedRangesOfMedia;
- (void)activateSelectedRangesOfMedia:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)setSelectedRangesOfMedia:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)setSelectedRangesOfMedia:(id)arg1 byExtendingSelection:(BOOL)arg2 onlyClearAffected:(BOOL)arg3;
- (void)moveToRelativeEdit:(BOOL)arg1;
- (void)selectPreviousMarkerAndAlwaysEdit:(BOOL)arg1;
- (void)selectNextMarkerAndAlwaysEdit:(BOOL)arg1;
- (void)setSelectionEndTime:(CDStruct_1b6d18a9)arg1 clearExistingSelection:(BOOL)arg2;
- (void)setSelectionStartTime:(CDStruct_1b6d18a9)arg1 clearExistingSelection:(BOOL)arg2;
- (void)clearSelectionEndTime:(CDStruct_1b6d18a9)arg1;
- (void)clearSelectionStartTime:(CDStruct_1b6d18a9)arg1;
- (void)clearSelection;
- (void)progressiveClearSelection;
- (void)deactivateOrDeselectClips;
- (void)selectClip;
- (void)selectAll;
- (void)setSkimming:(BOOL)arg1;
- (BOOL)skimming;
- (id)playingRangeOfMedia;
- (id)persistentPlayheadRangeOfMedia;
- (CDStruct_1b6d18a9)playingTime;
- (id)playerModule;
- (void)playFromPersistentPlayhead;
- (void)playClipUnderPlayhead;
- (void)playToOut;
- (void)playSelection;
- (void)playPause;
- (void)fixUpSelectionForLoadingView;
- (void)fixUpSelectionForUnloadingView;
- (void)restoreProjectExpandedStates:(id)arg1;
- (void)saveProjectExpandedStates:(id)arg1;
- (void)restoreProjectSelectionAndPersistentPlayheadPosition:(id)arg1;
- (void)savePersistentPlayheadPosition:(id)arg1;
- (void)saveProjectSelection:(id)arg1;
- (void)takeContentLayoutDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (void)setDelegate:(id)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)bounds;
- (id)filmstripModule;
- (id)window;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)containerView;
- (void)didRemoveFromModule;
- (void)willRemoveFromModule;
- (void)didInstallInModule;
- (void)willInstallInModule;
- (void)loadView;
- (void)reloadData;
- (void)dealloc;
- (id)init;

@end

