//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSMenu, NSMenuItem;

@protocol FFOrganizerMediaDetailHeaderProtocol
- (void)gearMenuItemSelected:(id)arg1;
- (NSMenu *)menuForGearMenu;
- (void)modeToggleButtonAction:(id)arg1;
- (BOOL)shouldShowModeToggleButton;
- (NSDictionary *)searchFiltersDictionary;
- (void)searchButtonToggled:(BOOL)arg1;
- (BOOL)shouldShowSearchButton;
- (long long)modeToggleState;
- (long long)favFilterType;
- (void)filterMenuItemSelected:(NSMenuItem *)arg1;
- (NSMenu *)menuForFilterMenuPopUp;
@end

