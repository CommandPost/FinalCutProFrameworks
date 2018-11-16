//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString;

@protocol FFAudioUnitInfoCacheImpl
- (id)initWithHostID:(NSString *)arg1 hostName:(NSString *)arg2;
- (NSData *)channelSupportDataForAudioUnitWithDescription:(const struct AudioComponentDescription *)arg1;
- (BOOL)hasAudioUnitWithDescription:(const struct AudioComponentDescription *)arg1;
- (BOOL)isAudioUnitEnabledWithDescription:(const struct AudioComponentDescription *)arg1;
- (NSData *)channelSupportDataForAudioUnitWithType:(unsigned int)arg1 subType:(unsigned int)arg2 manufacturer:(unsigned int)arg3;
- (BOOL)hasAudioUnitWithType:(unsigned int)arg1 subType:(unsigned int)arg2 manufacturer:(unsigned int)arg3;
- (BOOL)isAudioUnitEnabledWithType:(unsigned int)arg1 subType:(unsigned int)arg2 manufacturer:(unsigned int)arg3;
- (void)forEachAudioUnit:(void (^)(struct AudioComponentDescription *, BOOL))arg1;
- (unsigned long long)performValidationReturningFailureCount;
@end

