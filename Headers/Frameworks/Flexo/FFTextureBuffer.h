//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFPixelFormat;

@interface FFTextureBuffer : NSObject
{
    unsigned int _texture;
    struct CGRect _bounds;
    FFPixelFormat *_pixelFormat;
    int _virtualScreen;
    id _backingObject;
}

+ (void)teardown;
+ (void)initialize;
- (id).cxx_construct;
- (struct HGGLTexture *)newHGTextureWithDetachFromRenderer;
- (void)setBackingObject:(id)arg1;
- (double)height;
- (double)width;
- (int)virtualScreen;
- (id)pixelFormat;
- (struct CGRect)bounds;
- (unsigned int)texture;
- (void)dealloc;
- (id)initWithTexture:(unsigned int)arg1 bounds:(struct CGRect)arg2 pixelFormat:(id)arg3 virtualScreen:(int)arg4;

@end

