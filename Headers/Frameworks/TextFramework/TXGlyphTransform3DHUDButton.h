//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZTransform3DHUDButton.h>

@class TXGlyphToolHUDController;

@interface TXGlyphTransform3DHUDButton : OZTransform3DHUDButton
{
    TXGlyphToolHUDController *_txcontroller;
}

- (struct OZChannelRotation3D *)getRotationChannel:(const shared_ptr_e0e110e1 *)arg1;
- (struct OZChannelScale *)getScaleChannel:(const shared_ptr_e0e110e1 *)arg1;
- (struct OZChannelPosition3D *)getOffsetChannel:(const shared_ptr_e0e110e1 *)arg1;
- (unsigned int)getGlyphSelectionSize;
- (id)controller;
- (void)setController:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

