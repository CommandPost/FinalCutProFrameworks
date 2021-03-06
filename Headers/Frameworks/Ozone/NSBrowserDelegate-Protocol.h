//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/NSObject-Protocol.h>

@class NSArray, NSBrowser, NSEvent, NSImage, NSIndexSet, NSMatrix, NSNotification, NSPasteboard, NSString, NSURL, NSViewController;
@protocol NSDraggingInfo;

@protocol NSBrowserDelegate <NSObject>

@optional
- (NSIndexSet *)browser:(NSBrowser *)arg1 selectionIndexesForProposedSelection:(NSIndexSet *)arg2 inColumn:(long long)arg3;
- (void)browser:(NSBrowser *)arg1 didChangeLastColumn:(long long)arg2 toColumn:(long long)arg3;
- (NSViewController *)browser:(NSBrowser *)arg1 headerViewControllerForItem:(id)arg2;
- (NSViewController *)browser:(NSBrowser *)arg1 previewViewControllerForLeafItem:(id)arg2;
- (long long)browser:(NSBrowser *)arg1 nextTypeSelectMatchFromRow:(long long)arg2 toRow:(long long)arg3 inColumn:(long long)arg4 forString:(NSString *)arg5;
- (BOOL)browser:(NSBrowser *)arg1 shouldTypeSelectForEvent:(NSEvent *)arg2 withCurrentSearchString:(NSString *)arg3;
- (NSString *)browser:(NSBrowser *)arg1 typeSelectStringForRow:(long long)arg2 inColumn:(long long)arg3;
- (BOOL)browser:(NSBrowser *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 atRow:(long long)arg3 column:(long long)arg4 dropOperation:(unsigned long long)arg5;
- (unsigned long long)browser:(NSBrowser *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedRow:(long long *)arg3 column:(long long *)arg4 dropOperation:(unsigned long long *)arg5;
- (NSImage *)browser:(NSBrowser *)arg1 draggingImageForRowsWithIndexes:(NSIndexSet *)arg2 inColumn:(long long)arg3 withEvent:(NSEvent *)arg4 offset:(struct CGPoint *)arg5;
- (BOOL)browser:(NSBrowser *)arg1 canDragRowsWithIndexes:(NSIndexSet *)arg2 inColumn:(long long)arg3 withEvent:(NSEvent *)arg4;
- (NSArray *)browser:(NSBrowser *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forDraggedRowsWithIndexes:(NSIndexSet *)arg3 inColumn:(long long)arg4;
- (BOOL)browser:(NSBrowser *)arg1 writeRowsWithIndexes:(NSIndexSet *)arg2 inColumn:(long long)arg3 toPasteboard:(NSPasteboard *)arg4;
- (BOOL)browser:(NSBrowser *)arg1 shouldShowCellExpansionForRow:(long long)arg2 column:(long long)arg3;
- (void)browserColumnConfigurationDidChange:(NSNotification *)arg1;
- (double)browser:(NSBrowser *)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (double)browser:(NSBrowser *)arg1 shouldSizeColumn:(long long)arg2 forUserResize:(BOOL)arg3 toWidth:(double)arg4;
- (void)browserDidScroll:(NSBrowser *)arg1;
- (void)browserWillScroll:(NSBrowser *)arg1;
- (BOOL)browser:(NSBrowser *)arg1 isColumnValid:(long long)arg2;
- (BOOL)browser:(NSBrowser *)arg1 selectRow:(long long)arg2 inColumn:(long long)arg3;
- (BOOL)browser:(NSBrowser *)arg1 selectCellWithString:(NSString *)arg2 inColumn:(long long)arg3;
- (NSString *)browser:(NSBrowser *)arg1 titleOfColumn:(long long)arg2;
- (void)browser:(NSBrowser *)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4;
- (BOOL)browser:(NSBrowser *)arg1 shouldEditItem:(id)arg2;
- (void)browser:(NSBrowser *)arg1 setObjectValue:(id)arg2 forItem:(id)arg3;
- (id)rootItemForBrowser:(NSBrowser *)arg1;
- (double)browser:(NSBrowser *)arg1 heightOfRow:(long long)arg2 inColumn:(long long)arg3;
- (id)browser:(NSBrowser *)arg1 objectValueForItem:(id)arg2;
- (BOOL)browser:(NSBrowser *)arg1 isLeafItem:(id)arg2;
- (id)browser:(NSBrowser *)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)browser:(NSBrowser *)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)browser:(NSBrowser *)arg1 createRowsForColumn:(long long)arg2 inMatrix:(NSMatrix *)arg3;
- (long long)browser:(NSBrowser *)arg1 numberOfRowsInColumn:(long long)arg2;
@end

