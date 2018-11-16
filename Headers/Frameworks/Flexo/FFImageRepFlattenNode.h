//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFImageRep.h>

@class FFImage, FFPixelFormat, NSConditionLock;

__attribute__((visibility("hidden")))
@interface FFImageRepFlattenNode : FFImageRep
{
    NSConditionLock *_lock;
    FFImageRep *_rep;
    FFImage *_flattenedImage;
    double _flattenTime;
    FFPixelFormat *_nativePixFormat;
    struct CGRect _initialPixelSpaceBounds;
    _Bool _nativelyPremulBlack;
    unsigned int _tokFlags;
    _Bool _autoFlags;
}

- (_Bool)nativelyPremulBlack;
- (id)newScheduleTokenForImageRep:(id)arg1;
- (double)flattenTime;
- (id)newTextureBufferWithFormat:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4 pixelTransform:(id)arg5;
- (id)newPixelBufferWithFormat:(id)arg1 roi:(struct CGRect)arg2 colorSpace:(struct CGColorSpace *)arg3 pixelTransform:(id)arg4 nonStandardAlphaOK:(_Bool)arg5;
- (struct CGRect)pixelSpaceBounds;
- (id)type;
- (id)nativePixelFormat;
- (id)performFlatten;
- (void)clearTokFlags:(unsigned int)arg1;
- (unsigned int)tokFlags;
- (_Bool)_waitUntilFlattenedWithTimeout:(id)arg1;
- (BOOL)isFlattened;
- (void)_establishPFCS:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1 force8Bit:(_Bool)arg2 initialFlags:(unsigned int)arg3 automaticFlags:(_Bool)arg4;

@end

