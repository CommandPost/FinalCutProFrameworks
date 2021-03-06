//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FFOrganizerDelegatePassthrough-Protocol.h"

@class FFAnchoredStack, FFEditAction, FFEventMediaSidebarModule, FFMediaEventProject, FFMediaSidebarModule, FFSettingsModule, LKViewModule, NSArray, NSSet;
@protocol FFEditActionSourceProtocol;

@protocol FFOrganizerDelegate <FFOrganizerDelegatePassthrough>
- (id)selectionOwner;
- (void)organizerModule:(LKViewModule *)arg1 didSelectItems:(NSArray *)arg2;

@optional
- (FFMediaSidebarModule *)mediaSidebarModule;
- (void)showInspectorForSidebarModule:(FFEventMediaSidebarModule *)arg1;
- (void)sidebarModuleDidChangeSelection:(FFEventMediaSidebarModule *)arg1;
- (void)ensureSidebarVisible;
- (void)showImportPanelWithKeywords:(NSSet *)arg1 forEvent:(FFMediaEventProject *)arg2;
- (BOOL)isOverlayEditActionAllowed;
- (FFMediaEventProject *)defaultEventForNewProject;
- (void)openSettingsWithModule:(FFSettingsModule *)arg1;
- (BOOL)canPerformEditAction:(FFEditAction *)arg1 withSource:(id <FFEditActionSourceProtocol>)arg2;
- (void)openStack:(FFAnchoredStack *)arg1;
- (double)defaultEditDuration;
@end

