//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "NSCoding.h"

@class FFMediaEventFolder, FFMediaEventProject, NSMapTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface FFMediaEventProjectData : FFBaseDSObject <NSCoding>
{
    NSMutableSet *_mediaSet;
    NSMutableSet *_assetSet;
    FFMediaEventFolder *_rootFolder;
    NSMapTable *_identifierToAssetMap;
    NSMapTable *_fileNameToAssetMap;
    NSMutableSet *_undoneAssetSet;
    NSMutableSet *_mediaSetToProcess;
    NSMutableSet *_mediaSetNotToDisplay;
    int _toProcessManageFileType;
    int _undoneAssetsState;
    BOOL _setupCatalogWillSaveObserver;
    BOOL _allowDuplicateClips;
}

+ (BOOL)classIsAbstract;
+ (id)copyClassDescription;
+ (id)keyPathsForValuesAffectingDisplayMediaSet;
- (id)initWithProject:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_processClips:(id)arg1 isImportingFromImovie:(BOOL)arg2;
- (void)_processAtSave:(id)arg1;
- (void)_cleanupAndLockInDirectory:(id)arg1;
- (void)_redidUndoneAsset:(id)arg1;
- (void)_setUndoneAssetsState:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) FFMediaEventProject *project;
- (BOOL)addMediaSetObject:(id)arg1;
- (BOOL)addMediaSet:(id)arg1;
- (void)removeMediaSetObject:(id)arg1;
- (void)removeMediaSet:(id)arg1;
- (void)addAssetSetObject:(id)arg1;
- (void)addAssetSet:(id)arg1;
- (void)removeAssetSetObject:(id)arg1;
- (void)removeAssetSet:(id)arg1;
- (id)displayMediaSet;
- (id)resolveAsset:(id)arg1;
- (id)newAnchoredSequenceFromURL:(id)arg1 manageFileType:(int)arg2 keywords:(id)arg3 validateFiles:(BOOL)arg4;
- (id)identifierToAssetMap;
- (id)fileNameToAssetMap;
- (id)eventSimpleClipForClip:(id)arg1;
- (void)cleanupInDirectory:(id)arg1;
- (id)addClipsFromURLs:(id)arg1 manageFileType:(int)arg2 processNow:(BOOL)arg3 warnClipsAlreadyExist:(BOOL)arg4 isImportingFromImovie:(BOOL)arg5 keywordSets:(id)arg6 validateFiles:(BOOL)arg7;
@property(nonatomic) BOOL allowDuplicateClips; // @synthesize allowDuplicateClips=_allowDuplicateClips;
@property(readonly, nonatomic) FFMediaEventFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(readonly, nonatomic) NSSet *assetSet; // @synthesize assetSet=_assetSet;
@property(readonly, nonatomic) NSSet *mediaSet; // @synthesize mediaSet=_mediaSet;

@end

