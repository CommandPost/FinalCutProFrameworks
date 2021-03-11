//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/NSObject-Protocol.h>

@class NSArray, NSDraggingSession, NSIndexSet, NSPasteboard, NSTableColumn, NSTableView, NSURL;
@protocol NSDraggingInfo, NSPasteboardWriting;

@protocol NSTableViewDataSource <NSObject>

@optional
- (NSArray *)tableView:(NSTableView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forDraggedRowsWithIndexes:(NSIndexSet *)arg3;
- (BOOL)tableView:(NSTableView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(NSTableView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(NSTableView *)arg1 writeRowsWithIndexes:(NSIndexSet *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (void)tableView:(NSTableView *)arg1 updateDraggingItemsForDrag:(id <NSDraggingInfo>)arg2;
- (void)tableView:(NSTableView *)arg1 draggingSession:(NSDraggingSession *)arg2 endedAtPoint:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)tableView:(NSTableView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3 forRowIndexes:(NSIndexSet *)arg4;
- (id <NSPasteboardWriting>)tableView:(NSTableView *)arg1 pasteboardWriterForRow:(long long)arg2;
- (void)tableView:(NSTableView *)arg1 sortDescriptorsDidChange:(NSArray *)arg2;
- (void)tableView:(NSTableView *)arg1 setObjectValue:(id)arg2 forTableColumn:(NSTableColumn *)arg3 row:(long long)arg4;
- (id)tableView:(NSTableView *)arg1 objectValueForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(NSTableView *)arg1;
@end

