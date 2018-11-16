//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

#import "TXMaterialImagePreviewControllerIF.h"

@class NSButton, NSMutableArray, OZChanFolderController, OZFolderGroupController, OZViewController, TXMaterialAssignmentFolderController, TXMultipleLayersNoticeController;

@interface TXMaterialController : OZViewControllerGroup <TXMaterialImagePreviewControllerIF>
{
    struct OZMaterialBase *_material;
    NSButton *_addLayerButton;
    NSMutableArray *_materialLayerCtrls;
    struct OZLibraryPresetsMap *_pPresets;
    OZFolderGroupController *_outerGroupCtrl;
    OZViewControllerGroup *_enclosedGroup;
    TXMultipleLayersNoticeController *_multipleLayersCtrl;
    OZViewController *_addNewLayerCtrl;
    OZViewControllerGroup *_materialOptionsCtrl;
    OZViewControllerGroup *_transformCtrl;
    OZViewControllerGroup *_globalPlacementCtrl;
    OZViewController *_materialJitterRandomizeSeedCtrl;
    id <OZViewCtlrDelegate> _materialCtrlDelegate;
    BOOL _inhibitUpdates;
    BOOL _renderMaterialPreviewsOnNextUpdate;
    OZChanFolderController *_ctrlShowingAddLayerButton;
    TXMaterialAssignmentFolderController *_materialAssignmentFolderController;
}

@property(nonatomic) TXMaterialAssignmentFolderController *materialAssignmentFolderController; // @synthesize materialAssignmentFolderController=_materialAssignmentFolderController;
@property(nonatomic) OZChanFolderController *ctrlShowingAddLayerButton; // @synthesize ctrlShowingAddLayerButton=_ctrlShowingAddLayerButton;
@property(readonly) struct OZMaterialBase *material; // @synthesize material=_material;
@property(readonly) NSMutableArray *materialLayerCtrls; // @synthesize materialLayerCtrls=_materialLayerCtrls;
@property(nonatomic) BOOL renderMaterialPreviewsOnNextUpdate; // @synthesize renderMaterialPreviewsOnNextUpdate=_renderMaterialPreviewsOnNextUpdate;
@property(nonatomic) BOOL inhibitUpdates; // @synthesize inhibitUpdates=_inhibitUpdates;
- (void)loadPreset:(struct OZPasteList *)arg1;
- (void)loadPreset:(struct OZPasteList *)arg1 sender:(id)arg2;
- (void)setPreset:(const struct OZLibraryPresetsMapDatum *)arg1;
- (void)doDelayedLoad:(id)arg1;
- (void)loadNotify:(id)arg1;
- (void)saveNotify:(id)arg1;
- (id)buildMenu:(const struct OZLibraryPresetsMap *)arg1;
- (id)materialMenu:(long long)arg1;
- (void)getSelectedControllers:(id)arg1 doShallowSearch:(BOOL)arg2;
- (void)getSelectedMaterialLayerChansForMaterial:(struct OZLayeredMaterial *)arg1 selectedMaterialLayerChans:(vector_b71873ec *)arg2;
- (vector_b71873ec)getSelectedMaterialLayerChans;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)doDrag:(list_e5c8e430 *)arg1 viewList:(id)arg2;
- (id)delegate;
- (id)getControllerForLayerChan:(struct OZChannelBase *)arg1;
- (void)updateGlobalPlacementVisibility;
- (void)updateTransformVisibilityForMaterialLayerChannels;
- (void)updateHideShowState;
- (void)channelChanged:(struct OZChannelBase *)arg1 time:(CDStruct_198678f7)arg2 qualifiers:(int)arg3;
- (BOOL)ignoreDifferingRootIDs;
- (void)didAssociateChannel:(struct OZLayeredMaterial *)arg1;
- (BOOL)addOrResetAssociatedLayeredMaterial:(struct OZMaterialLayerBase *)arg1 layerControllerIndex:(unsigned int)arg2 isAdd:(BOOL)arg3 force:(BOOL)arg4 recursive:(BOOL)arg5;
- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3 recursive:(BOOL)arg4;
- (void)deleteThis;
- (void)duplicateMaterial:(id)arg1;
- (void)addLayer:(id)arg1 layerCtrlSource:(id)arg2;
- (void)addLayer:(id)arg1;
- (void)resetChannel:(id)arg1;
- (void)delayedDisplayFirstCustomButton:(id)arg1;
- (void)mouseExitedLayerController:(id)arg1;
- (void)mouseEnteredLayerController:(id)arg1;
- (id)chanFolderControllerForLayerController:(id)arg1;
- (id)firstLayerChanFolderController;
- (void)addLayerButtonToParameterController:(id)arg1 target:(id)arg2;
- (void)materialImagePreviewViewDidMoveToWindow:(id)arg1;
- (void)showHideMaterialLayerControllers:(BOOL)arg1;
- (void)showHideAddNewLayerController;
- (void)showHideSharedTransformController;
- (void)showMultipleLayersController:(BOOL)arg1;
- (void)showHideImageSourceChannel:(int)arg1 textureChan:(struct OZChannelImageWithOptions *)arg2 controller:(id)arg3;
- (void)showHideColorSourceChannels:(int)arg1 colorChan:(struct OZChannelBase *)arg2 gradientChan:(struct OZChannelBase *)arg3 textureChan:(struct OZChannelBase *)arg4 controller:(id)arg5;
- (void)hide;
- (void)show;
- (void)updateShowHideStateForMaterialLayerChannel:(struct OZChannelBase *)arg1;
- (void)updateEnableStateForMaterialLayerChannel:(struct OZChannelBase *)arg1;
- (void)updateUIStateForMaterialLayerChannel:(struct OZChannelBase *)arg1;
- (void)updateUIStateForMaterialLayerChannels;
- (void)update;
- (void)notify:(unsigned int)arg1;
- (id)getControllerForChan:(struct OZChannelBase *)arg1 inViewCtrlGroup:(id)arg2;
- (id)getControllerForLayerSubchan:(struct OZChannelBase *)arg1;
- (void)hideDistressLayersCustomBumpMenuItem:(struct OZLayeredMaterial *)arg1;
- (void)enableDisableTextureFillMenuItems;
- (void)setMaterialCtrlDelegate:(id)arg1;
- (unsigned int)facetAssignment;
- (void)fixLabelParamSizes;
- (void)tweakForNewLook;
- (void)didBuildUI;
- (void)addLayerButtonAction:(id)arg1;
- (id)getViewControllerForLayer:(struct OZMaterialLayerBase *)arg1;
- (void)addCustomItemsToParameterPulldown:(id)arg1;
- (id)augmentUIWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (id)augmentEnclosedGroup:(id)arg1 withMaterialLayer:(struct OZMaterialLayerBase *)arg2 context:(id)arg3;
- (void)dealloc;
- (id)initWithMaterial:(struct OZMaterialBase *)arg1 context:(id)arg2;

@end

