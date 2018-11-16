//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerItem.h>

#import "FFOrganizerMasterItem.h"

@class FFMediaEventController, FFStorageManagerDispatch, NSArray, NSImage, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FFMediaEventSidebarProvider : FFOrganizerItem <FFOrganizerMasterItem>
{
    FFMediaEventController *_mediaEventController;
    FFStorageManagerDispatch *_storageManagerDispatch;
    BOOL _groupEventsByDisk;
    unsigned long long _groupEventsByDate;
    BOOL _arrangeEventsByMostRecent;
    NSMutableArray *_items;
    BOOL _itemsUpToDate;
}

+ (id)keyPathsForValuesAffectingMasterSubitems;
+ (id)readableTypesForPasteboard:(id)arg1;
- (id)sortEvents:(id)arg1;
@property(nonatomic) BOOL groupEventsByDisk; // @synthesize groupEventsByDisk=_groupEventsByDisk;
@property(nonatomic) unsigned long long groupEventsByDate; // @synthesize groupEventsByDate=_groupEventsByDate;
@property(nonatomic) BOOL arrangeEventsByMostRecent; // @synthesize arrangeEventsByMostRecent=_arrangeEventsByMostRecent;
@property(readonly, nonatomic) NSArray *sortDescriptorsForEvents;
@property(readonly, nonatomic) NSArray *items;
- (void)setItemsUpToDate:(id)arg1;
@property(readonly, nonatomic) BOOL hasMasterSubitems;
@property(readonly, nonatomic) BOOL hasItems;
@property(readonly, nonatomic) NSArray *detailSubitems;
@property(readonly, nonatomic) BOOL hasDetailSubitems;
@property(readonly, nonatomic) NSString *itemDisplayName;
@property(readonly, nonatomic) NSImage *itemIcon;
@property(readonly, nonatomic) NSArray *masterSubitems;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

// Remaining properties
@property(readonly, nonatomic) NSArray *detailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL hasDetailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL itemDisplayNameEditable; // @dynamic itemDisplayNameEditable;
@property(readonly, nonatomic) NSString *itemDisplayNameExtraText;
@property(readonly, nonatomic) BOOL itemIsPlaceholder;
@property(readonly, nonatomic) NSString *itemPersistentIdentifier;
@property(readonly, nonatomic) double itemRowHeight;

@end
