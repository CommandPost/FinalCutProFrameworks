//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class LKDocumentTabModule, LKWindowModule, NSHashTable;

@interface LKWindowModuleController : NSWindowController
{
    NSHashTable *_modulesNeedingUpdate;
    LKWindowModule *_rootModule;
    LKDocumentTabModule *_documentTabModule;
}

+ (id)windowControllerWithModule:(id)arg1;
@property LKDocumentTabModule *documentTabModule; // @synthesize documentTabModule=_documentTabModule;
- (id)customContentSeparatorColorForState:(BOOL)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)removeDocument:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)installAllDocumentsForcefully:(BOOL)arg1;
- (void)installAllDocuments;
- (void)installOneDocument;
- (void)installDocument:(id)arg1;
- (id)description;
- (void)windowWillClose:(id)arg1;
- (void)updateModulesIfNeeded;
- (void)windowDidUpdate:(id)arg1;
- (id)activeModule;
- (void)moduleUpdateStatusDidChange:(id)arg1;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)setRootModule:(id)arg1;
- (id)window;
- (id)rootModule;
- (void)dealloc;
- (id)init;
- (id)initWithWindowNibPath:(id)arg1 owner:(id)arg2;
- (id)initWithWindowNibName:(id)arg1 owner:(id)arg2;
- (id)initWithWindowNibName:(id)arg1;
- (id)initWithWindowModule:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)_removeModuleView;
- (void)_installModuleView;

@end

