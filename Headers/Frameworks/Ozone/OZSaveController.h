//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOpenSavePanelDelegate.h"

@class NSButton, NSPopUpButton, NSSavePanel, NSString, NSTextField, NSView, OZObjCDocument, OZSaveManager;

@interface OZSaveController : NSObject <NSOpenSavePanelDelegate>
{
    NSView *_saveView;
    NSPopUpButton *_collectPopUp;
    NSButton *_includeUnusedButton;
    NSTextField *_descriptionText1;
    NSTextField *_descriptionText2;
    OZObjCDocument *_objCDoc;
    NSSavePanel *_savePanel;
    OZSaveManager *_saveManager;
    NSString *_collectMediaOffString1;
    NSString *_collectMediaOffString2;
    NSString *_collectMediaFolderString1;
    NSString *_collectMediaFolderString2;
    NSString *_collectMediaNoSpaceString1;
    NSString *_collectMediaNoSpaceString2;
    unsigned long long _totalSize;
    unsigned long long _mediaSize;
    unsigned long long _unusedSize;
    unsigned long long _freeSize;
    unsigned int _footageListSize;
    unsigned int _totalListSize;
    BOOL _didCancel;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)selectCollectMethod:(id)arg1;
- (void)selectUnused:(id)arg1;
- (void)prepForSave:(id)arg1 withPanel:(id)arg2;
- (void)refreshPanel;
- (SEL)getSaveSelector;
- (void)panel:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (void)_saveEnded:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;

@end
