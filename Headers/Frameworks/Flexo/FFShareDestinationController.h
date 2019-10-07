//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class FFShareDestination, FFSharePanelRolesViewController, LKButton, LKImageView, LKPopUpButton, LKTextField, NSArray, NSPopUpButton, NSSet, NSStackView, NSString, NSTextField, NSView;

@interface FFShareDestinationController : NSViewController
{
    NSView *_headerView;
    LKImageView *_imageView;
    LKTextField *_name;
    LKTextField *_infoText;
    NSView *_expandableView;
    LKPopUpButton *_sizePopup;
    NSArray *_destinations;
    NSArray *_sources;
    BOOL _hasConsumerView;
    CDUnknownBlockType _completionHandler;
    LKPopUpButton *_colorSpacePopUpButton;
    LKPopUpButton *_colorChannelsPopUpButton;
    LKButton *_entireProjectRadioButton;
    LKButton *_playRangeRadioButton;
    LKTextField *_projectionTypeTextField;
    LKTextField *_projectionTypeLabelTextField;
    LKTextField *_colorSpaceTextField;
    LKTextField *_colorChannelsTextField;
    NSStackView *_captionsEmbedStackView;
    LKPopUpButton *_captionsPopup;
    NSTextField *_captionsLabel;
    NSStackView *_captionsBurnInStackView;
    LKPopUpButton *_captionsBurnInPopup;
    NSTextField *_captionsBurnInLabel;
    NSSet *_applicableEmbedCaptionRoles;
    NSSet *_applicableBurnInCaptionRoles;
    NSString *_projectionTypeDisplayName;
    NSStackView *_exportSelectedLayersStackView;
    NSStackView *_durationStackView;
    NSStackView *_colorChannelsStackView;
    FFSharePanelRolesViewController *_rolesViewController;
    NSSet *_applicableEmbedCaptionFormats;
    NSSet *_applicableBurnInCaptionFormats;
    id <FFShareDestinationSettingsMenuDelegate> _settingsMenuDelegate;
}

