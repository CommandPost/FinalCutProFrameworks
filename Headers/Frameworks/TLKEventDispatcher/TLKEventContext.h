//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSEvent, TLKEventDispatcher, TLKEventHandler, TLKPartArray;

@interface TLKEventContext : NSObject
{
    TLKEventDispatcher *_dispatcher;
    TLKPartArray *_partArray;
    NSArray *_partNames;
    TLKEventHandler *_handler;
    NSEvent *_event;
    NSDictionary *_eventDescription;
    struct CGPoint _currentPoint;
    void *_reserved3;
}

- (id)initWithDispatcher:(id)arg1 handler:(id)arg2 event:(id)arg3 partArray:(id)arg4;
- (void)dealloc;
- (void)_updateCurrentPoint;
- (id)dispatcher;
- (id)partArray;
- (id)handler;
- (id)event;
- (void)setEventDescription:(id)arg1;
- (id)eventDescription;
- (id)nameFromEventSubtype:(short)arg1;
- (id)eventName;
- (id)modifierKeyNames;
- (unsigned short)firstCharacter;
- (id)characters;
- (BOOL)isStartTrackingEvent;
- (BOOL)isCanceled;
- (struct CGPoint)currentPoint;
- (id)hitSubpartName;
- (id)topPartPath;
- (id)description;

@end

