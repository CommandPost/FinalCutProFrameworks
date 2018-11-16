//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFAudioComponentSource.h>

@class FFAudioComponentsLayoutItem;

__attribute__((visibility("hidden")))
@interface FFAudioLayoutItemComponentSource : FFAudioComponentSource
{
    FFAudioComponentsLayoutItem *m_layoutItemKey;
}

+ (id)copyClassDescription;
@property(readonly, nonatomic) FFAudioComponentsLayoutItem *layoutItemKey; // @synthesize layoutItemKey=m_layoutItemKey;
- (id)roles;
- (void)didChangeComponentSource:(id)arg1;
- (void)willChangeComponentSource:(id)arg1;
- (CDStruct_bdcb2b0d)audioMD5:(int)arg1;
- (struct NSObject *)skimmableObject;
- (void)releaseEffectStackFromPersisting;
- (void)setEffectStackAsPersisting;
- (void)setRole:(id)arg1;
- (id)effectStack;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
- (void)resetLayoutItemKey:(id)arg1;
- (id)componentsLayoutSkimmable;
- (id)backingLayoutKey;
- (id)backingLayoutMap;
- (id)initWithLayoutItemKey:(id)arg1;

@end

