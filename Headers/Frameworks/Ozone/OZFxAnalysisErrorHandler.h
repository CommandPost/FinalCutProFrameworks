//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/PXErrorHandling-Protocol.h>

@class NSString, NSWindow;

@interface OZFxAnalysisErrorHandler : NSObject <PXErrorHandling>
{
    NSWindow *documentWindow;
    NSString *pluginName;
    NSString *objectName;
}

- (void)handleWarning:(id)arg1;
- (void)handleFatalError:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(struct OZScene *)arg1 pluginName:(id)arg2 objectName:(id)arg3;

@end

