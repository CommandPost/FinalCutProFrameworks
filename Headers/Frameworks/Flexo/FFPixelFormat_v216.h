//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFPixelFormat.h>

__attribute__((visibility("hidden")))
@interface FFPixelFormat_v216 : FFPixelFormat
{
}

- (int)convertToHeYCbCrFormat;
- (int)convertToHeFormat;
- (unsigned int)CGBitmapInfo;
- (unsigned int)QTPixelFormat;
- (int)alphaType;
- (BOOL)hasAlpha;
- (int)chromaSampling;
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

