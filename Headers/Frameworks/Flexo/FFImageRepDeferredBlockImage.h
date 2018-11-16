//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFImageRep.h>

@class FFImage, FFPixelFormat, NSConditionLock;

__attribute__((visibility("hidden")))
@interface FFImageRepDeferredBlockImage : FFImageRep
{
    NSConditionLock *_lock;
    FFImage *_flattenedImage;
    struct CGRect _eventualRect;
    FFPixelFormat *_eventualPixelFormat;
    int _eventualAlphaType;
    CDUnknownBlockType _renderBlock;
}

- (id)newTextureBufferWithFormatByFlatteningIfNeeded:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 pixelTransform:(id)arg4 flattenOptions:(const CDStruct_302d8f15 *)arg5 workingSpace:(int)arg6;
- (id)newPixelBufferWithFormatByFlatteningIfNeeded:(id)arg1 roi:(struct CGRect)arg2 pixelTransform:(id)arg3 nonStandardAlphaOK:(_Bool)arg4 flattenOptions:(const CDStruct_302d8f15 *)arg5 getRawPixelsWithoutSourceConform:(_Bool)arg6 workingSpace:(int)arg7;
- (BOOL)isSimpleConversionTo:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3 location:(int)arg4 nonStandardAlphaOK:(_Bool)arg5;
- (struct CGRect)pixelSpaceBounds;
- (id)type;
- (int)nativeAlphaType;
- (id)nativePixelFormat;
- (id)performFlatten;
- (void)dealloc;
- (id)initWithRenderBlock:(CDUnknownBlockType)arg1 colorSpace:(struct CGColorSpace *)arg2 pixelTransform:(id)arg3 field:(unsigned int)arg4 pixelSpaceBounds:(struct CGRect)arg5 pixelFormat:(id)arg6;

@end
