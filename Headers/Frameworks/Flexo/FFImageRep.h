//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PCMatrix44Double;

@interface FFImageRep : NSObject
{
    PCMatrix44Double *_pixelTransform;
    struct CGColorSpace *_colorSpace;
    unsigned int _field;
    CDUnknownBlockType _approximateMemoryUsageBlock;
    int _errorCode;
}

- (void)getSampleBuffer:(struct opaqueCMSampleBuffer **)arg1 alphaKnownToBeFullyOpaque:(char *)arg2;
- (BOOL)disable422InputFiltering;
- (BOOL)isSimpleConversionTo:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3 location:(int)arg4 nonStandardAlphaOK:(_Bool)arg5;
- (_Bool)existingAlphaChannelCompatibleWithPremulBlack;
- (_Bool)alphaWantsClamping;
- (_Bool)alphaWantsInversion;
- (int)nativeAlphaType;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (int)logProcessingTargetColorSpace;
- (id)logProcessingInfo;
- (struct CGColorSpace *)colorSpace;
- (void)setPixelTransform:(id)arg1;
- (id)pixelTransform;
- (void)newPixelBufferWithFormatByFlatteningIfNeeded:(id)arg1 roi:(struct CGRect)arg2 colorSpace:(struct CGColorSpace *)arg3 pixelTransform:(id)arg4 nonStandardAlphaOK:(_Bool)arg5 flattenOptions:(const CDStruct_302d8f15 *)arg6;
- (void)newTextureBufferWithFormat:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4 pixelTransform:(id)arg5;
- (void)newPixelBufferWithFormat:(id)arg1 roi:(struct CGRect)arg2 colorSpace:(struct CGColorSpace *)arg3 pixelTransform:(id)arg4 nonStandardAlphaOK:(_Bool)arg5;
- (void)newTextureBufferWithFormatByFlatteningIfNeeded:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4 pixelTransform:(id)arg5 flattenOptions:(const CDStruct_302d8f15 *)arg6;
- (id)newTextureBufferWithFormatByFlatteningIfNeeded:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 pixelTransform:(id)arg4 flattenOptions:(const CDStruct_302d8f15 *)arg5 workingSpace:(int)arg6;
- (id)newPixelBufferWithFormatByFlatteningIfNeeded:(id)arg1 roi:(struct CGRect)arg2 pixelTransform:(id)arg3 nonStandardAlphaOK:(_Bool)arg4 flattenOptions:(const CDStruct_302d8f15 *)arg5 workingSpace:(int)arg6;
- (unsigned int)field;
- (struct CGRect)pixelSpaceBounds;
- (struct CGRect)imageSpaceBounds;
- (id)type;
- (id)getAbsoluteOutputFormatFromFormat:(id)arg1 workingSpace:(int)arg2;
- (id)noConversionOutputFormat;
- (id)nativePixelFormat;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (unsigned long long)approximateMemoryUsage;
- (void)setApproximateMemoryUsage:(unsigned long long)arg1;
- (void)setApproximateMemoryUsageBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1;
- (id)initWithColorSpace:(struct CGColorSpace *)arg1 pixelTransform:(id)arg2;

@end

