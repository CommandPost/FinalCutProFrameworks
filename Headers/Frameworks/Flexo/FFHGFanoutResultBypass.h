//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFHGAsyncFanoutResult.h>

@class FFImage, FFPixelFormat;

__attribute__((visibility("hidden")))
@interface FFHGFanoutResultBypass : FFHGAsyncFanoutResult
{
    FFImage *_image;
    FFPixelFormat *_pf;
    int _location;
}

- (id)initWithImage:(id)arg1 pixelFormat:(id)arg2 location:(int)arg3;
- (void)dealloc;
- (int)location;
- (struct CGColorSpace *)colorSpace;
- (id)newImage;
- (id)description;

@end
