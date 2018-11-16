//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMDModule.h>

#import "FFMDPhotoViewControllerDataSource.h"
#import "FFMDPhotoViewControllerDelegate.h"

@class FFMDPhotoAbstractViewController, FFMDPhotoGroupViewController, FFMDPhotoObjectViewController, FFMDPhotoPlacesViewController, FigTimeRangeAndObject, LKButton, LKImageView, LKPopUpButton, LKProgressIndicator, NSArray, NSView;

@interface FFMDPhotoLibraryModule : FFMDModule <FFMDPhotoViewControllerDataSource, FFMDPhotoViewControllerDelegate>
{
    FFMDPhotoGroupViewController *_groupViewController;
    FFMDPhotoPlacesViewController *_placesViewController;
    FFMDPhotoObjectViewController *_objectViewController;
    FFMDPhotoAbstractViewController *_displayedViewController;
    NSView *_navigationContainer;
    LKPopUpButton *_groupChooserPopUp;
    LKButton *_displayedGroupButton;
    LKButton *_allButton;
    LKImageView *_popupSeparator;
    LKImageView *_allButtonSeparator;
    LKPopUpButton *_typeFilterPopUp;
    LKProgressIndicator *_loadingProgressIndicator;
    int _libraryType;
    NSArray *_displayedGroupTypes;
    NSArray *_displayedGroupIDs;
    NSArray *_lastSelectedIPhotoGroupTypes;
    NSArray *_lastSelectedIPhotoGroupIDs;
    NSArray *_lastSelectedIPhotoObjectROs;
    FigTimeRangeAndObject *_lastIPhotoPlayheadRO;
    NSArray *_lastSelectedApertureGroupTypes;
    NSArray *_lastSelectedApertureGroupIDs;
    NSArray *_lastSelectedApertureObjectROs;
    FigTimeRangeAndObject *_lastAperturePlayheadRO;
    double _rightDraggableExclusionMargin;
    double _leftDraggableExclusionMargin;
}

+ (id)_displayableGroupTypesForLibraryType:(int)arg1;
@property(retain, nonatomic) FigTimeRangeAndObject *lastAperturePlayheadRO; // @synthesize lastAperturePlayheadRO=_lastAperturePlayheadRO;
@property(retain, nonatomic) NSArray *lastSelectedApertureObjectROs; // @synthesize lastSelectedApertureObjectROs=_lastSelectedApertureObjectROs;
@property(retain, nonatomic) NSArray *lastSelectedApertureGroupIDs; // @synthesize lastSelectedApertureGroupIDs=_lastSelectedApertureGroupIDs;
@property(retain, nonatomic) NSArray *lastSelectedApertureGroupTypes; // @synthesize lastSelectedApertureGroupTypes=_lastSelectedApertureGroupTypes;
@property(retain, nonatomic) FigTimeRangeAndObject *lastIPhotoPlayheadRO; // @synthesize lastIPhotoPlayheadRO=_lastIPhotoPlayheadRO;
@property(retain, nonatomic) NSArray *lastSelectedIPhotoObjectROs; // @synthesize lastSelectedIPhotoObjectROs=_lastSelectedIPhotoObjectROs;
@property(retain, nonatomic) NSArray *lastSelectedIPhotoGroupIDs; // @synthesize lastSelectedIPhotoGroupIDs=_lastSelectedIPhotoGroupIDs;
@property(retain, nonatomic) NSArray *lastSelectedIPhotoGroupTypes; // @synthesize lastSelectedIPhotoGroupTypes=_lastSelectedIPhotoGroupTypes;
@property(retain, nonatomic) NSArray *displayedGroupIDs; // @synthesize displayedGroupIDs=_displayedGroupIDs;
@property(retain, nonatomic) NSArray *displayedGroupTypes; // @synthesize displayedGroupTypes=_displayedGroupTypes;
@property(nonatomic) int libraryType; // @synthesize libraryType=_libraryType;
@property LKProgressIndicator *loadingProgressIndicator; // @synthesize loadingProgressIndicator=_loadingProgressIndicator;
@property LKPopUpButton *typeFilterPopUp; // @synthesize typeFilterPopUp=_typeFilterPopUp;
@property LKImageView *allButtonSeparator; // @synthesize allButtonSeparator=_allButtonSeparator;
@property LKImageView *popupSeparator; // @synthesize popupSeparator=_popupSeparator;
@property LKButton *allButton; // @synthesize allButton=_allButton;
@property LKButton *displayedGroupButton; // @synthesize displayedGroupButton=_displayedGroupButton;
@property LKPopUpButton *groupChooserPopUp; // @synthesize groupChooserPopUp=_groupChooserPopUp;
@property NSView *navigationContainer; // @synthesize navigationContainer=_navigationContainer;
@property(nonatomic) FFMDPhotoAbstractViewController *displayedViewController; // @synthesize displayedViewController=_displayedViewController;
@property(retain, nonatomic) FFMDPhotoObjectViewController *objectViewController; // @synthesize objectViewController=_objectViewController;
@property(retain, nonatomic) FFMDPhotoPlacesViewController *placesViewController; // @synthesize placesViewController=_placesViewController;
@property(retain, nonatomic) FFMDPhotoGroupViewController *groupViewController; // @synthesize groupViewController=_groupViewController;
- (double)leftDraggableExclusionMargin;
- (double)rightDraggableExclusionMargin;
- (void)_updateDisplayedViewController;
- (void)_syncGroupChooserToSelectedGroup;
- (void)_setupGroupChooserPopUp;
- (void)_updateHeader;
- (void)_headerFrameDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setContents:(id)arg1;
- (void)_restorePhotoObjectSelectionAndPlayheadState;
- (void)_savePhotoObjectSelectionAndPlayheadState;
- (void)photoViewController:(id)arg1 displayContentsOfGroups:(id)arg2;
- (id)displayedGroupTypesForPhotoViewController:(id)arg1;
- (int)libraryTypeForPhotoViewController:(id)arg1;
- (id)photoPluginForPhotoViewController:(id)arg1;
- (void)reloadData;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)goBack:(id)arg1;
- (void)filterByType:(id)arg1;
- (void)search:(id)arg1;
- (void)chooseGroupTypes:(id)arg1;
- (void)loop:(id)arg1;
- (void)playFromStart:(id)arg1;
- (void)playAroundCurrentFrame:(id)arg1;
- (void)playSelected:(id)arg1;
- (void)playPause:(id)arg1;
- (void)_performPlayerCommandWithCell:(id)arg1 commandBlock:(CDUnknownBlockType)arg2;
- (void)_movePlayheadFromCell:(id)arg1 toCell:(id)arg2;
- (void)down:(id)arg1;
- (void)up:(id)arg1;
- (struct CGPoint)startPointConvertedToView;
- (id)dragImage;
- (BOOL)editActionAllowed;
- (BOOL)writeDataForEditAction:(id)arg1 toPasteboardWithName:(id)arg2;
- (id)dataForEditAction:(id)arg1;
- (BOOL)canSourceDataForEditAction:(id)arg1;
- (void)showSkimmerInfo:(id)arg1;
- (void)revealInFinder:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_cellForNavigationAction;
- (id)localModuleActions;
- (void)syncToModuleFocus;
- (void)setDisplayedViewController:(id)arg1 animate:(BOOL)arg2;
- (void)_setupViewController:(id)arg1;
- (void)writeModulePrefsToDict:(id)arg1;
- (void)readModulePrefsFromDict:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

@end

