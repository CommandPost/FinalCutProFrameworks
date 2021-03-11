//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFHGFanoutResultInternal.h>

@class FFPixelBuffer, FFTextureBuffer;

__attribute__((visibility("hidden")))
@interface FFHGFanoutResultInternalBiPlanar : FFHGFanoutResultInternal
{
    struct HGRenderNode *_chromaNode;
    struct FFSynchronizable _localLock;
    FFPixelBuffer *_lumaPB;
    FFPixelBuffer *_chromaPB;
    FFTextureBuffer *_lumaTB;
    FFTextureBuffer *_chromaTB;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)newImage;
- (void)setLumaRenderNode:(struct HGRenderNode *)arg1 chroma:(struct HGRenderNode *)arg2;
- (void)setQueue:(id)arg1 job:(id)arg2 requestedExecLocs:(const struct FxDeviceSet *)arg3;
- (void)registerForNodeCallbacks;
- (void)_biplanarCallbackRan:(struct HGRenderNode *)arg1;
- (void)_callbackRan;
- (void)_nodeDidFinish:(struct HGRenderNode *)arg1;
- (struct FFSynchronizable *)localLock;
- (void)dealloc;
- (id)initWithFormat:(id)arg1 location:(const struct FxDeviceSet *)arg2 backingType:(int)arg3 roi:(struct HGRect)arg4 pixelTransform:(id)arg5 field:(unsigned int)arg6 dithered:(BOOL)arg7 background:(int)arg8 zebraMode:(unsigned int)arg9 toneMapped:(BOOL)arg10;

@end

