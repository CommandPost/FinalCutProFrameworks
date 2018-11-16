//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKPaneCapView.h"

@class NSMenu, NSMutableDictionary, NSProCursor;

@interface OZTimingMarkersBase : LKPaneCapView
{
    NSMenu *_markerGutterMenu;
    NSMenu *_markerObjectMenu;
    struct OZTimeMarker *_markerDragging;
    struct PCTimeRange *_markerStartingRange;
    NSProCursor *_markerBeginningCursor;
    NSProCursor *_markerEndCursor;
    NSMutableDictionary *_markerTextAttributes;
    BOOL _markerDisplayNames;
    double _lastPixelsPerSecond;
    vector_3e79211d *_snaps;
    BOOL _snapping;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (struct OZDocument *)currentOZDocument;
- (void)dealloc;
- (void)drawMarkers:(const struct OZTimeMarkerSet *)arg1 offset:(CDStruct_1b6d18a9)arg2 boundsRect:(struct CGRect)arg3 boundsRange:(const struct PCTimeRange *)arg4;
- (id)getDragImage:(CDStruct_1b6d18a9)arg1;
- (id)getMarkerImage:(int)arg1 state:(long long)arg2 type:(int)arg3;
- (struct CGSize)markerColorImageSize:(int)arg1 type:(int)arg2;
- (struct CGSize)markerImageSize:(const struct OZTimeMarker *)arg1;
- (double)markerImageMiddle:(const struct OZTimeMarker *)arg1;
- (void)createMarker:(double)arg1 markers:(struct OZTimeMarkerSet *)arg2 doTip:(BOOL)arg3;
- (const struct OZTimeMarker *)checkForMarker:(id)arg1 root:(struct OZChannelObjectRoot *)arg2 offset:(CDStruct_1b6d18a9)arg3 startingLocation:(struct CGPoint)arg4 boundsRect:(struct CGRect)arg5;
- (int)checkForMarkerSelected:(id)arg1 root:(struct OZChannelObjectRoot *)arg2 offset:(CDStruct_1b6d18a9)arg3 startingLocation:(struct CGPoint)arg4 boundsRect:(struct CGRect)arg5;
- (void)markerDrag:(id)arg1 root:(struct OZChannelObjectRoot *)arg2 range:(const struct PCTimeRange *)arg3 offset:(CDStruct_1b6d18a9)arg4 startingLocation:(struct CGPoint)arg5 currentLocation:(struct CGPoint)arg6 boundsRect:(struct CGRect)arg7 moving:(int)arg8 notificationFlags:(unsigned int)arg9;
- (void)markerDropped:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3 markers:(struct OZTimeMarkerSet *)arg4 offset:(CDStruct_1b6d18a9)arg5 boundsRect:(struct CGRect)arg6;
- (CDStruct_1b6d18a9)findEmptySpot:(const struct OZTimeMarkerSet *)arg1 start:(CDStruct_1b6d18a9)arg2 delta:(CDStruct_1b6d18a9)arg3;
- (void)updateMarkerToolTips:(const struct OZTimeMarkerSet *)arg1 offset:(CDStruct_1b6d18a9)arg2 boundsRect:(struct CGRect)arg3;
- (void)resetMarkerCursorRects:(const struct OZTimeMarkerSet *)arg1 offset:(CDStruct_1b6d18a9)arg2 boundsRect:(struct CGRect)arg3;
- (reverse_iterator_31011cc8)findMarker:(const struct OZTimeMarkerSet *)arg1 offset:(CDStruct_1b6d18a9)arg2 startingLocation:(struct CGPoint)arg3;
- (id)menuForEvent:(id)arg1 markers:(const struct OZTimeMarkerSet *)arg2 offset:(CDStruct_1b6d18a9)arg3 startingLocation:(struct CGPoint)arg4 boundsRect:(struct CGRect)arg5 gutterMenu:(BOOL)arg6;
- (void)markerMenuAddInfoDelete:(id)arg1 root:(struct OZChannelObjectRoot *)arg2 range:(const struct PCTimeRange *)arg3 offset:(CDStruct_1b6d18a9)arg4 startingLocation:(struct CGPoint)arg5;
- (void)markerMenuNextPrevious:(id)arg1 markers:(const struct OZTimeMarkerSet *)arg2 offset:(CDStruct_1b6d18a9)arg3;
- (void)timeDisplayRangeModified;
- (const struct PCTimeRange *)getDisplayRange;
- (CDStruct_1b6d18a9)getSecondsPerPixel;
- (double)getPixelsPerSecond;
- (CDStruct_1b6d18a9)getCurrentTime;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1;
- (unsigned int)getFrameChangedDone;
- (void)_markerRovingTip:(const struct PCTimeRange *)arg1 delta:(CDStruct_1b6d18a9)arg2 moving:(int)arg3 notificationFlags:(unsigned int)arg4;
- (void)markerFindSnaps;
- (BOOL)checkSnap:(CDStruct_1b6d18a9)arg1 delta:(CDStruct_1b6d18a9)arg2 whichSide:(int)arg3 nearest:(CDStruct_1b6d18a9 *)arg4 nearestDelta:(CDStruct_1b6d18a9 *)arg5;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;

@end
