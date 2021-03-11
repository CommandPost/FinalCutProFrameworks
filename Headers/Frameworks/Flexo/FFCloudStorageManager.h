//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface FFCloudStorageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    id _iCloudLoginToken;
    NSURL *_iCloudStorageUrl;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void)_ubiquityIdentityDidChange:(id)arg1;
- (void)_checkAccountStatus;
- (id)iCloudStorageUrl;
- (BOOL)accountIsActive;
- (void)dealloc;
- (id)init;

@end

