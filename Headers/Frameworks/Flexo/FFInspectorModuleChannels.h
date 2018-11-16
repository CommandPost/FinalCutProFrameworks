//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModule.h>

@class FFEffect, FFInspectorModuleOZViewCtlrDelegate, NSBox, NSMapTable, NSSet, NSString, NSView, OZViewCtlrRoot;

@interface FFInspectorModuleChannels : FFInspectorModule
{
    OZViewCtlrRoot *_ozViewCtlrRoot;
    FFInspectorModuleOZViewCtlrDelegate *_ozViewCtlrDelegate;
    NSString *_channelIdentifier;
    NSView *_accessoryView;
    NSBox *_channelView;
    NSMapTable *_channelToItemMap;
    NSSet *_currentItemsSet;
    BOOL _needToRebuildInspector;
    BOOL _isFilterChangedCallPending;
    BOOL _currentItemsReadLockHeld;
    BOOL _observingUserDefaults;
    long long _suspendEffectsChangedObserving;
    unsigned int _buildContextVisibilityFlags;
    BOOL _hideKeyframeBlocks;
    NSView *_customContainerView;
    FFEffect *_needsToReleaseThisDummyEffect;
    NSSet *_observedItems;
}

+ (id)selectedAnchoredObjectsUsingController:(id)arg1;
+ (void)setIsCollapsed:(BOOL)arg1 forRootFolder:(id)arg2;
@property(nonatomic) BOOL hideKeyframeBlocks; // @synthesize hideKeyframeBlocks=_hideKeyframeBlocks;
@property(nonatomic) unsigned int buildContextVisibilityFlags; // @synthesize buildContextVisibilityFlags=_buildContextVisibilityFlags;
@property(retain, nonatomic) NSView *customContainerView; // @synthesize customContainerView=_customContainerView;
- (BOOL)_timeInRangeOfCurrentItems:(CDStruct_1b6d18a9)arg1 container:(id)arg2;
- (id)selectedItemForChannel:(id)arg1;
- (id)_selectedItemForChannel:(id)arg1;
- (void)_setupChannelInspector:(BOOL)arg1;
- (id)translateInspectedItemToPrimaryIfSequence:(id)arg1;
- (Class)_inspectorDelegateClass;
- (void)_rebuildInspectorWithChannelFolders:(id)arg1 currentItems:(id)arg2 buildContext:(id)arg3 shouldReadLock:(BOOL)arg4;
- (void)_removeObservingForCurrentItems;
- (void)_addObservingForCurrentItems;
- (BOOL)makeViewResizeHeight;
- (BOOL)shouldEncloseInScrollView;
- (BOOL)shouldInspectChannelID:(unsigned int)arg1;
- (BOOL)canInspectTabIdentifier:(id)arg1 forItem:(id)arg2;
- (void)delete:(id)arg1;
- (void)shiftDelete:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)localModuleActions;
- (BOOL)_canRemoveSelectedChannels;
- (BOOL)canRemoveChannel:(id)arg1;
- (BOOL)reorderChannels:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)_canReorderChannel:(id)arg1 sender:(id)arg2 dropLocation:(unsigned int)arg3;
- (unsigned long long)_validateDropForChannel:(id)arg1 sender:(id)arg2 proposedDropLocation:(unsigned int)arg3;
- (BOOL)shouldDragChannel:(id)arg1;
- (BOOL)_isVideoChannel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateChannelFooterForCurrentItems;
- (void)notifyUpdateChannelFooterForCurrentItems;
- (void)forceInspectorRebuild;
- (void)_rebuildChannelInspector;
- (void)notifyRebuildChannelInspector;
- (void)timeRateChangedForContext:(id)arg1;
- (void)notifyUpdateChannels;
- (void)notifyRangeInvalidation:(id)arg1;
- (void)_mediaInvalidated:(id)arg1;
- (void)_updateMedia;
- (void)_updateChannels;
- (void)resumeEffectsChangedObserving;
- (void)suspendEffectsChangedObserving;
- (void)notifyFiltersChanged:(id)arg1;
- (void)_filtersChangedAllmostFinal;
- (void)_filtersChangedFinal;
- (void)_handledDeferredAction:(SEL)arg1;
- (void)_scheduleDeferredAction:(SEL)arg1;
- (void)removeObservingForItems:(id)arg1;
- (void)addObservingForItems:(id)arg1;
- (void)updateChannelFooterForItems:(id)arg1;
- (void)stopPlaybackForChannel:(id)arg1;
- (void)setCurrentTime:(CDStruct_1b6d18a9)arg1 forChannel:(id)arg2;
- (CDStruct_1b6d18a9)griddedTimeForChannel:(id)arg1;
- (CDStruct_1b6d18a9)currentTimeForChannel:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentItems:(id)arg1;
- (unsigned long long)labelAlignment;
- (id)moduleAccessoryView;
- (void)moduleDidUnhide;
- (void)viewDidLoad;
- (id)lastKeyView;
- (id)firstKeyView;
- (void)dealloc;
- (id)init;

@end

