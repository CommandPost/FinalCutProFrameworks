//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProChannel/CHChannelEnum.h>

@interface CHChannelDiscreteColor : CHChannelEnum
{
}

+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
- (struct PCColor)colorForIndex:(int)arg1;
- (int)defaultColorIndex;
- (void)setDefaultColorIndex:(int)arg1;
- (int)colorIndex;
- (void)setColorIndex:(int)arg1;
- (struct OZChannelDiscreteColor *)ozChannel;

@end

