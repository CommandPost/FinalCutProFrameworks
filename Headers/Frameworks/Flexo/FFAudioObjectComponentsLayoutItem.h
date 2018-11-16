//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAudioComponentsLayoutItem.h>

@class FFAudioComponentSource, FFAudioLayoutItemComponentSource, FFEffectStack, NSString;

__attribute__((visibility("hidden")))
@interface FFAudioObjectComponentsLayoutItem : FFAudioComponentsLayoutItem
{
    BOOL m_enabled;
    FFEffectStack *m_effectStack;
    NSString *m_role;
    FFAudioLayoutItemComponentSource *m_componentSource;
    BOOL m_forcePersistedEffectStack;
    CDStruct_bdcb2b0d m_defaultEffectStackMD5;
}

+ (id)copyClassDescription;
@property(readonly, nonatomic) FFAudioLayoutItemComponentSource *componentSource; // @synthesize componentSource=m_componentSource;
@property(readonly, nonatomic) BOOL forcePersistedEffectStack; // @synthesize forcePersistedEffectStack=m_forcePersistedEffectStack;
@property(readonly, nonatomic) NSString *role; // @synthesize role=m_role;
@property(readonly, nonatomic) FFEffectStack *effectStack; // @synthesize effectStack=m_effectStack;
@property(readonly, nonatomic) BOOL enabled; // @synthesize enabled=m_enabled;
- (id)activeEffectStack;
- (BOOL)isDefaultEffectStack;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
@property(readonly, nonatomic) NSString *defaultEffectStackMD5;
@property(readonly, nonatomic) FFAudioComponentSource *persistentComponentSource;
@property(readonly, nonatomic) FFEffectStack *persistentEffectStack;
- (unsigned int)numOutputChannels:(unsigned int)arg1;
- (BOOL)isEqualToLayoutItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAudioComponentsLayoutItem:(id)arg1;
- (id)initWithName:(id)arg1 channelMap:(id)arg2 audioChannelRoutingMap:(id)arg3;

@end

