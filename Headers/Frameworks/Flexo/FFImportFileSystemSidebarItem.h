//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerItem.h>

#import "FFOrganizerMasterItem.h"

@class FFImportFileSystemTreeNode, NSArray, NSImage, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FFImportFileSystemSidebarItem : FFOrganizerItem <FFOrganizerMasterItem>
{
    FFImportFileSystemTreeNode *_rootNode;
    NSMutableArray *_items;
    BOOL _canRemove;
    float _percentDone;
    NSImage *_icon;
    BOOL _isFavorite;
}

+ (id)sidebarItemWithTreeNode:(id)arg1 isFavorite:(BOOL)arg2;
+ (id)sidebarItemWithURL:(id)arg1 isFavorite:(BOOL)arg2;
+ (id)keyPathsForValuesAffectingDisplayMediaSet;
@property BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property float percentDone; // @synthesize percentDone=_percentDone;
@property BOOL canRemove; // @synthesize canRemove=_canRemove;
@property(retain) FFImportFileSystemTreeNode *rootNode; // @synthesize rootNode=_rootNode;
- (BOOL)canCancel;
- (BOOL)isTemporary;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) BOOL hasDetailSubitems;
@property(readonly, nonatomic) NSArray *detailSubitems;
@property(readonly, nonatomic) BOOL hasMasterSubitems;
@property(readonly, nonatomic) NSArray *masterSubitems;
@property(readonly, nonatomic) BOOL hasItems;
- (id)description;
@property(readonly, nonatomic) NSString *itemPersistentIdentifier;
@property(readonly, nonatomic) NSImage *itemIcon;
- (void)setItemDisplayName:(id)arg1;
@property(readonly, nonatomic) BOOL itemDisplayNameEditable;
@property(readonly, nonatomic) NSString *itemDisplayName;
- (id)volumeURL;
- (id)currentURL;
- (id)rootURL;
@property(readonly, nonatomic) FFImportFileSystemTreeNode *currentNode;
- (void)dealloc;
- (id)initWithTreeNode:(id)arg1 isFavorite:(BOOL)arg2;
- (id)initWithURL:(id)arg1 isFavorite:(BOOL)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *detailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL hasDetailSubitemsWhenSelected;
@property(readonly, nonatomic) NSString *itemDisplayNameExtraText;
@property(readonly, nonatomic) BOOL itemIsPlaceholder;
@property(readonly, nonatomic) double itemRowHeight;

@end
