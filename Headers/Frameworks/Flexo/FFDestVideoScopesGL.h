//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDestVideoGL.h>

@class FFReducedRateTracker;

__attribute__((visibility("hidden")))
@interface FFDestVideoScopesGL : FFDestVideoGL
{
    struct CGColorSpace *_cs;
    BOOL _useR4FL;
    void *_FFDestVideoScopesGLPrivate;
    FFReducedRateTracker *_reducedRateTracker;
}

- (id)initWithDisplayID:(unsigned int)arg1 andCGLContext:(struct _CGLContextObject *)arg2 usingCoreAnimation:(BOOL)arg3;
- (void)dealloc;
- (void)setPixelFormatToR4FL:(BOOL)arg1;
- (void)setColorspace:(struct CGColorSpace *)arg1;
- (struct CGSize)requestedImageSizeWithFilterQuality:(int *)arg1;
- (int)imageLocation;
- (struct CGColorSpace *)colorSpace;
- (id)supportedPixelFormats;
- (void)drawEmptyBackground;
- (void)setDelegate:(id)arg1;
- (void)_drawMissingImageAtTime:(CDStruct_1b6d18a9)arg1 rate:(double)arg2;
- (void)_drawImages:(id)arg1 forRate:(double)arg2 clockTime:(CDStruct_1b6d18a9)arg3;
- (void)pushFrame:(id)arg1;
- (void)skippedFrame:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldSkipFrame:(CDStruct_1b6d18a9)arg1 playRate:(double)arg2;
- (void)setLastHealthMetric:(float)arg1;
- (id)_initDestVideoScopesGLPriv;

@end
