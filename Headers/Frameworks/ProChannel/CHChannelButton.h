//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProChannel/CHChannel.h>

@interface CHChannelButton : CHChannel
{
}

+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
- (struct OZChannelButton *)ozChannel;
- (CDUnknownBlockType)callback;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (void)performCallback;

@end

