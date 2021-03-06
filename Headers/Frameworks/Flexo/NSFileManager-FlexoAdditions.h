//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (FlexoAdditions)
- (BOOL)replaceItemAtURL:(id)arg1 withLinkToDestinationURL:(id)arg2 resultingItemURL:(id *)arg3;
- (BOOL)replaceItemAtURL:(id)arg1 withSymbolicLinkToDestinationURL:(id)arg2 resultingItemURL:(id *)arg3;
- (id)attributesOfItemAtPath:(id)arg1 traverseLink:(BOOL)arg2 error:(id *)arg3;
- (id)gatherLocalizationsOfKey:(id)arg1;
- (BOOL)createLocalizedFolderIfAbsent:(id)arg1 atPath:(id)arg2 locKey:(id)arg3;
- (BOOL)setFileExtensionHidden:(BOOL)arg1 atPath:(id)arg2;
- (BOOL)ensureFileIsUnlocked:(id)arg1;
- (id)filePathForFSRef:(struct FSRef *)arg1;
- (void)finderCopyPath:(id)arg1 toPath:(id)arg2;
- (void)_finderCopyWithDictionary:(id)arg1;
- (BOOL)ensureFileExists:(id)arg1;
- (BOOL)ensureDirectoryExists:(id)arg1;
- (id)imFileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 error:(id *)arg3;
- (id)imFileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (double)pathTotalFileSize:(id)arg1;
- (BOOL)isReadOnly:(id)arg1;
- (id)modificationDate:(id)arg1;
- (id)creationDate:(id)arg1;
- (double)fileSize:(id)arg1;
- (unsigned long long)countFiles:(id)arg1 descend:(BOOL)arg2;
- (id)directoryContentsAtPath:(id)arg1 visibleOnly:(BOOL)arg2 includeFiles:(BOOL)arg3 includeFolders:(BOOL)arg4 extension:(id)arg5;
@end

