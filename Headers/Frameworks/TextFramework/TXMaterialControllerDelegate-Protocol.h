//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol TXMaterialControllerDelegate
- (void)didCreateNewMaterialLayerControllers;
- (void)reassociateAllStyles;
- (BOOL)isInhibitingUpdates;
- (void)setInhibitUpdates:(BOOL)arg1;
- (void)rebuildInspector;
- (void)update;
- (void)didChangeMaterial:(BOOL)arg1;
- (void)willChangeMaterial;

@optional
- (void)willChangeMaterial:(const struct PCString *)arg1;
@end

