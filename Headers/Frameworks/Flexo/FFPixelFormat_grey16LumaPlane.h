//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFPixelFormat.h>

__attribute__((visibility("hidden")))
@interface FFPixelFormat_grey16LumaPlane : FFPixelFormat
{
}

- (int)convertToHeYCbCrFormat;
- (int)convertToHeFormat;
- (unsigned int)CGBitmapInfo;
- (unsigned int)QTPixelFormat;
- (int)alphaType;
- (BOOL)hasAlpha;
- (BOOL)isSubsampled;
- (BOOL)isYCbCr;
- (BOOL)isRAW;
- (int)pixelBlockWidth;
- (int)bitsPerBlock;
- (int)bitsPerComponent;
- (id)substituteOutputFormat;
- (id)description;
- (id)name;

@end
