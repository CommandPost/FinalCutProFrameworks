//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView, PMRStopwatch;

@interface TLKEventHandler : NSObject
{
    NSView *_view;
    PMRStopwatch *_stopwatch;
    struct {
        unsigned int enabled:1;
        unsigned int isTracking:1;
        unsigned int isSignificantDrag:1;
        unsigned int isCanceled:1;
        unsigned int RESERVED:28;
    } _ehFlags;
}

- (id)view;
- (id)identifier;
- (id)eventDescriptions;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)stringForToolTipAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (id)cursorAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (void)viewBoundsDidChange:(id)arg1;
- (void)exitRollover:(id)arg1;
- (void)updateRollover:(id)arg1;
- (BOOL)enterRollover:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1 dispatcher:(id)arg2;
- (void)concludeDragOperation:(id)arg1 dispatcher:(id)arg2;
- (BOOL)performDragOperation:(id)arg1 dispatcher:(id)arg2;
- (BOOL)prepareForDragOperation:(id)arg1 dispatcher:(id)arg2;
- (void)draggingExited:(id)arg1 dispatcher:(id)arg2;
- (unsigned long long)draggingUpdated:(id)arg1 dispatcher:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 dispatcher:(id)arg2;
- (BOOL)isCanceled;
- (BOOL)isSignificantDrag;
- (BOOL)isTracking;
- (void)flagsChanged:(id)arg1;
- (BOOL)stopTracking:(id)arg1;
- (void)cancelTracking:(id)arg1;
- (void)autoscrollWithChange:(struct CGRect)arg1 andAfter:(struct CGRect)arg2;
- (BOOL)shouldAutoscroll:(id)arg1;
- (BOOL)shouldAutoscrollView:(id)arg1 withPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3;
- (BOOL)continueTracking:(id)arg1;
- (BOOL)startTracking:(id)arg1;
- (struct CGPoint)constrainPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)cancel:(id)arg1;
- (void)notifyDelegateDidPerformSelector:(SEL)arg1 withDelegate:(id)arg2;
- (void)notifyDelegateWillPerformSelector:(SEL)arg1 withDelegate:(id)arg2;
- (void)notifyDelegate:(id)arg1 didPerformSelector:(SEL)arg2 draggingInfo:(id)arg3;
- (BOOL)notifyDelegate:(id)arg1 willPerformSelector:(SEL)arg2 draggingInfo:(id)arg3;
- (id)delegate;
- (void)pressAndHoldCanceled:(id)arg1;
- (void)_pressAndHoldCanceled:(id)arg1;
- (void)prepareForPressAndHold:(id)arg1;
- (void)_prepareForPressAndHold:(id)arg1;
- (void)stopHandling:(id)arg1;
- (void)_stopHandling:(id)arg1;
- (void)resumeHandling:(id)arg1;
- (void)pauseHandling:(id)arg1;
- (void)startHandling:(id)arg1;
- (void)_startHandling:(id)arg1;
- (void)applyConfiguration:(id)arg1;
- (id)stopwatch;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (id)init;

@end

