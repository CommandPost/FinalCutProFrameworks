//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFPixelFormat.h>

__attribute__((visibility("hidden")))
@interface FFPixelFormat_RGBA8 : FFPixelFormat
{
}

- (id)name;
- (id)description;
- (int)bitsPerComponent;
- (int)bitsPerBlock;
- (int)pixelBlockWidth;
- (BOOL)isYCbCr;
- (BOOL)hasAlpha;
- (int)alphaType;
- (unsigned int)QTPixelFormat;
- (unsigned int)CGBitmapInfo;
- (int)convertToHeFormat;
- (int)convertToHeYCbCrFormat;

@end

