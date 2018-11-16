//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFLogProcessingInfo.h>

@interface FFSonySLog2SGamutProcessingInfo : FFLogProcessingInfo
{
    float _exposureGain;
    BOOL _useTungstenMatrix;
}

- (void)setColorConformPresetAndParameters:(struct HGColorConform *)arg1;
- (id)init;
- (id)initWithExposureIndex:(unsigned int)arg1 isoSensitivity:(unsigned int)arg2;
- (id)initWithExposureIndex:(unsigned int)arg1 isoSensitivity:(unsigned int)arg2 whiteBalance:(unsigned int)arg3;

@end
