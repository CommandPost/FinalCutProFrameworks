//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZFolderLabelController.h"

#import "NSMenuDelegate.h"

@class NSPopUpButton, NSString, TXMaterialAssignmentFolderController;

@interface TXMaterialAssignmentLabelController : OZFolderLabelController <NSMenuDelegate>
{
    NSPopUpButton *_materialModePopUp;
    BOOL _areAllChansEqual;
    TXMaterialAssignmentFolderController *_materialAssignmentFolder;
}

@property(nonatomic) TXMaterialAssignmentFolderController *materialAssignmentFolder; // @synthesize materialAssignmentFolder=_materialAssignmentFolder;
- (void)setValue:(int)arg1 forChannel:(struct OZChannelEnum *)arg2 atTime:(CDStruct_198678f7)arg3;
- (void)setMaterialAssignmentMode:(unsigned int)arg1;
- (void)setExistingMaterial:(id)arg1;
- (void)setUseMultipleMaterials:(id)arg1;
- (void)setChannelValue:(id)arg1;
- (void)populateMaterialModePopUp;
- (void)recreateMaterialModePopUpMenu;
- (id)labelTextForChannel:(struct OZChannelBase *)arg1;
- (void)update;
- (BOOL)areAllChannelsEqual;
- (void)applyPreset:(id)arg1;
- (void)loadNotify:(id)arg1;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
