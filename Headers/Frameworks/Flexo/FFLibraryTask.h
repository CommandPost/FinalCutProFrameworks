//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DSObject.h"

#import "FFAssetCopyQueueDelegateProtocol.h"

@class FFAssetCopyQueue, FFLibrary, FFLibraryDocument, FFLibraryTaskOptions, NSDictionary, NSMapTable, NSMutableArray, NSString, NSURL;

@interface FFLibraryTask : DSObject <FFAssetCopyQueueDelegateProtocol>
{
    NSMapTable *_oldMediaIdentifierToNewMediaMap;
    NSMapTable *_oldMediaPersistentIDToNewClipMap;
    NSString *_actionName;
    NSURL *_dstURL;
    FFLibraryTaskOptions *_options;
    unsigned int _fileIDMask;
    NSMutableArray *_copyRequests;
    NSMutableArray *_completedCopyRequests;
    NSMutableArray *_failedCopyRequests;
    FFAssetCopyQueue *_copyQueue;
    FFLibraryDocument *_dstDoc;
    FFLibrary *_sourceLibrary;
    FFLibrary *_targetLibrary;
    NSDictionary *_backgroundAssetsDictForChanging;
    NSDictionary *_backgroundAssetsDictForInUseOrChanging;
    BOOL _crossLibraryEditAsFileRef;
    BOOL _makingSnapshot;
    BOOL _mergingEvents;
    BOOL _overwriteOwnedMedia;
    BOOL _askAboutOwnedMediaConflicts;
}

+ (BOOL)mergeEvents:(id)arg1 into:(id)arg2 error:(id *)arg3;
+ (id)prepareMoveOwnedMedia:(id)arg1 copy:(BOOL)arg2 error:(id *)arg3;
+ (id)prepareMove:(id)arg1 to:(id)arg2 options:(id)arg3 copy:(BOOL)arg4 isSnapshot:(BOOL)arg5 error:(id *)arg6;
+ (id)sourceDocumentForObject:(id)arg1;
+ (id)mediaToMigrateForEventsMoving:(id)arg1;
+ (id)targetLibraryItemForItemOrURL:(id)arg1 error:(id *)arg2;
+ (BOOL)resolveClipAndAssetReferencesFromOtherLibrariesForSequence:(id)arg1 clipRefsAndEditsNotInLibrary:(id)arg2 assetRefsAndEditsNotInLibrary:(id)arg3 clipRefsInDestLibrary:(id)arg4 proxiesToRemove:(id)arg5 resolution:(int)arg6 crossLibraryEditAsFileRef:(BOOL)arg7 error:(id *)arg8;
+ (BOOL)timeRangeAndObjectOrAnchoredObjectsContainsClipRefsOrMediaRefsNotInDestSequenceLibrary:(id)arg1 timeRangeAndObjectOrAnchoredObjects:(id)arg2;
+ (id)copyObject:(id)arg1 forLibraryItem:(id)arg2 error:(id *)arg3;
+ (long long)calcFileSize:(id)arg1 error:(id *)arg2;
+ (void)calcFileSize:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (long long)calcFileSize:(id)arg1 options:(int)arg2 error:(id *)arg3;
+ (long long)calcDirectorySize:(id)arg1 options:(int)arg2 error:(id *)arg3;
+ (id)dispatchQueue;
+ (id)copyClassDescription;
+ (Class)DSClassDescriptionClass;
@property(retain, nonatomic) FFLibraryTaskOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSURL *dstURL; // @synthesize dstURL=_dstURL;
@property(retain, nonatomic) NSDictionary *backgroundAssetsDictForInUseOrChanging; // @synthesize backgroundAssetsDictForInUseOrChanging=_backgroundAssetsDictForInUseOrChanging;
@property(retain, nonatomic) NSDictionary *backgroundAssetsDictForChanging; // @synthesize backgroundAssetsDictForChanging=_backgroundAssetsDictForChanging;
@property(retain, nonatomic) FFLibrary *targetLibrary; // @synthesize targetLibrary=_targetLibrary;
@property(retain, nonatomic) FFLibrary *sourceLibrary; // @synthesize sourceLibrary=_sourceLibrary;
@property(readonly, nonatomic) NSMapTable *oldMediaPersistentIDToNewClipMap; // @synthesize oldMediaPersistentIDToNewClipMap=_oldMediaPersistentIDToNewClipMap;
@property(readonly, nonatomic) NSMapTable *oldMediaIdentifierToNewMediaMap; // @synthesize oldMediaIdentifierToNewMediaMap=_oldMediaIdentifierToNewMediaMap;
- (void)dealloc;
- (id)initWithDestLibrary:(id)arg1 options:(id)arg2 actionName:(id)arg3 error:(id *)arg4;
- (id)init;
- (BOOL)finish:(id *)arg1;
- (BOOL)mergeEvents:(id)arg1 into:(id)arg2 error:(id *)arg3;
- (BOOL)mergeRenderFolder:(id)arg1 into:(id)arg2 url:(id)arg3 error:(id *)arg4;
- (BOOL)mergeMediaEventFolders:(id)arg1 targetEvent:(id)arg2;
- (void)_undoBackgroundCopies;
- (BOOL)beginBackgroundCopies:(id *)arg1;
- (BOOL)preflightCopy:(id *)arg1;
- (id)errorCopyingToURL:(id)arg1 bytesNeeded:(long long)arg2 bytesAvailable:(long long)arg3;
- (void)_copyCompleted:(id)arg1;
- (void)taskWasCancelled:(id)arg1;
- (BOOL)updateIdentifiersAndMakeClips:(id *)arg1;
- (BOOL)copyAdditionalReferencedMedia:(id *)arg1;
- (BOOL)_findAdditionalReferencedMediaForSequence:(id)arg1 targetLibraryItem:(id)arg2 mediaToLibraryItemMap:(id)arg3 error:(id *)arg4;
- (BOOL)move:(BOOL)arg1 clips:(id)arg2 event:(id)arg3 error:(id *)arg4;
- (BOOL)moveOwnedMedia:(id)arg1 copy:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_askAboutOverwritingOwnedMedia:(id)arg1 error:(id *)arg2;
- (BOOL)moveAssetFilesFromAsset:(id)arg1 toAsset:(id)arg2 toLibraryItem:(id)arg3 copy:(BOOL)arg4 overwrite:(BOOL)arg5 error:(id *)arg6;
- (BOOL)moveAssetFileIDs:(id)arg1 targetAssetFileIDs:(id)arg2 sourceLibraryItem:(id)arg3 targetLibraryItem:(id)arg4 targetAsset:(id)arg5 copy:(BOOL)arg6 error:(id *)arg7;
- (BOOL)moveAssetFileID:(id)arg1 targetAssetFileID:(id)arg2 targetAsset:(id)arg3 isSameVolume:(BOOL)arg4 copy:(BOOL)arg5 error:(id *)arg6;
- (BOOL)moveLibraryItem:(id)arg1 targetLibraryItem:(id)arg2 copy:(BOOL)arg3 error:(id *)arg4;
- (id)newURLForRoot:(id)arg1 scheme:(id)arg2;

@end
