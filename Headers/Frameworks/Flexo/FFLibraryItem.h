//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFModelObject.h>

@class FFLibrary, FFMediaEventProject, FFModelDocument, NSDictionary, NSMutableSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FFLibraryItem : FFModelObject
{
    FFLibraryItem *_parentItem;
    NSString *_relativePath;
    NSDictionary *_metadata;
    NSMutableSet *_childItems;
    FFModelDocument *_document;
    NSURL *_cachedURLAtClose;
}

+ (id)documents;
+ (id)copyClassDescription;
@property(readonly, nonatomic) FFLibraryItem *parentItem; // @synthesize parentItem=_parentItem;
- (void)setOwningTrashLibrary:(id)arg1;
- (id)owningTrashLibrary;
- (BOOL)isTemporary;
- (BOOL)isInTrash;
- (id)defaultLibraryItem;
- (BOOL)hasEventRecords;
- (id)allRecords;
- (id)allEventRecords;
- (id)allSequenceRecords;
- (id)_findItems:(CDUnknownBlockType)arg1;
- (BOOL)actionMoveLibraryItemToItem:(id)arg1 actionName:(id)arg2 error:(id *)arg3;
- (BOOL)referencesExistForMediaIdentifier:(id)arg1 excludingTheseClips:(id)arg2;
- (BOOL)referencesExistForMediaIdentifier:(id)arg1;
- (BOOL)clipReferencesExistToLibraryItems:(id)arg1;
- (BOOL)referencesExistToLibraryItems:(id)arg1;
@property(readonly, nonatomic) FFMediaEventProject *projectIfLoaded;
@property(readonly, nonatomic) FFMediaEventProject *project;
- (void)sync;
- (void)documentWillClose;
- (id)cachedURLAtClose;
- (id)URL;
- (id)URLWithRelativePath:(id)arg1;
- (void)removeChildItemsObject:(id)arg1;
- (void)addChildItemsObject:(id)arg1;
- (void)didRemoveChildItemsObject:(id)arg1 fromParent:(id)arg2;
- (void)didAddChildItemsObject:(id)arg1 toParent:(id)arg2;
- (id)childItems;
- (void)applyItemsToBlock:(CDUnknownBlockType)arg1;
- (void)setMetaValue:(id)arg1 forKey:(id)arg2;
- (id)metaValueForKey:(id)arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (BOOL)rename:(id)arg1 error:(id *)arg2;
- (void)_undoRename:(id)arg1;
- (id)uniqueRelativePath:(id)arg1 withSuffix:(id)arg2;
- (id)uniqueRelativePath:(id)arg1;
- (id)uniqueDisplayName;
@property(readonly, nonatomic) NSString *displayName;
- (id)identifierForProxyEvent;
- (void)setIdentifierForProxyEvent:(id)arg1;
@property(copy, nonatomic) NSString *relativePath;
- (void)setIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)libraryCatalog;
@property(readonly, nonatomic) FFLibrary *library;
- (void)setPrimaryObject:(id)arg1;
- (id)primaryObject;
- (BOOL)isPrimaryObjectLoaded;
- (id)documentIdentifier;
@property(retain, nonatomic) FFModelDocument *document;
- (BOOL)validateIdentifier:(id *)arg1;
- (BOOL)hasDocument;
- (void)performWithoutUndo:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (oneway void)release;
- (void)willDealloc;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)initWithParent:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)initWithParent:(id)arg1 name:(id)arg2 document:(id)arg3 error:(id *)arg4;
- (BOOL)allowChildName:(id)arg1 error:(id *)arg2;
- (id)newDocument:(id)arg1 parent:(id)arg2 catalog:(id)arg3 create:(int)arg4 error:(id *)arg5;
- (id)newDocument:(id)arg1 catalog:(id)arg2 create:(int)arg3 error:(id *)arg4;
- (Class)_documentClassForType:(id)arg1;
- (id)documentType;

@end
