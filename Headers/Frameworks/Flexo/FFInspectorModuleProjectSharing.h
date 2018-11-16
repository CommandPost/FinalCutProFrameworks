//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModule.h>

#import "FFInspectorLabelParameterContainerDataSource.h"

@class FFAnchoredSequence, FFInspectorContainerController, FFInspectorLabelParameterCollapsableContainerController, FFInspectorMediaHeaderController, FFShareStatus, LKScrollView, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorModuleProjectSharing : FFInspectorModule <FFInspectorLabelParameterContainerDataSource>
{
    id _inspectedProject;
    FFAnchoredSequence *_observedSequence;
    FFShareStatus *_shareStatus;
    NSMutableArray *_proxyObjs;
    BOOL _projectIsInSyncWithShareMedia;
    NSMutableArray *_visibleShareMetadata;
    FFInspectorMediaHeaderController *_headerController;
    FFInspectorLabelParameterCollapsableContainerController *_attributesController;
    FFInspectorContainerController *_exportsController;
    LKScrollView *_scrollView;
    NSMutableArray *_items;
    NSMutableArray *_visibleItems;
    BOOL _cachedHasSetupItems;
    NSMutableDictionary *_info;
}

- (BOOL)container:(id)arg1 bindAtRow:(unsigned long long)arg2 toParameterViewController:(id)arg3 context:(id)arg4;
- (id)container:(id)arg1 labelObjectValueAtRow:(unsigned long long)arg2 context:(id)arg3;
- (id)container:(id)arg1 parameterViewControllerAtRow:(unsigned long long)arg2 context:(id)arg3;
- (id)container:(id)arg1 labelViewControllerAtRow:(unsigned long long)arg2 context:(id)arg3;
- (unsigned long long)countOfRowsInContainer:(id)arg1;
- (void)changeEditState:(id)arg1;
- (void)editShareFields:(id)arg1;
- (void)updateToDefault:(id)arg1;
- (void)saveAsDefault:(id)arg1;
- (void)showDefaultFields:(id)arg1;
- (void)showAllFields:(id)arg1;
- (void)tellAFriendOfSharedItem:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)_areValuesForKeyPathSame:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)shareMetadataChanged:(id)arg1;
- (void)assetsChangedNotification:(id)arg1;
- (void)shareNotification:(id)arg1;
- (void)setCurrentItems:(id)arg1;
- (void)moduleDidUnhide;
- (void)moduleDidHide;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)_setupCurrentItems;
- (void)_rebuildVisibleItems;
- (BOOL)_isMetadataVisible:(id)arg1;
- (BOOL)_isDefaultKey:(id)arg1;
- (void)_dequeueShareStatus;
- (void)_updateHeader;
- (void)viewDidLoad;
- (void)_reloadData;
- (void)dealloc;
- (void)_endObservingCurrentItems;
- (void)_beginObservingCurrentItems;
- (id)_sequenceForItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

