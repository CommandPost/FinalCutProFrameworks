//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProOSC/POCustomMotionPath.h>

@interface POMotionPath : POCustomMotionPath
{
    PCVector3_457fd1f0 _translation;
    PCVector3_457fd1f0 _initialOffset;
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (void)draw;
- (struct POVertexAsset *)initAsset:(unsigned int)arg1 largeAssets:(_Bool)arg2;
- (double)getPixelAspectRatio;
- (void)calcInitialOffset;
- (void)convertPoint:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (void)inverseConvertPoint:(double *)arg1 y:(double *)arg2 z:(double *)arg3;
- (PCVector3_457fd1f0)calculateOwnerOffset;
- (int)hitCheck:(id)arg1;
- (id).cxx_construct;

@end
