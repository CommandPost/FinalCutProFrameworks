//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFImageRep.h>

#import "FFFlatImageRepWithPlanes.h"

@class FFPixelBuffer;

@interface FFImageRepFFPixelBuffer : FFImageRep <FFFlatImageRepWithPlanes>
{
    FFPixelBuffer *_buffer;
    BOOL _disable422Filtering;
    BOOL _backedByCV;
}

-     // Error parsing type: ^{HGBitmap=^^?{atomic<unsigned int>=AI}ii{HGRect=iiii}{HGRect=iiii}QQQ^v^v{HGEdgePolicy=i[4f]}^{HGObject}}20@0:8i16, name: copyHGBitmapForPlane:
- (int)numPlanes;
- (BOOL)isSimpleConversionTo:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3 location:(int)arg4 nonStandardAlphaOK:(_Bool)arg5;
- (_Bool)alphaWantsClamping;
- (_Bool)alphaWantsInversion;
- (int)nativeAlphaType;
- (id)buffer;
- (struct CGRect)pixelSpaceBounds;
- (id)type;
- (id)nativePixelFormat;
- (id)newTextureBufferWithFormatByFlatteningIfNeeded:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 pixelTransform:(id)arg4 flattenOptions:(const CDStruct_302d8f15 *)arg5 workingSpace:(int)arg6;
- (id)newPixelBufferWithFormatByFlatteningIfNeeded:(id)arg1 roi:(struct CGRect)arg2 pixelTransform:(id)arg3 nonStandardAlphaOK:(_Bool)arg4 flattenOptions:(const CDStruct_302d8f15 *)arg5 getRawPixelsWithoutSourceConform:(_Bool)arg6 workingSpace:(int)arg7;
- (BOOL)backedByPBO;
- (void)setSourceColorConformer:(struct FFSourceColorConformBaseClass *)arg1 targetColorSpace:(int)arg2;
- (void)setBackedByCV:(BOOL)arg1;
- (BOOL)backedByCV;
- (BOOL)disable422InputFiltering;
- (id)flipAboutYTransform:(double)arg1;
- (void)dealloc;
- (id)initWithFFPixelBuffer:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3 field:(unsigned int)arg4;
- (id)initWithFFPixelBuffer:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3 field:(unsigned int)arg4 disable422Filtering:(BOOL)arg5;

@end

