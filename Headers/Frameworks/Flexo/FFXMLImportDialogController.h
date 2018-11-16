//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSAnimationDelegate.h"

@class FFLibrary, NSOpenPanel, NSPopUpButton, NSString;

@interface FFXMLImportDialogController : NSViewController <NSAnimationDelegate>
{
    NSOpenPanel *_panel;
    NSPopUpButton *_storagePopup;
    FFLibrary *_storageLocation;
}

- (void)dealloc;
- (id)initWithOpenPanel:(id)arg1;
- (void)storageChanged:(id)arg1;
- (void)updateLocationPopup;
- (id)library;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

