//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSLayoutConstraint;

@interface FFMainRoleTableCellView : NSTableCellView
{
    NSButton *_showHideButton;
    NSButton *_removeButton;
    NSButton *_addSubroleButton;
    NSButton *_colorPickerButton;
    NSLayoutConstraint *_showHideWidthConstraint;
}

@property(nonatomic) NSLayoutConstraint *showHideWidthConstraint; // @synthesize showHideWidthConstraint=_showHideWidthConstraint;
@property(nonatomic) NSButton *colorPickerButton; // @synthesize colorPickerButton=_colorPickerButton;
@property(nonatomic) NSButton *addSubroleButton; // @synthesize addSubroleButton=_addSubroleButton;
@property(nonatomic) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) NSButton *showHideButton; // @synthesize showHideButton=_showHideButton;
- (void)awakeFromNib;

@end

