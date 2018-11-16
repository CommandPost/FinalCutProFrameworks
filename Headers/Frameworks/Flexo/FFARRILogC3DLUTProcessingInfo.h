//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFLogProcessingInfo.h>

@class NSData;

@interface FFARRILogC3DLUTProcessingInfo : FFLogProcessingInfo
{
    unsigned int _numMeshPoints;
    unsigned int _entryScalingFactor;
    NSData *_lutArray;
    unsigned long long _rowBytes;
    unsigned long long _planeBytes;
    CDStruct_bdcb2b0d _lutMD5;
    float _normalizationGain;
    float _normalizationOffset;
    float _cdlSaturation;
    float _cdlSlope[3];
    float _cdlOffset[3];
    float _cdlPower[3];
}

- (id).cxx_construct;
- (void)setColorConformPresetAndParameters:(struct HGColorConform *)arg1;
- (void)dealloc;
- (id)initWith3DLUT:(id)arg1 andCDL:(id)arg2;

@end
