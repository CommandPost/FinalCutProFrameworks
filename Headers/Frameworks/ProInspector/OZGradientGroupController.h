//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

@class OZChanColorController, OZChanGradientController, OZLabeledParamController;

@interface OZGradientGroupController : OZViewControllerGroup
{
    OZLabeledParamController *_pHeadingController;
    OZChanGradientController *_pEditorController;
    OZChanColorController *_pColorController;
    OZLabeledParamController *_pColorRowController;
    OZViewControllerGroup *_pRedController;
    OZViewControllerGroup *_pGreenController;
    OZViewControllerGroup *_pBlueController;
    OZLabeledParamController *_pOpacityController;
    OZLabeledParamController *_pInterpolationController;
    OZViewControllerGroup *_pLocationController;
    OZViewControllerGroup *_pEditorGroup;
    struct OZChannelRef *_selectedSampleRef;
    BOOL _middleSelected;
}

- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3;
- (void)update;
- (void)notify:(unsigned int)arg1;
- (BOOL)getMiddleSelected;
- (void)updateSelectedSampleAlphaFrom:(id)arg1;
- (void)didChangeSelectedSampleAlpha;
- (void)aboutToChangeSelectedSampleAlpha;
- (void)updateSelectedSampleRGBFrom:(id)arg1;
- (void)didChangeSelectedSampleRGB;
- (void)aboutToChangeSelectedSampleRGB;
- (struct OZChannelGradientSample *)getSelectedSample;
- (void)setSelectedSample:(struct OZChannelGradientSample *)arg1 middleSelected:(BOOL)arg2 doubleClick:(BOOL)arg3;
- (void)aboutToChangeChannel:(struct OZChannelBase *)arg1 isFirstController:(BOOL)arg2;
- (void)initHUD:(struct OZChannelGradient *)arg1 context:(id)arg2;
- (void)initNormal:(struct OZChannelGradient *)arg1 context:(id)arg2;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

@end

