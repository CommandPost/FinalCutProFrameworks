//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/NSTextFieldDelegate-Protocol.h>

@class NSString, OZTemplateBrowserController;

@interface OZTBTextFieldDelegate : NSObject <NSTextFieldDelegate>
{
    OZTemplateBrowserController *_templateBrowserController;
}

- (void)controlTextDidChange:(id)arg1;
- (void)setTBController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

