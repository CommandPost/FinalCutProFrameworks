//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FxPlug/NSSecureCoding-Protocol.h>

@class FxMatrix44, IOSurface, NSError;

@interface FxImageTile : NSObject <NSSecureCoding>
{
    int eyeType;
    unsigned int parameterID;
    FxMatrix44 *pixelTransform;
    FxMatrix44 *inversePixelTransform;
    IOSurface *ioSurface;
    unsigned long long deviceRegistryID;
    unsigned long long field;
    unsigned long long fieldOrder;
    unsigned long long imageOrigin;
    unsigned long long version;
    unsigned long long imageSource;
    NSError *requestError;
    unsigned long long colorSpaceType;
    double scaleX;
    double scaleY;
    double pixelAspect;
    unsigned long long usage;
    struct FxRect tilePixelBounds;
    struct FxRect imagePixelBounds;
    CDStruct_1b6d18a9 mediaTime;
}

+ (BOOL)supportsSecureCoding;
@property unsigned long long usage; // @synthesize usage;
@property(readonly, nonatomic) double pixelAspect; // @synthesize pixelAspect;
@property(readonly, nonatomic) double scaleY; // @synthesize scaleY;
@property(readonly, nonatomic) double scaleX; // @synthesize scaleX;
@property unsigned long long colorSpaceType; // @synthesize colorSpaceType;
@property(readonly, copy, nonatomic) NSError *requestError; // @synthesize requestError;
@property(readonly, nonatomic) CDStruct_1b6d18a9 mediaTime; // @synthesize mediaTime;
@property(readonly, nonatomic) unsigned int parameterID; // @synthesize parameterID;
@property(readonly, nonatomic) unsigned long long imageSource; // @synthesize imageSource;
@property(readonly, nonatomic) int eyeType; // @synthesize eyeType;
@property unsigned long long version; // @synthesize version;
@property(readonly, nonatomic) unsigned long long imageOrigin; // @synthesize imageOrigin;
@property(readonly, nonatomic) unsigned long long fieldOrder; // @synthesize fieldOrder;
@property(readonly, nonatomic) unsigned long long field; // @synthesize field;
@property(readonly, nonatomic) unsigned long long deviceRegistryID; // @synthesize deviceRegistryID;
@property(readonly, nonatomic) IOSurface *ioSurface; // @synthesize ioSurface;
@property(readonly, copy, nonatomic) FxMatrix44 *inversePixelTransform; // @synthesize inversePixelTransform;
@property(readonly, copy, nonatomic) FxMatrix44 *pixelTransform; // @synthesize pixelTransform;
@property(readonly, nonatomic) struct FxRect imagePixelBounds; // @synthesize imagePixelBounds;
@property(readonly, nonatomic) struct FxRect tilePixelBounds; // @synthesize tilePixelBounds;
@property(readonly, nonatomic) struct CGColorSpace *colorSpace;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setLegacyVersion:(unsigned long long)arg1;
- (id)metalTextureForDevice:(id)arg1;
- (unsigned long long)ioSurfacePixelFormatToMTLPixelFormat:(unsigned int)arg1;
- (unsigned int)openGLTextureForContext:(struct _CGLContextObject *)arg1;
- (void)ioSurfacePixelFormat:(unsigned int)arg1 toOpenGLPixelFormat:(unsigned int *)arg2 type:(unsigned int *)arg3 internalFormat:(unsigned int *)arg4;
- (BOOL)contextIsFromSameRenderer:(struct _CGLContextObject *)arg1;
- (void)dealloc;
- (id)initWithTilePixelBounds:(struct FxRect)arg1 imagePixelBounds:(struct FxRect)arg2 pixelTransform:(id)arg3 inversePixelTransform:(id)arg4 field:(unsigned long long)arg5 fieldOrder:(unsigned long long)arg6 eyeType:(int)arg7 imageOrigin:(unsigned long long)arg8 IOSurface:(id)arg9 deviceRegistryID:(unsigned long long)arg10 imageSource:(unsigned long long)arg11 parameterID:(unsigned int)arg12 mediaTime:(CDStruct_1b6d18a9)arg13 requestError:(id)arg14 colorSpace:(unsigned long long)arg15 scaleX:(double)arg16 scaleY:(double)arg17 pixelAspect:(double)arg18 usage:(unsigned long long)arg19;

@end

