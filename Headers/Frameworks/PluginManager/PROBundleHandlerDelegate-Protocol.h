//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, PROBundleHandler, PROPlugIn;

@protocol PROBundleHandlerDelegate
- (void)bundleHandler:(PROBundleHandler *)arg1 didError:(NSError *)arg2;
- (void)bundleHandler:(PROBundleHandler *)arg1 didAddPlugIn:(PROPlugIn *)arg2;
- (BOOL)bundleHandler:(PROBundleHandler *)arg1 shouldAddPlugIn:(PROPlugIn *)arg2;
@end

