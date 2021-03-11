//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDraggingSession, NSOutlineView, NSPasteboard, NSTableColumn, NSURL;
@protocol NSDraggingInfo, NSPasteboardWriting;

@protocol NSOutlineViewDataSource <NSObject>

@optional
- (NSArray *)outlineView:(NSOutlineView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forDraggedItems:(NSArray *)arg3;
- (BOOL)outlineView:(NSOutlineView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(NSOutlineView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)outlineView:(NSOutlineView *)arg1 updateDraggingItemsForDrag:(id <NSDraggingInfo>)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 writeItems:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (void)outlineView:(NSOutlineView *)arg1 draggingSession:(NSDraggingSession *)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)outlineView:(NSOutlineView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(NSArray *)arg4;
- (id <NSPasteboardWriting>)outlineView:(NSOutlineView *)arg1 pasteboardWriterForItem:(id)arg2;
- (void)outlineView:(NSOutlineView *)arg1 sortDescriptorsDidChange:(NSArray *)arg2;
- (id)outlineView:(NSOutlineView *)arg1 persistentObjectForItem:(id)arg2;
- (id)outlineView:(NSOutlineView *)arg1 itemForPersistentObject:(id)arg2;
- (void)outlineView:(NSOutlineView *)arg1 setObjectValue:(id)arg2 forTableColumn:(NSTableColumn *)arg3 byItem:(id)arg4;
- (id)outlineView:(NSOutlineView *)arg1 objectValueForTableColumn:(NSTableColumn *)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(NSOutlineView *)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(NSOutlineView *)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(NSOutlineView *)arg1 numberOfChildrenOfItem:(id)arg2;
@end

