//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxOptionalParameterCreationAPI.h"
#import "FxOptionalParameterRetrievalAPI.h"
#import "FxOptionalParameterSettingAPI.h"
#import "FxParameterAPIPrivate.h"
#import "FxParameterCreationAPI.h"
#import "FxParameterCreationAPI_v2.h"
#import "FxParameterCreationAPI_v3.h"
#import "FxParameterRetrievalAPI.h"
#import "FxParameterRetrievalAPIPrivate.h"
#import "FxParameterRetrievalAPI_v2.h"
#import "FxParameterRetrievalAPI_v3.h"
#import "FxParameterSettingAPI.h"
#import "FxParameterSettingAPIPrivate.h"
#import "FxParameterSettingAPI_v2.h"
#import "FxParameterSettingAPI_v3.h"
#import "FxPlugAPIDelegate.h"
#import "FxRenderNotificationAPI.h"
#import "FxUndoAPI.h"
#import "PROAPIObject.h"

@interface OZFxPlugParameterHandler : NSObject <FxParameterCreationAPI, FxParameterCreationAPI_v2, FxParameterCreationAPI_v3, FxParameterRetrievalAPI, FxParameterRetrievalAPI_v2, FxParameterRetrievalAPI_v3, FxParameterSettingAPI, FxParameterSettingAPI_v2, FxParameterSettingAPI_v3, FxOptionalParameterCreationAPI, FxOptionalParameterRetrievalAPI, FxOptionalParameterSettingAPI, PROAPIObject, FxPlugAPIDelegate, FxRenderNotificationAPI, FxUndoAPI, FxParameterRetrievalAPIPrivate, FxParameterSettingAPIPrivate, FxParameterAPIPrivate>
{
    struct stack<OZChannelFolder*, std::deque<OZChannelFolder*, std::allocator<OZChannelFolder*>>> *_folderStack;
    map_a9bf50f6 *_channelMap;
    struct vector<std::tr1::shared_ptr<PCImage>, std::allocator<std::tr1::shared_ptr<PCImage>>> *_imageList;
    struct OZChannelFolder *_baseChannel;
    struct PGContext *_context;
    struct GLRenderer *_renderer;
    struct LiAgent *_agent;
    struct OZRenderParams _renderParams;
    PCRect_07ce470f _lithiumDOD;
    PCPtr_2c56e3c4 _lithiumInput;
    BOOL _filmSpace;
    PCRect_b601f9f3 _filterInputBounds;
    BOOL _filterBoundsSet;
    BOOL _startActionCalled;
    int _numWriteActions;
    BOOL _isRendering;
    vector_807f2fe4 _customParameterList;
    unsigned int _flipCheckboxID;
    unsigned int _inputPointsCheckboxID;
    unsigned int _absPtCheckboxID;
    unsigned int _publishOSCCheckboxID;
    struct OZChannelBool *_publishOSCChan;
    struct OZChannelBool *_flipCheckbox;
    struct OZChannelBool *_inputPointsCheckbox;
    struct OZChannelBool *_absPtCheckbox;
    struct OZChannelPercent *_mixSlider;
    BOOL _postAddParameters;
    BOOL _hasPointParam;
}

