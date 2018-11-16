//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CKAccessoryView.h"

@class NSButton, NSPopUpButton, OZObjCDocument;

@interface OZShareController : NSViewController <CKAccessoryView>
{
    NSPopUpButton *_resolutionPopUp;
    NSPopUpButton *_colorPopUp;
    NSButton *_premultiplyAlphaButton;
    NSPopUpButton *_renderQualityPopUp;
    NSPopUpButton *_fieldsPopUp;
    NSPopUpButton *_motionBlurPopUp;
    NSPopUpButton *_frameBlendingPopUp;
    NSPopUpButton *_cameraPopUp;
    NSPopUpButton *_lightingPopUp;
    NSPopUpButton *_shadowsPopUp;
    NSPopUpButton *_reflectionsPopUp;
    NSPopUpButton *_depthOfFieldPopUp;
    OZObjCDocument *_objCDoc;
    struct OZExportSettings *_tmpSettings;
}

- (id)initWithObjCDocument:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)buildCameraList;
- (void)setResolution:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setPremultiplyAlpha:(id)arg1;
- (void)_updateCustomQualityFromExportSettings;
- (void)setRenderQuality:(id)arg1;
- (void)setCustomRenderQuality:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setMotionBlur:(id)arg1;
- (void)setFrameBlending:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setLighting:(id)arg1;
- (void)setShadows:(id)arg1;
- (void)setReflections:(id)arg1;
- (void)setDepthOfField:(id)arg1;
- (id)userInfoAndDescription:(id *)arg1;
- (void)setUserInfo:(id)arg1;

@end

