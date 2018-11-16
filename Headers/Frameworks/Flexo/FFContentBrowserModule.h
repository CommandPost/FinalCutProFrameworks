//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerModule.h>

#import "FFArrangedItemsModuleDelegate.h"
#import "FFEffectLibraryModuleDelegate.h"

@class FFBKEffectLibraryProvider, FFEffectLibraryModule, FFSidebarModule, NSString;

@interface FFContentBrowserModule : FFOrganizerModule <FFEffectLibraryModuleDelegate, FFArrangedItemsModuleDelegate>
{
    FFEffectLibraryModule *_effectLibraryModule;
    FFBKEffectLibraryProvider *_effectLibraryProvider;
    double _savedSplitViewWidth;
    BOOL _saveSidebarChanges;
    NSString *_currentEffectType;
    FFSidebarModule *_sidebar;
}

- (void)writeSelectionToPasteboard:(id)arg1;
- (void)sidebarModuleSelectionDidChange:(id)arg1;
- (void)updateFilter:(id)arg1;
- (void)setNoItemsInfoTextVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateBrowserContents:(id)arg1 clearSearchString:(BOOL)arg2;
- (void)module:(id)arg1 setItemCountTextField:(id)arg2;
- (void)module:(id)arg1 didDoubleClickWithEffect:(id)arg2;
- (void)module:(id)arg1 didDoubleClickWithEffectID:(id)arg2;
- (BOOL)module:(id)arg1 addItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)isSidebarHidden;
- (void)toggleSidebar:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)viewDidLoad;
- (void)viewWasInstalled;
- (double)constrainWidth:(double)arg1;
- (void)configureSidebar:(id)arg1;
- (id)newSidebarModule;
- (id)newItemsModule;
- (void)effectRegistryChanged:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

