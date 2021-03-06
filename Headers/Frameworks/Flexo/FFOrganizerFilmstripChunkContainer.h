//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FigTimeRangeAndObject, NSArray, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface FFOrganizerFilmstripChunkContainer : NSObject
{
    NSMutableArray *_chunkArray;
    FigTimeRangeAndObject *_ro;
    CDStruct_e83c9415 _cachedMediaRange;
    struct CGRect _cachedMediaSize;
    BOOL _hasVideo;
    BOOL _hasAudio;
    NSArray *_selection;
    NSArray *_selectionMarkers;
    NSMutableSet *_observedObjects;
    NSMutableSet *_usedMediaSnapTimes;
    BOOL _isUsedRangeInvalidationObserving;
    BOOL _observingLibraryRoleChanges;
    id _delegate;
}

@property(readonly) BOOL hasAudio; // @synthesize hasAudio=_hasAudio;
@property(readonly) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property(readonly) FigTimeRangeAndObject *rangeObject; // @synthesize rangeObject=_ro;
@property id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *chunkArray; // @synthesize chunkArray=_chunkArray;
- (void)setContentsScale:(double)arg1;
- (void)setSkimmingHightlightColor:(id)arg1;
- (void)setSkimmingHilightDuration:(CDStruct_1b6d18a9)arg1 skimmerPosition:(int)arg2;
- (void)setPlayheadTime:(CDStruct_1b6d18a9)arg1;
- (void)showInactiveSelections:(BOOL)arg1;
- (void)showHandlesForSelection:(id)arg1;
- (void)setDragSelectionHighlight:(int)arg1;
- (void)setGhostSelection:(BOOL)arg1;
- (void)setFocused:(BOOL)arg1;
- (struct CGRect)frame;
- (id)chunkAfterChunk:(id)arg1;
- (id)chunkBeforeChunk:(id)arg1;
- (id)lastChunk;
- (id)firstChunk;
- (id)cellAtTime:(CDStruct_1b6d18a9)arg1;
- (id)chunkAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)closestPointInChunkContainerGivenPoint:(struct CGPoint)arg1;
- (void)updateSelectionMarkers;
- (void)_updateSelectionMarkerCache;
- (void)procrastinatedUpdateVideoRangeInfo:(id)arg1;
- (void)updateVideoRangeInfo:(id)arg1;
- (void)updateKeywordsInRange:(CDStruct_e83c9415)arg1;
- (void)updateMarkersInRange:(CDStruct_e83c9415)arg1;
- (void)loadMarkers;
- (id)_gatherKeywordRangesForObjectOfFigTimeRangeAndObject:(id)arg1;
- (void)loadItems;
- (struct CGRect)selectionFrame;
- (void)setMarkerRanges:(id)arg1;
- (id)usedMediaSnapTimes;
- (void)setKeywordRanges:(id)arg1;
- (void)setTemporarySelection:(id)arg1;
- (void)setShowDuration:(BOOL)arg1;
- (void)setDraggingSelectionRange:(CDStruct_e83c9415)arg1 showHandles:(BOOL)arg2;
- (void)setSelectedRangesOfMedia:(id)arg1;
- (BOOL)hasLayer;
- (void)addChunk:(id)arg1;
- (BOOL)chunkShouldHaveDuration:(id)arg1;
- (BOOL)chunkShouldHaveCCBadge:(id)arg1;
- (BOOL)chunkShouldHaveHFRBadge:(id)arg1;
- (BOOL)chunkShouldHave360Badge:(id)arg1;
- (BOOL)chunkShouldHavePSDBadge:(id)arg1;
- (BOOL)chunkShouldHaveSynchedClipBadge:(id)arg1;
- (BOOL)chunkShouldHaveMultiBadge:(id)arg1;
- (BOOL)chunkShouldHaveCompoundBadge:(id)arg1;
- (BOOL)chunkShouldHaveVariantBadge:(id)arg1;
- (void)replaceChunk:(id)arg1 withChunk:(id)arg2;
- (BOOL)isEquivalentToFilmstripChunkContainer:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRangeOfMedia:(id)arg1;
- (void)rangeInvalidated:(id)arg1;
- (void)_rolesInLibraryHaveChanged:(id)arg1;

@end

