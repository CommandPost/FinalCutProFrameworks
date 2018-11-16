//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FFOrganizerFilmstripViewDelegate <NSObject>
- (id)module;
- (unsigned long long)filmstripView:(id)arg1 writeRangesOfMedia:(id)arg2 toPasteboard:(id)arg3;
- (void)organizerFilmstripViewDidReloadData:(id)arg1;
- (void)openItemFromRangeObject:(id)arg1;
- (void)makeSequenceActive:(id)arg1;
- (BOOL)isClustering;
- (id)itemsClusteredByMetadataValue:(id)arg1;
- (id)contextualMenuForSelection:(id)arg1;
- (id)persistentModuleForFilmstripView:(id)arg1;
- (void)invalidateUnfilteredItems;
- (void)invalidateFilteredItems;
- (id)filteredRanges;
- (void)selectedRangesOfMediaDidChange;
- (void)selectionDidChangeToObject:(id)arg1;
- (void)selectionDidChangeToTime:(CDStruct_e83c9415)arg1 inObject:(id)arg2;
- (BOOL)canBeginSkimming;
- (void)displayMedia:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3 unloadingBlock:(CDUnknownBlockType)arg4;
- (id)editorModule;

@optional
- (void)showMarkerEditorAtTime:(CDStruct_1b6d18a9)arg1 forObject:(id)arg2;
- (void)showMarkerEditorForMarkerLayer:(id)arg1 object:(id)arg2;
- (void)hideMarkerEditor;
- (BOOL)markerEditorIsShown;
- (void)showKeywordEditor;
- (void)playingRangeOfMediaDidChange;
- (BOOL)canEditDisplayName;
@end

