//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextFramework/TXGlyphTransform3DHUDButton.h>

@interface TXRotate3DHUDButton : TXGlyphTransform3DHUDButton
{
    PCVector3_457fd1f0 *_storedRot;
    struct vector<PCVector3<int>, std::__1::allocator<PCVector3<int>>> _windings;
    struct vector<PCQuat<double>, std::__1::allocator<PCQuat<double>>> _previousQuats;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

