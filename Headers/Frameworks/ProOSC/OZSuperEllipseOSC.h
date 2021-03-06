//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProOSC/OZGeometricShapeOSC.h>

@interface OZSuperEllipseOSC : OZGeometricShapeOSC
{
    PCVector2_79efa81a _ellipsePointDrag;
    double _ellipseAngleDrag;
    unsigned int _dragEdge;
}

- (id).cxx_construct;
- (double)ellipseAngleForUserAngle:(double)arg1 withCurvature:(double)arg2 sizeX:(double)arg3 sizeY:(double)arg4;
- (void)mouseDragged:(id)arg1;
- (void)drawShapeHandlesWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (void)drawOSCSpecificCurvesWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2 pick:(BOOL)arg3;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

