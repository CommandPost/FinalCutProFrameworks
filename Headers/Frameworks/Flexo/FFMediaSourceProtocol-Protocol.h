//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FFMedia, NSArray, NSString;

@protocol FFMediaSourceProtocol
- (void)setMedia:(FFMedia *)arg1 providerSourceKey:(NSString *)arg2 audioChannelMap:(NSArray *)arg3 audioChannelRoutingMap:(NSArray *)arg4 updateFlags:(int)arg5;
- (void)setAudioChannelRoutingMap:(NSArray *)arg1;
- (NSArray *)audioChannelRoutingMap;
- (void)setAudioChannelMap:(NSArray *)arg1;
- (NSArray *)audioChannelMap;
- (void)setProviderSourceKey:(NSString *)arg1;
- (NSString *)providerSourceKey;
- (void)setMedia:(FFMedia *)arg1;
- (FFMedia *)media;
@end

