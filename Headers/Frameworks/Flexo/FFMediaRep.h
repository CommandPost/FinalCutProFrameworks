//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "FFMetadataProtocol.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class FFAsset, FFAssetFileIdentifier, FFMediaRepDownloadTask, NSArray, NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FFMediaRep : FFBaseDSObject <NSCoding, NSCopying, FFMetadataProtocol>
{
    FFAsset *_media;
    NSMutableDictionary *_metadata;
    NSString *_repType;
    NSString *_projectRelativePath;
    int _organizeState;
    int _syncStatus;
    NSString *_md5Seed;
    NSArray *_additionalFilenames;
    BOOL _showRepAsMissing;
    FFAssetFileIdentifier *_assetFileID;
    id _syncInfo;
    int _lastModifiedFileDate;
    NSArray *_additionalLocalFilenames;
    int _downloadState;
    NSURL *_downloadURL;
    FFMediaRepDownloadTask *_mediaRepDownloadTask;
}

+ (BOOL)syncBookmarkData:(id)arg1 forceUpdate:(BOOL)arg2 usingLock:(id)arg3;
+ (BOOL)syncBookmarkData:(id)arg1 forceUpdate:(BOOL)arg2;
+ (BOOL)initBookmarkData:(id)arg1 forceUpdate:(BOOL)arg2;
+ (int)syncWithMedia:(id)arg1 options:(unsigned long long)arg2 needsUpdate:(char *)arg3 error:(id *)arg4;
+ (int)syncStatusCount;
+ (void)incrementSyncStatusCount;
+ (int)checkSyncStatus:(id)arg1 syncInfo:(id)arg2 error:(id *)arg3;
+ (struct NSObject *)readSyncInfo:(id)arg1 error:(id *)arg2;
+ (id)uniqueExternalURLWithMediaRepType:(id)arg1 tempMediaURL:(id)arg2 srcMediaIdentifier:(id)arg3 proposedDstDirectoryURL:(id)arg4 dstFileName:(id)arg5 createdSymlink:(char *)arg6 error:(id *)arg7;
+ (id)createLinkToExistingExternalMediaRepType:(id)arg1 fileName:(id)arg2 forAsset:(id)arg3;
+ (id)commitTemporaryMediaAtURL:(id)arg1 mediaRepType:(id)arg2 fileName:(id)arg3 forAsset:(id)arg4 inProject:(id)arg5 proposedlibraryURL:(id)arg6 libraryURL:(id *)arg7;
+ (id)dateStringForAsset:(id)arg1;
+ (id)fileSystemCompatibleStringForDate:(id)arg1;
+ (id)mediaIdentifierOfItemAtURL:(id)arg1 withMediaRepType:(id)arg2;
+ (id)nextFolderURLForURL:(id)arg1 fcpTag:(BOOL)arg2;
+ (id)uniqueURLforURL:(id)arg1;
+ (id)nextURLforURL:(id)arg1;
+ (BOOL)URLHasCameraTag:(id)arg1;
+ (int)indexFromFilename:(id)arg1 fcpTag:(BOOL)arg2;
+ (id)urlFromFolderURL:(id)arg1 baseFilename:(id)arg2 cameraTag:(BOOL)arg3 fcpTag:(BOOL)arg4 index:(int)arg5 extension:(id)arg6;
+ (id)baseNameFromString:(id)arg1 fcpTag:(BOOL)arg2;
+ (id)baseFilenameFromURL:(id)arg1 fcpTag:(BOOL)arg2;
+ (id)filenameFromURL:(id)arg1;
+ (id)extensionFromURL:(id)arg1;
+ (id)localFilenameFromAdditionalFilename:(id)arg1;
+ (id)_adjustedAssetPath:(id)arg1 originalURL:(id)arg2;
+ (id)organizeStateStringFor:(int)arg1;
+ (id)_repTypeToFolderString:(id)arg1;
+ (id)copyClassDescription;
+ (BOOL)classIsAbstract;
@property(readonly, nonatomic) int lastModifiedFileDate; // @synthesize lastModifiedFileDate=_lastModifiedFileDate;
@property(nonatomic) int downloadState; // @synthesize downloadState=_downloadState;
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, nonatomic) BOOL showRepAsMissing; // @synthesize showRepAsMissing=_showRepAsMissing;
- (void)resetDownloadTask;
- (void)pauseDownload;
- (void)downloadMediaIfMissing;
- (void)performDownload:(id)arg1;
- (void)postDownloadUpdate:(id)arg1;
- (void)consolidateGPSMetadata;
- (void)setMetadataContentCreated:(id)arg1;
- (id)metadataContentCreated;
- (id)mdLocalValueForKey:(id)arg1;
- (id)mdValueForKey:(id)arg1;
- (void)mdSetLocalValue:(id)arg1 forKey:(id)arg2;
- (void)mdSetValue:(id)arg1 forKey:(id)arg2;
- (id)mdTargetForKey:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)mergeMetadataToMediaRep:(id)arg1 except:(id)arg2 include:(id)arg3;
- (void)mergeMetadataToMediaRep:(id)arg1;
- (void)setupProjectRelativeFileNamed:(id)arg1 manageFileType:(int)arg2 project:(id)arg3 externalFolderURL:(id)arg4 foundExistingFile:(char *)arg5;
- (void)organizeIntoEvent:(id)arg1;
@property(readonly, nonatomic) BOOL mediaAvailable;
@property(readonly, nonatomic) int syncStatus;
- (void)setSyncStatus:(int)arg1;
- (void)purgeBookmarkData;
- (id)bookmarkData;
- (void)setBookmarkData:(id)arg1;
- (BOOL)isRMD;
- (BOOL)usingSubfolder;
- (BOOL)_updateLastModifiedFileDate:(int)arg1;
- (BOOL)updateSyncStatus:(int)arg1;
- (BOOL)_initSyncInfo:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *md5Seed;
- (BOOL)verifyFileContentIdentical:(id)arg1;
- (id)fileTypes;
@property(readonly, nonatomic) NSArray *fileURLs;
@property(readonly, nonatomic) NSURL *fileURL;
- (id)assetFileIDForCopy;
- (id)additionalLocalFilenames;
@property(readonly, nonatomic) NSArray *additionalFilenames;
- (id)fileName;
- (id)newProvider;
- (id)newProviderWithFileOverrides:(id)arg1;
- (id)copyAddditionalCacheIdentifiersForOverrideDict:(id)arg1;
- (id)cacheIdentifierIncludingOverrides:(id)arg1;
- (int)manageFileType;
- (id)repType;
@property(readonly, nonatomic) FFAsset *media;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 media:(id)arg2 repType:(id)arg3 manageFileType:(int)arg4 project:(id)arg5;
- (id)initWithFileURL:(id)arg1 media:(id)arg2 repType:(id)arg3 manageFileType:(int)arg4 project:(id)arg5 showRepAsMissing:(BOOL)arg6;
- (void)setFF360Props:(id)arg1;
- (id)_projectRelativePathForURL:(id)arg1 recommendedName:(id)arg2 project:(id)arg3 usingExternalMedia:(BOOL)arg4;
- (void)_checkCreationDate:(id)arg1;
- (void)_updateFileSystemRepForProject:(id)arg1 originalURL:(id)arg2 copyQueued:(char *)arg3 withLock:(BOOL)arg4;
- (void)_updateFileSystemRepForProject:(id)arg1 originalURL:(id)arg2 externalFolderURL:(id)arg3 copyQueued:(char *)arg4 withLock:(BOOL)arg5;
- (id)proposedExternalDirectoryURLWithSourceURL:(id)arg1 project:(id)arg2 proposedFileName:(id *)arg3;
- (void)setPersistentFileURL:(id)arg1;
- (id)persistentFileURL;
- (void)setOrganizeStateString:(id)arg1;
- (id)organizeStateString;
- (void)_setOrganizeStateString:(id)arg1;
- (id)_organizeStateString;
- (void)updateAssetFilename;
- (void)fixProjectRelativePath;
- (void)setRelativePath:(id)arg1;
- (void)setProjectRelativePath:(id)arg1;
- (id)projectRelativePath;
- (id)targetProject;
- (id)assetFileID;
- (void)setRepType:(id)arg1;
- (void)resetMedia:(id)arg1;
- (void)setMedia:(id)arg1;
- (id)_readOriginalFileURL:(id *)arg1;
- (void)_prepareAssetCopy:(id)arg1;
- (BOOL)_openDocumentsHavePendingTransactions;
- (void)_copyCompleted:(id)arg1;
- (void)_synchronousCopyCompleted;
- (void)_setOrganizeState:(int)arg1;
- (void)setMediaRepPrivateCacheValue:(id)arg1 forKey:(id)arg2;
- (id)mediaRepPrivateCacheValueForKey:(id)arg1;

@end

