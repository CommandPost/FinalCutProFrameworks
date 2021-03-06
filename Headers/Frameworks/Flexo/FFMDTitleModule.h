//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFMDLibraryContentModule.h>

#import <Flexo/FFOrganizerMediaDetailSearchHeaderDelegate-Protocol.h>
#import <Flexo/NSPopoverDelegate-Protocol.h>

@class FFAnchoredSequence, FFOrganizerEffectLibraryCollectionView, LKButton, LKImageView, LKPopUpButton, NSArray, NSDictionary, NSPopover, NSScrollView, NSString;

@interface FFMDTitleModule : FFMDLibraryContentModule <FFOrganizerMediaDetailSearchHeaderDelegate, NSPopoverDelegate>
{
    NSScrollView *_scrollView;
    FFOrganizerEffectLibraryCollectionView *_effectCollectionView;
    LKImageView *_headerIcon;
    LKButton *_searchButton;
    LKButton *_gearButton;
    NSPopover *_clipAttributesPopOver;
    LKButton *show4KContentButton;
    LKPopUpButton *_contentLibraryPopupButton;
    id _skimmingDelegate;
    FFAnchoredSequence *_currentSequence;
    NSDictionary *_sortOrder;
    NSString *_searchString;
    NSArray *_categories;
}

@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) FFAnchoredSequence *currentSequence; // @synthesize currentSequence=_currentSequence;
- (void)show4KContentAction:(id)arg1;
- (BOOL)_shouldOnlyShow4KContent;
- (void)contentLibraryAction:(id)arg1;
- (void)updateContentLibraryPopup;
- (double)rightDraggableExclusionMargin;
- (void)firstResponderChanged:(id)arg1;
- (void)searchButtonAction:(id)arg1;
- (void)_updateFilterForCategoryName:(id)arg1;
- (id)titlesFilteredByContentLocation:(id)arg1;
- (void)libraryRenamed:(id)arg1;
- (void)updateFilter:(id)arg1;
- (void)searchHeaderWasDismissed;
- (void)searchHeaderSearchFieldAction:(id)arg1;
- (id)searchFieldToolTip;
- (BOOL)shouldFocusSearchFieldWhenInstalled;
- (BOOL)shouldShowHUDButton;
- (void)notificationHandler:(id)arg1;
- (void)removeNotifications;
- (void)installNotifications;
- (void)reloadDataOnMainThread;
- (void)reloadData:(id)arg1;
- (struct CGPoint)startPointConvertedToView;
- (id)dragImage;
- (BOOL)writeDataForEditAction:(id)arg1 toPasteboardWithName:(id)arg2;
- (id)dataForEditAction:(id)arg1;
- (BOOL)canSourceDataForEditAction:(id)arg1;
- (void)setContents:(id)arg1;
- (void)viewWasInstalled;
- (id)titlesArray;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

