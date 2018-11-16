//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMDModule.h>

#import "FFMDLibraryDelegate.h"
#import "NSMatrixDelegate.h"

@class FFMDEventLibraryView, LKImageView, LKMenu, NSArray, NSArrayController, NSScrollView;

@interface FFMDEventLibraryModule : FFMDModule <FFMDLibraryDelegate, NSMatrixDelegate>
{
    FFMDEventLibraryView *_eventsBrowser;
    NSArray *_selectedIDs;
    NSArrayController *_eventsController;
    NSArray *_eventLibraries;
    NSScrollView *_scrollView;
    LKImageView *_eventIcon;
    LKMenu *_cellContextMenu;
    long long _arrangeType;
    BOOL _arrangeDirection;
    BOOL _hasSetupBindings;
    BOOL _firstReload;
}

@property(retain, nonatomic) NSArray *eventLibraries; // @synthesize eventLibraries=_eventLibraries;
@property(nonatomic) BOOL arrangeDirection; // @synthesize arrangeDirection=_arrangeDirection;
@property(nonatomic) long long arrangeType; // @synthesize arrangeType=_arrangeType;
@property(nonatomic) LKMenu *cellContextMenu; // @synthesize cellContextMenu=_cellContextMenu;
@property(nonatomic) LKImageView *eventIcon; // @synthesize eventIcon=_eventIcon;
@property(nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *selectedIDs; // @synthesize selectedIDs=_selectedIDs;
@property(retain, nonatomic) FFMDEventLibraryView *eventsBrowser; // @synthesize eventsBrowser=_eventsBrowser;
- (BOOL)writeDataForEditAction:(id)arg1 toPasteboardWithName:(id)arg2;
- (id)dataForEditAction:(id)arg1;
- (BOOL)canSourceDataForEditAction:(id)arg1;
- (void)matrixSelectionDidChange:(id)arg1;
- (void)makeKeyThumbnail:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)arrangebySortOrderAction:(id)arg1;
- (void)arrangingingPopUpAction:(id)arg1;
- (void)moveToTrash:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)cellDoubleClicked:(id)arg1;
- (void)libraryView:(id)arg1 didSetKeyThumbnailForItem:(id)arg2 cell:(id)arg3 toThumbnailAtIndex:(long long)arg4;
- (BOOL)libraryView:(id)arg1 canSetKeyThumbnailForItem:(id)arg2;
- (void)libraryView:(id)arg1 didRenameItem:(id)arg2 toName:(id)arg3;
- (BOOL)libraryView:(id)arg1 canRenameItem:(id)arg2;
- (BOOL)libraryView:(id)arg1 shouldDisplayItem:(id)arg2;
- (void)writeModulePrefsToDict:(id)arg1;
- (void)readModulePrefsFromDict:(id)arg1;
- (void)syncToSelection;
- (void)syncToModuleFocus;
- (void)setContents:(id)arg1;
- (void)moduleDidHide;
- (void)moduleDidUnhide;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)eventsControllerReload;
- (id)eventsController;
- (id)eventsForItems:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

