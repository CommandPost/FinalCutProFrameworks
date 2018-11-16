//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorModule.h>

#import "FFInspectorLabelParameterContainerDataSource.h"

@class FFInspectorContainerController, FFInspectorLibraryHeaderController, FFLibrary, LKScrollView, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorModuleLibraryProperties : FFInspectorModule <FFInspectorLabelParameterContainerDataSource>
{
    FFLibrary *_library;
    FFInspectorLibraryHeaderController *_headerController;
    FFInspectorContainerController *_propertiesController;
    LKScrollView *_scrollView;
    BOOL _cachedHasSetupItems;
    struct FFProcrastinatedDispatch_t _procrastinatedReload;
    NSMutableDictionary *_info;
}

- (void)consolidateLibraryTemplates:(id)arg1;
- (void)consolidateLibraryMedia:(id)arg1;
- (void)modifyLibraryProperties:(id)arg1;
- (void)setCurrentItems:(id)arg1;
- (void)moduleDidHide;
- (void)moduleDidUnhide;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)_setupCurrentItems;
- (void)_updateLibraryProperties;
- (void)_updateHeader;
- (void)_backgroundTaskFinished:(id)arg1;
- (void)_libraryPropertiesChanged:(id)arg1;
- (void)_unregisterForPropertyChangeNotifications;
- (void)_registerForPropertyChangeNotifications;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

