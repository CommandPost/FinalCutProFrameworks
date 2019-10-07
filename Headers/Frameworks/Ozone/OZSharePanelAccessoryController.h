//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "FFSharePanelAccessoryProtocol.h"

@class FFShareDestination, NSButton, NSImageView, NSPopUpButton, NSTextField, NSView, OZObjCDocument;

@interface OZSharePanelAccessoryController : NSViewController <FFSharePanelAccessoryProtocol>
{
    NSImageView *_shareDestinationImageView;
    NSTextField *_shareDestinationTextField;
    NSPopUpButton *_renderQualityPopUp;
    NSButton *_fieldsCheckbox;
    NSButton *_motionBlurCheckbox;
    NSButton *_frameBlendingCheckbox;
    NSPopUpButton *_cameraPopUp;
    NSButton *_lightingCheckbox;
    NSButton *_shadowsCheckbox;
    NSButton *_reflectionsCheckbox;
    NSButton *_depthOfFieldCheckbox;
    OZObjCDocument *_objCDoc;
    struct OZExportSettings *_tmpSettings;
    struct OZExportSettings _canvasSettings;
    struct OZExportSettings _highestQualitySettings;
    BOOL _exportSelectedLayersOnly;
    NSView *_previewContainerView;
    FFShareDestination *_shareDestination;
}

@property(nonatomic) FFShareDestination *shareDestination; // @synthesize shareDestination=_shareDestination;
@property(readonly, nonatomic) NSView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
@property(readonly, nonatomic) BOOL exportSelectedLayersOnly; // @synthesize exportSelectedLayersOnly=_exportSelectedLayersOnly;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setDepthOfField:(id)arg1;
- (void)setReflections:(id)arg1;
- (void)setShadows:(id)arg1;
- (void)setLighting:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setFrameBlending:(id)arg1;
- (void)setMotionBlur:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setCustomRenderQuality:(id)arg1;
- (void)setRenderQuality:(id)arg1;
- (int)customRenderQualityFromExportSettings:(struct OZExportSettings *)arg1;
- (void)buildCameraList;
- (struct OZExportSettings *)exportSettings;
- (id)customData;
- (void)setRenderPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)useCanvasSettings:(id)arg1;
- (void)highestQuality:(id)arg1;
@property(readonly, nonatomic) BOOL shouldEnableUseCanvasSettings;
@property(readonly, nonatomic) BOOL shouldEnableHighestQuality;
- (void)didChangeExportSettings;
- (void)willChangeExportSettings;
- (void)updateViewFromExportSettings;
- (void)matchExportSettingsWithCanvas:(struct OZExportSettings *)arg1;
- (void)unbindShareDestinationControls;
- (void)bindShareDestinationControls;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithObjCDocument:(id)arg1;

@end

