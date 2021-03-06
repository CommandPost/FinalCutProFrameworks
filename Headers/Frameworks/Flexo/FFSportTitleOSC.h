//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFTitleOSC.h>

#import <Flexo/TeamPopupTarget-Protocol.h>

@class LKPopUpButton, NSTextField, NSView, SportsCalloutView;

@interface FFSportTitleOSC : FFTitleOSC <TeamPopupTarget>
{
    NSView *_sportOverlayView;
    SportsCalloutView *m_team1CalloutView;
    SportsCalloutView *m_team2CalloutView;
    NSTextField *m_team1Label;
    NSTextField *m_team2Label;
    LKPopUpButton *m_team1Popup;
    LKPopUpButton *m_team2Popup;
    NSTextField *m_playerLabel;
    LKPopUpButton *m_playerPopup;
    float m_buttonVerticalMargin;
    float m_originalTeam1CalloutViewWidth;
    float m_originalTeam2CalloutViewWidth;
}

- (BOOL)validateMenuItem:(id)arg1;
- (void)resignActiveOSC;
- (void)becomeActiveOSC;
- (void)editTeams:(id)arg1;
- (void)changePlayer:(id)arg1;
- (void)changeTeam2:(id)arg1;
- (void)changeTeam1:(id)arg1;
- (void)addNewPlayer:(id)arg1;
- (void)addNewTeam:(id)arg1;
- (void)doneButton:(id)arg1;
- (void)hitTeamPopup:(id)arg1 teamNumber:(int)arg2;
- (void)initTitleOverlay;
- (void)adjustVisibilityAndLayout;
- (void)updateSportsUI;
- (void)adjustLayout;
- (void)updatePlayerPopup;
- (void)updateTeam2Popup;
- (void)updateTeam1Popup;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end

