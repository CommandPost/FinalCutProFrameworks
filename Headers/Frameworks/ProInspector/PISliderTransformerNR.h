//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/PISliderTransformer.h>

@interface PISliderTransformerNR : PISliderTransformer
{
}

+ (int)roundUp:(int)arg1 toMultiple:(int)arg2;
+ (void)sliderMin:(double *)arg1 sliderMax:(double *)arg2 forChannel:(struct OZChannel *)arg3 isHUD:(BOOL)arg4;
+ (double)parameterValueFromSliderValue:(double)arg1 forChannel:(struct OZChannel *)arg2;
+ (double)sliderValueFromParameterValue:(double)arg1 forChannel:(struct OZChannel *)arg2;

@end

