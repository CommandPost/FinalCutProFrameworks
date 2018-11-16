//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextFramework/OZAutoTextInspectorController.h>

@class OZChanFolderController, OZFolderGroupController, OZLabeledParamController, OZViewController, OZViewControllerGroup;

@interface OZAutoTextFormatController : OZAutoTextInspectorController
{
    struct TXTextLayout *_text;
    OZFolderGroupController *_scaleCtrl;
    OZViewControllerGroup *_basicFormattingCtrl;
    OZLabeledParamController *_basicFormattingRowCtrl;
    OZViewControllerGroup *_basicFormattingOuterCtrl;
    OZChanFolderController *_basicFormattingParamCtrl;
    OZViewController *_presetCtrl;
    OZViewController *_collectionCtrl;
    OZViewControllerGroup *_fontCtrl;
    OZViewController *_sizeCtrl;
    OZViewController *_alignmentCtrl;
    OZViewController *_verticalAlignmentCtrl;
    OZViewController *_lineSpacingCtrl;
    OZViewController *_trackingCtrl;
    OZViewController *_kerningLabelCtrl;
    OZViewController *_kerningCtrl;
    OZViewController *_baselineCtrl;
    OZViewControllerGroup *_advancedFormattingCtrl;
    OZLabeledParamController *_advancedFormattingRowCtrl;
    OZViewControllerGroup *_advancedFormattingOuterCtrl;
    OZChanFolderController *_advancedFormattingParamCtrl;
    OZViewController *_scaleLabelCtrl;
    OZViewController *_scaleParamCtrl;
    OZViewController *_scaleXCtrl;
    OZViewController *_scaleYCtrl;
    OZViewController *_scaleZCtrl;
    OZViewController *_offsetCtrl;
    OZViewController *_scaleAffectsLayoutCtrl;
    OZViewController *_slantCtrl;
    OZViewController *_monospaceCtrl;
    OZViewController *_allCapsCtrl;
    OZViewController *_allCapsLabelCtrl;
    OZViewController *_allCapsSizeCtrl;
    OZViewControllerGroup *_rotateCtrl;
    OZViewControllerGroup *_rotateCtrlGrp;
}

- (void)updateLayoutControllers:(list_d81b4758 *)arg1;
- (void)enableDisableUI:(unsigned int)arg1;
- (void)notify:(unsigned int)arg1;
- (struct TXTextStyle *)getCurrentStyle;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_198678f7)arg2 qualifiers:(int)arg3;
- (void)_saveDefaultFont:(int)arg1;
- (void)update;
- (void)resetOrAddAssociatedStyle:(struct TXTextStyle *)arg1 reset:(BOOL)arg2;
- (void)appendCustomTextUI:(struct TXTextLayout *)arg1 context:(id)arg2;
- (void)buildUI:(struct OZSceneNode *)arg1 context:(id)arg2;
- (void)enableDisableLayoutUI:(int)arg1;
- (void)buildTextView:(id)arg1;
- (struct OZChannelFolder *)getRootChan:(struct OZSceneNode *)arg1;
- (void)dealloc;
- (id)initWithNode:(struct OZSceneNode *)arg1 viewCtlrDelegate:(id)arg2 context:(id)arg3;

@end

