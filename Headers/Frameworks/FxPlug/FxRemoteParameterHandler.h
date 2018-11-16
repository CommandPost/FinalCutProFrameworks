//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxDynamicParameterAPI_v2.h"
#import "FxOptionalParameterCreationAPI.h"
#import "FxOptionalParameterRetrievalAPI_v2.h"
#import "FxOptionalParameterSettingAPI_v2.h"
#import "FxParameterCreationAPI_v4.h"
#import "FxParameterRetrievalAPI_v5.h"
#import "FxParameterSettingAPI_v4.h"
#import "FxUndoAPI.h"

@class FxAPIManagerShim, NSLock, NSString;

@interface FxRemoteParameterHandler : NSObject <FxParameterCreationAPI_v4, FxParameterRetrievalAPI_v5, FxParameterSettingAPI_v4, FxOptionalParameterCreationAPI, FxOptionalParameterRetrievalAPI_v2, FxOptionalParameterSettingAPI_v2, FxDynamicParameterAPI_v2, FxUndoAPI>
{
    FxAPIManagerShim *apiManager;
    NSLock *threadLock;
    map_dba1109d threadTransactions;
}

@property map_dba1109d threadTransactions; // @synthesize threadTransactions;
@property(retain) NSLock *threadLock; // @synthesize threadLock;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearAllParameterTransactions;
- (id)pendingParameterTransactions;
- (void)setIncomingParameterTransactions:(id)arg1;
- (BOOL)endUndoGroup;
- (BOOL)startUndoGroup:(id)arg1;
- (BOOL)parameterIndex:(unsigned long long *)arg1 forParameterID:(unsigned int)arg2;
- (BOOL)setAsDefaultsAtFxTime:(CDUnion_2516e51e)arg1 withError:(id *)arg2;
- (id)setAsDefaultsAtTime:(double)arg1;
- (id)setPopupMenuParameter:(unsigned int)arg1 entries:(id)arg2 defaultValue:(unsigned int)arg3;
- (id)setParameter:(unsigned int)arg1 intMinimum:(int)arg2 maximum:(int)arg3 sliderMinimum:(int)arg4 sliderMaximum:(int)arg5;
- (id)setParameter:(unsigned int)arg1 floatMinimum:(double)arg2 maximum:(double)arg3 sliderMinimum:(double)arg4 sliderMaximum:(double)arg5;
- (id)setParameter:(unsigned int)arg1 name:(id)arg2;
- (id)removeParameter:(unsigned int)arg1;
- (id)parameter:(unsigned int)arg1 intMinimum:(int *)arg2 maximum:(int *)arg3 sliderMinimum:(int *)arg4 sliderMaximum:(int *)arg5;
- (id)parameter:(unsigned int)arg1 floatMinimum:(double *)arg2 maximum:(double *)arg3 sliderMinimum:(double *)arg4 sliderMaximum:(double *)arg5;
- (id)parameter:(unsigned int)arg1 name:(id *)arg2;
- (unsigned int)parameterIDAtIndex:(unsigned int)arg1;
- (unsigned int)parameterCount;
- (BOOL)setHistogramBlackIn:(double)arg1 blackOut:(double)arg2 whiteIn:(double)arg3 whiteOut:(double)arg4 gamma:(double)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(CDUnion_2516e51e)arg8;
- (BOOL)setPathID:(void *)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setParameterFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (BOOL)setStringParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (BOOL)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (BOOL)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atFxTime:(CDUnion_2516e51e)arg4;
- (BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atFxTime:(CDUnion_2516e51e)arg5;
- (BOOL)setBoolValue:(BOOL)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setIntValue:(int)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)setValue:(void *)arg1 toParameterTransaction:(id)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getGradientSamples:(void *)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned int)arg4 atFxTime:(CDUnion_2516e51e)arg5;
- (void)downsampleGradient:(const void *)arg1 toOutput:(void *)arg2 numSamples:(unsigned long long)arg3 depth:(unsigned long long)arg4;
- (BOOL)getHistogramBlackIn:(double *)arg1 BlackOut:(double *)arg2 WhiteIn:(double *)arg3 WhiteOut:(double *)arg4 Gamma:(double *)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(CDUnion_2516e51e)arg8;
- (BOOL)getPathID:(void **)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getCustomParameterValue:(id *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getStringParameterValue:(id *)arg1 fromParm:(unsigned int)arg2;
- (BOOL)getParameterFlags:(unsigned int *)arg1 fromParm:(unsigned int)arg2;
- (BOOL)getFontName:(id *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getCustomParameterValue:(id *)arg1 fromParm:(unsigned int)arg2;
- (BOOL)getTexture:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_6b9ed609)arg4 fromParm:(unsigned int)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (BOOL)getBitmap:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_6b9ed609)arg4 fromParm:(unsigned int)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (BOOL)getXValue:(double *)arg1 YValue:(double *)arg2 fromParm:(unsigned int)arg3 atFxTime:(CDUnion_2516e51e)arg4;
- (BOOL)getRedValue:(double *)arg1 greenValue:(double *)arg2 blueValue:(double *)arg3 alphaValue:(double *)arg4 fromParm:(unsigned int)arg5 atFxTime:(CDUnion_2516e51e)arg6;
- (BOOL)getRedValue:(double *)arg1 greenValue:(double *)arg2 blueValue:(double *)arg3 fromParm:(unsigned int)arg4 atFxTime:(CDUnion_2516e51e)arg5;
- (BOOL)getBoolValue:(char *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getIntValue:(int *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getFloatValue:(double *)arg1 fromParm:(unsigned int)arg2 atFxTime:(CDUnion_2516e51e)arg3;
- (BOOL)getValue:(void *)arg1 forParam:(unsigned int)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)findParameterTransactionForID:(unsigned int)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2;
- (BOOL)addGradientWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addHistogramWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addFontMenuWithName:(id)arg1 parmId:(unsigned int)arg2 fontName:(id)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addHelpButtonWithName:(id)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addPushButtonWithName:(id)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addPathPickerWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addPercentSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 sliderMin:(double)arg6 sliderMax:(double)arg7 delta:(double)arg8 parmFlags:(unsigned int)arg9;
- (BOOL)addStringParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(id)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)endParameterSubGroup;
- (BOOL)startParameterSubGroup:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addCustomParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(id)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addImageReferenceWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addPopupMenuWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(unsigned int)arg3 menuEntries:(id)arg4 parmFlags:(unsigned int)arg5;
- (BOOL)addPointParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned int)arg5;
- (BOOL)addColorParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 defaultAlpha:(double)arg6 parmFlags:(unsigned int)arg7;
- (BOOL)addColorParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 parmFlags:(unsigned int)arg6;
- (BOOL)addAngleSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 parmFlags:(unsigned int)arg6;
- (BOOL)addToggleButtonWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(BOOL)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addIntSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(int)arg3 parameterMin:(int)arg4 parameterMax:(int)arg5 sliderMin:(int)arg6 sliderMax:(int)arg7 delta:(int)arg8 parmFlags:(unsigned int)arg9;
- (BOOL)addFloatSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 sliderMin:(double)arg6 sliderMax:(double)arg7 delta:(double)arg8 parmFlags:(unsigned int)arg9;
- (unsigned int)removeCustomUIFlag:(unsigned int)arg1 fromParameterNamed:(id)arg2 withID:(unsigned int)arg3;
- (id)outgoingTransactions;
- (id)incomingTransactions;
- (void)dealloc;
- (id)initWithAPIManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

