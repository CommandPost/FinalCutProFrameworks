//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFEditActionDestinationProtocol.h"

@class FFContext, FFProvider, FFRenderStateTracker, NSMutableArray;

@interface FFEditorModule : LKViewModule <FFEditActionDestinationProtocol>
{
    FFContext *_context;
    BOOL _showsStoryOutline;
    NSMutableArray *_history;
    unsigned long long _activeIndex;
    BOOL _movingDeeper;
    FFRenderStateTracker *_renderStateTracker;
    double _itemHeight;
}

@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(readonly) FFRenderStateTracker *renderStateTracker; // @synthesize renderStateTracker=_renderStateTracker;
@property(nonatomic) BOOL showsStoryOutline; // @synthesize showsStoryOutline=_showsStoryOutline;
- (struct CGRect)animationEndRectForEditAction:(id)arg1 pasteboardName:(id)arg2;
- (void)performEditAction:(id)arg1 fromPasteboardWithName:(id)arg2 fromAnimation:(BOOL)arg3;
- (BOOL)canPerformEditAction:(id)arg1 withData:(id)arg2;
- (void)dumpRenderTrackerToConsole:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerForRenderTrackingAndBGRender;
- (void)unregisterForRenderTrackingAndBGRender;
- (BOOL)updateSelectionWithObjects:(id)arg1;
- (id)selectedRangesOrItems;
- (BOOL)hasSelection;
- (BOOL)movingDeeper;
- (id)sequence;
@property(readonly) FFProvider *provider;
@property(readonly) FFContext *context;
- (id)rootItem;
- (void)gotoRootItem:(id)arg1;
- (unsigned long long)indexOfItem:(id)arg1;
- (void)gotoNextRootItem:(id)arg1;
- (void)gotoPreviousRootItem:(id)arg1;
- (void)notifiyHistoryChanged;
- (void)validateHistory:(id)arg1;
- (void)_projectChanged:(id)arg1;
- (void)_documentRemoved:(id)arg1;
- (BOOL)canNavigateToRootItem:(BOOL)arg1;
- (void)pushRootItem:(id)arg1;
- (id)rootContainerForActiveItem;
- (void)activeRootItemDidChange;
- (void)activeRootItemWillChange;
- (id)nextRootItems;
- (id)previousRootItems;
- (id)rootItemsHierarchy;
- (void)removeOthersFromHistory;
- (void)removeCurrentRootItemFromHistory;
- (id)rootItems;
- (id)currentItemInfo;
- (void)setCurrentItemInfo:(id)arg1;
- (id)labelTextForItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)inspectorClassName;
- (void)dealloc;
- (id)init;

@end

