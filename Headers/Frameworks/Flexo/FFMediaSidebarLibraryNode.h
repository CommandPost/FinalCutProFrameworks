//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMediaSidebarNode.h>

@interface FFMediaSidebarLibraryNode : FFMediaSidebarNode
{
}

- (id)iconImage:(BOOL)arg1;
- (BOOL)acceptDrop:(id)arg1 childIndex:(long long)arg2;
- (BOOL)acceptDrop:(id)arg1 childIndex:(long long)arg2 operationBefore:(CDUnknownBlockType)arg3 operationAfter:(CDUnknownBlockType)arg4;
- (unsigned long long)validateDrop:(id)arg1 childIndex:(long long)arg2;
- (BOOL)_performDraggingProjectImport:(id)arg1 dragInfo:(id)arg2;
- (unsigned long long)_validateDraggingProjectImport:(id)arg1 dragInfo:(id)arg2;
- (id)pasteboardType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingChildNodes;
- (void)startObservingChildNodes;
- (void)_sortEventRecords:(id)arg1;
- (id)_eventRecordsForYear:(long long)arg1;
- (id)projectsForYear:(long long)arg1;
- (id)childNodesForYear:(long long)arg1 reusingNodes:(id)arg2;
- (id)_childNodesForEventRecords:(id)arg1 reusingNodes:(id)arg2;
- (void)_updateChildEventNodes;
- (id)_updateChildYearNodes;
- (long long)_addEventNode:(id)arg1 toEventNodesByYear:(id)arg2;
- (id)_copyEventRecordsForYearNodes;
- (id)libraryFolderNode;
- (id)_updateChildNodesExpandingNodes;
- (void)updateChildNodes;
- (void)updateNodeAndChildrenAndReloadOutlineView;
- (BOOL)isExpandable;
- (id)toolTip;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)libraryDocument;
- (id)persistentID;
- (id)initWithLibrary:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;

@end

