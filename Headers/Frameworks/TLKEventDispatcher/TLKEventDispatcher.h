//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

@class NSArray, NSCursor, NSDictionary, NSEvent, NSMutableArray, NSMutableDictionary, NSMutableString, NSTrackingArea, NSView<TLKEventDispatcherView>, TLKEventContext, TLKEventHandler, TLKPartArray, TLKToolTipManager;

@interface TLKEventDispatcher : NSResponder
{
    NSDictionary *_originalEventDescriptions;
    Class _eventContextClass;
    NSMutableArray *_handlerStack;
    NSMutableDictionary *_exitPredicateMap;
    TLKEventHandler *_potentialHandler;
    TLKEventHandler *_pressAndHoldHandler;
    TLKEventHandler *_dragFallbackHandler;
    TLKEventContext *_potentialHandlerContext;
    NSArray *_rolloverDescriptions;
    NSView<TLKEventDispatcherView> *_view;
    NSTrackingArea *_cursorTrackingArea;
    id _delegate;
    TLKToolTipManager *_toolTipManager;
    NSEvent *_initialEvent;
    NSEvent *_currentEvent;
    struct CGPoint _initialPoint;
    struct CGPoint _previousPoint;
    struct CGPoint _currentPoint;
    TLKPartArray *_initialPartArray;
    TLKPartArray *_currentPartArray;
    unsigned long long _eventMask;
    long long _actionTag;
    id _monitor;
    id _draggingEndedEventMonitor;
    struct {
        unsigned int isTracking:1;
        unsigned int potentialHandlerIsInvalid:1;
        unsigned int delegateWillSetCurrentHandler:1;
        unsigned int delegateDidSetCurrentHandler:1;
        unsigned int autoscrollsView:1;
        unsigned int previousPointNeedsUpdate:1;
        unsigned int settingCurrentHandler:1;
        unsigned int didHandleDraggingEnded:1;
        unsigned int shouldHandleDraggingUpdated:1;
        unsigned int performingPressAndHold:1;
        unsigned int waitingForPressAndHoldMouseDown:1;
        unsigned int performingDragFallback:1;
        unsigned int noEventMode:1;
        unsigned int RESERVED:18;
    } _edFlags;
    BOOL _eventDispatchEnabled;
    BOOL _draggingEnteredCanceled;
    NSCursor *_currentCursor;
    BOOL _throttledEventMode;
    int _thermalPressureLevel;
    int _throttlePressureLevel;
    int _thermalPressureToken;
    NSMutableDictionary *_handlerMap;
    NSDictionary *_eventDescriptionMap;
    NSMutableString *_workaroundEvents;
    unsigned long long _throttledMaxEventsPerSecond;
    NSEvent *_previousEvent;
    unsigned long long _countOfTrackingIterations;
    NSEvent *_queuedPreviousEvent;
}

