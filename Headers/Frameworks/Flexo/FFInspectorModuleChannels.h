//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModule.h>

@class FFInspectorModuleOZViewCtlrDelegate, NSImageView, NSMapTable, NSProThemeImageView, NSSet, NSString, NSTextField, NSView, OZViewCtlrRoot;

@interface FFInspectorModuleChannels : FFInspectorModule
{
    OZViewCtlrRoot *_ozViewCtlrRoot;
    FFInspectorModuleOZViewCtlrDelegate *_ozViewCtlrDelegate;
    NSString *_channelIdentifier;
    NSView *_accessoryView;
    NSProThemeImageView *_headerView;
    NSImageView *_itemIcon;
    NSTextField *_inspectorTitle;
    NSTextField *_durationField;
    NSView *_channelView;
    NSMapTable *_channelToItemMap;
    NSSet *_currentItemsSet;
    BOOL _needToRebuildInspector;
    BOOL _currentItemsReadLockHeld;
}

- (void)dealloc;
- (id)firstKeyView;
- (id)lastKeyView;
- (void)viewDidLoad;
- (void)moduleDidUnhide;
- (id)moduleAccessoryView;
- (unsigned long long)labelAlignment;
- (void)setCurrentItems:(id)arg1;
- (void)setContext:(id)arg1;
- (CDStruct_1b6d18a9)currentTimeForChannel:(id)arg1;
- (CDStruct_1b6d18a9)griddedTimeForChannel:(id)arg1;
- (void)setCurrentTime:(CDStruct_1b6d18a9)arg1 forChannel:(id)arg2;
- (void)updateChannelHeaderForItems:(id)arg1;
- (void)_scheduleDeferredAction:(SEL)arg1;
- (void)_handledDeferredAction:(SEL)arg1;
- (void)_filtersChangedFinal;
- (void)_filtersChangedAllmostFinal;
- (void)_filtersChanged:(id)arg1;
- (void)_updateChannels;
- (void)_updateMedia;
- (void)_mediaInvalidated:(id)arg1;
- (void)_inspectorChannelChanged:(id)arg1;
- (void)_effectSelectionStateChanged:(id)arg1;
- (void)_effectEnabledStateChanged:(id)arg1;
- (void)timeRateChangedForContext:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_isVideoChannel:(id)arg1;
- (BOOL)shouldDragChannel:(id)arg1;
- (unsigned long long)_validateDropForChannel:(id)arg1 sender:(id)arg2 proposedDropLocation:(unsigned int)arg3;
- (BOOL)_canReorderChannel:(id)arg1 sender:(id)arg2 dropLocation:(unsigned int)arg3;
- (BOOL)reorderChannels:(id)arg1 relativeToChannel:(id)arg2 above:(BOOL)arg3;
- (BOOL)canRemoveChannel:(id)arg1;
- (BOOL)_canRemoveSelectedChannels;
- (id)localModuleActions;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)delete:(id)arg1;
- (void)_updateLabel;
- (void)_addObservingForCurrentItems;
- (void)_removeObservingForCurrentItems;
- (BOOL)_allItemsHaveChannelID:(unsigned int)arg1;
- (void)_setupChannelInspector;
- (id)_selectedItemForChannel:(id)arg1;
- (id)selectedItemForChannel:(id)arg1;
- (BOOL)_timeInRangeOfCurrentItems:(CDStruct_1b6d18a9)arg1 container:(id)arg2;

@end

