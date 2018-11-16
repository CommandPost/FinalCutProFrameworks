//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

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
- (id)initWithAnchoredObject:(id)arg1;
- (void)dealloc;
- (void)windowDidLoad;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)OK:(id)arg1;
- (void)cancel:(id)arg1;

@end
