//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "FFMediaEventFolderForMergeObject.h"
#import "FFMediaEventFolderObject.h"
#import "FFMergeObjectProtocol.h"
#import "FFOrganizerItemDraggingSource.h"
#import "FFOrganizerMasterItem.h"
#import "FFOrganizerMasterItemDropTarget.h"

@class FFMediaEventFolder, NSArray, NSDictionary, NSImage, NSString;

@interface FFMediaEventKeyword : FFBaseDSObject <FFMergeObjectProtocol, FFMediaEventFolderForMergeObject, FFOrganizerMasterItem, FFOrganizerItemDraggingSource, FFOrganizerMasterItemDropTarget, FFMediaEventFolderObject>
{
    NSString *_name;
    FFMediaEventFolder *_parentFolder;
}

+ (id)keyPathsForValuesAffectingKeyword;
+ (int)matchingTypeIterationOption;
+ (id)keywordForName:(id)arg1;
+ (id)filtersDictionaryForKeywords:(id)arg1;
+ (id)_filtersDictionaryUsingKeywords:(id)arg1;
+ (id)copyClassDescription;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)keyPathsForValuesAffectingItemDisplayName;
@property(readonly, nonatomic) NSString *keyword;
@property(readonly, nonatomic) NSDictionary *filtersDictionary;
- (void)removeFromParentFolder;
- (BOOL)isNameEqualToString:(id)arg1;
- (id)project;
@property(nonatomic) FFMediaEventFolder *parentFolder;
@property(copy, nonatomic) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithName:(id)arg1;
@property NSString *collectionName;
- (id)copyForMerge:(id)arg1;
- (BOOL)merge:(id)arg1 withDelegate:(id)arg2;
- (BOOL)merge:(id)arg1;
- (BOOL)performDrop:(id)arg1 validatedDragOperation:(unsigned long long)arg2 newSubitemInsertionIndex:(long long)arg3 organizerModule:(id)arg4;
- (unsigned long long)validateDrop:(id)arg1 newSubitemInsertionIndex:(long long)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
@property(readonly, nonatomic) BOOL hasDetailSubitemsWhenSelected;
@property(readonly, nonatomic) NSArray *detailSubitemsWhenSelected;
@property(readonly, nonatomic) NSArray *detailSubitems;
@property(readonly, nonatomic) NSArray *masterSubitems;
@property(readonly, nonatomic) BOOL hasMasterSubitems;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) NSString *itemPersistentIdentifier;
- (id)itemIconSelected:(BOOL)arg1;
@property(readonly, nonatomic) NSImage *itemIcon;
@property(readonly, nonatomic) BOOL itemDisplayNameEditable;
- (void)setItemDisplayName:(id)arg1;
@property(readonly, nonatomic) NSString *itemDisplayName;
- (id)_keywordNames;
- (BOOL)actionRename:(id)arg1 error:(id *)arg2;
- (BOOL)_renameKeywordNamed:(id)arg1 toName:(id)arg2;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
- (void)actionBegin:(id)arg1;
- (BOOL)_actionEndEditing:(BOOL)arg1 error:(id *)arg2;
- (void)_actionBeginEditing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) BOOL hasDetailSubitems;
@property(readonly, nonatomic) BOOL hasItems;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *itemDisplayNameExtraText;
@property(readonly, nonatomic) BOOL itemIsPlaceholder;
@property(readonly, nonatomic) double itemRowHeight;
@property(readonly) Class superclass;

@end

