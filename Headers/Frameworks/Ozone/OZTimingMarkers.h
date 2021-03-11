//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZTimingMarkersBase.h>

#import <Ozone/NSPopoverDelegate-Protocol.h>
#import <Ozone/OZTimingView-Protocol.h>

@class NSPopover, NSString, NSTextField, NSTrackingArea, OZTimingCoordinator;

@interface OZTimingMarkers : OZTimingMarkersBase <OZTimingView, NSPopoverDelegate>
{
    OZTimingCoordinator *_timingCoordinator;
    unsigned int _frameChangedDelta;
    unsigned int _frameChangedDone;
    struct CGPoint _startingLocation;
    int _moving;
    NSTrackingArea *_trackingArea;
    NSPopover *_markerInfoPopover;
    NSTextField *_markerInfoPopoverTextField;
    const struct OZTimeMarker *_hoveredMarker;
    BOOL _dragCursorsOn;
    BOOL _drawBackgroundFromSuperclass;
    BOOL _drawMarkers;
    BOOL _addMarker;
}

@property(nonatomic) BOOL drawMarkers; // @synthesize drawMarkers=_drawMarkers;
@property(nonatomic) BOOL drawBackgroundFromSuperclass; // @synthesize drawBackgroundFromSuperclass=_drawBackgroundFromSuperclass;
- (unsigned int)getFrameChangedDone;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1;
- (CDStruct_1b6d18a9)getCurrentTime;
- (double)getPixelsPerSecond;
- (CDStruct_1b6d18a9)getSecondsPerPixel;
- (const struct PCTimeRange *)getDisplayRange;
- (void)timeDisplayRangeModified;
- (void)setTimingCoordinator:(id)arg1;
- (void)menuNextPrevious:(id)arg1;
- (void)menuAddInfoDelete:(id)arg1;
- (void)resetCursorRects;
- (void)updateToolTips;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)ignoreModifierKeysWhileDragging;
- (unsigned int)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)notify:(unsigned int)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)flagsChanged:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (id)menuForEvent:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_dismissMarkerInfoPopover;
- (id)_markerTitlePopover:(const struct OZTimeMarker *)arg1;
- (id)_textImageForMarker:(const struct OZTimeMarker *)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)setFrameChangedDelta:(unsigned int)arg1 done:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

