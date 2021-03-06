//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FFInspectorController, NSString;
@protocol FFInspectorControllerDragging, FFInspectorControllerSelecting;

@protocol FFInspectorControllerDataSource
- (void)updateControllerEnableState;
- (void)updateController;
- (NSString *)accessibilityControlName;
- (BOOL)supportsDraggingOwner:(id <FFInspectorControllerDragging>)arg1;
- (id <FFInspectorControllerDragging>)draggingOwner;
- (id <FFInspectorControllerSelecting>)selectionOwner;
- (void)setEnableState:(unsigned int)arg1;
- (unsigned int)defaultExpandState;
- (BOOL)isExpandable;
- (FFInspectorController *)childAtIndex:(long long)arg1;
- (long long)numberOfChildren;
- (BOOL)supportsChildren;
@end

