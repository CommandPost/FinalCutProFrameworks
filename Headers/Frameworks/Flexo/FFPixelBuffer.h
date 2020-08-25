//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFPixelFormat;

@interface FFPixelBuffer : NSObject
{
    char *_baseAddress;
    BOOL _ownPixels;
    struct __CFAllocator *_allocator;
    struct CGRect _bounds;
    FFPixelFormat *_pixelFormat;
    unsigned int _bytesPerRow;
    unsigned int _allocatedSize;
    id _backingObject;
    double _cost;
    int _alphaType;
    _Bool _needPremultClamp;
    _Bool _invertAlpha;
}

+ (id)newFrameFromFirstField:(id)arg1 secondField:(id)arg2 fieldDominance:(int)arg3;
@property _Bool invertAlpha; // @synthesize invertAlpha=_invertAlpha;
@property _Bool needPremultClamp; // @synthesize needPremultClamp=_needPremultClamp;
@property(readonly) int alphaType; // @synthesize alphaType=_alphaType;
- (BOOL)fillFrameWithFirstField:(id)arg1 secondField:(id)arg2 fieldDominance:(int)arg3;
- (double)cost;
- (void)setCost:(double)arg1;
- (unsigned int)allocatedSize;
- (id)backingObject;
- (void)setBackingObject:(id)arg1;
- (double)height;
- (double)width;
- (unsigned int)bytesPerRow;
- (id)pixelFormat;
- (struct CGRect)bounds;
- (char *)baseAddress;
- (void)dealloc;
- (_Bool)isPremultipliedBlack;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDuplicateOfPixels:(char *)arg1 bounds:(struct CGRect)arg2 pixelFormat:(id)arg3 bytesPerRow:(unsigned int)arg4 alphaType:(int)arg5;
- (id)initWithDuplicateOfPixels:(char *)arg1 bounds:(struct CGRect)arg2 pixelFormat:(id)arg3 bytesPerRow:(unsigned int)arg4 alphaType:(int)arg5 allocator:(struct __CFAllocator *)arg6;
- (id)initWithBounds:(struct CGRect)arg1 pixelFormat:(id)arg2 clearBuffer:(BOOL)arg3 allocator:(struct __CFAllocator *)arg4;
- (id)initWithBounds:(struct CGRect)arg1 pixelFormat:(id)arg2 alphaType:(int)arg3 clearBuffer:(BOOL)arg4 allocator:(struct __CFAllocator *)arg5;
- (id)initWithBounds:(struct CGRect)arg1 pixelFormat:(id)arg2;
- (id)initWithBounds:(struct CGRect)arg1 pixelFormat:(id)arg2 alphaType:(int)arg3;
- (id)initWithPixels:(char *)arg1 bounds:(struct CGRect)arg2 pixelFormat:(id)arg3 bytesPerRow:(unsigned int)arg4;
- (id)initWithPixels:(char *)arg1 bounds:(struct CGRect)arg2 pixelFormat:(id)arg3 bytesPerRow:(unsigned int)arg4 alphaType:(int)arg5;
- (id)initWithPixels:(char *)arg1 bounds:(struct CGRect)arg2 pixelFormat:(id)arg3 bytesPerRow:(unsigned int)arg4 alphaType:(int)arg5 allocatedSize:(unsigned int)arg6;
- (id)newStringForPixelAtXLoc:(int)arg1 YLoc:(int)arg2;

@end

