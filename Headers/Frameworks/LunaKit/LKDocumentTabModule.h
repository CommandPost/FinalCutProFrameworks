//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LunaKit/LKTabModule.h>

@interface LKDocumentTabModule : LKTabModule
{
    void *_reserved13;
    void *_reserved14;
    void *_reserved15;
}

+ (void)setDraggedModule:(id)arg1;
+ (void)setShouldInstallDocuments:(BOOL)arg1;
+ (void)initialize;
- (BOOL)_loadLazy;
- (void)windowWillClose:(id)arg1;
- (id)tabView:(id)arg1 contextMenuForTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 canInsertTabViewItem:(id)arg2;
- (void)_documentController:(id)arg1 didCloseDocuments:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)_closeAllDocuments;
- (void)performClose:(id)arg1;
- (id)submoduleLayoutArray;
- (id)label;
- (void)configureSubmodules:(id)arg1;
- (void)removeFromSupermodule;
- (BOOL)loadView;
- (void)dealloc;
- (long long)numberOfDocuments;

@end

