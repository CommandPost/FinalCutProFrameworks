//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMediaSidebarModule.h>

@class FFMediaEventProject;

@interface FFEventMediaSidebarModule : FFMediaSidebarModule
{
    FFMediaEventProject *_activeSequenceEvent;
}

@property(retain, nonatomic) FFMediaEventProject *activeSequenceEvent; // @synthesize activeSequenceEvent=_activeSequenceEvent;
- (void)sidebarDidSelectNodes:(id)arg1;
- (void)selectSidebarItem:(id)arg1;
- (void)importiMovieProject:(BOOL)arg1;
- (void)moveItemsToLibrary:(id)arg1;
- (void)moveToLibrary:(id)arg1;
- (void)copyItemsToLibrary:(id)arg1;
- (void)copyToLibrary:(id)arg1;
- (void)_mmToLibrary:(id)arg1 isCopy:(BOOL)arg2;
- (void)mergeEvents:(id)arg1;
- (void)showImportPanel:(id)arg1;
- (void)importIMovieEvent:(id)arg1;
- (void)importIMovieProject:(id)arg1;
- (void)updateProjectsAndEvents:(id)arg1;
- (void)consolidateFiles:(id)arg1;
- (void)moveToTrash:(id)arg1;
- (void)closeLibrary:(id)arg1;
- (void)revealInFinder:(id)arg1;
- (id)localModuleActions;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)notificationHandler:(id)arg1;
- (void)removeNotifications;
- (void)installNotifications;
- (id)newSidebarController;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (id)eventSidebarController;
- (void)revealObjects:(id)arg1;
- (void)dealloc;
- (id)init;

@end

