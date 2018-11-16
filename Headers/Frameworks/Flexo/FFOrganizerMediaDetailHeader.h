//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class LKButton, LKMenu, LKPopUpButton, NSObject<FFOrganizerMediaDetailHeaderProtocol>, NSView;

__attribute__((visibility("hidden")))
@interface FFOrganizerMediaDetailHeader : NSViewController
{
    NSView *_upperAccessoryView;
    LKPopUpButton *_filterPopup;
    LKButton *_searchButton;
    LKButton *_modeToggleButton;
    LKButton *_gearMenuButton;
    LKMenu *_filterPulldownMenu;
    NSObject<FFOrganizerMediaDetailHeaderProtocol> *_headerDelegate;
}

@property(nonatomic) NSObject<FFOrganizerMediaDetailHeaderProtocol> *headerDelegate; // @synthesize headerDelegate=_headerDelegate;
@property(nonatomic) LKMenu *filterPulldownMenu; // @synthesize filterPulldownMenu=_filterPulldownMenu;
@property(nonatomic) LKButton *gearMenuButton; // @synthesize gearMenuButton=_gearMenuButton;
@property(nonatomic) LKButton *modeToggleButton; // @synthesize modeToggleButton=_modeToggleButton;
@property(nonatomic) LKButton *searchButton; // @synthesize searchButton=_searchButton;
@property(nonatomic) LKPopUpButton *filterPopup; // @synthesize filterPopup=_filterPopup;
@property(nonatomic) NSView *upperAccessoryView; // @synthesize upperAccessoryView=_upperAccessoryView;
- (void)updateUI;
- (void)gearMenuButton:(id)arg1;
- (void)modeToggleButtonAction:(id)arg1;
- (void)searchButtonAction:(id)arg1;
- (void)filterPopupAction:(id)arg1;
- (void)viewDidLoad;
- (id)_toolTip:(id)arg1 forProCommand:(id)arg2;
- (id)nibBundle;
- (id)nibName;

@end

