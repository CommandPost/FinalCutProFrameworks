//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProChannel/CHCompoundChannel.h>

@interface CHChannelQuad : CHCompoundChannel
{
}

+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
- (struct OZChannelQuad *)ozChannel;
- (void)getBottomLeftAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3;
- (void)getBottomRightAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3;
- (void)getTopRightAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3;
- (void)getTopLeftAtTime:(CDStruct_1b6d18a9)arg1 x:(double *)arg2 y:(double *)arg3;
- (void)setBottomLeftAtTime:(CDStruct_1b6d18a9)arg1 value:(struct CGPoint)arg2 options:(unsigned int)arg3;
- (void)setBottomRightAtTime:(CDStruct_1b6d18a9)arg1 value:(struct CGPoint)arg2 options:(unsigned int)arg3;
- (void)setTopRightAtTime:(CDStruct_1b6d18a9)arg1 value:(struct CGPoint)arg2 options:(unsigned int)arg3;
- (void)setTopLeftAtTime:(CDStruct_1b6d18a9)arg1 value:(struct CGPoint)arg2 options:(unsigned int)arg3;
- (void)setDefaultQuad:(struct CGPoint)arg1 bottomRight:(struct CGPoint)arg2 topRight:(struct CGPoint)arg3 topLeft:(struct CGPoint)arg4;
- (id)bottomLeftChannel;
- (id)bottomRightChannel;
- (id)topRightChannel;
- (id)topLeftChannel;

@end