@property(retain) NSEvent *queuedPreviousEvent; // @synthesize queuedPreviousEvent=_queuedPreviousEvent;
@property int thermalPressureToken; // @synthesize thermalPressureToken=_thermalPressureToken;
@property(nonatomic) unsigned long long countOfTrackingIterations; // @synthesize countOfTrackingIterations=_countOfTrackingIterations;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(retain) NSEvent *previousEvent; // @synthesize previousEvent=_previousEvent;
@property unsigned long long throttledMaxEventsPerSecond; // @synthesize throttledMaxEventsPerSecond=_throttledMaxEventsPerSecond;
@property int throttlePressureLevel; // @synthesize throttlePressureLevel=_throttlePressureLevel;
@property int thermalPressureLevel; // @synthesize thermalPressureLevel=_thermalPressureLevel;
@property BOOL throttledEventMode; // @synthesize throttledEventMode=_throttledEventMode;
@property(retain, nonatomic) NSMutableString *workaroundEvents; // @synthesize workaroundEvents=_workaroundEvents;
@property(nonatomic) BOOL eventDispatchEnabled; // @synthesize eventDispatchEnabled=_eventDispatchEnabled;
@property(retain, nonatomic) NSDictionary *eventDescriptionMap; // @synthesize eventDescriptionMap=_eventDescriptionMap;
@property(retain, nonatomic) NSMutableDictionary *handlerMap; // @synthesize handlerMap=_handlerMap;
- (id)initialPartArray;
- (id)currentPartArray;
- (struct CGPoint)currentPoint;
- (struct CGPoint)previousPoint;
- (id)initialEvent;
- (id)currentEvent;
- (void)setCurrentEvent:(id)arg1;
- (struct CGPoint)_locationOfEvent:(id)arg1;
- (struct CGPoint)_constrainedLocationOfEvent:(id)arg1;
- (void)_updateCurrentPoint;
- (void)updateCurrentPoint:(struct CGPoint)arg1;
- (unsigned long long)eventMask;
- (void)updateEventMask;
- (void)setEventMask:(unsigned long long)arg1;
- (BOOL)autoscrollsView;
- (void)setAutoscrollsView:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (Class)eventContextClass;
- (void)setEventContextClass:(Class)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)exitPredicateMap;
- (id)defaultExitPredicate;
- (id)defaultExitPredicateForEvent:(id)arg1;
- (id)exitPredicateForHandler:(id)arg1;
- (void)setExitPredicate:(id)arg1 forHandler:(id)arg2;
- (void)viewBoundsDidChange:(id)arg1;
- (id)eventHandlerForAction:(SEL)arg1;
- (BOOL)sendAction:(SEL)arg1 toHandler:(id)arg2;
- (long long)tag;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)_evaluateRolloversWithEventContext:(id)arg1;
- (BOOL)_evaluateEventDescription:(id)arg1 withEventContext:(id)arg2;
- (BOOL)_performExitPredicateForEventContext:(id)arg1;
- (BOOL)_reallyDispatchEvent:(id)arg1;
- (BOOL)_delayedReallyDispatchEvent;
- (BOOL)dispatchEvent:(id)arg1;
- (void)_updateRolloverWithEvent:(id)arg1;
- (void)_updateRollover:(id)arg1;
@property(nonatomic) BOOL isTracking;
- (id)nextEventForWindow:(id)arg1;
- (BOOL)_startTrackingLoop;
- (void)viewFrameDidChange:(id)arg1;
- (void)_stopListeningToViewFrameChanges;
- (void)_startListeningToViewFrameChanges;
- (id)_appEventWithSubtype:(short)arg1 fromDraggingInfo:(id)arg2;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)handleUndoHandlerOpenUndoScopeDetected;
- (void)_cleanupDraggingEnded;
- (BOOL)_removeDraggingEndedMonitor;
- (BOOL)_endWorkaroundForMissingDraggingEndedBug;
- (void)_beginWorkaroundForMissingDraggingEndedBug:(id)arg1;
- (id)newCursorTrackingArea;
- (void)updateCursor;
- (BOOL)acceptsFirstResponder;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)tabletProximity:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_endDragFallback;
- (void)_handleDragFallback:(id)arg1;
- (void)handleDragFallback;
- (void)_delayMouseDown;
- (void)_handleDelay:(id)arg1;
- (void)_startWaitingForMouseDown;
- (void)_cancelPressAndHold;
- (void)_clearWaitingForMouseDown;
- (id)eventDescriptionForIdentifier:(id)arg1;
- (id)_handlerForEventDescription:(id)arg1;
- (id)_findEventDescription:(id)arg1 withAction:(SEL)arg2;
- (id)eventDescriptionWithAction:(SEL)arg1;
- (void)_addEventDescriptionsInArray:(id)arg1 matchingContext:(id)arg2 toArray:(id)arg3 findAll:(BOOL)arg4;
- (id)_eventDescriptionsMatchingEventContext:(id)arg1 forRollover:(BOOL)arg2;
- (id)rolloverDescriptionsMatchingEventContext:(id)arg1;
- (id)eventDescriptionMatchingEventContext:(id)arg1;
- (id)_predicateWithFormat:(id)arg1;
- (id)_cacheEventDescriptionPredicates:(id)arg1;
- (id)_dictionaryByCachingPredicates:(id)arg1;
- (void)writeEventDescriptionsToDictionary:(id)arg1;
- (void)resetEventDescriptions;
- (void)readEventDescriptionsFromDictionary:(id)arg1;
- (id)_potentialHandlerForEvent:(id)arg1 eventContext:(id *)arg2;
- (id)potentialHandler;
- (void)_invalidatePotentialHandler;
- (BOOL)_setPotentialHandler:(id)arg1 eventContext:(id)arg2;
- (void)_currentHandlerDidChange;
- (void)_currentHandlerWillChange:(id)arg1;
- (void)_popHandlerAndNotifyCurrentHandler:(BOOL)arg1;
- (void)_pushHandler:(id)arg1 exitPredicate:(id)arg2 shouldNotifyCurrentHandler:(BOOL)arg3;
- (id)handlerStack;
- (void)removeHandlerFromStack:(id)arg1;
- (void)popHandler;
- (void)pushHandler:(id)arg1 exitPredicate:(id)arg2;
- (BOOL)isSettingCurrentHandler;
- (id)previousHandler;
- (id)currentHandler;
- (void)setCurrentHandler:(id)arg1;
- (void)_loadAllHandlers;
- (id)handlers;
- (id)handlerDescriptionForIdentifier:(id)arg1;
- (id)handlerWithIdentifier:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)removeEventHandlerWithIdentifier:(id)arg1;
- (void)addTrackingHandlerWithIdentifier:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;
@property(nonatomic) BOOL noEventMode;
- (void)_stopThermalPressureLevelListener;
- (void)_startThermalPressureLevelListener;
- (void)resetState;
- (id)description;
- (void)dealloc;
- (id)init;

@end

