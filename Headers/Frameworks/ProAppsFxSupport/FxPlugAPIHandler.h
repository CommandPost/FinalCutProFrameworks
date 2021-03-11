//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProAppsFxSupport/FxDynamicParameterAPI-Protocol.h>
#import <ProAppsFxSupport/FxDynamicParameterAPI_v2-Protocol.h>
#import <ProAppsFxSupport/FxHostResourcesAPI-Protocol.h>
#import <ProAppsFxSupport/FxKeyframeAPI-Protocol.h>
#import <ProAppsFxSupport/FxKeyframeAPI_v2-Protocol.h>
#import <ProAppsFxSupport/FxWindowAPI-Protocol.h>
#import <ProAppsFxSupport/PROAPIObject-Protocol.h>

@class NSString;
@protocol FxPlugAPIDelegate;

@interface FxPlugAPIHandler : NSObject <FxKeyframeAPI, FxKeyframeAPI_v2, FxDynamicParameterAPI, FxDynamicParameterAPI_v2, FxWindowAPI, FxHostResourcesAPI, PROAPIObject>
{
    NSObject<FxPlugAPIDelegate> *_delegate;
}

@property(nonatomic) NSObject<FxPlugAPIDelegate> *delegate; // @synthesize delegate=_delegate;
- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)setKeyframeInfo:(struct FxKeyframeInfo)arg1 toChannel:(struct OZChannel *)arg2 atTime:(CDStruct_198678f7)arg3;
- (void)keyframeInfo:(struct FxKeyframeInfo *)arg1 fromChannel:(struct OZChannel *)arg2 atTime:(CDStruct_198678f7)arg3;
- (CDStruct_198678f7)keyframeAtIndex:(unsigned long long)arg1 fromChannel:(struct OZChannel *)arg2;
- (id)keyframeErrorWithCode:(long long)arg1 andString:(id)arg2 inMethod:(const char *)arg3;
- (BOOL)styleHasTangents:(unsigned long long)arg1;
- (unsigned int)curveInterpolationFromFxKeyframeStyle:(unsigned long long)arg1;
- (unsigned long long)FxKeyframeStyleFromCurveInterpolation:(unsigned int)arg1;
- (id)channel:(struct OZChannel **)arg1 fromParameterID:(unsigned long long)arg2 andChannelIndex:(unsigned long long)arg3;
- (id)channel:(struct OZChannel **)arg1 atIndex:(unsigned long long)arg2 fromFolder:(struct OZChannelFolder *)arg3;
- (id)removeAllKeyframesForParam:(unsigned long long)arg1 andChannel:(unsigned long long)arg2;
- (id)keyframeInfo:(struct FxKeyframeInfo *)arg1 atOrAfter:(double)arg2 fromParam:(unsigned long long)arg3 andChannel:(unsigned long long)arg4;
- (id)keyframeInfo:(struct FxKeyframeInfo *)arg1 atOrAfterFxTime:(CDUnion_2516e51e)arg2 fromParam:(unsigned long long)arg3 andChannel:(unsigned long long)arg4;
- (id)keyframeInfo:(struct FxKeyframeInfo *)arg1 atOrBefore:(double)arg2 fromParam:(unsigned long long)arg3 andChannel:(unsigned long long)arg4;
- (id)keyframeInfo:(struct FxKeyframeInfo *)arg1 atOrBeforeFxTime:(CDUnion_2516e51e)arg2 fromParam:(unsigned long long)arg3 andChannel:(unsigned long long)arg4;
- (id)param:(unsigned long long)arg1 channel:(unsigned long long)arg2 hasKeyframe:(char *)arg3 atTime:(double)arg4;
- (id)param:(unsigned long long)arg1 channel:(unsigned long long)arg2 hasKeyframe:(char *)arg3 atFxTime:(CDUnion_2516e51e)arg4;
- (id)removeKeyframeAtIndex:(unsigned long long)arg1 fromParam:(unsigned long long)arg2 andChannel:(unsigned long long)arg3;
- (id)addKeyframe:(struct FxKeyframeInfo)arg1 toParam:(unsigned long long)arg2 andChannel:(unsigned long long)arg3;
- (id)setKeyframe:(unsigned long long)arg1 withInfo:(struct FxKeyframeInfo)arg2 forParam:(unsigned long long)arg3 andChannel:(unsigned long long)arg4;
- (id)keyframeInfo:(struct FxKeyframeInfo *)arg1 forParam:(unsigned long long)arg2 channel:(unsigned long long)arg3 andIndex:(unsigned long long)arg4;
- (id)keyframeCount:(unsigned long long *)arg1 forParam:(unsigned long long)arg2 andChannel:(unsigned long long)arg3;
- (id)channelCount:(unsigned long long *)arg1 forParam:(unsigned long long)arg2;
- (BOOL)setAsDefaultsAtFxTime:(CDUnion_2516e51e)arg1 withError:(id *)arg2;
- (id)setAsDefaultsAtTime:(double)arg1;
- (id)_setAsDefaultsAtTime:(CDUnion_2516e51e)arg1;
- (id)setPopupMenuParameter:(unsigned int)arg1 entries:(id)arg2 defaultValue:(unsigned int)arg3;
- (id)setParameter:(unsigned int)arg1 intMinimum:(int)arg2 maximum:(int)arg3 sliderMinimum:(int)arg4 sliderMaximum:(int)arg5;
- (id)parameter:(unsigned int)arg1 intMinimum:(int *)arg2 maximum:(int *)arg3 sliderMinimum:(int *)arg4 sliderMaximum:(int *)arg5;
- (id)setParameter:(unsigned int)arg1 floatMinimum:(double)arg2 maximum:(double)arg3 sliderMinimum:(double)arg4 sliderMaximum:(double)arg5;
- (id)parameter:(unsigned int)arg1 floatMinimum:(double *)arg2 maximum:(double *)arg3 sliderMinimum:(double *)arg4 sliderMaximum:(double *)arg5;
- (id)setParameter:(unsigned int)arg1 name:(id)arg2;
- (id)parameter:(unsigned int)arg1 name:(id *)arg2;
- (id)removeParameter:(unsigned int)arg1;
- (unsigned int)parameterIDAtIndex:(unsigned int)arg1;
- (unsigned int)parameterCount;
- (void)destroyWindow:(id)arg1;
- (id)createWindowWithContentRect:(struct CGRect)arg1;
- (void)runFxPlugThread:(id)arg1;
- (void)performSelector:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 onThreads:(long long)arg4 waitUntilDone:(BOOL)arg5 error:(id *)arg6;
- (unsigned long long)numberOfCores;
- (void)deletePBuffer:(unsigned int)arg1 error:(id *)arg2;
- (void)createPBuffer:(unsigned int *)arg1 withTarget:(unsigned int)arg2 error:(id *)arg3;
- (void)deleteTexture:(id)arg1 error:(id *)arg2;
- (void)createTexture:(id *)arg1 withDOD:(struct FxRect)arg2 GLTarget:(unsigned int)arg3 level:(int)arg4 internalFormat:(unsigned int)arg5 width:(int)arg6 height:(int)arg7 border:(int)arg8 format:(unsigned int)arg9 type:(unsigned int)arg10 pixels:(const void *)arg11 origin:(unsigned long long)arg12 pixelAspectRatio:(double)arg13 andError:(id *)arg14;
- (void)trackExternalAllocation:(unsigned long long)arg1;
- (void)freeMemory:(void *)arg1 error:(id *)arg2;
- (void *)allocateMemory:(unsigned long long)arg1 clear:(BOOL)arg2 clearWith:(unsigned char)arg3 error:(id *)arg4;
- (id)errorWithString:(id)arg1 andCode:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

