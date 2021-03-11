//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/_FFMetadataFloatMutableItem.h>

__attribute__((visibility("hidden")))
@interface _FFMetadataFloatMutableAsTemperatureItem : _FFMetadataFloatMutableItem
{
    double _minCCTValue;
    double _maxCCTValue;
    double _centerCCTValue;
    BOOL _cctValuesAreInitialized;
}

- (id)defaultValueForAsset:(id)arg1;
- (BOOL)allowMultipleSelectionChangesOnEqualValues:(id)arg1;
- (double)scrubberSensitivityForParameterController:(id)arg1;
- (double)centerValueForParameterController:(id)arg1;
- (double)maxValueForParameterController:(id)arg1;
- (double)minValueForParameterController:(id)arg1;
- (id)numberFormatterForParameterController:(id)arg1;
- (double)_centerCCTValueForAssets;
- (double)_maxSupportedCCTValueForAssets;
- (double)_minSupportedCCTValueForAssets;
- (void)initializeCCTValues;
- (void)setCurrentItems:(id)arg1 withAssets:(id)arg2;
- (id)parameterViewController;

@end

