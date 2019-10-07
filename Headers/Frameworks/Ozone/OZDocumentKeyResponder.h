//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

#import "NSUserInterfaceValidations.h"

@class NSMutableArray, NSWindowController;

@interface OZDocumentKeyResponder : NSResponder <NSUserInterfaceValidations>
{
    NSWindowController *_pWindowController;
    NSMutableArray *_pTargets;
    BOOL _ignoreKeyEvents;
}

+ (void)addTarget:(id)arg1;
@property(nonatomic) NSWindowController *windowController; // @synthesize windowController=_pWindowController;
- (void)previewSceneAsCAAR:(id)arg1;
- (void)exportSceneAsCAAR:(id)arg1;
- (void)shareDestinationPicker:(id)arg1;
- (void)shareToDefaultDestination:(id)arg1;
- (void)shareToDestination:(id)arg1;
- (void)exportCurrentFrame:(id)arg1;
- (void)exportUsingCompressorSettings:(id)arg1;
- (void)openInCompressor:(id)arg1;
- (void)exportHTTPLiveStreaming:(id)arg1;
- (void)exportSelectionMovie:(id)arg1;
- (void)exportImageSequence:(id)arg1;
- (void)exportMovie:(id)arg1;
- (void)sendEmail:(id)arg1;
- (void)publishVimeo:(id)arg1;
- (void)publishYouTube:(id)arg1;
- (void)burnBluray:(id)arg1;
- (void)burnDVD:(id)arg1;
- (void)exportAudio:(id)arg1;
- (void)exportiTunes:(id)arg1;
- (void)exportMediaBrowser:(id)arg1;
- (void)toggleHMDRendering:(id)arg1;
- (void)enableExposeObjects:(id)arg1;
- (void)enableExposeAllObjects:(id)arg1;
- (void)enableExposeLayers:(id)arg1;
- (void)enableExposeAllLayers:(id)arg1;
- (void)nudgeRightBig:(id)arg1;
- (void)nudgeLeftBig:(id)arg1;
- (void)nudgeDownBig:(id)arg1;
- (void)nudgeUpBig:(id)arg1;
- (void)nudgeRight:(id)arg1;
- (void)nudgeLeft:(id)arg1;
- (void)nudgeDown:(id)arg1;
- (void)nudgeUp:(id)arg1;
- (void)clearCache:(id)arg1;
- (void)renderAll:(id)arg1;
- (void)renderSelectedRange:(id)arg1;
- (void)renderPlayRange:(id)arg1;
- (void)addVerticalGuide:(id)arg1;
- (void)addHorizontalGuide:(id)arg1;
- (void)clearAllGuides:(id)arg1;
- (void)unlockGuides:(id)arg1;
- (void)lockGuides:(id)arg1;
- (void)buildBlendMenu:(id)arg1 forLayer:(BOOL)arg2;
- (void)buildBlendMenu:(id)arg1 forLayer:(BOOL)arg2 selector:(SEL)arg3 target:(id)arg4;
- (void)blendMenuNeedsUpdate:(id)arg1;
- (void)blendMenuNeedsEnabledUpdate:(id)arg1;
- (void)blendMode:(id)arg1;
- (void)frameDisplayFrames:(id)arg1;
- (void)frameDisplayTimecode:(id)arg1;
- (void)importAsAudio:(id)arg1;
- (void)importAsUnusedMedia:(id)arg1;
- (void)importFiles:(id)arg1;
- (void)revealInFinder:(id)arg1;
- (void)openInQuickTime:(id)arg1;
- (void)openInViewer:(id)arg1;
- (void)removeOpticalFlowCache:(id)arg1;
- (void)removeUnusedMedia:(id)arg1;
- (void)reconnectSelectedMedia:(id)arg1;
- (void)reconnectAllMedia:(id)arg1;
- (void)revealSourceMedia:(id)arg1;
- (void)openQuickToursWebPage:(id)arg1;
- (void)openSupportWebPage:(id)arg1;
- (void)openLateBreakingNewsWebPage:(id)arg1;
- (void)openOnTheWebPage:(id)arg1;
- (void)openFeedbackPage:(id)arg1;
- (void)downloadAdditionalContent:(id)arg1;
- (void)activateMaskBSplineTool:(id)arg1;
- (void)activateMaskBezierTool:(id)arg1;
- (void)activateMaskFreeHandTool:(id)arg1;
- (void)activateMaskCircleTool:(id)arg1;
- (void)activateMaskRectTool:(id)arg1;
- (void)activateLineTool:(id)arg1;
- (void)activateCircleTool:(id)arg1;
- (void)activateRectTool:(id)arg1;
- (void)activateMaskTool:(id)arg1;
- (BOOL)maskToolValid;
- (void)activateEditToolWithSubMode:(struct PCUUID)arg1 andSender:(id)arg2;
- (void)activateWalkTool:(id)arg1;
- (void)activateCropTool:(id)arg1;
- (void)activateDistortTool:(id)arg1;
- (void)activateDropshadowTool:(id)arg1;
- (void)activateAnchorTool:(id)arg1;
- (void)activateBSplineShapeTool:(id)arg1;
- (void)activateBezierShapeTool:(id)arg1;
- (void)activateShapeTool:(id)arg1;
- (void)activateTransform3DTool:(id)arg1;
- (void)activatePaintStrokeTool:(id)arg1;
- (void)activateTextTool3D:(id)arg1;
- (void)activateTextTool2D:(id)arg1;
- (void)activateTextTool:(id)arg1;
- (void)activateAndResetEditTool:(id)arg1;
- (void)activateAdjustTool:(id)arg1;
- (void)activateEditTransformTextGlyphTool:(id)arg1;
- (void)activateEditCircleTool:(id)arg1;
- (void)activateEditRectangleTool:(id)arg1;
- (void)activateEditControlPointsTool:(id)arg1;
- (void)activateEditTool:(id)arg1;
- (void)activatePanTool:(id)arg1;
- (void)activateZoomTool:(id)arg1;
- (void)convertToBezier:(id)arg1;
- (void)convertToMask:(id)arg1;
- (void)bakeObject:(id)arg1;
- (BOOL)canBake;
- (void)addRig:(id)arg1;
- (void)addLightSetup:(unsigned int)arg1;
- (void)addLightSetupMenuAction:(id)arg1;
- (void)addLight:(id)arg1;
- (void)addCamera:(id)arg1;
- (unsigned int)checkFor3DSceneWithType:(unsigned int)arg1;
- (void)addClone:(id)arg1;
- (BOOL)canAddClone;
- (void)addReplicator:(id)arg1;
- (void)addEmitter:(id)arg1;
- (void)ozdkr__forwardToTarget:(SEL)arg1;
- (void)fitInWindow:(id)arg1;
- (void)setDocZoomLevel:(id)arg1;
- (void)zoomOutDoc:(id)arg1;
- (void)zoomInDoc:(id)arg1;
- (void)toggleVideoOutput:(id)arg1;
- (void)togglePlayerMode:(id)arg1;
- (void)performFavoriteMenuItem:(id)arg1;
- (void)showLibraryFavoritesMenuCategory:(id)arg1;
- (void)toggleUtilityVisibility:(id)arg1;
- (void)toggleProjectVisibility:(id)arg1;
- (void)showInspectorTab:(id)arg1;
- (void)showLibraryTab:(id)arg1;
- (void)showObjectTab:(id)arg1;
- (void)showEffectsTab:(id)arg1;
- (void)showBehaviorsTab:(id)arg1;
- (void)showPropertiesTab:(id)arg1;
- (void)showAudioTab:(id)arg1;
- (void)showMediaTab:(id)arg1;
- (void)showLayersTab:(id)arg1;
- (void)toggleFileModifiedVisibility:(id)arg1;
- (void)toggleFileCreatedVisibility:(id)arg1;
- (void)toggleFileSizeVisibility:(id)arg1;
- (void)toggleAudioFormatVisibility:(id)arg1;
- (void)toggleAudioRateVisibility:(id)arg1;
- (void)toggleDataRateVisibility:(id)arg1;
- (void)toggleFrameRateVisibility:(id)arg1;
- (void)toggleDepthVisibility:(id)arg1;
- (void)toggleCompressorVisibility:(id)arg1;
- (void)toggleFrameSizeVisibility:(id)arg1;
- (void)toggleInUseVisibility:(id)arg1;
- (void)toggleDurationVisibility:(id)arg1;
- (void)toggleTypeVisibility:(id)arg1;
- (void)toggleMediaPreviewVisibility:(id)arg1;
- (void)toggleBlendVisibility:(id)arg1;
- (void)toggleOpacityVisibility:(id)arg1;
- (void)toggleLayerPreviewVisibility:(id)arg1;
- (void)editProjectSettings:(id)arg1;
- (void)inspect:(id)arg1;
- (void)cycleHUDsBackward:(id)arg1;
- (void)cycleHUDsForward:(id)arg1;
- (void)resetPlayRangeToProjectDuration:(id)arg1;
- (void)gotoTailOfPlayRange:(id)arg1;
- (void)gotoHeadOfPlayRange:(id)arg1;
- (void)gotoTailOfSelectedObjects:(id)arg1;
- (void)gotoHeadOfSelectedObjects:(id)arg1;
- (void)moveSelectedOutPoint:(id)arg1;
- (void)moveSelectedInPoint:(id)arg1;
- (void)clearPlayRangeOutPoint:(id)arg1;
- (void)clearPlayRangeInPoint:(id)arg1;
- (void)setPlayRangeOutPoint:(id)arg1;
- (void)setPlayRangeInPoint:(id)arg1;
- (void)setSelectedOutPoint:(id)arg1;
- (void)setSelectedInPoint:(id)arg1;
- (void)addKeyframeToLastModified:(id)arg1;
- (void)nextKeyframe:(id)arg1;
- (void)previousKeyframe:(id)arg1;
- (void)nextMarker:(id)arg1;
- (void)previousMarker:(id)arg1;
- (void)deleteAllMarkers:(id)arg1;
- (void)deleteMarker:(id)arg1;
- (void)editMarker:(id)arg1;
- (void)createGlobalMarker:(id)arg1;
- (void)createMarker:(id)arg1;
- (void)recordingOptions:(id)arg1;
- (void)toggleCurrentAlphaViewMode:(id)arg1;
- (void)toggleSnapping:(id)arg1;
- (void)cycleOSCsBackward:(id)arg1;
- (void)cycleOSCsForward:(id)arg1;
- (void)toggleUseDropZones:(id)arg1;
- (void)compensateAspectRatio:(id)arg1;
- (void)frameObject:(id)arg1;
- (void)frameAll:(id)arg1;
- (void)focusOnObject:(id)arg1;
- (void)selectCurrentCamera:(id)arg1;
- (void)selectNextCamera:(id)arg1;
- (void)resetCamera:(id)arg1;
- (void)selectCamera:(id)arg1;
- (void)setSubViews:(id)arg1;
- (void)setOSCOption:(id)arg1;
- (void)setOverlayOption:(id)arg1;
- (void)showDepthOfField:(id)arg1;
- (void)showReflection:(id)arg1;
- (void)showShadows:(id)arg1;
- (void)showLighting:(id)arg1;
- (void)showFrameBlending:(id)arg1;
- (void)showMotionBlur:(id)arg1;
- (void)toggleDoRenderFields:(id)arg1;
- (void)setCustomRenderQuality:(id)arg1;
- (void)setSchmozonjRaigsMode:(id)arg1;
- (void)setToneMappingMode:(id)arg1;
- (void)setViewGamut:(id)arg1;
- (void)setRenderQuality:(id)arg1;
- (void)setDynamicResolution:(id)arg1;
- (void)setResolution:(id)arg1;
- (void)setViewMode:(id)arg1;
- (void)record:(id)arg1;
- (void)togglePlayMode:(id)arg1;
- (void)previousFrameBig:(id)arg1;
- (void)previousFrame:(id)arg1;
- (void)nextFrameBig:(id)arg1;
- (void)nextFrame:(id)arg1;
- (void)goToEnd:(id)arg1;
- (void)goToStart:(id)arg1;
- (void)stopPlaying:(id)arg1;
- (void)transformPoints:(id)arg1;
- (void)playAround:(id)arg1;
- (void)playBackward:(id)arg1;
- (void)playForwardDummy:(id)arg1;
- (void)playFromStart:(id)arg1;
- (void)playForward:(id)arg1;
- (void)addImageMask:(id)arg1;
- (void)change3DGroupState:(id)arg1;
- (void)unfreezeAll:(id)arg1;
- (void)unfreezeSelected:(id)arg1;
- (BOOL)_alertUnfreeze:(BOOL)arg1;
- (void)freezeSelected:(id)arg1;
- (BOOL)canFreeze;
- (void)lockObjects:(id)arg1;
- (void)unsoloAll:(id)arg1;
- (void)unsoloAllAudio:(id)arg1;
- (void)unsoloAllVideo:(id)arg1;
- (void)isolateCurrentObject:(id)arg1;
- (void)isolateObject:(struct OZSceneNode *)arg1;
- (void)soloObjects:(id)arg1;
- (void)muteObjects:(id)arg1;
- (void)enableObjects:(id)arg1;
- (void)ungroup:(id)arg1;
- (void)group:(id)arg1;
- (void)sendBackwards:(id)arg1;
- (void)bringForwards:(id)arg1;
- (void)sendToBack:(id)arg1;
- (void)bringToFront:(id)arg1;
- (void)createDropZone:(id)arg1;
- (void)create360Layer:(id)arg1;
- (void)createLayer:(id)arg1;
- (void)deleteKey:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)rippleDelete:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)resetDisplayRangeToProjectDuration:(id)arg1;
- (void)resetDisplayRangeToPlayRange:(id)arg1;
- (void)zoomTimelineOut:(id)arg1;
- (void)zoomTimelineIn:(id)arg1;
- (BOOL)validateAction:(SEL)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)stopPlaybackInAllDocuments;
- (id)ozdkr__timingModule;
- (id)ozdkr__toolbarModule;
- (id)ozdkr__canvasModule;

@end

