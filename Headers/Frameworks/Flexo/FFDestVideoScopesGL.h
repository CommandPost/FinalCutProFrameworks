//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestVideoGL.h>

__attribute__((visibility("hidden")))
@interface FFDestVideoScopesGL : FFDestVideoGL
{
    long long _overrideColorSpace;
    struct CGColorSpace *_cs;
    void *_FFDestVideoScopesGLPrivate;
}

- (id)_initDestVideoScopesGLPriv;
- (void)_drawImages:(id)arg1 forRate:(double)arg2 clockTime:(CDStruct_1b6d18a9)arg3 isStaleFrame:(BOOL)arg4 qSize:(float)arg5;
- (void)_drawMissingImageAtTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2;
- (void)setDelegate:(id)arg1;
- (void)drawEmptyBackground;
- (id)supportedPixelFormats;
- (struct CGColorSpace *)colorSpace;
- (int)imageLocation;
- (struct CGSize)requestedImageSizeWithFilterQuality:(int *)arg1;
- (void)setColorspace:(struct CGColorSpace *)arg1;
@property long long overrideColorSpace; // @dynamic overrideColorSpace;
- (void)dealloc;
- (id)initWithDisplayID:(unsigned int)arg1 andCGLContext:(struct _CGLContextObject *)arg2 usingCoreAnimation:(BOOL)arg3;

@end

