//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSharePanelParentBrickViewController.h>

@class FFSharePanelMultitrackParentBrick, NSButton, NSImageView, NSTextField;

__attribute__((visibility("hidden")))
@interface FFSharePanelMultitrackParentBrickViewController : FFSharePanelParentBrickViewController
{
    NSTextField *_typeLabel;
    NSImageView *_typeIcon;
    NSButton *_addVideoButton;
}

@property(nonatomic) NSButton *addVideoButton; // @synthesize addVideoButton=_addVideoButton;
@property(nonatomic) NSImageView *typeIcon; // @synthesize typeIcon=_typeIcon;
@property(nonatomic) NSTextField *typeLabel; // @synthesize typeLabel=_typeLabel;
- (void)addVideoChildBrick:(id)arg1;
- (void)addAudioChildBrick:(id)arg1;
- (id)addButtonTitleString;
- (void)reloadData;

// Remaining properties
@property(retain) FFSharePanelMultitrackParentBrick *representedObject; // @dynamic representedObject;

@end

