//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFPlayerVideoScopesModule.h>

__attribute__((visibility("hidden")))
@interface FFVideoScopesWaveformModule : FFPlayerVideoScopesModule
{
}

- (id)viewProperties;
- (void)setViewProperties:(id)arg1;
- (struct CGSize)viewMinSize;
- (void)setSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)updateLabel;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewWasInstalled;
- (void)showWaveform:(id)arg1;
- (void)showVectorscope:(id)arg1;
- (void)showHistogram:(id)arg1;
- (void)changeColorSpaceRec2020:(id)arg1;
- (void)changeColorSpaceRec709:(id)arg1;
- (void)changeColorSpaceRec601:(id)arg1;
- (void)changeColorSpaceDefault:(id)arg1;
- (void)changeUnitsNits:(id)arg1;
- (void)changeUnitsMillivolts:(id)arg1;
- (void)changeUnitsIRE:(id)arg1;
- (void)changeModeYCbCr:(id)arg1;
- (void)changeModeChroma:(id)arg1;
- (void)changeModeYOrYPrime:(id)arg1;
- (void)changeModeBlueChannel:(id)arg1;
- (void)changeModeGreenChannel:(id)arg1;
- (void)changeModeRedChannel:(id)arg1;
- (void)changeModeOverlay:(id)arg1;
- (void)changeModeParade:(id)arg1;
- (void)_setCompositeVideoUnits:(long long)arg1;
- (void)_setOverrideColorSpace:(long long)arg1;
- (void)_setDisplayMode:(long long)arg1;
- (void)_postPropertyChange;

@end

