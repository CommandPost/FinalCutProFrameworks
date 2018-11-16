//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMediaEventFolder.h>

#import "FFOrganizerItemDraggingSource.h"
#import "FFOrganizerMasterItem.h"
#import "FFOrganizerMasterItemDropTarget.h"

@class NSArray, NSImage, NSString;

@interface FFMediaEventFolder (FFMediaEventFolderBKAdditions) <FFOrganizerMasterItem, FFOrganizerItemDraggingSource, FFOrganizerMasterItemDropTarget>
+ (id)keyPathsForValuesAffectingItemDisplayName;
+ (id)keyPathsForValuesAffectingItems;
+ (id)keyPathsForValuesAffectingMasterSubitems;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (unsigned long long)validateDrop:(id)arg1 newSubitemInsertionIndex:(long long)arg2 event:(id)arg3;
@property(readonly, nonatomic) NSString *itemDisplayName;
- (void)setItemDisplayName:(id)arg1;
@property(readonly, nonatomic) BOOL itemDisplayNameEditable;
@property(readonly, nonatomic) NSImage *itemIcon;
@property(readonly, nonatomic) NSString *itemPersistentIdentifier;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) BOOL hasMasterSubitems;
@property(readonly, nonatomic) NSArray *masterSubitems;
@property(readonly, nonatomic) NSArray *detailSubitems;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)validateDrop:(id)arg1 newSubitemInsertionIndex:(long long)arg2;
- (BOOL)performDrop:(id)arg1 validatedDragOperation:(unsigned long long)arg2 newSubitemInsertionIndex:(long long)arg3 organizerModule:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSArray *detailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL hasDetailSubitems;
@property(readonly, nonatomic) BOOL hasDetailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL hasItems;
@property(readonly, nonatomic) NSString *itemDisplayNameExtraText;
@property(readonly, nonatomic) BOOL itemIsPlaceholder;
@property(readonly, nonatomic) double itemRowHeight;
@end

