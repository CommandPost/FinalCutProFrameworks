//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFImageRep.h>

@class FFTextureBuffer;

@interface FFImageRepFFTextureBuffer : FFImageRep
{
    FFTextureBuffer *_buffer;
}

- (BOOL)isSimpleConversionTo:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3 location:(int)arg4 nonStandardAlphaOK:(_Bool)arg5;
- (id)buffer;
- (struct CGRect)pixelSpaceBounds;
- (id)type;
- (id)nativePixelFormat;
- (id)newTextureBufferWithFormatByFlatteningIfNeeded:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 pixelTransform:(id)arg4 flattenOptions:(const CDStruct_302d8f15 *)arg5 workingSpace:(int)arg6;
- (id)newPixelBufferWithFormatByFlatteningIfNeeded:(id)arg1 roi:(struct CGRect)arg2 pixelTransform:(id)arg3 nonStandardAlphaOK:(_Bool)arg4 flattenOptions:(const CDStruct_302d8f15 *)arg5 workingSpace:(int)arg6;
- (void)dealloc;
- (id)initWithFFTextureBuffer:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3;

@end

