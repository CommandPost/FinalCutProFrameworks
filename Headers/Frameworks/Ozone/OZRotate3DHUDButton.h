//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZTransform3DHUDButton.h>

@interface OZRotate3DHUDButton : OZTransform3DHUDButton
{
    PCVector3_457fd1f0 *_storedRot;
    struct vector<PCVector3<int>, std::allocator<PCVector3<int>>> _windings;
    struct vector<PCQuat<double>, std::allocator<PCQuat<double>>> _previousQuats;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

