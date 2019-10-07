//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFPlayerVideoScopesModule.h>

#import "FFDestVideoScopesGLDelegate.h"

@interface FFVideoScopesVectorscopeModule : FFPlayerVideoScopesModule <FFDestVideoScopesGLDelegate>
{
}

- (void)colorSpaceDidChangeForVideoScopes:(id)arg1;
- (void)drawScopeWithFrame:(id)arg1 forRate:(double)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)viewProperties;
- (void)setViewProperties:(id)arg1;
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
- (void)_setOverrideColorSpace:(long long)arg1;
- (void)toggleSkinToneIndicator:(id)arg1;
- (void)changeBarTarget50p:(id)arg1;
- (void)changeBarTarget75p:(id)arg1;
- (void)changeBarTarget100p:(id)arg1;
- (void)_setBarTarget:(long long)arg1;
- (void)changePhaseMark3:(id)arg1;
- (void)changePhaseVector:(id)arg1;
- (void)_setPhase:(long long)arg1;
- (void)_postPropertyChange;

@end

