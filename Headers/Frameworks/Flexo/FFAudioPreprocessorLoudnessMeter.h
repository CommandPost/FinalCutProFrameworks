//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFAudioPreprocessor.h>

__attribute__((visibility("hidden")))
@interface FFAudioPreprocessorLoudnessMeter : FFAudioPreprocessor
{
}

- (int)postRender;
- (void)_setWarningLevelUsingAnalysisResults:(struct LoudnessAnalysisResults)arg1;
- (void)_setParametersUsingAnalysisResults:(struct LoudnessAnalysisResults)arg1;
- (float)_calculateRatioFromRange:(float)arg1;

@end

