//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZConvertProjectToXControllerBase.h>

@class NSButton, NSPopUpButton;

@interface OZConvertProjectToEffectController : OZConvertProjectToXControllerBase
{
    NSButton *_convertBtn;
    NSButton *_cancelBtn;
    NSPopUpButton *_effectSourcePopUpBtn;
}

- (void)populateWindowUI;
- (unsigned int)selectedEffectSourceNodeID;
- (BOOL)selectedEffectSourceIsNewPlaceholder;
- (id)defaultNibName;
- (id)initWithDocument:(id)arg1;

@end

