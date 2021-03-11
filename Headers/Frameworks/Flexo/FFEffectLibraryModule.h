//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFArrangedItemsModule.h>

@class FFEffectLibraryCollectionView, FFLibrary, LKButton, LKScrollView, NSPopUpButton, NSString, NSView;
@protocol FFEffectLibraryModuleDelegate;

__attribute__((visibility("hidden")))
@interface FFEffectLibraryModule : FFArrangedItemsModule
{
    FFEffectLibraryCollectionView *_effectCollectionView;
    LKScrollView *_scrollView;
    NSView *headerView;
    NSPopUpButton *_contentLibraryPopupButton;
    LKButton *_show4KContentButton;
    NSString *_searchString;
    BOOL _active;
    NSString *_effectRegistryOwnerFilter;
    FFLibrary *_contentLibrary;
}

@property(nonatomic) FFLibrary *contentLibrary; // @synthesize contentLibrary=_contentLibrary;
@property(retain) NSString *effectRegistryOwnerFilter; // @synthesize effectRegistryOwnerFilter=_effectRegistryOwnerFilter;
@property(retain) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly) FFEffectLibraryCollectionView *effectCollectionView; // @synthesize effectCollectionView=_effectCollectionView;
- (void)moduleDidUnhide;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (void)_sequenceChangedNotiifcation:(id)arg1;
- (void)_sequenceChanged:(id)arg1;
- (void)set4kCheckboxForSequence:(id)arg1;
- (void)firstResponderChanged:(id)arg1;
- (void)show4KContentAction:(id)arg1;
- (BOOL)_shouldOnlyShow4KContent;
- (void)contentLibraryAction:(id)arg1;
- (void)updateContentLibraryPopup;
- (void)libraryRenamed:(id)arg1;
- (void)documentWasRemoved:(id)arg1;
- (void)documentWasAdded:(id)arg1;
- (id)effectsFilteredByContentLocation:(id)arg1;
- (void)writeSelectionToPasteboard:(id)arg1;
- (id)targetModules;
- (void)redrawCollectionView;
- (void)updateFilter;
- (void)module:(id)arg1 didDoubleClickWithEffect:(id)arg2;
- (void)module:(id)arg1 didDoubleClickWithEffectID:(id)arg2;
- (void)didChangeArrangedItems:(id)arg1;
- (void)syncToEffectFolder:(id)arg1;
- (void)setArrangedItems:(id)arg1;
- (void)addScrollViewDescription;
@property(nonatomic) id <FFEffectLibraryModuleDelegate> delegate;

@end

