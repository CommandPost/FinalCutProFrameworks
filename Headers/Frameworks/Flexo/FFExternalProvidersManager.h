//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSPopoverDelegate-Protocol.h>

@class LKButton, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSPopover, NSString, NSTimer;

@interface FFExternalProvidersManager : NSObject <NSPopoverDelegate>
{
    NSLock *_lookUpLock;
    NSTimer *_lookUpTimer;
    NSArray *_items;
    NSMutableDictionary *_itemsData;
    NSMutableArray *_plugInWindowControllers;
    BOOL _savingWindowState;
    LKButton *_toolbarItem;
    NSPopover *_pickerPopover;
}

+ (void)releaseSharedInstance;
+ (id)sharedManager;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)windowWillClose:(id)arg1;
- (void)_saveWindowState:(id)arg1 open:(BOOL)arg2;
- (void)restoreProvidersWindowsStateWithArray:(id)arg1;
- (BOOL)isPresentingActiveProvider;
- (BOOL)isPresentingProviders;
- (id)_itemForIdentifier:(id)arg1;
- (id)externalProviderWindowStatesArray;
- (void)saveProvidersWindowsState;
- (void)restoreProvidersWindowsState;
- (id)_toggleExternalItem:(id)arg1 withInfo:(id)arg2;
- (void)toggleExternalItem:(id)arg1;
- (id)_defaultsWindowInformation;
- (void)_plugInMenuAction:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)_plugInPopoverAction:(id)arg1;
- (void)_showPicker:(id)arg1;
- (void)_toogleSingleItem:(id)arg1;
- (void)_setupToolbarItem;
@property(readonly) LKButton *toolbarItem;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_processServices:(id)arg1;
- (void)_lookUpPlugIns:(id)arg1;
- (void)_stopLookingForPlugIns;
- (void)_startLookingForPlugIns;
- (void)_forceLooking;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

