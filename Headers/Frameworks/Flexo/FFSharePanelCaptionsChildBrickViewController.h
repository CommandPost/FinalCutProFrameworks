//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFSharePanelBrickViewController.h>

@class FFSharePanelCaptionsChildBrick, NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface FFSharePanelCaptionsChildBrickViewController : FFSharePanelBrickViewController
{
    NSTextField *_typeLabel;
    NSButton *_checkbox;
    NSButton *_includeFormattingCheckbox;
}

@property NSButton *includeFormattingCheckbox; // @synthesize includeFormattingCheckbox=_includeFormattingCheckbox;
@property(nonatomic) NSButton *checkbox; // @synthesize checkbox=_checkbox;
@property(nonatomic) NSTextField *typeLabel; // @synthesize typeLabel=_typeLabel;
- (void)toggleIncludeFormatting:(id)arg1;
- (void)toggle:(id)arg1;
- (void)reloadData;
- (void)viewDidLoad;

// Remaining properties
@property(retain) FFSharePanelCaptionsChildBrick *representedObject; // @dynamic representedObject;

@end
