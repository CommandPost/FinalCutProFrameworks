//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFImageRep.h>

@class FFPixelFormat;

__attribute__((visibility("hidden")))
@interface FFImageRepCGImage : FFImageRep
{
    struct CGImage *_cgImage;
    void *_source;
    unsigned long long _index;
    BOOL _hasAlpha;
    FFPixelFormat *_pixelFormat;
    CDStruct_bdcb2b0d _md5;
    double _imageWidth;
    double _imageHeight;
    struct CGColor *_backgroundColor;
    struct CGRect _pixelSpaceBounds;
    int _alphaType;
    _Bool _needPremultClamp;
    _Bool _invertAlpha;
}

+ (struct CGColorSpace *)copyColorSpaceForNativeCS:(struct CGColorSpace *)arg1 retFlags:(unsigned int *)arg2;
- (_Bool)alphaWantsInversion;
- (void)setAlphaWantsInversion:(_Bool)arg1;
- (_Bool)alphaWantsClamping;
- (void)setAlphaWantsClamping:(_Bool)arg1;
- (struct CGImage *)CGImageRef;
- (int)nativeAlphaType;
- (struct CGRect)pixelSpaceBounds;
- (id)type;
- (id)nativePixelFormat;
- (id)newTextureBufferWithFormatByFlatteningIfNeeded:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 pixelTransform:(id)arg4 flattenOptions:(const CDStruct_302d8f15 *)arg5 workingSpace:(int)arg6;
- (id)newPixelBufferWithFormatByFlatteningIfNeeded:(id)arg1 roi:(struct CGRect)arg2 pixelTransform:(id)arg3 nonStandardAlphaOK:(_Bool)arg4 flattenOptions:(const CDStruct_302d8f15 *)arg5 workingSpace:(int)arg6;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1;
- (id)initWithCGImageRef:(struct CGImage *)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3;
- (id)initWithCGImageRef:(struct CGImage *)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3 overrideAlphaInfo:(int)arg4;
- (void)determineAttributes;

@end

