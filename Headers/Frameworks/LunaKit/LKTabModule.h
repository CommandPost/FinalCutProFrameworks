//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

#import "NSTabViewDelegate.h"

@class LKTabView;

@interface LKTabModule : LKViewModule <NSTabViewDelegate>
{
    LKTabView *_tabView;
    LKViewModule *_activeModule;
    unsigned int _bulkRemoval:1;
    unsigned int _unhiding:1;
    unsigned int _reserved4:30;
    void *_reserved5;
    void *_reserved6;
}

+ (Class)tabViewItemClass;
+ (Class)tabViewClass;
+ (void)setDraggedModule:(id)arg1;
@property(retain, nonatomic) LKTabView *tabView; // @synthesize tabView=_tabView;
- (void)tabView:(id)arg1 didInsertTabViewItem:(id)arg2;
- (id)tabView:(id)arg1 contextMenuForTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (void)moduleDidBecomeVisible:(id)arg1;
- (void)toggleModuleVisibility:(id)arg1;
- (BOOL)isSubmoduleVisible:(id)arg1;
- (id)visibleSubmodule;
- (id)visibleSubmodules;
- (id)makeSubmoduleVisible:(id)arg1;
- (BOOL)unhideSubmodule:(id)arg1;
- (BOOL)hideSubmodule:(id)arg1;
- (BOOL)isSubmoduleHidden:(id)arg1;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)endDraggingModule:(id)arg1;
- (void)startDraggingModule:(id)arg1;
- (void)moduleDidChangeLabel:(id)arg1;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)removeSubmodule:(id)arg1;
- (void)removeSubmodules:(id)arg1;
- (void)insertSubmodule:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updateTabAccessoryView;
- (void)viewDidLoad;
- (BOOL)loadView;
- (void)addRepresentedObject:(id)arg1;
- (void)dealloc;
- (void)_removeFromSupermoduleIfNeeded;
- (void)_postWillDeactivateNotification:(id)arg1;
- (void)_postDidActivateNotification:(id)arg1;
- (void)_removeTabViewForModule:(id)arg1;
- (void)_installTabViewForModule:(id)arg1;
- (BOOL)_loadLazy;

@end

