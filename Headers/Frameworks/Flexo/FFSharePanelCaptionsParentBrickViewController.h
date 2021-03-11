//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFSharePanelBrickViewController.h>

@class FFSharePanelCaptionsParentBrick, NSPopUpButton, NSTextField;

__attribute__((visibility("hidden")))
@interface FFSharePanelCaptionsParentBrickViewController : FFSharePanelBrickViewController
{
    NSTextField *_countLabel;
    NSPopUpButton *_timingModeButton;
}

@property(nonatomic) NSPopUpButton *timingModeButton; // @synthesize timingModeButton=_timingModeButton;
@property(nonatomic) NSTextField *countLabel; // @synthesize countLabel=_countLabel;
- (void)chooseTimingMode:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObservingRepresentedObject:(id)arg1;
- (void)stopObservingRepresentedObject:(id)arg1;
- (void)reloadCount;
- (void)reloadData;
- (void)viewDidLoad;

// Remaining properties
@property(retain) FFSharePanelCaptionsParentBrick *representedObject; // @dynamic representedObject;

@end

