//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPanel, NSPopUpButton, NSTextField;

@interface OZRestoreProjectController : NSObject
{
    NSPanel *_pPanel;
    NSTextField *_pProjectNameLabel;
    NSPopUpButton *_pDatePopUp;
}

+ (id)pickRestoreFrom:(id)arg1 projectName:(id)arg2 sheetWindow:(id)arg3;
- (void)restore:(id)arg1;
- (void)cancel:(id)arg1;
- (id)openWithPairs:(id)arg1 projectName:(id)arg2 sheetWindow:(id)arg3;
- (id)relativeDateString:(id)arg1;

@end

