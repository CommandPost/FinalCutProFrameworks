//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSOpenSavePanelDelegate-Protocol.h>

@class NSImageView, NSMutableArray, NSPopUpButton, NSString, NSURL;
@protocol FFLibraryMediaLocationChooserDelegate;

__attribute__((visibility("hidden")))
@interface FFLibraryMediaLocationChooserController : NSObject <NSOpenSavePanelDelegate>
{
    NSPopUpButton *_popUpButton;
    NSImageView *_warningImageView;
    NSMutableArray *_recentDestinations;
    NSURL *_defaultMediaLocation;
    long long _requiredSpaceInBytes;
    long long _defaultSelectTag;
    id <FFLibraryMediaLocationChooserDelegate> _delegate;
    BOOL _isValidLocation;
    NSURL *_currentExternalMediaLocation;
}

@property BOOL isValidLocation; // @synthesize isValidLocation=_isValidLocation;
@property(retain) NSURL *currentExternalMediaLocation; // @synthesize currentExternalMediaLocation=_currentExternalMediaLocation;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (void)updateDefaultMediaLocationURL:(id)arg1;
- (void)setRequiredSpaceInBytes:(long long)arg1;
- (id)toolTipForError:(id)arg1;
- (void)saveRecentMediaLocations;
- (void)loadRecentMediaLocationsWithFirstLocation:(id)arg1;
- (void)validateCurrentMediaLocationUponNotification:(id)arg1;
- (void)validateCurrentMediaLocation;
- (void)openPanelClosed:(id)arg1 withResponse:(long long)arg2;
- (void)chooseNewLocation:(id)arg1;
- (void)clearRecents:(id)arg1;
- (void)locationSelected:(id)arg1;
- (void)updateCurrentMediaLocationMenuItems;
- (BOOL)validateMenuItem:(id)arg1;
- (void)dealloc;
- (id)initWithPopUpButton:(id)arg1 warningImageView:(id)arg2 defaultMediaLocationMenuItemTitle:(id)arg3 recentLocationsMenuItemTitle:(id)arg4 defaultMediaLocation:(id)arg5 initialMediaLocation:(id)arg6 addInitialMediaLocationToRecents:(BOOL)arg7 delegate:(id)arg8;
- (void)selectItemWithTag:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

