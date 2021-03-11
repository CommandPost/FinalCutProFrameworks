//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Flexo/FFSharePanelEditTrackAccessoryViewControllerProtocol-Protocol.h>

@class FFSharePanelAudioChildBrick, NSButton, NSPopUpButton;

__attribute__((visibility("hidden")))
@interface FFSharePanelEditTrackAudioAccessoryViewController : NSViewController <FFSharePanelEditTrackAccessoryViewControllerProtocol>
{
    NSPopUpButton *_downmixingButton;
    NSButton *_splitToMonoButton;
}

@property(nonatomic) NSButton *splitToMonoButton; // @synthesize splitToMonoButton=_splitToMonoButton;
@property(nonatomic) NSPopUpButton *downmixingButton; // @synthesize downmixingButton=_downmixingButton;
- (BOOL)validateMenuItem:(id)arg1;
- (void)applyDataModelChanges;
- (void)chooseAudioChannelLayout:(id)arg1;
- (void)toggleSplitToMono:(id)arg1;
@property(nonatomic) BOOL splitToMono; // @dynamic splitToMono;
- (void)selectMenuOptionInPopUpButton:(id)arg1 forRepresentedObject:(id)arg2;
- (void)viewDidLoad;
- (id)initWithBrick:(id)arg1;

// Remaining properties
@property(retain) FFSharePanelAudioChildBrick *representedObject; // @dynamic representedObject;

@end

