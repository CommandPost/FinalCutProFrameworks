//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFHeliumEffect.h>

@class CHChannelBool, CHChannelDouble;

__attribute__((visibility("hidden")))
@interface FFHeSideBySideEffect : FFHeliumEffect
{
    CHChannelBool *_chLeft;
    CHChannelDouble *_chSlideDuration;
    CHChannelBool *_chTopBottom;
    CHChannelBool *_chTop;
}

+ (void)registerEffects;
- (unsigned int)intrinsicCacheFlag;
- (BOOL)effectVariesOverTime;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 schedInfo:(id)arg5 downstreamPT:(id)arg6 channelOffset:(CDStruct_1b6d18a9)arg7 roi:(const struct CGRect *)arg8 graphBuildInfo:(id)arg9;
- (void)createChannelsInFolder:(id)arg1;
- (id)topChannel;
- (id)topBottomChannel;
- (id)slideDurationChannel;
- (id)leftChannel;
- (void)dealloc;
- (id)inputKeys;
- (id)initWithEffectID:(id)arg1;

@end

