//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFLibraryItem.h>

#import "FFOrganizerItem.h"
#import "FFOrganizerItemDraggingSource.h"
#import "FFOrganizerMasterItemDropTarget.h"
#import "FFXMLTranslationTarget.h"

@class FFEffectRegistry, FFLibraryFolder, FFMediaEventFolder, FFMediaEventProject, FFRoleSet, NSData, NSDictionary, NSImage, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface FFLibrary : FFLibraryItem <FFXMLTranslationTarget, FFOrganizerItemDraggingSource, FFOrganizerMasterItemDropTarget, FFOrganizerItem>
{
    FFLibraryFolder *_tempFolder;
    FFMediaEventFolder *_mediaEventFolder;
    NSData *_roleSetData;
    NSString *_voiceOverRoleUID;
    NSMapTable *_itemsByID;
    NSMapTable *_itemsByMediaIdentifierOrAssetMD5String;
    NSMutableSet *_trashItems;
    FFRoleSet *_cachedRoleSet;
    NSMutableDictionary *_vendedRolesByUID;
    NSMutableArray *_vendedMainRoles;
    FFEffectRegistry *_effectRegistry;
    int _colorProcessingMode;
    NSMapTable *_mediaBlocksByID;
    int _loadingProjectData;
    BOOL _repairing;
    unsigned int _roleSetMirrorsNeedSyncing;
    NSDictionary *_updateHistory;
    BOOL _useLegacyChannelBasedAudioComponents;
    NSMutableDictionary *_effectRegistryCache;
}

