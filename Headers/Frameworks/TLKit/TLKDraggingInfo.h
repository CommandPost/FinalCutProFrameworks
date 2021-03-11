//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPasteboard;

@interface TLKDraggingInfo : NSObject
{
    struct CGPoint _draggingLocation;
    NSPasteboard *_draggingPasteboard;
}

- (long long)numberOfValidItemsForDrop;
- (BOOL)animatesToDestination;
- (long long)draggingFormation;
- (void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)slideDraggedImageTo:(struct CGPoint)arg1;
- (long long)draggingSequenceNumber;
- (id)draggingSource;
- (id)draggedImage;
- (struct CGPoint)draggedImageLocation;
- (unsigned long long)draggingSourceOperationMask;
- (id)draggingDestinationWindow;
- (void)setDraggingPasteboard:(id)arg1;
- (id)draggingPasteboard;
- (void)setDraggingLocation:(struct CGPoint)arg1;
- (struct CGPoint)draggingLocation;
- (void)dealloc;

@end

