//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

__attribute__((visibility("hidden")))
@interface FFCaptionValidationError : NSError
{
}

+ (id)errorFailureReasonForValidationErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorDescriptionForValidationErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorStringForValidationError:(id)arg1;
+ (id)code:(long long)arg1 userInfo:(id)arg2;
- (unsigned long long)hash;
- (id)description;

@end

