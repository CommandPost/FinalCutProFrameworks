//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMediaSource.h>

@interface FFMediaSource (FFMediaSourceUtilities)
+ (id)newSourceForMedia:(id)arg1 sourceKey:(id)arg2 channelMap:(id)arg3;
+ (id)newSourceForSourceDescription:(id)arg1;
+ (id)defaultSourceDescriptionsForMedia:(id)arg1 sourceKey:(id)arg2;
+ (id)audioVideoItemsForObject:(id)arg1;
+ (id)defaultMediaSourcesForObject:(id)arg1;
+ (id)mediaSourceChannelsForObject:(id)arg1;
+ (BOOL)hasDefaultMediaSourcesInObject:(id)arg1;
+ (id)mediaSourcesForObject:(id)arg1;
+ (id)newMediaSourceForObject:(id)arg1;
+ (id)sortMediaSourceChannels:(id)arg1;
+ (int)numMediaSourceChannelsForAssetAudioSourceDict:(id)arg1;
+ (id)mediaSourceChannelsForAudioSourcesDict:(id)arg1 usingMedia:(id)arg2;
+ (id)mediaForMediaSourceObject:(id)arg1;
+ (id)inferAudioSourceDictForAssetID:(id)arg1 withMediaComponents:(id)arg2;
@end

