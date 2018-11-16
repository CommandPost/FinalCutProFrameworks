//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class LKDocumentTabModule, LKWindowModule, NSHashTable;

@interface LKWindowModuleController : NSWindowController
{
    NSHashTable *_modulesNeedingUpdate;
    LKWindowModule *_rootModule;
    LKDocumentTabModule *_documentTabModule;
}

+ (id)windowControllerWithModule:(id)arg1;
- (void)_installModuleView;
- (void)_removeModuleView;
- (id)initWithWindow:(id)arg1;
- (id)initWithWindowModule:(id)arg1;
- (id)initWithWindowNibName:(id)arg1;
- (id)initWithWindowNibName:(id)arg1 owner:(id)arg2;
- (id)initWithWindowNibPath:(id)arg1 owner:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)rootModule;
- (id)window;
- (void)setRootModule:(id)arg1;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)moduleUpdateStatusDidChange:(id)arg1;
- (id)activeModule;
- (void)windowDidUpdate:(id)arg1;
- (void)updateModulesIfNeeded;
- (void)windowWillClose:(id)arg1;
- (id)description;
- (void)installDocument:(id)arg1;
- (void)installOneDocument;
- (void)installAllDocuments;
- (void)installAllDocumentsForcefully:(BOOL)arg1;
- (void)setDocument:(id)arg1;
- (void)removeDocument:(id)arg1;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)windowDidBecomeMain:(id)arg1;
- (id)customContentSeparatorColorForState:(BOOL)arg1;
@property LKDocumentTabModule *documentTabModule; // @synthesize documentTabModule=_documentTabModule;

@end