+ (id)keyPathsForValuesAffectingDisplaysDisabledRolesInfo;
+ (id)inactiveHighlightGradient;
+ (id)activeHighlightGradient;
+ (id)shareDestinationControllerForDestination:(id)arg1 withSources:(id)arg2;
@property(retain, nonatomic) id <FFShareDestinationSettingsMenuDelegate> settingsMenuDelegate; // @synthesize settingsMenuDelegate=_settingsMenuDelegate;
@property(nonatomic) NSStackView *captionsBurnInStackView; // @synthesize captionsBurnInStackView=_captionsBurnInStackView;
@property(nonatomic) NSStackView *captionsEmbedStackView; // @synthesize captionsEmbedStackView=_captionsEmbedStackView;
@property(copy, nonatomic) NSSet *applicableBurnInCaptionFormats; // @synthesize applicableBurnInCaptionFormats=_applicableBurnInCaptionFormats;
@property(copy, nonatomic) NSSet *applicableEmbedCaptionFormats; // @synthesize applicableEmbedCaptionFormats=_applicableEmbedCaptionFormats;
@property(retain, nonatomic) FFSharePanelRolesViewController *rolesViewController; // @synthesize rolesViewController=_rolesViewController;
@property(nonatomic) NSTextField *captionsBurnInLabel; // @synthesize captionsBurnInLabel=_captionsBurnInLabel;
@property(nonatomic) LKPopUpButton *captionsBurnInPopup; // @synthesize captionsBurnInPopup=_captionsBurnInPopup;
@property(nonatomic) NSTextField *captionsLabel; // @synthesize captionsLabel=_captionsLabel;
@property(nonatomic) LKPopUpButton *captionsPopup; // @synthesize captionsPopup=_captionsPopup;
@property(nonatomic) NSStackView *colorChannelsStackView; // @synthesize colorChannelsStackView=_colorChannelsStackView;
@property(nonatomic) NSStackView *durationStackView; // @synthesize durationStackView=_durationStackView;
@property(nonatomic) NSStackView *exportSelectedLayersStackView; // @synthesize exportSelectedLayersStackView=_exportSelectedLayersStackView;
@property(nonatomic) LKTextField *colorChannelsTextField; // @synthesize colorChannelsTextField=_colorChannelsTextField;
@property(nonatomic) LKTextField *colorSpaceTextField; // @synthesize colorSpaceTextField=_colorSpaceTextField;
@property(nonatomic) LKTextField *projectionTypeLabelTextField; // @synthesize projectionTypeLabelTextField=_projectionTypeLabelTextField;
@property(nonatomic) LKTextField *projectionTypeTextField; // @synthesize projectionTypeTextField=_projectionTypeTextField;
@property(nonatomic) LKButton *playRangeRadioButton; // @synthesize playRangeRadioButton=_playRangeRadioButton;
@property(nonatomic) LKButton *entireProjectRadioButton; // @synthesize entireProjectRadioButton=_entireProjectRadioButton;
@property(nonatomic) NSPopUpButton *colorChannelsPopUpButton; // @synthesize colorChannelsPopUpButton=_colorChannelsPopUpButton;
@property(nonatomic) NSPopUpButton *colorSpacePopUpButton; // @synthesize colorSpacePopUpButton=_colorSpacePopUpButton;
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(readonly, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
@property(nonatomic) BOOL hasConsumerView; // @synthesize hasConsumerView=_hasConsumerView;
@property(nonatomic) LKPopUpButton *sizePopup; // @synthesize sizePopup=_sizePopup;
@property(retain, nonatomic) NSView *expandableView; // @synthesize expandableView=_expandableView;
@property(retain, nonatomic) LKTextField *infoText; // @synthesize infoText=_infoText;
@property(retain, nonatomic) LKTextField *name; // @synthesize name=_name;
@property(retain, nonatomic) LKImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) NSArray *sourceSettingPairs; // @dynamic sourceSettingPairs;
@property(readonly, nonatomic) FFShareDestination *destination; // @dynamic destination;
- (id)destinationNameByAppendingSignedInUserEmail:(id)arg1 withDestination:(id)arg2;
- (id)destinationNameByAppendingUserNameFrom:(id)arg1 withDestination:(id)arg2;
- (id)destinationNameByRemovingUserNameFrom:(id)arg1 withDestination:(id)arg2;
- (id)extractUsernameFrom:(id)arg1;
- (id)sourceForDestination:(id)arg1;
- (void)burnInCaptionRole:(id)arg1 forDestination:(id)arg2;
- (void)burnInCaption:(id)arg1;
- (void)selectActiveCaptionRolesForBurnIn:(id)arg1;
- (void)embedCaptionRole:(id)arg1 forDestination:(id)arg2;
- (void)embedCaption:(id)arg1;
- (void)selectColorChannels:(id)arg1;
- (void)selectColorSpace:(id)arg1;
- (void)updateDurationFields;
- (BOOL)allDestinationsForCurrentFrameOnly;
- (BOOL)canExportSelectedLayersOnly;
- (void)updateColorChannelsMenu;
- (void)updateColorSpaceMenu;
- (id)colorSpaceMenu;
- (void)updateProjectionTypeFields;
- (void)selectActiveCaptionRolesForEmbed:(id)arg1;
- (void)hideEmbedCaptionsControls;
- (void)setupCaptionsControlsWithEmbedFormats:(id)arg1 andBurnInFormats:(id)arg2;
- (id)activeCaptionRolesWithFormats:(id)arg1;
@property(readonly, nonatomic) NSArray *activeCaptionRolesSuitableForEmbed;
@property(readonly, nonatomic) NSArray *activeCaptionRolesSuitableForBurnIn;
- (id)viewForRolesTab;
- (id)createSettingsMenuDelegate;
- (long long)buildSettingsMenu:(id)arg1 withSize:(BOOL)arg2;
- (BOOL)isAppStorePreview;
- (BOOL)displaysDeviceCompatibilityInfo;
- (BOOL)displaysDisabledRolesInfo;
- (void)showPanel:(BOOL)arg1 modalForWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)colorSpaceDisplayNameWithDestination:(id)arg1 isWideGamut:(char *)arg2;
@property(readonly, copy, nonatomic) NSString *projectionTypeDisplayName; // @synthesize projectionTypeDisplayName=_projectionTypeDisplayName;
- (BOOL)sourceContains360Metadata;
- (int)projectionModeFromSource:(id)arg1;
- (id)colorSpaceDisplayNameWithDestination:(id)arg1;
@property(readonly, copy, nonatomic) NSString *colorSpaceDisplayName; // @dynamic colorSpaceDisplayName;
- (id)theImageForResource:(id)arg1;
- (id)newRolesViewControllerWithDestinations:(id)arg1 andSources:(id)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithDestination:(id)arg1 withSources:(id)arg2;
- (id)initWithNibName:(id)arg1 withDestination:(id)arg2 withSources:(id)arg3;

@end

