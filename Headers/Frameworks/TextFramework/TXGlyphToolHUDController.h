//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

@class LKPopUpButton, LKTextField, NSView, TXRotate3DHUDButton, TXScale3DHUDButton, TXXYTranslate3DHUDButton, TXXZTranslate3DHUDButton, TXZTranslate3DHUDButton;

@interface TXGlyphToolHUDController : OZViewControllerGroup
{
    list_3c5d753a *_pTNodes;
    struct TXTextLayout *_text;
    TXZTranslate3DHUDButton *_zTransButton;
    TXXYTranslate3DHUDButton *_xyTransButton;
    TXXZTranslate3DHUDButton *_xzTransButton;
    TXRotate3DHUDButton *_rotButton;
    TXScale3DHUDButton *_scaleButton;
    LKTextField *_positionText;
    LKTextField *_rotationText;
    LKTextField *_scaleText;
    LKPopUpButton *_axesPopUp;
    LKPopUpButton *_oscPopUp;
    LKTextField *_instr1Text;
    LKTextField *_instr2Text;
    LKTextField *_oscPopUpTextField;
    NSView *_view;
}

- (void)transformOSCFlagsChanged:(id)arg1;
- (list_3c5d753a *)nodeList;
- (struct TXTextLayout *)getTextLayout;
- (int)getOSCMode;
- (int)getAxes;
- (void)changeOSCMode:(id)arg1;
- (void)changeAxes:(id)arg1;
- (void)update;
- (void)dealloc;
- (void)updateEnableState;
- (id)initWithChan:(struct OZChannelBase *)arg1 textLayout:(struct TXTextLayout *)arg2 context:(id)arg3;

@end