+ (void)registerConsolidatedEffectClass:(Class)arg1;
+ (id)consolidatedEffectClasses;
+ (void)addObject:(id)arg1 toSummary:(id)arg2;
+ (id)localizedNameForLocationURL:(id)arg1;
+ (id)temporaryDirectoryForMediaFileURL:(id)arg1 inLibrary:(id)arg2;
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
+ (void)replicateOfflineMediaWithNewLibrary:(id)arg1;
+ (BOOL)isPerformingPostLibraryUpdaters;
+ (BOOL)isAnyLibraryUpdating;
+ (BOOL)isUpgrading;
+ (id)uniqueURLforURL:(id)arg1 preserveExtension:(BOOL)arg2 whitelist:(id)arg3;
+ (id)uniqueURLforURL:(id)arg1 preserveExtension:(BOOL)arg2;
+ (BOOL)isOriginalMediaRepURLOffline:(id)arg1 isSymlink:(char *)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)copyClassDescription;
+ (void)setDefaultEvent:(id)arg1;
+ (id)defaultEvent;
+ (id)temporaryLibrary;
+ (id)targetLibrary;
+ (void)popTargetLibrary;
+ (void)pushTargetLibrary:(id)arg1;
+ (id)documents;
+ (id)storageExtensions;
+ (void)initialize;
+ (id)upgradeError:(id)arg1 forSource:(id)arg2;
+ (id)upgradeError:(id)arg1 forDocument:(id)arg2;
+ (id)upgradeError:(id)arg1 forURL:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *effectRegistryCache; // @synthesize effectRegistryCache=_effectRegistryCache;
@property(nonatomic) BOOL useLegacyChannelBasedAudioComponents; // @synthesize useLegacyChannelBasedAudioComponents=_useLegacyChannelBasedAudioComponents;
@property(retain, nonatomic) NSData *roleSetData; // @synthesize roleSetData=_roleSetData;
@property(readonly, retain, nonatomic) FFRoleSet *cachedRoleSet; // @synthesize cachedRoleSet=_cachedRoleSet;
@property(retain, nonatomic) NSDictionary *updateHistory; // @synthesize updateHistory=_updateHistory;
@property(readonly, nonatomic) FFLibraryFolder *tempFolder; // @synthesize tempFolder=_tempFolder;
- (void)dumpUnreferencedMedia;
- (BOOL)workingSpaceIsWideGamut;
@property(nonatomic) int colorProcessingMode;
- (void)consolidateMotionTemplates;
- (int)templateStorageLocation;
- (void)setTemplateStorageLocation:(int)arg1;
- (void)doRegisterEffectClass:(Class)arg1 forEffectID:(id)arg2 withProperties:(id)arg3;
- (id)uniqueIDForConsolidatedEffectID;
- (void)unregisterConsolidatedEffects;
- (void)registerConsolidatedEffects;
- (id)effectRegistry;
- (void)setUpdateHistoryForAllGroups:(id)arg1;
- (id)updateHistoryForAllGroups;
- (id)updateHistoryForGroup:(id)arg1;
- (void)appendUpdateHistory:(id)arg1 forGroup:(id)arg2;
- (void)dumpProjectClipStats;
- (id)orderedSubRoleUIDsForMainRoleUID:(id)arg1;
- (id)orderedMainRoleUIDsWithRoleType:(int)arg1;
- (id)orderedMainRolesWithRoleType:(int)arg1;
- (id)_vendedRoleForRoleUID:(id)arg1;
- (id)findRoleWithDefinition:(id)arg1 usingOptions:(unsigned int)arg2;
- (void)syncRoleSetMirrorsToLibrary;
- (void)setRoleSetMirrorsNeedSyncing:(BOOL)arg1;
- (BOOL)roleSetMirrorsNeedSyncing;
- (void)_notifyDidChangeRolesInLibrary:(id)arg1;
- (void)_notifyWillChangeRolesInLibrary:(id)arg1;
- (id)_deepLoadedSequences;
- (void)prepareToSaveCatalog;
- (BOOL)shouldPrepareToSaveCatalog;
- (void)actionAddNewMainRoles:(id)arg1 addNewSubRoles:(id)arg2 reassignRoles:(id)arg3 renameExistingRoles:(id)arg4 changeColorOfExistingRoles:(id)arg5 removeExistingRoles:(id)arg6;
- (void)_clearVendedRoles;
@property(retain, nonatomic) NSString *voiceOverRoleUID;
- (void)_addMissingDefaultCaptionRoles;
- (void)_addMissingDefaultSubrolesForBuiltInMainRoles;
- (void)_undoRedoVendedRolesChange:(id)arg1;
- (void)_roleSetDataHasChangedAddDefaultSubRoles:(BOOL)arg1;
- (id)findOrImportSystemGeneratedSubRoleWithIndex:(unsigned long long)arg1 forRoleWithUID:(id)arg2;
- (id)findRoleWithUID:(id)arg1 orImportFromRoleSet:(id)arg2 mustMatchUID:(BOOL)arg3;
- (id)findRoleWithUID:(id)arg1;
- (id)findRolesWithUIDs:(id)arg1;
- (id)findMainRolePassingTest:(CDUnknownBlockType)arg1;
- (id)mainRoles;
- (void)dumpAndVerifyRoleSet;
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
- (id)eventForName:(id)arg1;
- (id)eventForIdentifier:(id)arg1;
- (id)findMediaByIdentifierOrMD5Alias:(id)arg1;
- (id)findMediaByIdentifierOrMD5String:(id)arg1;
- (id)findAssetByMD5String:(id)arg1 includeTrash:(BOOL)arg2;
- (id)findAssetByMD5String:(id)arg1;
- (id)resolveMediaIdentifier:(id)arg1 includeTrash:(BOOL)arg2;
- (id)resolveMediaIdentifier:(id)arg1;
- (void)didRemoveMediaAlias:(id)arg1 withMedia:(id)arg2 forItem:(id)arg3;
- (void)didRemoveMedia:(id)arg1 forItem:(id)arg2;
- (void)didAddMediaAlias:(id)arg1 withMedia:(id)arg2 forItem:(id)arg3;
- (void)didAddMedia:(id)arg1 forItem:(id)arg2;
- (void)didLoadProjectData:(id)arg1;
- (void)willLoadProjectData:(id)arg1;
- (void)mediaIdentifier:(id)arg1 performBlockWithMediaWhenReady:(CDUnknownBlockType)arg2;
- (BOOL)performMediaReadyBlocksIsOK;
- (void)performMediaReadyBlocksIfPossible;
- (id)comparedObjects;
- (void)_rebindAssetIdentifiers:(id)arg1;
- (BOOL)nonProxyMediaExistsInLibrary:(id)arg1;
- (BOOL)mediaIdentifierExistsInLibrary:(id)arg1;
- (BOOL)mediaExistsInLibrary:(id)arg1;
- (id)libraryItemForMediaIdentifierOrAssetMD5String:(id)arg1;
- (id)libraryItemForMedia:(id)arg1;
- (id)libraryItemForAssetMD5String:(id)arg1;
- (id)libraryItemForMediaIdentifier:(id)arg1;
- (id)ownedAssetIdentifiers;
- (void)removeTemporaryItemsThatWereOrphaned;
- (void)removeTemporaryItem:(id)arg1;
- (void)addTemporaryItem:(id)arg1;
- (BOOL)allowChildName:(id)arg1 error:(id *)arg2;
- (id)insertNewFolder:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)insertNewSequence:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)insertNewEvent:(id)arg1 name:(id)arg2 hidden:(BOOL)arg3 error:(id *)arg4;
- (id)insertNewEvent:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)insertHiddenEvent:(id)arg1 error:(id *)arg2;
- (id)insertHiddenEvent:(id)arg1 overwriteExisting:(BOOL)arg2 error:(id *)arg3;
- (id)insertTemporaryEvent:(id)arg1 error:(id *)arg2;
- (void)relinkProxyAssetsUsingRealAssets:(id)arg1;
- (BOOL)isUpdating;
- (void)replicateMediaRep:(id)arg1 toTargetMediaRep:(id)arg2 inAsset:(id)arg3 repType:(id)arg4 sourceEventFolderURL:(id)arg5;
- (void)replicateMissingOriginalMediaRepsFromAsset:(id)arg1 toAsset:(id)arg2 sourceEventFolderURL:(id)arg3;
- (void)replicateMissingMediaRepsFromAsset:(id)arg1 toAsset:(id)arg2 sourceEventFolderURL:(id)arg3;
- (BOOL)actionMoveLibraryItemToTrash:(id)arg1 actionName:(id)arg2 error:(id *)arg3;
- (BOOL)trashLibraryItem:(id)arg1 immediately:(BOOL)arg2 error:(id *)arg3;
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
- (BOOL)validateItemURLs:(id *)arg1;
- (void)willChangeLibraryItem:(id)arg1 toIdentifier:(id)arg2;
- (BOOL)hasDocument;
- (id)document;
- (id)identifier;
- (BOOL)isTemporary;
@property(readonly, nonatomic) long long libraryVersion;
- (id)libraryDocument;
@property(readonly, nonatomic) FFLibrary *library;
@property(retain, nonatomic) FFMediaEventFolder *mediaEventFolder;
@property(nonatomic) BOOL repairing;
- (void)sync;
- (void)willDealloc;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned int)arg1;
- (id)init;
- (unsigned long long)unsavedObjectCount;
- (id)displayName;
- (void)invalidateProviders;
- (void)purgeOutOfDateRenderFiles;
- (void)documentWillClose;
- (void)setDocument:(id)arg1;
- (id)_createTemporaryFolder:(id *)arg1;
- (void)removeSequenceBeingShared:(id)arg1;
- (void)addSequenceBeingShared:(id)arg1;
- (id)sequencesBeingShared;
@property(readonly, nonatomic) FFMediaEventFolder *folder;
@property(readonly, nonatomic) FFMediaEventProject *event;
- (id)objectSpecifier;
- (id)essentialProperties;
- (id)uniqueIdentifier;
- (id)events;
- (id)containerPropertyName;
- (id)containerObject;
- (BOOL)performActionWithName:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL itemDisplayNameEditable;
@property(readonly, nonatomic) NSString *itemDisplayName;
- (id)itemIconSelected:(BOOL)arg1;
@property(readonly, nonatomic) NSImage *itemIcon;
- (BOOL)performDrop:(id)arg1 validatedDragOperation:(unsigned long long)arg2 newSubitemInsertionIndex:(long long)arg3 organizerModule:(id)arg4;
- (unsigned long long)validateDrop:(id)arg1 newSubitemInsertionIndex:(long long)arg2;
- (id)readEventObjectIDsFromLibraryBookmark:(id)arg1;
- (id)readEventObjectIDsFromLibraryBookmarkForPasteboard:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *itemDisplayNameExtraText;
@property(readonly, nonatomic) BOOL itemIsPlaceholder;
@property(readonly, nonatomic) NSString *itemPersistentIdentifier;
@property(readonly, nonatomic) double itemRowHeight;
@property(readonly) Class superclass;

@end

