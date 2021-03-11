//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Flexo/FFSharePanelEditTrackAccessoryViewControllerProtocol-Protocol.h>

@class CKRole, FFSharePanelVideoChildBrick, NSPopUpButton;

__attribute__((visibility("hidden")))
@interface FFSharePanelEditTrackCaptionsAccessoryViewController : NSViewController <FFSharePanelEditTrackAccessoryViewControllerProtocol>
{
    BOOL _shouldSelectActiveCaptionRolesForEmbed;
    BOOL _shouldSelectActiveCaptionRolesForBurnIn;
    NSPopUpButton *_embedPopUpButton;
    NSPopUpButton *_burnInPopUpButton;
    CKRole *_embeddedCaptionRole;
    CKRole *_burnInCaptionRole;
}

@property(retain, nonatomic) CKRole *burnInCaptionRole; // @synthesize burnInCaptionRole=_burnInCaptionRole;
@property(retain, nonatomic) CKRole *embeddedCaptionRole; // @synthesize embeddedCaptionRole=_embeddedCaptionRole;
@property(nonatomic) BOOL shouldSelectActiveCaptionRolesForBurnIn; // @synthesize shouldSelectActiveCaptionRolesForBurnIn=_shouldSelectActiveCaptionRolesForBurnIn;
@property(nonatomic) BOOL shouldSelectActiveCaptionRolesForEmbed; // @synthesize shouldSelectActiveCaptionRolesForEmbed=_shouldSelectActiveCaptionRolesForEmbed;
@property(nonatomic) NSPopUpButton *burnInPopUpButton; // @synthesize burnInPopUpButton=_burnInPopUpButton;
@property(nonatomic) NSPopUpButton *embedPopUpButton; // @synthesize embedPopUpButton=_embedPopUpButton;
- (void)applyDataModelChanges;
- (void)selectActiveCaptionRolesForBurnIn:(id)arg1;
- (void)selectActiveCaptionRolesForEmbed:(id)arg1;
- (void)burnInCaption:(id)arg1;
- (void)embedCaption:(id)arg1;
- (void)selectMenuOptionInPopUpButton:(id)arg1 forRepresentedObject:(id)arg2;
- (id)menuForCaptionsWithFormats:(id)arg1 selectRole:(SEL)arg2 selectActive:(SEL)arg3;
- (id)menuForBurnInButton;
- (id)menuForEmbedButton;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithBrick:(id)arg1;

// Remaining properties
@property(retain) FFSharePanelVideoChildBrick *representedObject; // @dynamic representedObject;

@end

