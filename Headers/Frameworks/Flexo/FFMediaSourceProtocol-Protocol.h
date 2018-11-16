//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFMedia, NSArray, NSString;

@protocol FFMediaSourceProtocol
- (void)setMedia:(FFMedia *)arg1 providerSourceKey:(NSString *)arg2 sourceChannelMap:(NSArray *)arg3 audioChannelRoutingMap:(NSArray *)arg4 updateFlags:(int)arg5;
- (void)setAudioChannelRoutingMap:(NSArray *)arg1;
- (NSArray *)audioChannelRoutingMap;
- (void)setSourceChannelMap:(NSArray *)arg1;
- (NSArray *)sourceChannelMap;
- (void)setProviderSourceKey:(NSString *)arg1;
- (NSString *)providerSourceKey;
- (void)setMedia:(FFMedia *)arg1;
- (FFMedia *)media;
@end

