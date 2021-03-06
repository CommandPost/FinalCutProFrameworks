//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProOSC/OZShapeTransformOSC.h>

@interface OZGeometricShapeOSC : OZShapeTransformOSC
{
}

- (id)getCursorWithEvent:(id)arg1 addCursor:(BOOL)arg2;
- (id)getCursorWithEvent:(id)arg1;
- (BOOL)handleMouseDragged:(id)arg1;
- (BOOL)handleMouseDown:(id)arg1;
- (void)drawOSCSpecificHandlesWithTransform:(const PCMatrix44Tmpl_e98c85ee *)arg1 mode:(unsigned int)arg2;
- (BOOL)uses8PointSizeOSC;
- (void)setShapeDimensionsAtTime:(CDStruct_1b6d18a9 *)arg1 dimensions:(struct CGSize)arg2;
- (struct CGRect)shapeBoundsAtTime:(CDStruct_1b6d18a9 *)arg1;
- (struct CGSize)shapeDimensionsAtTime:(CDStruct_1b6d18a9 *)arg1;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

