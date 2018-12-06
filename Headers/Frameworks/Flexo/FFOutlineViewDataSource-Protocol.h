//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FFOutlineViewDataSource <NSObject>
- (long long)outlineView:(id)arg1 numberOfRowsAtIndexPath:(id)arg2;
- (id)outlineView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@optional
- (BOOL)outlineView:(id)arg1 isRowExpandableAtIndexPath:(id)arg2;
- (BOOL)outlineView:(id)arg1 isRowInitiallyExpandedAtIndexPath:(id)arg2;
- (void)outlineView:(id)arg1 willBeginEditingForRowAtIndexPath:(id)arg2;
- (void)outlineView:(id)arg1 didBeginEditingForRowAtIndexPath:(id)arg2;
- (void)outlineView:(id)arg1 willEndEditingForRowAtIndexPath:(id)arg2;
- (void)outlineView:(id)arg1 commitEditingForRowAtIndexPath:(id)arg2;
- (void)outlineView:(id)arg1 cancelEditingForRowAtIndexPath:(id)arg2;
- (void)outlineView:(id)arg1 cellWillGoToReuseQueue:(id)arg2;
- (void)openItemAtIndexPath:(id)arg1 atLocation:(struct CGRect)arg2;
- (id)outlineView:(id)arg1 writeRowsAtIndexPaths:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)outlineView:(id)arg1 supportedDraggingSourceOperationMaskForLocal:(BOOL)arg2 forRowsAtIndexPaths:(id)arg3;
- (id)outlineView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forRowsAtIndexPaths:(id)arg3;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 atIndexPath:(id)arg3 childInsertionIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 retargetingIndexPath:(id *)arg3 childInsertionIndex:(long long *)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 atIndexPath:(id)arg3 childInsertionIndex:(long long)arg4;
@end

