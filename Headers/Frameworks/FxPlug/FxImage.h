//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FxImage : NSObject <NSCopying>
{
    struct FxImagePriv *_imagePriv;
}

+ (id)alloc;
- (id)init;
- (id)initWithInfo:(CDStruct_d76d3d7a)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (CDStruct_d76d3d7a)imageInfo;
- (unsigned long long)width;
- (unsigned long long)height;
- (unsigned long long)depth;
- (unsigned long long)bytes;
- (unsigned long long)numActiveChannels;
- (unsigned long long)imageType;
- (unsigned long long)origin;
- (unsigned long long)pixelFormat;
- (BOOL)isPremultiplied;
- (double)pixelAspect;
- (unsigned long long)size;
- (unsigned long long)fieldOrder;
- (unsigned long long)field;
- (BOOL)containsPointX:(int)arg1 Y:(int)arg2;
- (struct CGRect)bounds;
- (struct FxRect)dod;
- (id)pixelTransform;
- (id)inversePixelTransform;
- (unsigned long long)version;
- (void)setWidth:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1 andHeight:(unsigned long long)arg2;
- (void)setDepth:(unsigned long long)arg1;
- (void)setBytes:(unsigned long long)arg1;
- (void)setNumActiveChannels:(unsigned long long)arg1;
- (void)setImageType:(unsigned long long)arg1;
- (void)setOrigin:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setIsPremultiplied:(BOOL)arg1;
- (void)setPixelAspect:(double)arg1;
- (void)setFieldOrder:(unsigned long long)arg1;
- (void)setField:(unsigned long long)arg1;
- (unsigned long long)colorInfo;
- (void)setColorInfo:(unsigned long long)arg1;
- (struct CGColorSpace *)colorSpace;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setDod:(struct FxRect)arg1;
- (void)setPixelTransform:(id)arg1;
- (double)scaleX;
- (double)scaleY;
- (void)setScaleX:(double)arg1;
- (void)setScaleY:(double)arg1;
- (void)setDeallocCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (BOOL)_verifyImage;

@end

