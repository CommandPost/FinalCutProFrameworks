//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMDPhotoAbstractViewController.h>

#import "FFMDLibraryDelegate.h"
#import "NSMatrixDelegate.h"

@class FFMDPhotoGroupView, FFMDPhotoLibraryGroupTypeQuery, NSArrayController, NSMutableDictionary, NSScrollView, NSString;

__attribute__((visibility("hidden")))
@interface FFMDProPhotoGroupViewController : FFMDPhotoAbstractViewController <FFMDLibraryDelegate, NSMatrixDelegate>
{
    int _libraryType;
    FFMDPhotoGroupView *_groupBrowser;
    NSArrayController *_arrayController;
    NSMutableDictionary *_selectedGroupsKeyedByIdentifier;
    NSString *_previousSelectedGroupsIdentifier;
    FFMDPhotoLibraryGroupTypeQuery *_dataQuery;
    NSScrollView *_scrollView;
}

@property(retain, nonatomic) FFMDPhotoGroupView *groupBrowser; // @synthesize groupBrowser=_groupBrowser;
@property(retain, nonatomic) NSString *previousSelectedGroupsIdentifier; // @synthesize previousSelectedGroupsIdentifier=_previousSelectedGroupsIdentifier;
@property(retain, nonatomic) NSMutableDictionary *selectedGroupsKeyedByIdentifier; // @synthesize selectedGroupsKeyedByIdentifier=_selectedGroupsKeyedByIdentifier;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) FFMDPhotoLibraryGroupTypeQuery *dataQuery; // @synthesize dataQuery=_dataQuery;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)writeViewPrefsToDict:(id)arg1;
- (void)readViewPrefsFromDict:(id)arg1;
- (void)matrixSelectionDidChange:(id)arg1;
- (void)cellDoubleClicked:(id)arg1;
- (BOOL)libraryView:(id)arg1 shouldDisplayItem:(id)arg2;
- (void)filterStringChanged;
- (id)selectedItems;
- (void)restoreSelectionFromGroupIDs:(id)arg1;
- (void)_restoreSelection;
- (void)_saveSelection;
- (id)_selectedGroupsIdentifier;
- (id)initialFirstResponder;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)resetQuery;
- (void)reloadData;
- (void)awakeFromNib;
@property int libraryType; // @synthesize libraryType=_libraryType;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
