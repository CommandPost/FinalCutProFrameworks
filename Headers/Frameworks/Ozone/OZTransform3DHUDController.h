//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZHUDController.h>

@class LKPopUpButton, LKTextField, OZRotate3DHUDButton, OZScale3DHUDButton, OZXYTranslate3DHUDButton, OZXZTranslate3DHUDButton, OZZTranslate3DHUDButton;

@interface OZTransform3DHUDController : OZHUDController
{
    list_87f2377f *_pTNodes;
    OZZTranslate3DHUDButton *_zTransButton;
    OZXYTranslate3DHUDButton *_xyTransButton;
    OZXZTranslate3DHUDButton *_xzTransButton;
    OZRotate3DHUDButton *_rotButton;
    OZScale3DHUDButton *_scaleButton;
    LKTextField *_positionText;
    LKTextField *_rotationText;
    LKTextField *_scaleText;
    LKPopUpButton *_axesPopUp;
    LKTextField *_instr1Text;
    LKTextField *_instr2Text;
}

- (void)transformOSCFlagsChanged:(id)arg1;
- (int)getAxes;
- (void)changeAxes:(id)arg1;
- (void)dealloc;
- (list_87f2377f *)nodeList;
- (void)notify:(unsigned int)arg1;
- (BOOL)loadView;
- (void)updateEnableState;
- (BOOL)isScaleHiddenOrDisabled;
- (BOOL)isRotateHiddenOrDisabled;
- (BOOL)isTranslateHiddenOrDisabled;
- (BOOL)isTransformationHiddenOrDisabled;
- (id)initWithObjectList:(list_93048c9c *)arg1;

@end

