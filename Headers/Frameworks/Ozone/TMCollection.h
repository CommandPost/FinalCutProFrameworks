//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"
#import "TMBrowserOutlineItem.h"

@class NSDate, NSImage, NSMutableArray, NSMutableDictionary, NSString, TMCollectionHeader;

@interface TMCollection : NSObject <TMBrowserOutlineItem, NSPasteboardWriting, NSPasteboardReading>
{
    NSString *_path;
    NSString *_resolvedPath;
    NSString *_previewPath;
    NSMutableArray *_documents;
    NSMutableDictionary *_documentDictionary;
    NSImage *_image;
    NSDate *_modifiedDate;
    BOOL _expandable;
    NSString *_title;
    int _collectionType;
    TMCollectionHeader *_parentCollection;
    BOOL _isTemplateCollection;
    BOOL _isSystemCollection;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (BOOL)shouldSuppressNotifications;
+ (void)suppressNotifications:(BOOL)arg1;
@property(retain, nonatomic) TMCollectionHeader *parentCollection; // @synthesize parentCollection=_parentCollection;
@property(nonatomic) BOOL isSystemCollection; // @synthesize isSystemCollection=_isSystemCollection;
@property(nonatomic) BOOL isTemplateCollection; // @synthesize isTemplateCollection=_isTemplateCollection;
@property(nonatomic) int collectionType; // @synthesize collectionType=_collectionType;
- (BOOL)trash;
- (BOOL)renameTo:(id)arg1;
- (void)removeTemplate:(id)arg1;
- (void)addDocument:(id)arg1;
- (BOOL)canRemoveItem;
- (BOOL)canAddToItem;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)renameTemplate:(id)arg1 name:(id)arg2;
- (BOOL)trashTemplate:(id)arg1;
- (id)templateForPath:(id)arg1;
- (id)createTemplateWithName:(id)arg1;
- (id)addTemplateFromPath:(id)arg1 resolvedPath:(id)arg2 isSystemTemplate:(BOOL)arg3 livesInThemeFolder:(BOOL)arg4;
- (void)flush;
- (void)scan;
- (void)scanDirectory:(id)arg1 knownArray:(id)arg2 lookingInSystemPath:(BOOL)arg3 depth:(unsigned int)arg4;
- (void)scanDirectoryNoBookkeeping:(id)arg1 lookingInSystemPath:(BOOL)arg2 depth:(unsigned int)arg3;
- (BOOL)_pathIsSearchableDirectory:(id)arg1;
- (BOOL)_pathIsMotionTemplate:(id)arg1;
- (id)collectionTypeExtension;
- (id)documentAtIndex:(unsigned int)arg1;
- (unsigned int)numDocumentsRecursiveSearch:(BOOL)arg1;
- (unsigned int)numDocuments;
- (BOOL)containsSystemTemplates;
- (BOOL)expandable;
- (id)modifiedDate;
- (id)image;
- (id)title;
- (id)allDocumentsInCollectionWithTheme:(id)arg1 scan:(BOOL)arg2;
- (id)documents;
- (id)previewPath;
- (id)userPathFromSystemPath;
- (id)resolvedPath;
- (id)path;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 resolvedPath:(id)arg2 parent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

