//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProChannel/CHChannel.h>

@interface CHChannelButton : CHChannel
{
}

+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
- (void)performCallback;
- (void)setButtonTitle:(id)arg1;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)callback;
- (void)setSelector:(SEL)arg1 andTarget:(id)arg2;
- (struct OZChannelButton *)ozChannel;

@end

