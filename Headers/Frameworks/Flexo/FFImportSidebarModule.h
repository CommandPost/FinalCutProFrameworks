//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSidebarModule.h>

__attribute__((visibility("hidden")))
@interface FFImportSidebarModule : FFSidebarModule
{
}

- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidLoad;
- (void)reloadOutlineViewNowWithSidebarProvider:(struct NSObject *)arg1;
- (BOOL)outlineView:(id)arg1 keyDown:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2;
- (void)removeVolumeForRowAtIndexPath:(id)arg1;
- (id)cellIdentifierForNode:(id)arg1;
- (id)createCellWithIdentifier:(id)arg1 forNode:(id)arg2;
- (void)updateCell:(id)arg1 forNode:(id)arg2;

@end
