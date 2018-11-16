//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZImagePreview.h"

#import "MEBackgroundLoadPreviewClient.h"

@class MEBackgroundLoadStylePreviewRequest, OZViewController<TXMaterialImagePreviewControllerIF><OZPresetControllerIF>;

@interface TXMaterialImagePreview : OZImagePreview <MEBackgroundLoadPreviewClient>
{
    OZViewController<TXMaterialImagePreviewControllerIF><OZPresetControllerIF> *_pController;
    BOOL _mouseHovering;
    BOOL _isSelected;
    BOOL _isInBrick;
    BOOL _useMultipleMaterialsImage;
    MEBackgroundLoadStylePreviewRequest *_previewRequest;
}

@property(nonatomic) BOOL useMultipleMaterialsImage; // @synthesize useMultipleMaterialsImage=_useMultipleMaterialsImage;
@property(nonatomic) BOOL isInBrick; // @synthesize isInBrick=_isInBrick;
@property(nonatomic) id controller; // @synthesize controller=_pController;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (void)backgroundRequestCompleted:(id)arg1;
- (void)display:(struct OZRenderNode *)arg1;
- (void)viewDidMoveToWindow;
- (struct OZRenderManager *)renderManagerForNode:(struct OZRenderNode *)arg1;
- (id)motionEffect;
- (id)image;
- (void)delete:(id)arg1;
- (double)getInset;
- (struct OZRenderManager *)renderManager:(struct OZRenderNode *)arg1;
- (void)dealloc;
- (void)_init;

@end
