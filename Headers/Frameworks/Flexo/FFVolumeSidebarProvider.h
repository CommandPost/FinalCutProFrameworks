//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseSidebarProvider.h>

#import "FFOrganizerMasterItemDropTarget.h"

@class FFStorageLocation, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface FFVolumeSidebarProvider : FFBaseSidebarProvider <FFOrganizerMasterItemDropTarget>
{
    NSString *_itemDisplayName;
    NSImage *_itemIcon;
    FFStorageLocation *_location;
}

+ (id)readableTypesForPasteboard:(id)arg1;
@property(readonly, nonatomic) FFStorageLocation *location; // @synthesize location=_location;
- (BOOL)performDrop:(id)arg1 validatedDragOperation:(unsigned long long)arg2 newSubitemInsertionIndex:(long long)arg3 organizerModule:(id)arg4;
- (unsigned long long)validateDrop:(id)arg1 newSubitemInsertionIndex:(long long)arg2;
- (void)dealloc;
- (id)itemPersistentIdentifier;
- (id)itemIcon;
- (id)itemDisplayName;
- (id)volumeURL;
- (id)initWithLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

