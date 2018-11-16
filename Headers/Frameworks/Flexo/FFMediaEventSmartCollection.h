//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "FFMediaEventFolderObject.h"
#import "FFOrganizerFilterHUDDelegate.h"
#import "FFOrganizerItemDraggingSource.h"
#import "FFOrganizerMasterItem.h"

@class FFMediaEventFolder, NSArray, NSDictionary, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface FFMediaEventSmartCollection : FFBaseDSObject <FFOrganizerMasterItem, FFOrganizerItemDraggingSource, FFMediaEventFolderObject, FFOrganizerFilterHUDDelegate>
{
    NSString *_name;
    NSDictionary *_filtersDictionary;
    FFMediaEventFolder *_parentFolder;
}

+ (int)matchingTypeIterationOption;
+ (id)newFavoritesSmartCollection;
+ (id)newStillsSmartCollection;
+ (id)newAudioOnlySmartCollection;
+ (id)newVideoSmartCollection;
+ (id)newProjectsSmartCollection;
+ (id)copyClassDescription;
+ (id)keyPathsForValuesAffectingItemDisplayName;
- (void)update_fixAnalysisKeywords;
- (id)duplicate;
@property(retain, nonatomic) NSDictionary *filtersDictionary;
- (id)roleSetsForCurrentProject;
- (id)keywordsForCurrentProject;
- (void)filterHUDDidUpdate:(id)arg1;
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

