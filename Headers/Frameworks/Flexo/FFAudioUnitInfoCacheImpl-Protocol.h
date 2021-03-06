//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary, NSString;

@protocol FFAudioUnitInfoCacheImpl
+ (NSData *)channelSupportDataForAudioUnitWithConfigurationInfo:(NSDictionary *)arg1;
- (id)initWithHostID:(NSString *)arg1 hostName:(NSString *)arg2;
- (NSData *)channelSupportDataForAudioUnitWithDescription:(const struct AudioComponentDescription *)arg1;
- (BOOL)hasAudioUnitWithDescription:(const struct AudioComponentDescription *)arg1;
- (BOOL)isAudioUnitEnabledWithDescription:(const struct AudioComponentDescription *)arg1;
- (NSData *)channelSupportDataForAudioUnitWithType:(unsigned int)arg1 subType:(unsigned int)arg2 manufacturer:(unsigned int)arg3;
- (BOOL)hasAudioUnitWithType:(unsigned int)arg1 subType:(unsigned int)arg2 manufacturer:(unsigned int)arg3;
- (BOOL)isAudioUnitEnabledWithType:(unsigned int)arg1 subType:(unsigned int)arg2 manufacturer:(unsigned int)arg3;
- (void)forEachAudioUnit:(void (^)(struct AudioComponentDescription *, NSDictionary *, BOOL))arg1;
- (unsigned long long)performValidationReturningFailureCount;
@end

