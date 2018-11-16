//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFAudioChannelsConfigViewModule, FFAudioComponentSource, NSArray, NSString;

@protocol FFAudioChannelsConfigTileDelegate
- (FFAudioChannelsConfigViewModule *)viewModule;
- (BOOL)hasMultipleSelection;
- (NSString *)nameForChannelViewWithComponentSource:(FFAudioComponentSource *)arg1 hasMultipleNames:(char *)arg2;
- (void)setName:(NSString *)arg1 forComponentSource:(FFAudioComponentSource *)arg2;
- (long long)enableStateForChannelViewWithComponentSource:(FFAudioComponentSource *)arg1;
- (void)setAudioPlayEnableForAllChannels:(BOOL)arg1;
- (void)setAudioPlayEnable:(BOOL)arg1 forComponentSources:(NSArray *)arg2;
@end
