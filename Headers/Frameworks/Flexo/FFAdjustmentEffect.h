//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFEffect.h>

__attribute__((visibility("hidden")))
@interface FFAdjustmentEffect : FFEffect
{
}

+ (void)registerEffects;
- (BOOL)effectVariesOverTime;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 withInputStream:(id)arg3 context:(id)arg4 downstreamPT:(id)arg5 channelOffset:(CDStruct_1b6d18a9)arg6 roi:(const struct CGRect *)arg7;
- (id)inputKeys;

@end

