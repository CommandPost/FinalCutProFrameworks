//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFRiggedChannelFolder.h>

@class FFEffectBundlePart;

__attribute__((visibility("hidden")))
@interface FFAudioUnitEffectRootChannel : FFRiggedChannelFolder
{
    FFEffectBundlePart *m_parentEffectBundlePart;
}

+ (void)addFactory;
+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
- (id)initWithParent:(id)arg1 name:(id)arg2 channelID:(unsigned int)arg3 flags:(unsigned int)arg4;
- (id)initWithParent:(id)arg1 channelID:(unsigned int)arg2 effect:(id)arg3 parentEffectBundlePart:(id)arg4;
- (void)dealloc;
@property(readonly, nonatomic) FFEffectBundlePart *parentEffectBundlePart; // @synthesize parentEffectBundlePart=m_parentEffectBundlePart;

@end