- (id)initWithBaseChannel:(struct OZChannelFolder *)arg1;
- (id)initWithBaseChannel:(struct OZChannelFolder *)arg1 andCopy:(id)arg2;
- (id)initWithBaseChannel:(struct OZChannelFolder *)arg1 andCopy:(id)arg2 Skip:(int)arg3;
- (void)dealloc;
- (void)copyFolderRecursiveFrom:(struct OZChannelFolder *)arg1 To:(struct OZChannelFolder *)arg2;
- (void)copyFolderRecursiveFrom:(struct OZChannelFolder *)arg1 To:(struct OZChannelFolder *)arg2 Skip:(int)arg3;
- (void)clearImageList;
- (struct OZScene *)getScene;
- (struct OZSceneNode *)getSceneNode;
- (struct OZFxPlugSharedBase *)getSharedBase;
- (void)sendUpdateEvent;
- (void)sendNotifications:(id)arg1;
- (map_a9bf50f6 *)channelMap;
- (void)updateChannelMap;
- (BOOL)containsParameterWithID:(unsigned int)arg1;
- (struct OZChannelFolder *)rootChannel;
- (struct OZChannelBase *)channelWithID:(int)arg1;
- (unsigned int)parameterCount;
- (struct OZChannelBase *)parameterAtIndex:(unsigned int)arg1;
- (void)removeParameter:(unsigned int)arg1;
- (void)updateInspectorAndDeleteChannel:(id)arg1;
- (void)updateInspector;
- (double)convertFromFigTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)convertToFigTime:(double)arg1;
- (void)beginOperationWithChannel:(struct OZChannelBase *)arg1;
- (void)endOperationWithChannel:(struct OZChannelBase *)arg1;
- (void)markForDynamicParameterUsage;
- (void)addExistingChannel:(struct OZChannelBase *)arg1;
- (void)addExistingGroup:(struct OZChannelFolder *)arg1;
- (id)displayName;
- (void)addMixSlider:(unsigned int)arg1;
- (struct OZChannelPercent *)mixChannel;
- (void)setFlipCheckbox:(unsigned int)arg1;
- (unsigned int)flipCheckbox;
- (void)addFlipCheckbox:(unsigned int)arg1;
- (struct OZChannelBool *)flipChannel;
- (BOOL)shouldFlipPoints;
- (void)addInputPointsCheckbox:(unsigned int)arg1;
- (void)setInputPointsCheckbox:(unsigned int)arg1;
- (unsigned int)inputPointsCheckbox;
- (BOOL)useInputPoints;
- (struct OZChannelBool *)inputPointsChannel;
- (void)addAbsolutePointCheckbox:(unsigned int)arg1;
- (void)setAbsolutePointsCheckbox:(unsigned int)arg1;
- (BOOL)useAbsolutePoints;
- (struct OZChannelBool *)absolutePointsChannel;
- (void)addPublishOSCCheckbox:(unsigned int)arg1;
- (struct OZChannelBool *)publishOSCChannel;
- (void)setDoneAddingParams:(BOOL)arg1;
- (BOOL)doneAddingParams;
- (void)removeHiddenParameters;
- (void)reAddHiddenParameters;
- (void)copyHiddenChannelsFrom:(id)arg1;
- (void)movePublishOSCChannelToEnd;
- (void)forceRenderAtTime:(double)arg1;
- (BOOL)addFloatSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 sliderMin:(double)arg6 sliderMax:(double)arg7 delta:(double)arg8 parmFlags:(unsigned int)arg9;
- (BOOL)addPercentSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 sliderMin:(double)arg6 sliderMax:(double)arg7 delta:(double)arg8 parmFlags:(unsigned int)arg9;
- (BOOL)addIntSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(int)arg3 parameterMin:(int)arg4 parameterMax:(int)arg5 sliderMin:(int)arg6 sliderMax:(int)arg7 delta:(int)arg8 parmFlags:(unsigned int)arg9;
- (BOOL)addToggleButtonWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(BOOL)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addAngleSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 parmFlags:(unsigned int)arg6;
- (struct CGColorSpace *)getPluginColorSpace;
- (void)getColorInFxPlugColorSpace:(struct PCColor *)arg1 red:(float *)arg2 green:(float *)arg3 blue:(float *)arg4 alpha:(float *)arg5;
- (void)setColorFromFxPlugColorSpace:(struct PCColor *)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5;
- (BOOL)addColorParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 parmFlags:(unsigned int)arg6;
- (BOOL)addColorParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 defaultAlpha:(double)arg6 parmFlags:(unsigned int)arg7;
- (BOOL)addPointParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned int)arg5;
- (BOOL)addPopupMenuWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(unsigned int)arg3 menuEntries:(id)arg4 parmFlags:(unsigned int)arg5;
- (BOOL)addImageReferenceWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addCustomParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(id)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)setCustomParameterDefaultValue:(id)arg1 parmId:(unsigned int)arg2;
- (BOOL)startParameterSubGroup:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)endParameterSubGroup;
- (BOOL)addLevelsWithName:(id)arg1 parmId:(unsigned long long)arg2 hideGamma:(BOOL)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addHistogramWithName:(id)arg1 parmId:(unsigned long long)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addGradientWithName:(id)arg1 parmId:(unsigned long long)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addGradientPositionedWithName:(id)arg1 parmId:(unsigned long long)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)addStringParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(id)arg3 parmFlags:(unsigned int)arg4;
- (BOOL)addPathPickerWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (BOOL)getFloatValue:(double *)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)getIntValue:(int *)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)getBoolValue:(char *)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)getRedValue:(double *)arg1 greenValue:(double *)arg2 blueValue:(double *)arg3 fromParm:(unsigned int)arg4 atTime:(double)arg5;
- (BOOL)getRedValue:(double *)arg1 GreenValue:(double *)arg2 BlueValue:(double *)arg3 fromParm:(unsigned int)arg4 atTime:(double)arg5;
- (BOOL)getRedValue:(double *)arg1 greenValue:(double *)arg2 blueValue:(double *)arg3 alphaValue:(double *)arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (BOOL)getRedValue:(double *)arg1 GreenValue:(double *)arg2 BlueValue:(double *)arg3 AlphaValue:(double *)arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (BOOL)getXValue:(double *)arg1 YValue:(double *)arg2 fromParm:(unsigned int)arg3 atTime:(double)arg4;
- (BOOL)getAngle:(double *)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)retrieveImage:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_8b442eb9)arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6 retriever:(SEL)arg7;
- (BOOL)getBitmap:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_8b442eb9)arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (id)bitmapRetriever:(id)arg1;
- (BOOL)getTexture:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_8b442eb9)arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (id)textureRetriever:(id)arg1;
- (BOOL)getHeliumImage:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_8b442eb9)arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (id)heliumImageRetriever:(id)arg1;
- (BOOL)getCustomParameterValue:(id *)arg1 fromParm:(unsigned int)arg2;
- (BOOL)getCustomParameterValue:(id *)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)getHistogramBlackIn:(double *)arg1 BlackOut:(double *)arg2 WhiteIn:(double *)arg3 WhiteOut:(double *)arg4 Gamma:(double *)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned long long)arg7 atTime:(double)arg8;
- (BOOL)getLevelsBlack:(double *)arg1 White:(double *)arg2 Gamma:(double *)arg3 fromParm:(unsigned long long)arg4 atTime:(double)arg5;
- (BOOL)getGradientSamples:(void *)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned long long)arg4 atTime:(double)arg5;
- (BOOL)getGradientStartEnd:(double *)arg1 startY:(double *)arg2 endX:(double *)arg3 endY:(double *)arg4 type:(int *)arg5 fromParm:(unsigned long long)arg6 atTime:(double)arg7;
- (BOOL)getParameterFlags:(unsigned int *)arg1 fromParm:(unsigned int)arg2;
- (BOOL)getStringParameterValue:(id *)arg1 fromParm:(unsigned int)arg2;
- (BOOL)getPathID:(void **)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)setIntValue:(int)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)setBoolValue:(BOOL)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atTime:(double)arg5;
- (BOOL)setRedValue:(double)arg1 GreenValue:(double)arg2 BlueValue:(double)arg3 toParm:(unsigned int)arg4 atTime:(double)arg5;
- (BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atTime:(double)arg6;
- (BOOL)setRedValue:(double)arg1 GreenValue:(double)arg2 BlueValue:(double)arg3 AlphaValue:(double)arg4 toParm:(unsigned int)arg5 atTime:(double)arg6;
- (BOOL)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atTime:(double)arg4;
- (BOOL)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (BOOL)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)setHistogramBlackIn:(double)arg1 BlackOut:(double)arg2 WhiteIn:(double)arg3 WhiteOut:(double)arg4 Gamma:(double)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned long long)arg7 atTime:(double)arg8;
- (BOOL)setLevelsBlack:(double)arg1 White:(double)arg2 Gamma:(double)arg3 forParm:(unsigned long long)arg4 atTime:(double)arg5;
- (BOOL)setParameterFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (BOOL)setStringParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (BOOL)setGradientStartEnd:(double)arg1 startY:(double)arg2 endX:(double)arg3 endY:(double)arg4 toParm:(unsigned long long)arg5 atTime:(double)arg6;
- (BOOL)setPathID:(void *)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (BOOL)startUndoGroup:(id)arg1;
- (BOOL)endUndoGroup;
- (void)_updateUIForParm:(int)arg1;
- (void)_updateUI:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)setRenderParams:(const struct OZRenderParams *)arg1 withDOD:(PCRect_07ce470f)arg2 withInputBounds:(PCRect_b601f9f3)arg3 withLithiumInput:(PCPtr_2c56e3c4 *)arg4 withLithiumAgent:(struct LiAgent *)arg5;
- (void)getFieldMode:(int *)arg1 fromFootage:(struct OZFootage *)arg2;
- (void)unsetInputBounds;
- (void)actionStarted;
- (void)actionEnded;
- (int)numWriteActions;
- (BOOL)_floatParameter:(int)arg1 hasValidMin:(double)arg2 max:(double)arg3 sliderMin:(double)arg4 sliderMax:(double)arg5 defaultValue:(double)arg6 paramFlags:(unsigned int)arg7;
- (BOOL)_intParameter:(int)arg1 hasValidMin:(int)arg2 max:(int)arg3 sliderMin:(int)arg4 sliderMax:(int)arg5 defaultValue:(int)arg6 paramFlags:(unsigned int)arg7;
- (void)setIsRendering:(BOOL)arg1;
- (BOOL)isRendering;
- (vector_807f2fe4 *)customParameterList;
- (void)getPointChannel:(struct OZChannel **)arg1 nearestPoint:(PCVector2_79efa81a)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (BOOL)hasPointParameters;
- (PCRect_b601f9f3)getBoundsFromSceneNode:(struct OZSceneNode *)arg1 withRenderParams:(struct OZRenderParams *)arg2;
- (PCPtr_2c56e3c4)makeSourceFromSceneNode:(struct OZSceneNode *)arg1 withRenderParams:(struct OZRenderParams)arg2;
- (double)getPixelAspectRatioFromSceneNode:(struct OZSceneNode *)arg1;
- (void)finalizeImage:(id)arg1 withSceneNode:(struct OZSceneNode *)arg2 pixelBounds:(PCRect_07ce470f)arg3 agent:(struct LiAgent *)arg4 andRenderParams:(struct OZRenderParams)arg5 atTime:(double)arg6;
- (void)getLayerOffsetX:(double *)arg1 andOffsetY:(double *)arg2 fromSceneNode:(struct OZSceneNode *)arg3 withRenderParams:(struct OZRenderParams)arg4;
- (BOOL)_setupRenderer;
- (void)_setupRenderParams:(struct OZRenderParams *)arg1 requestInfo:(CDStruct_8b442eb9)arg2 sceneNode:(struct OZSceneNode *)arg3 atTime:(CDStruct_1b6d18a9)arg4;
- (void)_cleanupRenderParams:(struct OZRenderParams *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

