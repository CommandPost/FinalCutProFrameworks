//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Flexo/NSMenuDelegate-Protocol.h>
#import <Flexo/NSTableViewDataSource-Protocol.h>
#import <Flexo/NSTableViewDelegate-Protocol.h>
#import <Flexo/NSWindowDelegate-Protocol.h>

@class LKEmptyDFRController, LKPopUpButton, LKSearchField, LKTableView, LKTextField, NSArray, NSArrayController, NSMutableArray, NSMutableDictionary, NSPredicate, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface FFViewSetEditorWindowController : NSWindowController <NSWindowDelegate, NSMenuDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    NSArrayController *_propertiesController;
    NSArrayController *_filterCategoriesController;
    LKTableView *_extendedViewSetsTableView;
    LKPopUpButton *_checkBoxColumnPopUpButton;
    LKPopUpButton *_extendedViewSetsActionPopUpButton;
    LKTableView *_propertiesTableView;
    LKPopUpButton *_filterCategoriesPopUpButton;
    LKSearchField *_propertiesSearchField;
    NSWindow *_addCustomMetadataWindow;
    LKTextField *_customMetadataNameTextField;
    LKTextField *_customMetadataDescriptionTextField;
    NSWindow *_saveMetadataViewWindow;
    LKEmptyDFRController *_dfrController;
    NSArrayController *_extendedViewSetsController;
    NSMutableDictionary *_customMetadataDictionary;
    NSMutableDictionary *_removedCustomMetadataDictionary;
    NSMutableArray *_extendedViewSets;
    NSArray *_filterCategories;
    NSString *_filterCategoryFormat;
    NSString *_filterCategoryValue;
    NSPredicate *_filterPredicate;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain) NSString *filterCategoryValue; // @synthesize filterCategoryValue=_filterCategoryValue;
@property(retain) NSString *filterCategoryFormat; // @synthesize filterCategoryFormat=_filterCategoryFormat;
@property(retain) NSArray *filterCategories; // @synthesize filterCategories=_filterCategories;
@property(retain) NSMutableArray *extendedViewSets; // @synthesize extendedViewSets=_extendedViewSets;
@property(retain) NSMutableDictionary *removedCustomMetadataDictionary; // @synthesize removedCustomMetadataDictionary=_removedCustomMetadataDictionary;
@property(retain) NSMutableDictionary *customMetadataDictionary; // @synthesize customMetadataDictionary=_customMetadataDictionary;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)filterCompoundPredicate;
@property(retain) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
- (BOOL)isDefaultViewSet:(id)arg1;
- (void)uncheckAll:(id)arg1;
- (void)checkAll:(id)arg1;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (void)remove:(id)arg1;
- (void)insert:(id)arg1;
- (void)resetMetadataView:(id)arg1;
- (void)saveMetadataViewAs:(id)arg1;
- (void)saveMetadataViewAction:(id)arg1;
- (void)saveMetadataView:(id)arg1;
- (void)deleteCustomMetadata:(id)arg1;
- (void)editCustomMetadata:(id)arg1;
- (void)addCustomMetadata:(id)arg1;
- (void)setCustomMetadataAction:(id)arg1;
- (void)saveMetadataViewSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)saveMetadataViewAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (unsigned long long)indexOfExtendedViewSetWithName:(id)arg1;
- (void)setCustomMetadataSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)setCustomMetadataAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)removeCustomMetadataWithKey:(id)arg1;
- (void)addCustomMetadataWithName:(id)arg1 description:(id)arg2;
- (void)windowWillClose:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)toggleCheckBoxOnSelectedItems;
- (BOOL)setSelectionIndexes:(id)arg1;
- (long long)runModal;
- (id)touchBar;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

