//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFOrganizerFilmstripView.h>

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripViewPro : FFOrganizerFilmstripView
{
}

- (void)displayFloatingDurationString:(id)arg1 atPoint:(struct CGPoint)arg2 withHeight:(double)arg3 atStart:(BOOL)arg4;
- (void)hideFloatingDurationString:(id)arg1;
- (void)displaySelectionDurationAtPoint:(struct CGPoint)arg1 forRangeObject:(id)arg2;
- (void)_setPlayheadInfoFromChunk:(id)arg1 keywords:(id)arg2 analysisKeywords:(id)arg3 markers:(id)arg4 playheadTime:(CDStruct_1b6d18a9)arg5;
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
- (void)moveToSelectionEnd;
- (void)moveToSelectionStart;
- (void)_doneDragging:(int)arg1;
- (void)mouseUp:(id)arg1;
- (void)unhandledMouseDown:(id)arg1;
- (void)_activeSelectionBeforeTime:(id *)arg1 selectionAtTime:(id *)arg2 selectionAfterTime:(id *)arg3 forTime:(CDStruct_1b6d18a9)arg4 andClip:(id)arg5 abortIfSelectionAtTimeFound:(BOOL)arg6;
- (id)_activeSelectionRangesForClip:(id)arg1;

@end

