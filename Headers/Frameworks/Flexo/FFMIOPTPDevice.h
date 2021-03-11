//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFOrganizerItem.h>

#import <Flexo/FFBackgroundTaskTarget-Protocol.h>
#import <Flexo/FFOrganizerMasterItem-Protocol.h>

@class ICCameraDevice, NSArray, NSImage, NSMutableArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface FFMIOPTPDevice : FFOrganizerItem <FFOrganizerMasterItem, FFBackgroundTaskTarget>
{
    ICCameraDevice *_cameraDevice;
    NSImage *_cameraDeviceIcon;
    NSMutableArray *_cameraFiles;
    NSMutableArray *_items;
    NSMutableArray *_displayedCameraFiles;
    NSMutableArray *_scheduledCameraFiles;
    NSMutableArray *_cameraFilesToLoad;
    NSMutableSet *_downloadRequestsInQueue;
    long long _totalBytesProcessed;
    float _percentDone;
}

+ (id)keyPathsForValuesAffectingPercentDone;
+ (id)keyPathsForValuesAffectingDisplayOwnedClips;
@property float percentDone; // @synthesize percentDone=_percentDone;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly) ICCameraDevice *cameraDevice; // @synthesize cameraDevice=_cameraDevice;
- (id)librariesInUse:(id)arg1;
- (id)assetsInUse:(id)arg1;
- (void)updatePercentageDone;
- (void)downloadRequestsRemovedFromQueue:(id)arg1;
- (void)downloadRequestsAddedToQueue:(id)arg1;
- (BOOL)isDownloading;
@property(readonly, nonatomic) BOOL hasDetailSubitems;
@property(readonly, nonatomic) NSArray *detailSubitems;
@property(readonly, nonatomic) BOOL hasItems;
@property(readonly, nonatomic) NSArray *masterSubitems;
@property(readonly, nonatomic) BOOL hasMasterSubitems;
@property(readonly, nonatomic) NSString *itemPersistentIdentifier;
@property(readonly, nonatomic) NSImage *itemIcon;
@property(readonly, nonatomic) BOOL itemDisplayNameEditable;
- (void)setItemDisplayName:(id)arg1;
@property(readonly, nonatomic) NSString *itemDisplayName;
- (unsigned long long)cameraFilesCount;
- (BOOL)loadingCameraFiles;
- (void)setClipLoadingSuspended:(BOOL)arg1;
- (void)eject;
@property(readonly, nonatomic) BOOL canEject;
@property(readonly, nonatomic) NSString *devicePath;
- (void)targetLibraryChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeCameraFiles:(id)arg1;
- (void)insertCameraFiles:(id)arg1 atIndexes:(id)arg2;
- (void)itemsUpdated;
- (BOOL)isThumbnailAvailableOnCameraFile:(id)arg1 save:(BOOL)arg2;
- (void)finalizeAddClips:(id)arg1;
- (void)loadCameraFiles:(id)arg1 onTask:(id)arg2;
- (void)loadCameraFiles;
- (id)thumbnailCachePathForCameraFile:(id)arg1;
- (void)dealloc;
- (id)initWithICCameraDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *detailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL hasDetailSubitemsWhenSelected;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *itemDisplayNameExtraText;
@property(readonly, nonatomic) BOOL itemIsPlaceholder;
@property(readonly, nonatomic) double itemRowHeight;
@property(readonly) Class superclass;

@end

