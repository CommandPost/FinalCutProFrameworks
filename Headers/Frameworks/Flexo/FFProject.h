//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBinObject.h>

#import "NSCoding.h"

@class NSDate, NSMutableDictionary, NSSet, NSString, NSURL;

@interface FFProject : FFBinObject <NSCoding>
{
    NSSet *_assetReferences;
    NSSet *_clipReferences;
    NSSet *_effectReferences;
    NSSet *_previousAssetReferences;
    NSSet *_previousClipReferences;
    NSDate *_modDate;
    NSSet *_mediaRefsOfflineHighQuality;
    NSSet *_mediaRefsOfflineProxyQuality;
    NSSet *_referencedLibraryItemIDs;
    NSSet *_referencedClipLibraryItemIDs;
    NSSet *_mediaReferences;
    NSURL *_directory;
    int _mediaAvailable;
    unsigned int _mediaSyncStatusCount;
    int _effectsAvailable;
    NSMutableDictionary *_mediaReferencesDict;
    NSURL *_lastCachedDirectory;
    NSString *_pathForLastCachedDirectory;
}

+ (id)externalMediaFolderNames;
+ (id)externalFolderPathForProjectFolderPath:(id)arg1;
+ (id)builtinColorPresetsPaths;
+ (id)colorPresetsPaths;
+ (id)colorFilePathForObject:(id)arg1;
+ (id)colorFolderPathForObject:(id)arg1;
+ (id)findPeopleFilePathForObject:(id)arg1;
+ (id)findPeopleFolderPathForObject:(id)arg1;
+ (id)assetForObject:(id)arg1;
+ (id)renderFilesPeaksPathsForObject:(id)arg1;
+ (id)renderFilesThumbnailPathsForObject:(id)arg1;
+ (id)renderFilesPathsForObject:(id)arg1 quality:(int)arg2;
+ (id)renderFilesMediaFolderNameForQuality:(int)arg1;
+ (id)noProjectRenderFilesPaths;
+ (id)effectThumbnailPaths;
+ (id)globalRenderCache;
+ (id)_projectForObject:(id)arg1;
+ (id)copyClassDescription;
+ (BOOL)classIsAbstract;
@property(readonly, nonatomic) NSSet *mediaRefsOfflineProxyQuality; // @synthesize mediaRefsOfflineProxyQuality=_mediaRefsOfflineProxyQuality;
@property(readonly, nonatomic) NSSet *mediaRefsOfflineHighQuality; // @synthesize mediaRefsOfflineHighQuality=_mediaRefsOfflineHighQuality;
- (id)namesForKeywords:(id)arg1;
- (id)keywordsForNames:(id)arg1 createIfNeeded:(BOOL)arg2;
@property(readonly, nonatomic) NSSet *allKeywordNames;
- (void)removeMediaRefsOfflineProxyQualityObject:(id)arg1;
- (void)addMediaRefsOfflineProxyQualityObject:(id)arg1;
- (void)removeMediaRefsOfflineHighQualityObject:(id)arg1;
- (void)addMediaRefsOfflineHighQualityObject:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaRefsOffline;
- (id)mediaRefsOffline:(int)arg1;
- (void)resetMediaAvailable:(id)arg1;
- (void)_deferredAssetChangedNotification:(id)arg1;
- (void)bulkAssetChangeEnd:(id)arg1;
- (void)_assetsChangedNotification:(id)arg1;
- (BOOL)lastKnownMediaAvailable;
- (BOOL)mediaAvailable;
- (BOOL)_updateOfflineReasonsForQuality:(int)arg1;
- (void)_offlineMediaChanged;
@property(readonly, nonatomic) int mediaStatus;
- (int)mediaQuality;
- (BOOL)effectsAvailable;
- (BOOL)proxyAvailable;
- (BOOL)highQualityAvailable;
- (BOOL)originalAvailable;
- (int)mediaAvailableQuality;
- (BOOL)_isMediaAvailable:(SEL)arg1;
- (BOOL)mediaIsSyncing;
- (id)findOrRegisterCommonMediaRef:(id)arg1;
- (id)mediaReferencesDict;
@property(readonly, nonatomic) NSSet *referencedClipLibraryItemIDs;
@property(readonly, nonatomic) NSSet *referencedLibraryItemIDs;
- (void)resetMediaReferences;
- (void)resetMediaReferencesForRefSubstitution;
- (void)mediaReferencesChangedForSequence:(id)arg1;
- (void)_changedMediaReferencesInSourceMedia:(id)arg1;
- (void)_resetMediaReferences:(BOOL)arg1 checkedProjects:(id)arg2;
- (void)_ownedMediaClipsChangedNotification:(id)arg1;
@property(readonly, nonatomic) NSSet *clipReferences;
- (void)removeClipReferencesObject:(id)arg1;
- (void)addClipReferencesObject:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaReferences;
@property(readonly, nonatomic) NSSet *assetReferences;
- (void)removeAssetReferencesObject:(id)arg1;
- (void)addAssetReferencesObject:(id)arg1;
- (void)removeEffectReferencesObject:(id)arg1;
- (void)addEffectReferencesObject:(id)arg1;
- (void)resetEffectReferences;
@property(readonly, nonatomic) NSSet *effectReferences;
- (id)document;
- (BOOL)isEvent;
- (BOOL)isProject;
- (BOOL)isIPhotoProject;
- (BOOL)isDetailedProjectDataLoaded;
- (id)resolveObject:(id)arg1 error:(id *)arg2;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (id)objectFromID:(id)arg1;
- (id)defaultMediaEvent;
- (int)manageFileType;
- (id)containerURL;
- (id)renderFilesPeaksPaths;
- (id)renderFilesThumbnailPaths;
- (id)renderFilesURL;
- (id)findCacheFolder:(id)arg1;
- (id)sharedItemsFolderPath;
- (id)flowTransFolderPath;
- (id)stabilizationFolderPath;
- (id)opticalFlowFolderPath;
- (id)colorFolderPath;
- (id)findPeopleFolderPath;
- (id)analysisFolderPath;
- (id)proxyMediaURL;
- (id)proxyMediaPath;
- (id)proxyMediaURLForImport;
- (id)optimizedMediaPath;
- (id)optimizedMediaURL;
- (id)optimizedMediaURLForImport;
- (id)originalMediaPath;
- (id)originalMediaURL;
- (id)originalMediaURLForImport;
- (id)projectPath;
- (id)location;
- (id)url;
- (id)dataBaseFileURL;
@property(copy, nonatomic) NSDate *modDate;
- (void)bumpModDate;
- (id)contentType;
- (id)description;
- (id)undoHandler;
@property(readonly, nonatomic) NSURL *directory;
- (void)_setDirectory:(id)arg1;
- (id)project;
- (void)update_resetDamagedAssetRefs;
- (BOOL)update_changeAssetRefToMediaRef;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1;

@end

