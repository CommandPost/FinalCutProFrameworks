//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProChannel/CHChannel2D.h>

@interface CHChannelPosition : CHChannel2D
{
}

+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
- (void)getPositionAtTime:(CDStruct_198678f7)arg1 curveX:(double *)arg2 curveY:(double *)arg3;
- (void)getPositionAtTime:(CDStruct_198678f7)arg1 x:(double *)arg2 y:(double *)arg3;
- (struct OZChannelPosition *)ozChannel;

@end

