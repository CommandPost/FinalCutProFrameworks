//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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
