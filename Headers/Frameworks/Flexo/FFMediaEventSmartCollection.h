//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import <Flexo/FFMediaEventFolderForMergeObject-Protocol.h>
#import <Flexo/FFMediaEventFolderObject-Protocol.h>
#import <Flexo/FFMergeObjectProtocol-Protocol.h>
#import <Flexo/FFOrganizerFilterHUDDelegate-Protocol.h>
#import <Flexo/FFOrganizerItemDraggingSource-Protocol.h>
#import <Flexo/FFOrganizerMasterItem-Protocol.h>

@class FFMediaEventFolder, NSArray, NSDictionary, NSImage, NSString;

@interface FFMediaEventSmartCollection : FFBaseDSObject <FFOrganizerMasterItem, FFOrganizerItemDraggingSource, FFMergeObjectProtocol, FFMediaEventFolderForMergeObject, FFMediaEventFolderObject, FFOrganizerFilterHUDDelegate>
{
    NSString *_name;
    NSDictionary *_filtersDictionary;
    FFMediaEventFolder *_parentFolder;
}

+ (int)matchingTypeIterationOption;
+ (BOOL)supportsSecureCoding;
+ (id)newFavoritesSmartCollection;
+ (id)newStillsSmartCollection;
+ (id)newAudioOnlySmartCollection;
+ (id)newVideoSmartCollection;
+ (id)newProjectsSmartCollection;
+ (id)copyClassDescription;
+ (id)keyPathsForValuesAffectingItemDisplayName;
+ (BOOL)compareFilter:(id)arg1 to:(id)arg2;
- (void)update_removeVideoMainRolesFromRoleFilters;
- (void)update_rolesPerLibrary;
- (id)library;
- (void)reassignRoles:(id)arg1 renameExistingRoles:(id)arg2 changeColorOfExistingRoles:(id)arg3 removeRolesWithUIDs:(id)arg4;
- (void)update_fixAnalysisKeywords;
- (id)duplicate;
@property(retain, nonatomic) NSDictionary *filtersDictionary;
- (id)libraryForCurrentProject;
- (id)mainRolesForCurrentProject;
- (id)keywordsForCurrentProject;
- (id)smartCollectionButtonTitle;
- (id)hudTitle;
- (void)filterHUDDidUpdate:(id)arg1;
- (id)filtersDictionaryOwner;
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
- (id)initWithName:(id)arg1 filtersDictionary:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
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
@property NSString *collectionName;
@property BOOL matchAny;
@property NSArray *filters;
- (id)copyForMerge:(id)arg1;
- (BOOL)merge:(id)arg1 withDelegate:(id)arg2;
- (BOOL)merge:(id)arg1;
- (BOOL)isEqualToSmartCollection:(id)arg1;
- (BOOL)actionRename:(id)arg1 error:(id *)arg2;
- (BOOL)actionEnd:(id)arg1 save:(BOOL)arg2 error:(id *)arg3;
- (void)actionBegin:(id)arg1;
- (BOOL)_actionEndEditing:(BOOL)arg1 error:(id *)arg2;
- (void)_actionBeginEditing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *detailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL hasDetailSubitems;
@property(readonly, nonatomic) BOOL hasDetailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL hasItems;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *itemDisplayNameExtraText;
@property(readonly, nonatomic) BOOL itemIsPlaceholder;
@property(readonly, nonatomic) double itemRowHeight;
@property(readonly) Class superclass;

@end

