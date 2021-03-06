//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZChan3DController.h>

@interface OZVertexPosition3DController : OZChan3DController
{
    void *_handleX;
    void *_handleY;
    void *_handleZ;
}

- (void)setAccessibilityTag:(const char *)arg1 forObject:(id)arg2 withIndex:(unsigned int)arg3;
- (void)setObjectTranslation:(struct OZChannelBase *)arg1 x:(double)arg2 y:(double)arg3 z:(double)arg4;
- (void)globalToLocal:(struct OZChannelBase *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)localToGlobal:(struct OZChannelBase *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void *)associatedHandleZ;
- (void *)associatedHandleY;
- (void *)associatedHandleX;
- (void)set:(struct OZChannelBase *)arg1 X:(double)arg2 Y:(double)arg3 Z:(double)arg4;
- (void)get:(struct OZChannelBase *)arg1 x:(double *)arg2 y:(double *)arg3 z:(double *)arg4;
- (void)set:(struct OZChannelBase *)arg1 Z:(double)arg2;
- (double)getZ:(struct OZChannelBase *)arg1;
- (void)set:(struct OZChannelBase *)arg1 Y:(double)arg2;
- (double)getY:(struct OZChannelBase *)arg1;
- (void)set:(struct OZChannelBase *)arg1 X:(double)arg2;
- (double)getX:(struct OZChannelBase *)arg1;
- (double)zScale;
- (double)yScale;
- (double)xScale;
- (double)valueScale;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 index:(unsigned int)arg2 context:(id)arg3;

@end

