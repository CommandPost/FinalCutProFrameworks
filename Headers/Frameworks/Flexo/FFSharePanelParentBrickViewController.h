//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFSharePanelBrickViewController.h>

@class FFSharePanelParentBrick, NSButton, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface FFSharePanelParentBrickViewController : FFSharePanelBrickViewController
{
    NSTextField *_countLabel;
    NSButton *_addButton;
}

@property(nonatomic) NSButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) NSTextField *countLabel; // @synthesize countLabel=_countLabel;
@property(readonly, nonatomic) NSString *addButtonTitleString; // @dynamic addButtonTitleString;
- (id)addButtonTitleWithBaseTitle:(id)arg1;
- (void)reloadData;
- (void)viewDidLoad;

// Remaining properties
@property(retain) FFSharePanelParentBrick *representedObject; // @dynamic representedObject;

@end

