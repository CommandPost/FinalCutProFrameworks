//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFAudioUnitAnalyzingEffect.h>

#import <Flexo/FFEffectSubEffectContainment-Protocol.h>

@class FFAnchoredObject, NSString;

__attribute__((visibility("hidden")))
@interface FFAudioUnitMatchEQEffect : FFAudioUnitAnalyzingEffect <FFEffectSubEffectContainment>
{
    int _mode;
    FFAnchoredObject *_matchComponent;
}

- (void)removeSubEffect:(id)arg1;
- (void)addSubEffect:(id)arg1;
- (id)matchObject;
- (void)setMatchObject:(id)arg1;
- (void)setMatchEQMode:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

