//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "FFOrganizerFilmstripViewProtocol.h"

@class FFOrganizerFilmstripView, NSString;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripViewController : NSViewController <FFOrganizerFilmstripViewProtocol>
{
    FFOrganizerFilmstripView *_filmstripView;
    BOOL _selectedRangesObserverAttached;
    NSString *_clipLabelSizeDefaultKey;
}

@property(retain) NSString *clipLabelSizeDefaultKey; // @synthesize clipLabelSizeDefaultKey=_clipLabelSizeDefaultKey;
@property BOOL selectedRangesObserverAttached; // @synthesize selectedRangesObserverAttached=_selectedRangesObserverAttached;
@property(retain) FFOrganizerFilmstripView *filmstripView; // @synthesize filmstripView=_filmstripView;
- (void)restorePlayheadTo:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)persistentPlayheadMediaRange;
- (CDStruct_1b6d18a9)persistentPlayheadTime;
- (struct CGRect)playheadFrame;
- (void)setAnalysis:(BOOL)arg1;
- (struct CGRect)screenRectForMarkerLayer:(id)arg1;
- (void)performColorMatch;
- (void)setAudioHeight:(double)arg1;
- (double)audioHeight;
- (void)setNeedsData:(BOOL)arg1;
- (id)valueForKey:(id)arg1;
- (void)removeObserversAndNotifications:(id)arg1;
- (void)attachObserversAndNotifications:(id)arg1;
- (BOOL)isObserving;
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
- (void)changeClipLabelSize:(int)arg1 persistentModule:(id)arg2;
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
- (void)moveToFirstSelectedClip;
- (void)moveToSelectionEnd;
- (void)moveToSelectionStart;
- (void)activeSelectionDidChange;
- (void)revealAndSelectRange:(id)arg1 playheadTime:(CDStruct_1b6d18a9)arg2;
- (void)selectionDidChangeToTime:(CDStruct_e83c9415)arg1 inObject:(id)arg2;
- (void)selectionDidChangeToObject:(id)arg1;
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
- (void)storeDefaults:(id)arg1;
- (void)loadDefaults:(id)arg1;
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
- (void)reloadData;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

