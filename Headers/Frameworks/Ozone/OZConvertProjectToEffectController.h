//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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
- (id)localizedSummaryFormatString;
- (id)defaultNibName;

@end

