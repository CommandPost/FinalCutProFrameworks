//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class FFOutlineView, FFOutlineViewCell, NSArray, NSIndexPath, NSPasteboard, NSURL;
@protocol NSDraggingInfo;

@protocol FFOutlineViewDataSource <NSObject>
- (FFOutlineViewCell *)outlineView:(FFOutlineView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)outlineView:(FFOutlineView *)arg1 numberOfRowsAtIndexPath:(NSIndexPath *)arg2;

@optional
- (BOOL)outlineView:(FFOutlineView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 atIndexPath:(NSIndexPath *)arg3 childInsertionIndex:(long long)arg4;
- (unsigned long long)outlineView:(FFOutlineView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 retargetingIndexPath:(id *)arg3 childInsertionIndex:(long long *)arg4;
- (unsigned long long)outlineView:(FFOutlineView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 atIndexPath:(NSIndexPath *)arg3 childInsertionIndex:(long long)arg4;
- (NSArray *)outlineView:(FFOutlineView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forRowsAtIndexPaths:(NSArray *)arg3;
- (unsigned long long)outlineView:(FFOutlineView *)arg1 supportedDraggingSourceOperationMaskForLocal:(BOOL)arg2 forRowsAtIndexPaths:(NSArray *)arg3;
- (NSArray *)outlineView:(FFOutlineView *)arg1 writeRowsAtIndexPaths:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (void)openItemAtIndexPath:(NSIndexPath *)arg1 atLocation:(struct CGRect)arg2;
- (void)outlineView:(FFOutlineView *)arg1 cellWillGoToReuseQueue:(FFOutlineViewCell *)arg2;
- (void)outlineView:(FFOutlineView *)arg1 cancelEditingForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)outlineView:(FFOutlineView *)arg1 commitEditingForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)outlineView:(FFOutlineView *)arg1 willEndEditingForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)outlineView:(FFOutlineView *)arg1 didBeginEditingForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)outlineView:(FFOutlineView *)arg1 willBeginEditingForRowAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)outlineView:(FFOutlineView *)arg1 isRowInitiallyExpandedAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)outlineView:(FFOutlineView *)arg1 isRowExpandableAtIndexPath:(NSIndexPath *)arg2;
@end

