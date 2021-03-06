//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class FFAnchoredObject, NSControl, NSMatrix, NSTextField;

__attribute__((visibility("hidden")))
@interface FFCreateEffectBundleWindowController : NSWindowController
{
    NSControl *_bundleNameField;
    NSControl *_partNameField;
    NSMatrix *_effectTypeButton;
    NSTextField *_defaultValueField;
    FFAnchoredObject *_anchoredObject;
}

+ (BOOL)runSheetForItem:(id)arg1 parentWindow:(id)arg2;
- (void)cancel:(id)arg1;
- (void)OK:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithAnchoredObject:(id)arg1;

@end

