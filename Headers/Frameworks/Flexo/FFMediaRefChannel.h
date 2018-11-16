//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHChannel.h"

#import "CHChannelHasCachedDataToPurgeProtocol.h"

@class FFStreamVideo;

@interface FFMediaRefChannel : CHChannel <CHChannelHasCachedDataToPurgeProtocol>
{
    FFStreamVideo *_cachedStream;
}

+ (void)addFactory;
+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
- (void)dealloc;
- (id)mediaRefChannelDelegate;
- (void)setMediaRefChannelDelegate:(id)arg1;
- (id)anchoredObject;
- (void)setAnchoredObject:(id)arg1;
- (BOOL)requiresVideo;
- (void)setRequiresVideo:(BOOL)arg1;
- (BOOL)requiresAudio;
- (void)setRequiresAudio:(BOOL)arg1;
- (BOOL)isFreezeFrame;
- (void)setFreezeFrame:(BOOL)arg1;
- (void)setDefaultFreezeFrame:(BOOL)arg1;
- (BOOL)isAutomatic;
- (void)setAutomatic:(BOOL)arg1;
- (void)setDefaultAutomatic:(BOOL)arg1;
- (CDStruct_1b6d18a9)mediaOffset;
- (void)setMediaOffset:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)defaultMediaOffset;
- (void)setDefaultMediaOffset:(CDStruct_1b6d18a9)arg1;
- (id)shortName;
- (void)setShortName:(id)arg1;
- (id)containingAnchoredObject;
- (id)sourceObjectForTime:(CDStruct_1b6d18a9 *)arg1;
- (id)copyStreamForSourceObject:(id)arg1;
- (void)purgeChannelCachedData:(id)arg1;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 location:(int)arg2 priority:(int)arg3 spatialQuality:(int)arg4 temporalQuality:(int)arg5;
- (id)newNSThumbnailAtTime:(CDStruct_1b6d18a9)arg1 temporalQuality:(int)arg2;

@end

