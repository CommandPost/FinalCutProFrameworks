//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProChannel/CHCompoundChannel.h>

@interface CHChannelLevels : CHCompoundChannel
{
}

+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
- (double)gammaValueAtTime:(CDStruct_198678f7)arg1;
- (double)whiteValueAtTime:(CDStruct_198678f7)arg1;
- (double)blackValueAtTime:(CDStruct_198678f7)arg1;
- (id)gammaChannel;
- (id)whiteChannel;
- (id)blackChannel;
- (struct OZChannelLevels *)ozChannel;

@end

