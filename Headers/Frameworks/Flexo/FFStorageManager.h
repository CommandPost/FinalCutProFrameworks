//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOpenSavePanelDelegate.h"

@class NSArray, NSMutableSet, NSSet, NSString;

@interface FFStorageManager : NSObject <NSOpenSavePanelDelegate>
{
    NSMutableSet *_availableLocations;
    NSMutableSet *_hasWarnedForPaths;
    BOOL _doneLaunching;
    BOOL _refreshAvailableVolumesAfterQuarantine;
    BOOL _inRefreshAvailableVolumesAlwaysWarnForPath;
}

+ (id)customLocationDicts;
+ (id)legacyFCPXLocationURLs;
+ (id)legacyLocationURLs;
+ (id)moviesURL;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (BOOL)warnAboutUnsupportedLocationForURL:(id)arg1 saving:(BOOL)arg2 error:(id *)arg3;
+ (BOOL)isQuarantined:(id)arg1;
+ (BOOL)isReadOnly:(id)arg1;
+ (BOOL)isFileURL:(id)arg1 descendantOfFileURL:(id)arg2;
+ (BOOL)isFileURL:(id)arg1 equalToFileURL:(id)arg2;
+ (BOOL)isVolumeForURL:(id)arg1 sameAsVolumeForURL:(id)arg2;
+ (BOOL)isWritable:(id)arg1;
+ (BOOL)isNetworkURL:(id)arg1;
+ (short)volumeRefNumFromPath:(id)arg1;
+ (BOOL)isURLInTrash:(id)arg1;
+ (BOOL)volumeSupportsTrash:(id)arg1;
+ (BOOL)URLIsSMBVolume:(id)arg1;
+ (id)readVolumeID:(id)arg1;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSSet *availableLocations; // @synthesize availableLocations=_availableLocations;
- (void)refreshAvailableVolumesAlwaysWarnForPath:(id)arg1;
- (id)newAvailableLocationsWithLegacyBehavior:(BOOL)arg1 alwaysWarnPath:(id)arg2;
- (id)locationWithVolumeRefNum:(short)arg1;
- (id)locationFromVolumePath:(id)arg1 volumeRefNum:(short)arg2 diskUUID:(id)arg3 networkPath:(id)arg4 alwaysWarnPath:(id)arg5;
- (BOOL)okayToUseQuarantinedLocation:(id)arg1 isAction:(BOOL)arg2;
- (void)warnAboutInUseLocation:(id)arg1 isAction:(BOOL)arg2;
- (void)warnAboutNotWritableLocation:(id)arg1 isAction:(BOOL)arg2;
- (void)warnAboutUnableToAccessSavedNetworkLocationPaths;
- (void)claimLocation:(id)arg1;
- (id)locationFromURL:(id)arg1 resolveSymlinks:(BOOL)arg2;
- (id)locationFromURL:(id)arg1;
@property(readonly, nonatomic) NSArray *sortedAvailableLocations;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)volumeDidRename:(id)arg1;
- (void)volumeDidUnmount:(id)arg1;
- (void)volumeWillUnmount:(id)arg1;
- (void)volumeDidMount:(id)arg1;
- (id)locationFromVolumeRefNum:(short)arg1;
- (id)locationForUUID:(id)arg1;
- (void)removeAvailableLocations:(id)arg1;
- (void)addAvailableLocations:(id)arg1;
- (void)removeAvailableLocationsObject:(id)arg1;
- (void)addAvailableLocationsObject:(id)arg1;
- (void)postDeferredAccessWarnings;
- (void)unlockStorageLocations;
- (void)dealloc;
- (oneway void)release;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

