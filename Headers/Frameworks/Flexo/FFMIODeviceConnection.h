//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFOrganizerItem.h>

#import "FFOrganizerMasterItem.h"

@class FFImportTapeDevice, MIODeviceConnection, NSArray, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface FFMIODeviceConnection : FFOrganizerItem <FFOrganizerMasterItem>
{
    MIODeviceConnection *_deviceConnection;
    FFImportTapeDevice *_tapeDevice;
}

+ (id)deviceConnectionWithDeviceConnection:(id)arg1;
@property FFImportTapeDevice *tapeDevice; // @synthesize tapeDevice=_tapeDevice;
@property(retain, nonatomic) MIODeviceConnection *deviceConnection; // @synthesize deviceConnection=_deviceConnection;
@property(readonly, nonatomic) BOOL hasMasterSubitems;
@property(readonly, nonatomic) NSArray *masterSubitems;
@property(readonly, nonatomic) BOOL hasDetailSubitems;
@property(readonly, nonatomic) NSArray *detailSubitems;
@property(readonly, nonatomic) BOOL hasItems;
@property(readonly, nonatomic) NSArray *items;
@property(readonly, nonatomic) NSString *itemPersistentIdentifier;
@property(readonly, nonatomic) NSImage *itemIcon;
@property(readonly, nonatomic) BOOL itemDisplayNameEditable;
- (void)setItemDisplayName:(id)arg1;
@property(readonly, nonatomic) NSString *itemDisplayName;
- (id)initWithDeviceConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *detailSubitemsWhenSelected;
@property(readonly, nonatomic) BOOL hasDetailSubitemsWhenSelected;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *itemDisplayNameExtraText;
@property(readonly, nonatomic) BOOL itemIsPlaceholder;
@property(readonly, nonatomic) double itemRowHeight;
@property(readonly) Class superclass;

@end

