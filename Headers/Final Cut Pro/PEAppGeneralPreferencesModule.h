//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferencesModule.h"

#import "NSOpenSavePanelDelegate.h"

@class LKPopUpButton;

@interface PEAppGeneralPreferencesModule : NSProPreferencesModule <NSOpenSavePanelDelegate>
{
    LKPopUpButton *_formatPopUpButton;
}

+ (id)openOrSaveAllowedFileTypes;
+ (id)newTimeFormatter;
@property(nonatomic) LKPopUpButton *formatPopUpButton; // @synthesize formatPopUpButton=_formatPopUpButton;
- (void)resetDialogWarnings:(id)arg1;
- (void)changeTimeFormat:(id)arg1;
- (void)moduleWasInstalled;
- (void)_configureTimecodeFormatter:(id)arg1 forFormat:(long long)arg2;
- (void)_installConfigurationViewForFormat:(long long)arg1;
- (void)awakeFromNib;
- (id)titleForIdentifier:(id)arg1;
- (BOOL)isResizable;
- (void)dealloc;

@end

