//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSEvent, TLKEventDispatcher, TLKEventHandler, TLKPartArray;

@interface TLKEventContext : NSObject
{
    TLKEventDispatcher *_dispatcher;
    TLKPartArray *_partArray;
    TLKEventHandler *_handler;
    NSEvent *_event;
    NSDictionary *_eventDescription;
    struct CGPoint _currentPoint;
    unsigned int _isDragFallbackEvent:1;
    unsigned int _isPressAndHoldEvent:1;
}

- (id)valueForUndefinedKey:(id)arg1;
- (id)description;
- (id)topPartPath;
- (id)hitSubpartName;
- (struct CGPoint)currentPoint;
- (BOOL)isCanceled;
- (BOOL)isStartTrackingEvent;
- (BOOL)isDragFallbackEvent;
- (BOOL)isPressAndHoldEvent;
- (BOOL)_isAMouseDownEvent;
- (id)characters;
- (unsigned short)firstCharacter;
- (id)modifierKeyNames;
- (id)eventName;
- (id)nameFromEventSubtype:(short)arg1;
- (id)eventDescription;
- (void)setEventDescription:(id)arg1;
- (id)event;
- (id)handler;
- (id)partArray;
- (id)dispatcher;
- (void)_updateCurrentPoint;
@property(readonly) BOOL inLiveRangeSelectionMode;
- (void)dealloc;
- (id)initWithDispatcher:(id)arg1 handler:(id)arg2 event:(id)arg3 partArray:(id)arg4 dragFallback:(BOOL)arg5 pressAndHold:(BOOL)arg6;

@end

