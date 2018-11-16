//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TLKTimelineViewDelegate <NSObject>
- (BOOL)timelineView:(id)arg1 shouldHandleException:(id)arg2;

@optional
- (void)timelineView:(id)arg1 didDoubleClickItem:(id)arg2;
- (BOOL)timelineView:(id)arg1 shouldShowSplitForItem:(id)arg2;
- (void)selectionManagerDidChange:(id)arg1;
- (BOOL)selectionManagerShouldChange:(id)arg1;
- (id)selectionManager:(id)arg1 willSelectObjects:(id)arg2 selectionMask:(unsigned long long)arg3;
- (id)selectionManager:(id)arg1 willDeselectObjects:(id)arg2 selectionMask:(unsigned long long)arg3;
- (CDStruct_e83c9415)selectionManager:(id)arg1 willSelectTimeRange:(CDStruct_e83c9415)arg2 withObjects:(id)arg3;
- (void)selectionManager:(id)arg1 didSelectTimeRange:(CDStruct_e83c9415)arg2 withObjects:(id)arg3;
- (CDStruct_1b6d18a9)timelineView:(id)arg1 willSetPlayheadTime:(CDStruct_1b6d18a9)arg2 snap:(BOOL)arg3;
- (void)timelineView:(id)arg1 didSetPlayheadTime:(CDStruct_1b6d18a9)arg2;
- (id)timelineView:(id)arg1 timecodeAtTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)timelineView:(id)arg1 adjustTimePerMarker:(CDStruct_1b6d18a9)arg2;
- (void)timelineView:(id)arg1 enablePlayheadSkimming:(BOOL)arg2;
- (BOOL)timelineViewIsPlayheadSkimming:(id)arg1;
- (BOOL)timelineViewShouldSkimPlayhead:(id)arg1;
- (BOOL)timelineView:(id)arg1 shouldSkimItem:(id)arg2 atTime:(CDStruct_1b6d18a9 *)arg3 didSnap:(char *)arg4;
- (void)timelineView:(id)arg1 layoutSublayers:(id)arg2 forItem:(id)arg3;
- (void)timelineView:(id)arg1 layoutSublayersOfVideoLayer:(id)arg2 audioLayer:(id)arg3 forItem:(id)arg4;
- (id)timelineView:(id)arg1 badgeLayersForItem:(id)arg2 currentBadges:(id)arg3;
- (CDStruct_1b6d18a9)timelineViewFrameDuration:(id)arg1;
- (CDStruct_1b6d18a9)timelineViewAudioSampleDuration:(id)arg1;
- (void)timelineView:(id)arg1 updateItemSkimming:(id)arg2 layer:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (void)timelineViewStopItemSkimming:(id)arg1;
- (id)timelineView:(id)arg1 contextMenuForItem:(id)arg2;
@end

