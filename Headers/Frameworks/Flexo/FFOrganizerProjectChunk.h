//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerAbstractChunk.h>

@class CALayer, FFOrganizerFilmstripProjectLabelLayer, FFProjectMediaManagementPopover, FFResponderLayerCheckbox, FFSequenceInfo, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface FFOrganizerProjectChunk : FFOrganizerAbstractChunk
{
    CALayer *_clapperNormalLayer;
    CALayer *_clapperSelectedLayer;
    CALayer *_proSelectionLayer;
    CALayer *_proSelectionUnfocusedLayer;
    CALayer *_thumbnailLayer;
    BOOL _selected;
    BOOL _mouseInChunk;
    BOOL _temporarilySelected;
    BOOL _focused;
    BOOL _projectOpen;
    double _contentsScale;
    FFOrganizerFilmstripProjectLabelLayer *_projectTitleLayer;
    FFOrganizerFilmstripProjectLabelLayer *_proProjectDurationLabelLayer;
    FFOrganizerFilmstripProjectLabelLayer *_proProjectLastModifiedLabelLayer;
    FFResponderLayerCheckbox *_projectMediaManagementButtonLayer;
    CALayer *_adornmentLayer;
    NSString *_thumbnailMD5;
    NSMutableSet *_rolloverVisibleLayers;
    FFProjectMediaManagementPopover *_mediaManagementPopover;
}

@property(retain, nonatomic) FFProjectMediaManagementPopover *mediaManagementPopover; // @synthesize mediaManagementPopover=_mediaManagementPopover;
@property(retain, nonatomic) NSString *thumbnailMD5; // @synthesize thumbnailMD5=_thumbnailMD5;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateRolloverVisibleLayers;
- (struct CGRect)editFrame;
- (id)editLayer;
- (CDStruct_e83c9415)timeRange;
- (void)_projectChanged:(id)arg1;
- (void)_addProjectTitleSublayer:(id)arg1;
- (struct CGSize)_projectTitleSize;
- (void)_addAdornmentSublayer;
- (void)updateProjectThumbnailLayer;
- (void)showProjectChunkSelected:(BOOL)arg1;
- (void)showProjectChunkOpen:(BOOL)arg1;
- (void)_updateProjectClapperLayers;
- (int)_thumbnailQuality;
- (void)showHandlesForSelection:(id)arg1;
- (BOOL)hasFilmstripAtPoint:(struct CGPoint)arg1 inSpaceOfLayer:(id)arg2;
- (id)selectionContainsPoint:(struct CGPoint)arg1 isActive:(char *)arg2;
- (BOOL)displayNameContainsPoint:(struct CGPoint)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setSkimmingHilightDuration:(CDStruct_1b6d18a9)arg1 skimmerPosition:(int)arg2;
- (void)setPlayheadTime:(CDStruct_1b6d18a9)arg1;
- (void)showInactiveSelections:(BOOL)arg1;
- (void)setDragSelectionHighlight:(int)arg1;
- (void)setGhostSelection:(BOOL)arg1;
- (void)setFocused:(BOOL)arg1;
- (id)rangeOfMediaForChunk;
- (void)setDraggingSelectionRange:(CDStruct_e83c9415)arg1 showHandles:(BOOL)arg2;
- (void)updateDisplayName;
- (BOOL)isEquivalentToChunk:(id)arg1;
- (void)updateIfNeeded;
- (void)releaseLayer;
- (BOOL)hasLayer;
- (id)layer;
- (BOOL)_projectLoaded;
@property(readonly) FFSequenceInfo *sequenceInfo;
- (id)filmstrip;
- (id)displayName;
- (void)setSelectedRangesOfMedia:(id)arg1 selectionMarkers:(id)arg2;
- (void)dealloc;
- (id)initWithRangeOfMedia:(id)arg1 chunkFrame:(struct CGRect)arg2 thumbHeight:(double)arg3 audioHeight:(double)arg4 numberOfThumbs:(double)arg5 showLabel:(BOOL)arg6 clipLabelSize:(int)arg7 maxThumbWidth:(double)arg8 contentsScale:(double)arg9 squareThumbs:(BOOL)arg10;

@end

