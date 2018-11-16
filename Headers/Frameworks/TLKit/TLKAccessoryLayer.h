//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "TLKPartInfo.h"

@class TLKAccessoryHandler, TLKEventDispatcher, TLKTimelineView;

@interface TLKAccessoryLayer : CALayer <TLKPartInfo>
{
    TLKAccessoryHandler *_currentEventHandler;
    TLKEventDispatcher *_currentEventDispatcher;
    TLKTimelineView *_timelineView;
    double _boundsHeight;
}

- (id)init;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)arg1;
@property(readonly) double height;
- (void)setNeedsHeightChanged:(double)arg1;
- (id)currentEventHandler;
- (id)currentAccessoryPart;
- (id)initialAccessoryPart;
- (void)_setCurrentEventHandler:(id)arg1 dispatcher:(id)arg2;
- (struct CGPoint)convertPointFromTimeline:(struct CGPoint)arg1;
- (BOOL)popUpMenu:(id)arg1 positioningItem:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)setSkimmingPlayheadHidden:(BOOL)arg1;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)partIdentifier;
- (BOOL)startTracking:(id)arg1;
- (BOOL)continueTracking:(id)arg1;
- (void)cancelTracking:(id)arg1;
- (BOOL)stopTracking:(id)arg1;
- (BOOL)enterRollover:(id)arg1;
- (void)updateRollover:(id)arg1;
- (void)exitRollover:(id)arg1;
- (id)cursorAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (void)flagsChanged:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
@property TLKTimelineView *timelineView; // @synthesize timelineView=_timelineView;

@end

