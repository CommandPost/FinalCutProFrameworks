//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

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
