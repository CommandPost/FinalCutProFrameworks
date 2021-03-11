//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProAppsFxSupport/NSObject-Protocol.h>

@class NSString;
@protocol NSCoding;

@protocol FxParameterSettingAPI_v4 <NSObject>
- (BOOL)setPathID:(void *)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setCustomParameterValue:(id <NSCoding>)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setStringParameterValue:(NSString *)arg1 toParm:(unsigned int)arg2;
- (BOOL)setParameterFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (BOOL)setCustomParameterValue:(id <NSCoding>)arg1 toParm:(unsigned int)arg2;
- (BOOL)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atFxTime:(CDUnion_2516e51e)arg4;
- (BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atFxTime:(CDUnion_2516e51e)arg5;
- (BOOL)setBoolValue:(BOOL)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setIntValue:(int)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
@end

