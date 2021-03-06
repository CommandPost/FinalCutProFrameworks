//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProAppsFxSupport/PAESharedDefaultBase.h>

#import <ProAppsFxSupport/FxTransition-Protocol.h>

@interface PAETransitionDefaultBase : PAESharedDefaultBase <FxTransition>
{
    BOOL _haveEase;
    BOOL _haveMotionBlur;
    int _initGap;
}

- (BOOL)isEndGap;
- (BOOL)isFrontGap;
- (BOOL)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withSpeed:(float)arg5 withInfo:(CDStruct_6b9ed609)arg6;
- (BOOL)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(CDStruct_6b9ed609)arg5;
- (BOOL)renderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(CDStruct_6b9ed609)arg5;
- (double)relativeShutterAtTime:(CDUnion_2516e51e)arg1;
- (BOOL)getEaseIn:(double *)arg1 easeOut:(double *)arg2 atTime:(CDUnion_2516e51e)arg3;
- (BOOL)convertTimeFraction:(double)arg1 toLocal:(double *)arg2 andDerivative:(double *)arg3 atTime:(CDUnion_2516e51e)arg4;
- (BOOL)parameterChanged:(unsigned int)arg1;
- (BOOL)addMotionBlurParameters;
- (BOOL)addEaseParametersWithDefault:(float)arg1 andFlags:(unsigned int)arg2;
- (BOOL)addParameters;
- (BOOL)finishInitialSetup:(id *)arg1;
- (BOOL)frameSetup:(CDStruct_6b9ed609)arg1 inputInfoA:(CDStruct_4a07eeda)arg2 inputInfoB:(CDStruct_4a07eeda)arg3 timeFraction:(float)arg4 hardware:(char *)arg5 software:(char *)arg6;
- (BOOL)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInputA:(CDStruct_4a07eeda)arg3 withInputB:(CDStruct_4a07eeda)arg4 withTimeFraction:(float)arg5 withInfo:(CDStruct_6b9ed609)arg6;

@end

