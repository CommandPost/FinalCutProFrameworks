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
    unsigned long long _approximateMemoryUsage;
}

- (id)initWithColorSpace:(struct CGColorSpace *)arg1 pixelTransform:(id)arg2;
- (id)initWithRepresentation:(id)arg1;
- (void)dealloc;
- (id)nativePixelFormat;
- (id)type;
- (struct CGRect)imageSpaceBounds;
- (struct CGRect)pixelSpaceBounds;
- (unsigned int)field;
- (id)newPixelBufferWithFormat:(id)arg1 roi:(struct CGRect)arg2 colorSpace:(struct CGColorSpace *)arg3 pixelTransform:(id)arg4 nonStandardAlphaOK:(_Bool)arg5;
- (id)newTextureBufferWithFormat:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4 pixelTransform:(id)arg5;
- (id)pixelTransform;
- (void)setPixelTransform:(id)arg1;
- (struct CGColorSpace *)colorSpace;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (_Bool)nativelyPremulBlack;
- (BOOL)isSimpleConversionTo:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3 location:(int)arg4 nonStandardAlphaOK:(_Bool)arg5;
@property unsigned long long approximateMemoryUsage; // @synthesize approximateMemoryUsage=_approximateMemoryUsage;

@end
