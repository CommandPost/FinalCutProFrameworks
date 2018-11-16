//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerMasterItem.h>

#import "FFOrganizerMasterItemDropTarget.h"

@class FFImportDevicesSidebarCollection, NSLock, NSMutableDictionary, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface FFImportFavoritesSidebarCollection : FFOrganizerMasterItem <FFOrganizerMasterItemDropTarget>
{
    NSString *_itemDisplayName;
    FFImportDevicesSidebarCollection *_devicesCollection;
    NSMutableDictionary *_favoriteURLs;
    NSLock *_favoriteURLsLock;
    NSOperationQueue *_operationQueue;
    BOOL _firstLaunch;
    NSLock *_itemsLock;
}

+ (id)readableTypesForPasteboard:(id)arg1;
@property(retain) NSLock *itemsLock; // @synthesize itemsLock=_itemsLock;
@property FFImportDevicesSidebarCollection *devicesCollection; // @synthesize devicesCollection=_devicesCollection;
@property(retain) NSMutableDictionary *favoriteURLs; // @synthesize favoriteURLs=_favoriteURLs;
@property(readonly, nonatomic) NSString *itemDisplayName; // @synthesize itemDisplayName=_itemDisplayName;
- (BOOL)performDrop:(id)arg1 validatedDragOperation:(unsigned long long)arg2 newSubitemInsertionIndex:(long long)arg3 organizerModule:(id)arg4;
- (unsigned long long)validateDrop:(id)arg1;
- (unsigned long long)validateDrop:(id)arg1 newSubitemInsertionIndex:(long long)arg2;
- (double)itemRowHeight;
- (BOOL)hasMasterSubitems;
- (void)saveFavoritesToUserDefaults;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithDevicesCollection:(id)arg1;
- (void)removeSidebarItem:(id)arg1;
- (void)replaceFileSystemSidebarItemWithSidebarItem:(id)arg1;
- (void)addURLToFavorites:(id)arg1 volumeURL:(id)arg2 canRemove:(BOOL)arg3 immediately:(BOOL)arg4;
- (void)removeFromFavoriteURLs:(id)arg1 forVolumeURL:(id)arg2;
- (void)addToFavoriteURLs:(id)arg1 forVolumeURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

