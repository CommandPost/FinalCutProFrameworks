//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FxBitmapImage : NSObject
{
    struct FxBitmapImagePriv *_priv;
}

+ (id)bitmapWithSize:(struct CGSize)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;
+ (id)bitmapWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (struct CGImage *)cgImage;
- (struct CGContext *)cgContext;
- (struct CGColorSpace *)colorSpace;
- (int)pixelFormat;
- (struct CGSize)size;
- (unsigned long long)bytesPerRow;
- (void *)bytes;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;

@end

