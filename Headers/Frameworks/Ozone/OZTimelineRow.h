//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OZTimelineView;

@interface OZTimelineRow : NSObject
{
    OZTimelineView *_timeline;
    vector_fe7b023d *_bars;
    vector_93158a95 *_overlaps;
    int _row;
    struct PCTimeRange *_lastKeyframeMouse;
    BOOL _built;
}

+ (id)textBarColor:(int)arg1;
+ (id)snapBarColor:(int)arg1;
+ (id)solidBarColor:(int)arg1;
- (void)modifySelectedKeyframes:(id)arg1 startingLocation:(struct CGPoint)arg2;
- (id)menuForEvent:(id)arg1 startingLocation:(struct CGPoint)arg2;
- (id)menuForEventOverlaps:(id)arg1 startingLocation:(struct CGPoint)arg2;
- (id)menuForEventKeyframes:(id)arg1 inBar:(struct OZTimelineBar *)arg2 startingLocation:(struct CGPoint)arg3;
- (BOOL)showKeyframesGutter;
- (BOOL)topped;
- (struct CGRect)markerRectFromBarRect:(struct CGRect)arg1;
- (struct CGRect)barRectFrom:(const struct OZTimelineBar *)arg1 rowRect:(struct CGRect)arg2 pixelsPerSecond:(double)arg3;
- (struct CGRect)barRectFrom:(const struct OZTimelineBar *)arg1 rowRect:(struct CGRect)arg2 pixelsPerSecond:(double)arg3 offset:(CDStruct_1b6d18a9)arg4 duration:(CDStruct_1b6d18a9)arg5;
- (void)getAllKeyframes:(map_42750fbc *)arg1 from:(struct OZChannelFolder *)arg2;
- (void)findRootsFrom:(struct OZChannelObjectRoot *)arg1 mouseTime:(CDStruct_1b6d18a9)arg2 rootList:(set_ed6fc29a *)arg3;
- (void)findRootsFrom:(struct OZChannelObjectRoot *)arg1 matching:(const struct PCTimeRange *)arg2 includeRoot:(BOOL)arg3 rootList:(set_ed6fc29a *)arg4 selectedOnly:(BOOL)arg5;
- (int)checkMouseForKeyframes:(id)arg1 inBar:(struct OZTimelineBar *)arg2 startingLocation:(struct CGPoint)arg3;
- (int)colorIndexOf:(struct OZChannelObjectRoot *)arg1;
- (void)checkBarsForOverlaps:(vector_fe7b023d *)arg1 with:(vector_fe7b023d *)arg2 overlaps:(vector_93158a95 *)arg3 frameDuration:(CDStruct_1b6d18a9)arg4;
- (void)mergeBars:(vector_fe7b023d *)arg1 overlaps:(vector_93158a95 *)arg2 childBars:(vector_fe7b023d *)arg3;
- (BOOL)addRoot:(struct OZChannelObjectRoot *)arg1 toBars:(vector_fe7b023d *)arg2 selectedBars:(vector_fe7b023d *)arg3 ghostBars:(vector_fe7b023d *)arg4 keyframesBars:(vector_fe7b023d *)arg5 selectedKeyframesBars:(vector_fe7b023d *)arg6 overlaps:(vector_93158a95 *)arg7;
- (void)addRootNoRecursion:(struct OZChannelObjectRoot *)arg1 toBars:(vector_fe7b023d *)arg2 selectedBars:(vector_fe7b023d *)arg3 ghostBars:(vector_fe7b023d *)arg4 keyframesBars:(vector_fe7b023d *)arg5 selectedKeyframesBars:(vector_fe7b023d *)arg6;
- (void)buildout;
- (void)updateOverlapCounts:(struct OZChannelObjectRoot *)arg1 overlaps:(vector_93158a95 *)arg2;
- (void)drawKeyframesForSequencedObject:(struct OZObjectManipulator *)arg1 barRect:(struct CGRect)arg2;
- (void)drawSelectedRange:(struct CGRect)arg1;
- (void)drawMarkers:(const vector_fe7b023d *)arg1 clipRect:(struct CGRect)arg2 rowRect:(struct CGRect)arg3;
- (void)drawOverlaps:(const vector_93158a95 *)arg1 clipRect:(struct CGRect)arg2 rowRect:(struct CGRect)arg3;
- (void)drawBars:(const vector_fe7b023d *)arg1 clipRect:(struct CGRect)arg2 rowRect:(struct CGRect)arg3;
- (void)drawName:(id)arg1 color:(id)arg2 barRect:(struct CGRect)arg3;
- (void)drawMidground:(const struct OZTimelineBar *)arg1 clipRect:(struct CGRect)arg2 barRect:(struct CGRect)arg3 pixelsPerSecond:(double)arg4 secondsPerPixel:(CDStruct_1b6d18a9)arg5;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBackgroundAndGutters:(struct CGRect)arg1;
- (BOOL)shouldDrawActive;
- (void)findSnaps:(vector_f7e3fd5f *)arg1 forceAllVisible:(BOOL)arg2;
- (void)resetCursorRects;
- (int)checkMouseInBars:(id)arg1 startingLocation:(struct CGPoint)arg2 rootList:(set_ed6fc29a *)arg3 selected:(char *)arg4 selectRange:(struct PCTimeRange *)arg5 dragRange:(struct PCTimeRange *)arg6;
- (void)checkMouseInOverlaps:(CDStruct_1b6d18a9)arg1 selectRange:(struct PCTimeRange *)arg2 dragRange:(struct PCTimeRange *)arg3;
- (void)clearKeyframeSelection;
- (void)clearData;
- (struct OZChannelObjectRoot *)getRoot;
- (void)dealloc;
- (id)initWithTimeline:(id)arg1 row:(int)arg2;
- (struct TimelineBarFacets *)timelineBarFacets;

@end

