//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIO/MIODALControl.h>

@class NSString;

@interface MIODALFeatureControl : MIODALControl
{
    BOOL mOnOffSettable;
    BOOL mAutomaticSettable;
    BOOL mTuningSettable;
    BOOL mValueSettable;
    BOOL mSettingOnOff;
    BOOL mSettingAutomatic;
    BOOL mSettingTuning;
    BOOL mSettingValue;
    BOOL mUsesAbsoluteValues;
}

- (void)setProperties:(id)arg1;
- (id)properties;
- (void)propertyDidChange:(const struct CMIOObjectPropertyAddress *)arg1;
@property(readonly) BOOL hasTuning;
@property BOOL tuning;
@property(readonly, retain) NSString *unitName;
@property(readonly) BOOL automaticSettable;
@property(readonly) BOOL hasAutomatic;
@property BOOL automatic;
@property(readonly) BOOL onOffSettable;
@property BOOL onOff;
@property(readonly) BOOL valueSettable;
@property(readonly) float maxValue;
@property(readonly) float minValue;
@property float value;
- (id)exposedBindings;
- (id)initWithCMIODALControlID:(unsigned int)arg1 classID:(unsigned int)arg2;

@end

