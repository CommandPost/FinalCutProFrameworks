//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFPlayerVideoScopesModule.h>

#import "FFDestVideoScopesGLDelegate.h"

__attribute__((visibility("hidden")))
@interface FFVideoScopesVectorscopeModule : FFPlayerVideoScopesModule <FFDestVideoScopesGLDelegate>
{
}

- (void)changePhaseVector:(id)arg1;
- (void)changePhaseMark3:(id)arg1;
- (void)changeBarTarget100p:(id)arg1;
- (void)changeBarTarget75p:(id)arg1;
- (void)toggleSkinToneIndicator:(id)arg1;
- (void)showHistogram:(id)arg1;
- (void)showVectorscope:(id)arg1;
- (void)showWaveform:(id)arg1;
- (void)changeBrightness:(id)arg1;
- (void)toggleMonochrome:(id)arg1;
- (void)viewWasInstalled;
- (void)viewWillBeRemoved;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)updateLabel;
- (void)setViewProperties:(id)arg1;
- (id)viewProperties;
- (void)drawScopeWithFrame:(id)arg1 forRate:(double)arg2 atTime:(CDStruct_1b6d18a9)arg3;

@end

