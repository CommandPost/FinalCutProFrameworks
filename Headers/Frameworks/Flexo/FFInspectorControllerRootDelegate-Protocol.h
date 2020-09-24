//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFInspectorController, NSArray, OZViewControllerGroup;

@protocol FFInspectorControllerRootDelegate
- (OZViewControllerGroup *)ozControllerRootForInspectorController:(FFInspectorController *)arg1;
- (void)selectionStateChangedForInspectorController:(FFInspectorController *)arg1;
- (NSArray *)draggedControllersForInspectorController:(FFInspectorController *)arg1;
- (BOOL)isLocalDragForInspectorController:(FFInspectorController *)arg1;
- (void)inspectorController:(FFInspectorController *)arg1 setDraggingDropIndicatorsController:(FFInspectorController *)arg2;
- (void)reloadInspectorController:(FFInspectorController *)arg1 reloadChildren:(BOOL)arg2;
- (BOOL)isInspectorControllerLoaded:(FFInspectorController *)arg1;
- (long long)childIndexForInspectorController:(FFInspectorController *)arg1;
- (void)viewHeightChangedForInspectorController:(FFInspectorController *)arg1;
- (void)inspectorController:(FFInspectorController *)arg1 setExpanded:(BOOL)arg2;
- (BOOL)isExpandedForInspectorController:(FFInspectorController *)arg1;
@end
