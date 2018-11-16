//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBinObject.h>

#import "NSCoding.h"

@class NSMutableSet, NSSet, NSURL;

@interface FFProject : FFBinObject <NSCoding>
{
    NSMutableSet *_assetReferences;
    NSMutableSet *_clipReferences;
    NSMutableSet *_effectReferences;
    NSMutableSet *_mediaRefsOfflineReasonEvent;
    NSMutableSet *_mediaRefsOfflineReasonClip;
    NSMutableSet *_mediaRefsOfflineReasonFile;
    NSMutableSet *_mediaRefsOfflineReasonModifiedFile;
    NSMutableSet *_mediaRefsOfflineReasonProxy;
    NSMutableSet *_mediaRefsOfflineReasonModifiedProxy;
    NSMutableSet *_mediaRefsOfflineReasonCamera;
    NSMutableSet *_referencedDocumentIDs;
    NSSet *_mediaReferences;
    NSURL *_directory;
    int _mediaAvailable;
    unsigned int _mediaSyncStatusCount;
    int _effectsAvailable;
}

+ (BOOL)classIsAbstract;
+ (id)copyClassDescription;
+ (id)_projectForObject:(id)arg1;
+ (id)effectThumbnailPaths;
+ (id)noProjectRenderFilesPaths;
+ (id)renderFilesPathsForObject:(id)arg1 quality:(int)arg2;
+ (id)renderFilesThumbnailPathsForObject:(id)arg1;
+ (id)renderFilesPeaksPathsForObject:(id)arg1;
+ (id)assetForObject:(id)arg1;
+ (id)findPeopleFolderPathForObject:(id)arg1;
+ (id)findPeopleFilePathForObject:(id)arg1;
+ (id)colorFolderPathForObject:(id)arg1;
+ (id)colorFilePathForObject:(id)arg1;
+ (id)colorPresetsPaths;
+ (id)builtinColorPresetsPaths;
+ (BOOL)otherReferencesExistForProjects:(id)arg1;
- (id)initWithDisplayName:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)update_changeAssetRefToMediaRef;
- (id)project;
- (void)_setDirectory:(id)arg1;
@property(readonly, nonatomic) NSURL *directory;
- (id)undoHandler;
- (id)description;
- (id)contentType;
- (id)dataBaseFileURL;
- (id)url;
- (id)location;
- (id)projectPath;
- (id)originalMediaURL;
- (id)originalMediaPath;
- (id)optimizedMediaPath;
- (id)proxyMediaPath;
- (id)analysisFolderPath;
- (id)findPeopleFolderPath;
- (id)colorFolderPath;
- (id)sharedItemsFolderPath;
- (id)backupsFolderPath;
- (id)renderFilesPaths;
- (id)renderFilesPaths:(int)arg1;
- (id)renderFilesThumbnailPaths;
- (id)renderFilesPeaksPaths;
- (id)containerURL;
- (int)manageFileType;
- (id)defaultMediaEvent;
- (id)objectFromID:(id)arg1;
- (id)displayName;
- (id)displayNameWithVolume;
- (void)setDisplayName:(id)arg1;
- (id)resolveObject:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSSet *effectReferences;
- (void)resetEffectReferences;
- (void)addEffectReferencesObject:(id)arg1;
- (void)removeEffectReferencesObject:(id)arg1;
- (void)addAssetReferencesObject:(id)arg1;
- (void)removeAssetReferencesObject:(id)arg1;
@property(readonly, nonatomic) NSSet *assetReferences;
@property(readonly, nonatomic) NSSet *mediaReferences;
- (void)addClipReferencesObject:(id)arg1;
- (void)removeClipReferencesObject:(id)arg1;
@property(readonly, nonatomic) NSSet *clipReferences;
- (void)resetMediaReferences;
@property(readonly, nonatomic) NSSet *referencedDocumentIDs;
- (BOOL)referencesExistForProjects:(id)arg1;
- (BOOL)otherMultiAngleReferencesExist;
- (id)mediaRefUsedForMediaID:(id)arg1 eventID:(id)arg2;
- (BOOL)mediaIsSyncing;
- (BOOL)_isMediaAvailable:(SEL)arg1;
- (int)mediaAvailableQuality;
- (BOOL)originalAvailable;
- (BOOL)highQualityAvailable;
- (BOOL)proxyAvailable;
- (BOOL)effectsAvailable;
- (int)mediaQuality;
@property(readonly, nonatomic) int mediaStatus;
- (id)_offlineReasonSetForReason:(int)arg1;
- (void)_invalMediaRefs:(id)arg1;
- (void)_offlineMediaChanged;
- (BOOL)_updateOfflineReasonsForQuality:(int)arg1;
- (BOOL)mediaAvailable;
- (BOOL)lastKnownMediaAvailable;
- (void)_assetsChangedNotification:(id)arg1;
- (void)_deferredAssetChangedNotification;
- (void)resetMediaAvailable;
- (id)mediaRefsOffline:(int)arg1;
@property(readonly, nonatomic) NSSet *mediaRefsOffline;
- (void)addMediaRefsOfflineReasonEventObject:(id)arg1;
- (void)removeMediaRefsOfflineReasonEventObject:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaRefsOfflineReasonEvent;
- (void)addMediaRefsOfflineReasonClipObject:(id)arg1;
- (void)removeMediaRefsOfflineReasonClipObject:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaRefsOfflineReasonClip;
- (void)addMediaRefsOfflineReasonFileObject:(id)arg1;
- (void)removeMediaRefsOfflineReasonFileObject:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaRefsOfflineReasonFile;
- (void)addMediaRefsOfflineReasonModifiedFileObject:(id)arg1;
- (void)removeMediaRefsOfflineReasonModifiedFileObject:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaRefsOfflineReasonModifiedFile;
- (void)addMediaRefsOfflineReasonProxyObject:(id)arg1;
- (void)removeMediaRefsOfflineReasonProxyObject:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaRefsOfflineReasonProxy;
- (void)addMediaRefsOfflineReasonModifiedProxyObject:(id)arg1;
- (void)removeMediaRefsOfflineReasonModifiedProxyObject:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaRefsOfflineReasonModifiedProxy;
- (void)addMediaRefsOfflineReasonCameraObject:(id)arg1;
- (void)removeMediaRefsOfflineReasonCameraObject:(id)arg1;
@property(readonly, nonatomic) NSSet *mediaRefsOfflineReasonCamera;
@property(readonly, nonatomic) NSSet *allKeywordNames;
- (id)keywordsForNames:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)namesForKeywords:(id)arg1;

@end

