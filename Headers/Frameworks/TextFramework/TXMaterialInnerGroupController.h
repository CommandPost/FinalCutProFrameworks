//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

@interface TXMaterialInnerGroupController : OZViewControllerGroup
{
}

- (BOOL)addOrResetAssociatedChannel:(struct OZChannelBase *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3 recursive:(BOOL)arg4;
- (BOOL)addOrResetAssociatedMaterialLayersFolder:(struct OZMaterialLayersFolder *)arg1 isAdd:(BOOL)arg2 force:(BOOL)arg3 recursive:(BOOL)arg4;
- (id)controllerForMaterialLayerAtIndex:(int)arg1;
- (id)controllerForMaterialLayer:(struct OZMaterialLayerBase *)arg1;
- (void)addController:(id)arg1 appendSubview:(BOOL)arg2;

@end

