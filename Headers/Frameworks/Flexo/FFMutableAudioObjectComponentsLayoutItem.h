//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFAudioObjectComponentsLayoutItem.h>

#import <Flexo/FFMutableAudioObjectComponentsLayoutItemProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface FFMutableAudioObjectComponentsLayoutItem : FFAudioObjectComponentsLayoutItem <FFMutableAudioObjectComponentsLayoutItemProtocol>
{
}

- (void)setScopeStart:(CDStruct_1b6d18a9)arg1 andEnd:(CDStruct_1b6d18a9)arg2;
- (void)setEffectStack:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setRoleUID:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setItemName:(id)arg1;
- (BOOL)hasFullPersistence;

@end

