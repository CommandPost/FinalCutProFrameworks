//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEventMediaSidebarModule.h>

@class FFProjectExtrasSidebarController, LKMenu, NSString;

@interface FFConsumerMediaSidebarModule : FFEventMediaSidebarModule
{
    FFProjectExtrasSidebarController *_contentLibrarySidebarController;
    LKMenu *_contextualMenu;
    BOOL _includeCurrentProjectItem;
    BOOL _isAudio;
    NSString *_persistenceKey;
    id _previousSidebarSelectionState;
}

+ (id)defaultModuleNibName;
@property(retain, nonatomic, getter=_previousSidebarSelectionState, setter=_setPreviousSidebarSelectionState:) id previousSidebarSelectionState; // @synthesize previousSidebarSelectionState=_previousSidebarSelectionState;
@property(retain, nonatomic) LKMenu *contextualMenu; // @synthesize contextualMenu=_contextualMenu;
@property(retain, nonatomic) FFProjectExtrasSidebarController *contentLibrarySidebarController; // @synthesize contentLibrarySidebarController=_contentLibrarySidebarController;
@property(copy, nonatomic) NSString *persistenceKey; // @synthesize persistenceKey=_persistenceKey;
@property(readonly) BOOL isAudio; // @synthesize isAudio=_isAudio;
@property(readonly) BOOL includeCurrentProjectItem; // @synthesize includeCurrentProjectItem=_includeCurrentProjectItem;
- (void)selectDisplayType:(int)arg1;
- (void)debug_toggleProjectExtrasSidebarAction:(id)arg1;
- (void)projectExtrasDidSelectNodes:(id)arg1;
- (void)sidebarDidSelectNodes:(id)arg1;
- (void)exportToFinalCut:(id)arg1;
- (void)sortByDateDescending:(id)arg1;
- (void)sortByDateAscending:(id)arg1;
- (void)sortByDate:(id)arg1;
- (void)sortByNameAscending:(id)arg1;
- (void)sortByName:(id)arg1;
- (void)newEvent:(id)arg1;
- (id)localModuleActions;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)hideContentLibrarySidebar:(BOOL)arg1;
- (void)showContentLibrarySidebar:(BOOL)arg1;
- (BOOL)isContentLibrarySidebarVisible;
- (void)setupContentLibrarySidebar;
- (void)syncSidebar;
- (id)contentLayoutDictionary;
- (void)viewDidLoad;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)dealloc;
- (id)initWithAudio:(BOOL)arg1;
- (id)initWithIncludeCurrentProjectItem:(BOOL)arg1;

@end

