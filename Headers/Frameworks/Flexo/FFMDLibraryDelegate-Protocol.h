//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class FFEventMediaSidebarController, FFEventMediaSidebarModule, FFMDAbstractLibraryCell, FFMDAbstractLibraryView, NSString;

@protocol FFMDLibraryDelegate <NSObject>

@optional
- (FFEventMediaSidebarController *)eventSidebarController;
- (FFEventMediaSidebarModule *)sidebarModule;
- (void)libraryView:(FFMDAbstractLibraryView *)arg1 didSetKeyThumbnailForItem:(id)arg2 cell:(FFMDAbstractLibraryCell *)arg3 toThumbnailAtIndex:(long long)arg4;
- (BOOL)libraryView:(FFMDAbstractLibraryView *)arg1 canSetKeyThumbnailForItem:(id)arg2;
- (void)libraryView:(FFMDAbstractLibraryView *)arg1 didRenameItem:(id)arg2 toName:(NSString *)arg3;
- (BOOL)libraryView:(FFMDAbstractLibraryView *)arg1 canRenameItem:(id)arg2;
- (BOOL)libraryView:(FFMDAbstractLibraryView *)arg1 shouldDisplayItem:(id)arg2;
@end

