//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFQCEffect.h>

#import <Flexo/FFEffectAdjustmentDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface FFMapEffect : FFQCEffect <FFEffectAdjustmentDelegate>
{
    int _mapType;
}

+ (id)prefixForMapType:(int)arg1;
+ (void)registerEffects;
@property(readonly, nonatomic) int mapType; // @synthesize mapType=_mapType;
- (Class)defaultAdjustmentToolForEffect;
- (BOOL)shouldDrawCityTextOutline;
- (BOOL)shouldDrawCityTextShadow;
- (BOOL)hasBlackLineBorder;
- (id)cityTextColor;
- (float)cityFontSize;
- (id)cityFontName;
- (void)willReplace:(id)arg1;
- (BOOL)isAtDefaultSettings;
- (id)displayNameForMapType:(int)arg1;
- (id)effectIDForMapType:(int)arg1;
- (CDStruct_1b6d18a9)suggestedDuration;
- (void)setLocationChannelValue:(id)arg1;
- (id)locationChannelValue;
- (void)createChannelsInFolder:(id)arg1;
- (id)compositionDirectoryName;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;

@end

