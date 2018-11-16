//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFCloudAccount;

__attribute__((visibility("hidden")))
@interface FFCloudStorageManager : NSObject
{
    FFCloudAccount *account;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FFCloudAccount *account; // @synthesize account;
- (BOOL)documentStorageIsEnabled;
- (BOOL)documentStorageIsAvailable;
- (id)accountError;
- (BOOL)accountIsActive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateConnectionState;
- (void)_ubiquityIdentityDidChange:(id)arg1;
- (void)_resetConnectionState;
- (void)dealloc;
- (oneway void)release;
- (id)init;

@end

