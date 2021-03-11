//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FFPlayerHeliumUsageRequest : NSObject
{
    const struct FxDeviceSet *_resolvedDeviceSet;
    struct FxDevice *_heliumPrefResource;
    _Bool _storeSpecificPath;
    _Bool _userRequestInvalid;
    int _heliumResourceChoicePolicy;
    int _playerMode;
    int _maximumGPUs;
    id _userRequest;
    id _mappedRequest;
}

@property(readonly) int maximumGPUs; // @synthesize maximumGPUs=_maximumGPUs;
@property(readonly) int playerMode; // @synthesize playerMode=_playerMode;
@property(readonly) int heliumResourceChoicePolicy; // @synthesize heliumResourceChoicePolicy=_heliumResourceChoicePolicy;
@property(readonly, retain) id mappedRequest; // @synthesize mappedRequest=_mappedRequest;
@property(readonly) _Bool userRequestInvalid; // @synthesize userRequestInvalid=_userRequestInvalid;
@property(readonly, retain) id userRequest; // @synthesize userRequest=_userRequest;
- (BOOL)isEqualToPlayerHeliumUsageRequest:(id)arg1;
- (id)description;
- (id)userDefaultToWriteOut;
- (const struct FxDevice *)heliumResourceGetPrefResource;
- (const struct FxDeviceSet *)heliumResourceChoices;
- (void)dealloc;
- (id)initWithUserRequest:(id)arg1 userRequestInvalid:(_Bool)arg2 mappedRequest:(id)arg3 heliumChoicePolicy:(int)arg4 maximumGPUs:(int)arg5 deviceSet:(const struct FxDeviceSet *)arg6 prefDevicefApplicable:(struct FxDevice *)arg7 storeSpecificPath:(_Bool)arg8 playerMode:(int)arg9;

@end

