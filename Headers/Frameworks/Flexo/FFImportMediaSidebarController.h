//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMediaSidebarController.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface FFImportMediaSidebarController : FFMediaSidebarController
{
    NSDate *_lastAlertTime;
}

@property(retain) NSDate *lastAlertTime; // @synthesize lastAlertTime=_lastAlertTime;
- (id)outlineView:(id)arg1 contextMenuForRow:(long long)arg2;
- (BOOL)outlineView:(id)arg1 keyDown:(id)arg2;
- (BOOL)acceptDrop:(id)arg1 onNode:(id)arg2 atChildIndex:(long long)arg3;
- (unsigned long long)validateDrop:(id)arg1 onNode:(id)arg2 atChildIndex:(long long)arg3;
- (id)supportedDragTypes;
- (void)ensureSidebarSelection;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)selectionShouldChangeInOutlineView:(id)arg1;
- (id)newMediaRootNode;
- (void)configureSidebar;
- (void)dealloc;

@end

