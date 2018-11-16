//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFLibraryItem.h>

#import "FFOrganizerMasterItemDropTarget.h"

@class FFLibraryFolder, FFMediaEventFolder, NSMapTable, NSMutableSet, NSString;

@interface FFLibrary : FFLibraryItem <FFOrganizerMasterItemDropTarget>
{
    NSMapTable *_itemsByID;
    NSMapTable *_itemsByMediaIdentifier;
    NSMutableSet *_trashItems;
    FFLibraryFolder *_tempFolder;
    FFMediaEventFolder *_mediaEventFolder;
    NSMapTable *_mediaBlocksByID;
    int _loadingProjectData;
}

+ (id)localizedNameForLocationURL:(id)arg1;
+ (id)reserveURLFor:(id)arg1 inDestination:(id)arg2 linkType:(int)arg3 error:(id *)arg4;
+ (id)eventClipForSequence:(id)arg1;
+ (id)eventClipsForSequences:(id)arg1 returnAllFound:(BOOL)arg2;
+ (BOOL)replicateFile:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (BOOL)replicateFolder:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)eventForIdentifier:(id)arg1;
+ (void)performMediaReadyBlocksIfPossible;
+ (BOOL)removeProxyItemsForLibrary:(id)arg1 proxyAssets:(id)arg2 error:(id *)arg3;
+ (id)uniqueFolderURLforURL:(id)arg1;
+ (BOOL)replicateAssetForAssetRef:(id)arg1 inEvent:(id)arg2 libraryToAssetsMap:(id)arg3 newLibrary:(id)arg4 error:(id *)arg5;
+ (BOOL)replicateClipForClipRef:(id)arg1 inEvent:(id)arg2 newLibrary:(id)arg3 error:(id *)arg4;
+ (void)cancelAndRecycleUpgradedLibraries;
+ (BOOL)postProcessUpgradedLibraries:(BOOL)arg1 error:(id *)arg2;
+ (void)replicateOfflineMediaWithNewLibrary:(id)arg1;
+ (void)scanLegacyEventsAndProjectsAtURL:(id)arg1 events:(id *)arg2 duplicateEvents:(id *)arg3 projects:(id *)arg4;
+ (id)missingVolumeNameFromOriginalMediaURL:(id)arg1;
+ (id)libraryContainingNonProxyMedaiWithIdentifier:(id)arg1;
+ (id)missingVolumeNames;
+ (BOOL)showMissingVolumesAlert:(char *)arg1;
+ (id)scanLegacyEventsAndProjects:(id)arg1 isCustom:(BOOL)arg2;
+ (BOOL)isLegacyEventsAndProjectsAvailable;
+ (void)moveUpgradedLegacyEventAndProjectFoldersToTrash:(BOOL)arg1;
+ (void)cleanupCachedLegacyURLs;
+ (BOOL)isUpgrading;
+ (id)uniqueURLforURL:(id)arg1 preserveExtension:(BOOL)arg2 whitelist:(id)arg3;
+ (id)uniqueURLforURL:(id)arg1 preserveExtension:(BOOL)arg2;
+ (BOOL)isOriginalMediaRepURLOffline:(id)arg1 isSymlink:(char *)arg2;
+ (id)copyClassDescription;
+ (void)setDefaultEvent:(id)arg1;
+ (id)defaultEvent;
+ (id)temporaryLibrary;
+ (id)targetLibrary;
+ (void)popTargetLibrary;
+ (void)pushTargetLibrary:(id)arg1;
+ (id)documents;
+ (id)readableTypesForPasteboard:(id)arg1;
@property(readonly, nonatomic) FFLibraryFolder *tempFolder; // @synthesize tempFolder=_tempFolder;
- (BOOL)syncSettings:(id *)arg1;
- (BOOL)syncExternalCacheFolder:(id *)arg1;
- (id)externalCacheFolder;
- (id)cacheFolderLink;
- (id)externalCacheLocation;
- (BOOL)setExternalCacheLocation:(id)arg1 error:(id *)arg2;
- (id)externalMediaLocation;
- (BOOL)setExternalMediaLocation:(id)arg1 error:(id *)arg2;
- (id)externalBackupLocation;
- (BOOL)setExternalBackupLocation:(id)arg1 error:(id *)arg2;
- (void)setBackupsEnabled:(BOOL)arg1;
- (BOOL)backupsEnabled;
- (void)setExternalLocations:(id)arg1;
- (id)copyExternalLocations;
- (id)copyCurrentLocations;
- (id)librarySettings;
- (id)relativeURLForItem:(id)arg1;
- (BOOL)trashItemAtURL:(id)arg1 resultingItemURL:(id *)arg2 error:(id *)arg3;
- (id)mediaRefForMediaID:(id)arg1;
- (BOOL)referencesExistForMediaIdentifier:(id)arg1 excludingThisLibraryItem:(id)arg2;
- (id)libraryItemWhichReferencesMediaIdentifier:(id)arg1 excludingTheseEvents:(id)arg2;
- (id)libraryItemWhichReferencesMediaIdentifierWithNoReferencesInOwningLibraryItem:(id)arg1 excludingTheseClips:(id)arg2 excludingTheseLibraryItems:(id)arg3;
- (id)eventClipsForMediaIdentifiers:(id)arg1;
- (id)eventClipsForReferencedMediaIdentifiers:(id)arg1;
- (BOOL)otherClipReferencesExistToLibraryItems:(id)arg1;
- (BOOL)otherReferencesExistToLibraryItems:(id)arg1;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
- (void)actionBegin:(id)arg1;
- (id)trashURL;
- (id)URL;
- (id)directoryFromUniqueIdentifier:(id)arg1;
- (id)eventForIdentifier:(id)arg1;
- (id)resolveMediaIdentifier:(id)arg1 includeTrash:(BOOL)arg2;
- (id)resolveMediaIdentifier:(id)arg1;
- (void)removeMediaIdentifier:(id)arg1 forItem:(id)arg2;
- (void)addMediaIdentifier:(id)arg1 forItem:(id)arg2;
- (void)didLoadProjectData:(id)arg1;
- (void)willLoadProjectData:(id)arg1;
- (void)mediaIdentifier:(id)arg1 performBlockWithMediaWhenReady:(CDUnknownBlockType)arg2;
- (BOOL)performMediaReadyBlocksIsOK;
- (void)performMediaReadyBlocksIfPossible;
- (BOOL)nonProxyMediaIdentifierExistsInLibrary:(id)arg1;
- (BOOL)mediaIdentifierExistsInLibrary:(id)arg1;
- (id)libraryItemForMediaIdentifier:(id)arg1;
- (id)ownedAssetIdentifiers;
- (void)removeTemporaryItem:(id)arg1;
- (void)addTemporaryItem:(id)arg1;
- (BOOL)allowChildName:(id)arg1 error:(id *)arg2;
- (id)insertNewFolder:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)insertNewSequence:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)insertNewEvent:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)insertTemporaryEvent:(id)arg1 error:(id *)arg2;
- (void)relinkProxyAssetsUsingRealAssets:(id)arg1;
- (void)scrapeOriginalMediaURLsFromProject:(id)arg1;
- (void)scrapeOriginalMediaURLsFromEvent:(id)arg1;
- (id)upgradeProject:(id)arg1 error:(id *)arg2;
- (id)importProject:(id)arg1 parent:(id)arg2 actionName:(id)arg3 error:(id *)arg4;
- (void)replicateMediaRep:(id)arg1 toTargetMediaRep:(id)arg2 inAsset:(id)arg3 repType:(id)arg4 sourceEventFolderURL:(id)arg5;
- (void)replicateMissingOriginalMediaRepsFromAsset:(id)arg1 toAsset:(id)arg2 sourceEventFolderURL:(id)arg3;
- (void)replicateMissingMediaRepsFromAsset:(id)arg1 toAsset:(id)arg2 sourceEventFolderURL:(id)arg3;
- (id)upgradeEvent:(id)arg1 error:(id *)arg2;
- (void)_appendClipRefLegacyEventIdentifierToClipRefsInProject:(id)arg1 defaultEventIdentifier:(id)arg2;
- (void)_appendEventIdentifierToSequenceMediaIdentifiersInProject:(id)arg1 eventID:(id)arg2;
- (id)importEvent:(id)arg1 error:(id *)arg2;
- (void)upgradeEventsAndProjects;
- (BOOL)actionMoveLibraryItemToTrash:(id)arg1 actionName:(id)arg2 error:(id *)arg3;
- (BOOL)removeLibraryItem:(id)arg1 error:(id *)arg2;
- (BOOL)_itemInTrash:(id)arg1;
- (void)_itemRemovedFromTrash:(id)arg1;
- (void)_itemMovedToTrash:(id)arg1;
- (BOOL)emptyTrash:(id *)arg1;
- (void)applyItemsToBlock:(CDUnknownBlockType)arg1;
- (void)didRemoveChildItemsObject:(id)arg1 fromParent:(id)arg2;
- (void)didAddChildItemsObject:(id)arg1 toParent:(id)arg2;
- (void)unregisterItem:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (void)willChangeLibraryItem:(id)arg1 toIdentifier:(id)arg2;
- (id)document;
- (id)identifier;
- (BOOL)isTemporary;
@property(readonly, nonatomic) long long libraryVersion;
- (id)libraryDocument;
- (id)library;
@property(retain, nonatomic) FFMediaEventFolder *mediaEventFolder;
- (void)sync;
- (void)willDealloc;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)displayName;
- (void)invalidateProviders;
- (void)documentWillClose;
- (void)setDocument:(id)arg1;
- (void)removeSequenceBeingShared:(id)arg1;
- (void)addSequenceBeingShared:(id)arg1;
- (id)sequencesBeingShared;
- (id)itemIconSelected:(BOOL)arg1;
- (id)itemIcon;
- (BOOL)performDrop:(id)arg1 validatedDragOperation:(unsigned long long)arg2 newSubitemInsertionIndex:(long long)arg3 organizerModule:(id)arg4;
- (unsigned long long)validateDrop:(id)arg1 newSubitemInsertionIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

