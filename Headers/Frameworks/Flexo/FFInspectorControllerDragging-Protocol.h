//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFInspectorController, NSArray, NSImage;

@protocol FFInspectorControllerDragging <NSObject>
- (void)clearDraggingDropIndicatorsForController:(FFInspectorController *)arg1;
- (BOOL)acceptDropForController:(FFInspectorController *)arg1 childIndex:(long long)arg2 draggingInfo:(id <NSDraggingInfo>)arg3;
- (unsigned long long)validateDropForController:(FFInspectorController *)arg1 proposedChildIndex:(long long)arg2 draggingInfo:(id <NSDraggingInfo>)arg3;

@optional
- (void)endReceivingDraggedItems;
- (void)beginReceivingDraggedItemsForDragType:(unsigned long long)arg1;
- (NSImage *)draggingImageForController:(FFInspectorController *)arg1;
- (BOOL)hasDraggingImageForController:(FFInspectorController *)arg1;
- (BOOL)disableLocalDraggingForControllers:(NSArray *)arg1;
- (id <NSPasteboardWriting>)draggingPasteboardWriterForControllers:(NSArray *)arg1;
- (NSArray *)supportedDraggedTypes;
- (BOOL)supportsExternalDrags;
@end

