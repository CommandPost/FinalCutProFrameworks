//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZFxPlugParameterHandler.h>

#import <Ozone/FxOptionalParameterRetrievalAPI_v2-Protocol.h>
#import <Ozone/FxOptionalParameterSettingAPI_v2-Protocol.h>
#import <Ozone/FxParameterCreationAPI_v4-Protocol.h>
#import <Ozone/FxParameterRetrievalAPI_v4-Protocol.h>
#import <Ozone/FxParameterRetrievalAPI_v5-Protocol.h>
#import <Ozone/FxParameterSettingAPI_v4-Protocol.h>

@class NSString;

@interface OZFxPlugParameterHandler_v4 : OZFxPlugParameterHandler <FxParameterCreationAPI_v4, FxParameterRetrievalAPI_v4, FxParameterRetrievalAPI_v5, FxParameterSettingAPI_v4, FxOptionalParameterRetrievalAPI_v2, FxOptionalParameterSettingAPI_v2>
{
}

- (id)pushButtonSelectorNameForParameterID:(unsigned int)arg1;
- (BOOL)getGradientStartEnd:(double *)arg1 startY:(double *)arg2 endX:(double *)arg3 endY:(double *)arg4 type:(int *)arg5 fromParm:(unsigned int)arg6 atFxTime:(CDUnion_2516e51e)arg7;
- (BOOL)getGradientSamples:(void *)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned int)arg4 atFxTime:(CDUnion_2516e51e)arg5;
- (BOOL)setHistogramBlackIn:(double)arg1 blackOut:(double)arg2 whiteIn:(double)arg3 whiteOut:(double)arg4 gamma:(double)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(CDUnion_2516e51e)arg8;
- (BOOL)getHistogramBlackIn:(double *)arg1 BlackOut:(double *)arg2 WhiteIn:(double *)arg3 WhiteOut:(double *)arg4 Gamma:(double *)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(CDUnion_2516e51e)arg8;
- (BOOL)setPathID:(void *)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setStringParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (BOOL)setParameterFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (BOOL)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (BOOL)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atFxTime:(CDUnion_2516e51e)arg4;
- (BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atFxTime:(CDUnion_2516e51e)arg5;
- (BOOL)setBoolValue:(BOOL)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setIntValue:(int)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getFontName:(id *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getPathID:(void **)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getCustomParameterValue:(id *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getStringParameterValue:(id *)arg1 fromParm:(unsigned int)arg2;
- (BOOL)getParameterFlags:(unsigned int *)arg1 fromParm:(unsigned int)arg2;
- (BOOL)getCustomParameterValue:(id *)arg1 fromParm:(unsigned int)arg2;
- (BOOL)getXValue:(double *)arg1 YValue:(double *)arg2 fromParm:(unsigned int)arg3 atFxTime:(CDUnion_2516e51e)arg4;
- (BOOL)getRedValue:(double *)arg1 greenValue:(double *)arg2 blueValue:(double *)arg3 alphaValue:(double *)arg4 fromParm:(unsigned int)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (BOOL)getRedValue:(double *)arg1 greenValue:(double *)arg2 blueValue:(double *)arg3 fromParm:(unsigned int)arg4 atFxTime:(CDUnion_2516e51e)arg5;
- (BOOL)getBoolValue:(char *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getIntValue:(int *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getFloatValue:(double *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getTexture:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_6b9ed609)arg4 fromParm:(unsigned int)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (BOOL)getBitmap:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_6b9ed609)arg4 fromParm:(unsigned int)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (BOOL)getFontName:(id *)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)_getFontName:(id *)arg1 fromParm:(unsigned int)arg2 atTime:(CDUnion_2516e51e)arg3;
- (BOOL)addHelpButtonWithName:(id)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addPushButtonWithName:(id)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addFontMenuWithName:(id)arg1 parmId:(unsigned int)arg2 fontName:(id)arg3 parmFlags:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

