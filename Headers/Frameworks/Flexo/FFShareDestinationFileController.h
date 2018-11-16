//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFShareDestinationController.h>

@class NSArrayController, NSPopUpButton;

@interface FFShareDestinationFileController : FFShareDestinationController
{
    NSPopUpButton *_formatPopUpButton;
    NSPopUpButton *_videoResolutionPopUpButton;
    NSArrayController *_audioSettingsController;
    NSArrayController *_videoSettingsController;
    BOOL _observing;
}

@property(nonatomic) NSArrayController *videoSettingsController; // @synthesize videoSettingsController=_videoSettingsController;
@property(nonatomic) NSArrayController *audioSettingsController; // @synthesize audioSettingsController=_audioSettingsController;
@property(nonatomic) NSPopUpButton *videoResolutionPopUpButton; // @synthesize videoResolutionPopUpButton=_videoResolutionPopUpButton;
@property(nonatomic) NSPopUpButton *formatPopUpButton; // @synthesize formatPopUpButton=_formatPopUpButton;
- (struct CGSize)optimalVideoResolution;
- (void)updateVideoResolutionMenu;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)validateMenuItem:(id)arg1;
- (void)selectVideoResolution:(id)arg1;
- (void)selectFormat:(id)arg1;
@property(nonatomic) id <CKStompSetting> selectedVideoSetting;
@property(nonatomic) id <CKStompSetting> selectedAudioSetting;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithDestination:(id)arg1 withSource:(id)arg2;

@end

