//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFImageRep.h>

#import <Flexo/FFNewHGGLTextDetachedProtocol-Protocol.h>

@class FFTextureBuffer;

@interface FFImageRepFFTextureBuffer : FFImageRep <FFNewHGGLTextDetachedProtocol>
{
    FFTextureBuffer *_buffer;
}

- (struct HGGLTexture *)newHGTextureWithDetachFromRenderer:(id)arg1;
- (int)getConversionTypeForPF:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3 location:(struct FxDevice *)arg4 nonStandardAlphaOK:(_Bool)arg5 backingRequest:(int)arg6;
- (struct FxDevice *)imageLocation;
- (id)buffer;
- (struct CGRect)pixelSpaceBounds;
- (id)type;
- (id)nativePixelFormat;
- (id)newTextureBufferWithFormatByFlatteningIfNeeded:(id)arg1 location:(struct FxDevice *)arg2 roi:(struct CGRect)arg3 pixelTransform:(id)arg4 flattenOptions:(const CDStruct_f51ed29d *)arg5 workingSpace:(int)arg6;
- (id)newPixelBufferWithFormatByFlatteningIfNeeded:(id)arg1 roi:(struct CGRect)arg2 pixelTransform:(id)arg3 nonStandardAlphaOK:(_Bool)arg4 flattenOptions:(const CDStruct_f51ed29d *)arg5 getRawPixelsWithoutSourceConform:(_Bool)arg6 workingSpace:(int)arg7;
- (void)dealloc;
- (id)initWithFFTextureBuffer:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3;

@end

