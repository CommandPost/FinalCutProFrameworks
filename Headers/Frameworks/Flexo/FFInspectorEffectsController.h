//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorFolderController.h>

#import "FFInspectorControllerDragging.h"
#import "FFInspectorControllerSelecting.h"
#import "FFInspectorEffectsControllerHighlighting.h"
#import "FFInspectorEffectsDragging.h"
#import "FFInspectorEffectsRootDelegate.h"

@class FFInspectorControllerHighlightDrawer, FFInspectorEffectsDraggingContext, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorEffectsController : FFInspectorFolderController <FFInspectorControllerSelecting, FFInspectorControllerDragging, FFInspectorEffectsControllerHighlighting, FFInspectorEffectsRootDelegate, FFInspectorEffectsDragging>
{
    id <FFInspectorEffectsDataSource> _dataSource;
    id <FFInspectorEffectsSubcontrollersDelegate> _subcontrollersDelegate;
    id <FFInspectorEffectsBuildDelegate> _buildDelegate;
    FFInspectorEffectsDraggingContext *_draggingContext;
    BOOL _flattenEffectsSections;
    FFInspectorControllerHighlightDrawer *_highlightDrawer;
    NSArray *_controllersCollapsedForDrag;
}

- (void)setDropState:(unsigned long long)arg1 insertionIndex:(unsigned long long)arg2;
- (void)setUseInactiveSelectionState:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setDraggingContext:(id)arg1;
- (id)draggingContext;
- (id)draggingImageForController:(id)arg1;
- (BOOL)hasDraggingImageForController:(id)arg1;
- (id)_allEffectBrickControllers;
- (void)endReceivingDraggedItems;
- (void)beginReceivingDraggedItemsForDragType:(unsigned long long)arg1;
- (void)clearDraggingDropIndicatorsForController:(id)arg1;
- (BOOL)acceptDropForController:(id)arg1 childIndex:(long long)arg2 draggingInfo:(id)arg3;
- (unsigned long long)validateDropForController:(id)arg1 proposedChildIndex:(long long)arg2 draggingInfo:(id)arg3;
- (BOOL)disableLocalDraggingForControllers:(id)arg1;
- (id)supportedDraggedTypes;
- (BOOL)supportsExternalDrags;
- (void)setUseInactiveSelectionState:(BOOL)arg1 forControllers:(id)arg2;
- (void)deselectControllers:(id)arg1;
- (void)selectControllers:(id)arg1;
- (void)deleteControllers:(id)arg1;
- (BOOL)isControllerSelected:(id)arg1;
- (id)effectsDraggingOwner;
- (id)effectsBrickSelectionOwner;
- (id)buildDelegate;
- (id)subcontrollersDelegate;
- (id)dataSource;
- (void)folderResetButtonClicked:(id)arg1;
- (void)folderDisclosureButtonClicked:(id)arg1;
- (void)folderEnableButtonClicked:(id)arg1;
- (id)folderLabelText;
- (void)updateControllerEnableState;
- (void)updateController;
- (id)draggingOwner;
- (unsigned int)defaultExpandState;
- (id)childAtIndex:(long long)arg1;
- (long long)numberOfChildren;
- (void)_updateDefaultExpandState;
- (id)expandStateKey;
- (void)updateFlattenEffectsSections;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 subcontrollersDelegate:(id)arg2 buildDelegate:(id)arg3 headingController:(id)arg4 context:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
