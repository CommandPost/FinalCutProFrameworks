//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import <Flexo/FFMetadataProtocol-Protocol.h>
#import <Flexo/NSCopying-Protocol.h>
#import <Flexo/NSSecureCoding-Protocol.h>

@class FFAsset, FFAssetFileIdentifier, NSArray, NSData, NSMutableDictionary, NSString, NSURL;

@interface FFMediaRep : FFBaseDSObject <NSSecureCoding, NSCopying, FFMetadataProtocol>
{
    BOOL _isPreDownloaded;
    NSData *_downloadResumeData;
    NSString *_preferredBasename;
    NSString *_preferredExtension;
    FFAsset *_media;
    NSMutableDictionary *_metadata;
    NSString *_repType;
    NSString *_projectRelativePath;
    int _organizeState;
    _Atomic int _syncStatus;
    NSString *_md5Seed;
    NSArray *_additionalFilenames;
    BOOL _showRepAsMissing;
    FFAssetFileIdentifier *_assetFileID;
    id _syncInfo;
    int _lastModifiedFileDate;
    _Atomic id _additionalLocalFilenames;
    NSURL *_remoteURL;
}

+ (BOOL)syncBookmarkData:(id)arg1 forceUpdate:(BOOL)arg2 usingLock:(id)arg3;
+ (BOOL)syncBookmarkData:(id)arg1 forceUpdate:(BOOL)arg2;
+ (BOOL)initBookmarkData:(id)arg1 forceUpdate:(BOOL)arg2;
+ (int)syncWithMedia:(id)arg1 options:(unsigned long long)arg2 needsUpdate:(char *)arg3 error:(id *)arg4;
+ (int)syncStatusCount;
+ (void)incrementSyncStatusCount;
+ (int)checkSyncStatus:(id)arg1 syncInfo:(id)arg2 error:(id *)arg3;
+ (id)readSyncInfo:(id)arg1 error:(id *)arg2;
+ (id)_computeMediaMD5WithBaseID:(id)arg1 propertiesFromProvider:(id)arg2;
+ (id)uniqueExternalURLWithMediaRepType:(id)arg1 tempMediaURL:(id)arg2 srcMediaIdentifier:(id)arg3 proposedDstDirectoryURL:(id)arg4 dstFileName:(id)arg5 createdSymlink:(char *)arg6 error:(id *)arg7;
+ (id)createLinkToExistingExternalMediaRepType:(id)arg1 fileName:(id)arg2 forAsset:(id)arg3 tempExternalMediaLocation:(id)arg4;
+ (id)commitTemporaryMediaAtURL:(id)arg1 mediaRepType:(id)arg2 fileName:(id)arg3 forAsset:(id)arg4 inProject:(id)arg5 proposedlibraryURL:(id)arg6 libraryURL:(id *)arg7 useTempMediaLocation:(BOOL)arg8 tempExternalMediaLocation:(id)arg9;
+ (id)commitTemporaryMediaAtURL:(id)arg1 mediaRepType:(id)arg2 fileName:(id)arg3 forAsset:(id)arg4 inProject:(id)arg5 proposedlibraryURL:(id)arg6 libraryURL:(id *)arg7;
+ (id)generatedMediaRepTypesExceptProxy;
+ (id)generatedMediaRepTypes;
+ (id)mediaRepTypes;
+ (id)localizedMediaRepTypeString:(id)arg1;
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
+ (id)basenameFromFilename:(id)arg1;
+ (id)extensionFromFilename:(id)arg1;
+ (id)localFilenameFromAdditionalFilename:(id)arg1;
+ (id)_adjustedAssetPath:(id)arg1 originalURL:(id)arg2;
+ (id)organizeStateStringFor:(int)arg1;
+ (id)_repTypeToFolderString:(id)arg1;
+ (id)copyClassDescription;
+ (BOOL)classIsAbstract;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int lastModifiedFileDate; // @synthesize lastModifiedFileDate=_lastModifiedFileDate;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(readonly, nonatomic) BOOL showRepAsMissing; // @synthesize showRepAsMissing=_showRepAsMissing;
@property(retain, nonatomic) NSString *preferredExtension; // @synthesize preferredExtension=_preferredExtension;
@property(retain, nonatomic) NSString *preferredBasename; // @synthesize preferredBasename=_preferredBasename;
@property(nonatomic) BOOL isPreDownloaded; // @synthesize isPreDownloaded=_isPreDownloaded;
@property(retain) NSData *downloadResumeData; // @synthesize downloadResumeData=_downloadResumeData;
- (id)URLFallbackToRemoteURL;
- (void)consolidateGPSMetadata;
- (void)fixCanonCreationDate;
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
- (void)transferMediaRepMetadataTo:(id)arg1;
- (void)mergeMetadataToMediaRep:(id)arg1 excludingFilter:(CDUnknownBlockType)arg2 includingFilter:(CDUnknownBlockType)arg3 shouldRemoveMissingKeys:(BOOL)arg4;
- (void)mergeMetadataToMediaRep:(id)arg1 except:(id)arg2 include:(id)arg3 removeMissing:(BOOL)arg4;
- (void)mergeMetadataToMediaRep:(id)arg1;
- (void)setupProjectRelativeFileNamed:(id)arg1 manageFileType:(int)arg2 project:(id)arg3 externalFolderURL:(id)arg4 foundExistingFile:(char *)arg5;
- (void)organizeIntoEvent:(id)arg1;
@property(readonly, nonatomic) BOOL canRevealInFinder;
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
- (BOOL)_initSyncInfo:(id)arg1 shouldRead:(BOOL)arg2 error:(id *)arg3;
- (id)_computeMediaMD5WithURL:(id)arg1 baseFilename:(id)arg2 provider:(id)arg3;
@property(readonly, nonatomic) NSString *md5Seed;
- (BOOL)verifyFileContentIdentical:(id)arg1;
- (id)fileTypes;
@property(readonly, nonatomic) NSArray *fileURLs;
- (id)_fileURL;
@property(readonly, nonatomic) NSURL *fileURL;
- (id)URL;
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
- (oneway void)release;
@property(readonly, nonatomic) FFAsset *media;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 provider:(id)arg2 media:(id)arg3 repType:(id)arg4 manageFileType:(int)arg5 preferredBasename:(id)arg6 preferredExtension:(id)arg7 project:(id)arg8 showRepAsMissing:(BOOL)arg9;
- (id)initWithFileURL:(id)arg1 media:(id)arg2 repType:(id)arg3 manageFileType:(int)arg4 preferredBasename:(id)arg5 preferredExtension:(id)arg6 project:(id)arg7 showRepAsMissing:(BOOL)arg8;
- (id)initWithFileURL:(id)arg1 media:(id)arg2 repType:(id)arg3 manageFileType:(int)arg4 project:(id)arg5;
- (id)getSourceFileURLWithURL:(id)arg1 recommendedName:(id)arg2 externalMediaLocation:(id)arg3 project:(id)arg4;
- (void)setFF360Props:(id)arg1;
- (id)_projectRelativePathForURL:(id)arg1 recommendedName:(id)arg2 project:(id)arg3 usingExternalMedia:(BOOL)arg4;
- (void)_checkCreationDate:(id)arg1;
- (void)_updateFileSystemRepForProject:(id)arg1 originalURL:(id)arg2 withLock:(BOOL)arg3;
- (void)_updateFileSystemRepForProject:(id)arg1 originalURL:(id)arg2 externalFolderURL:(id)arg3 recommendedName:(id)arg4 foundExistingFile:(char *)arg5 withLock:(BOOL)arg6;
- (id)proposedExternalDirectoryURLWithSourceURL:(id)arg1 project:(id)arg2 recommendedName:(id)arg3 proposedFileName:(id *)arg4;
- (void)setPersistentFileURL:(id)arg1;
- (id)persistentFileURL;
- (void)setOrganizeStateString:(id)arg1;
- (id)organizeStateString;
- (void)_setOrganizeStateString:(id)arg1;
- (id)_organizeStateString;
- (void)updateAssetFilename;
- (void)fixProjectRelativePath;
- (void)setRelativePath:(id)arg1;
- (void)setProjectRelativePath:(id)arg1 andProject:(id)arg2;
- (void)setProjectRelativePath:(id)arg1;
- (id)projectRelativePath;
- (id)targetProject;
- (id)assetFileID;
- (void)setRepType:(id)arg1;
- (void)resetMedia:(id)arg1;
- (void)setMedia:(id)arg1;
- (id)_readOriginalFileURL:(id *)arg1;
- (void)_prepareAssetCopy:(id)arg1;
- (BOOL)openDocumentsHavePendingTransactions;
- (void)_copyCompleted:(id)arg1;
- (void)_synchronousCopyCompleted;
- (void)_setOrganizeState:(int)arg1;
- (void)setMediaRepPrivateCacheValue:(id)arg1 forKey:(id)arg2;
- (id)mediaRepPrivateCacheValueForKey:(id)arg1;
- (void)removeFileSystemRep;
- (void)installFileSystemRepInto:(id)arg1 externalFolderURL:(id)arg2 manageFileType:(int)arg3 foundExistingFile:(char *)arg4 recommendedRelativePath:(id *)arg5;

@end

