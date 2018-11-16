//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSAnimationDelegate.h"

@class FFStorageLocation, NSOpenPanel, NSPopUpButton;

@interface FFXMLImportDialogController : NSViewController <NSAnimationDelegate>
{
    NSOpenPanel *_panel;
    NSPopUpButton *_storagePopup;
    FFStorageLocation *_storageLocation;
}

- (id)storageLocation;
- (void)updateLocationPopup;
- (void)storageChanged:(id)arg1;
- (id)initWithOpenPanel:(id)arg1 openProjects:(id)arg2;
- (void)dealloc;

@end
