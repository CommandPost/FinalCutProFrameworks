//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFImageRep.h>

@class FFImage, FFPixelFormat, NSMutableIndexSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface FFImageRepTextureCacher : FFImageRep
{
    FFImage *_orig;
    CDStruct_bdcb2b0d _baseMD5;
    FFPixelFormat *_prefPixelFormat;
    int _expectedLoc;
    NSMutableSet *_heldTextures;
    NSMutableIndexSet *_requestedLocs;
}

+ (void)teardownCache;
- (id)initWithImage:(id)arg1 locationHint:(int)arg2 md5:(CDStruct_60067b7e)arg3 offset:(long long)arg4 pf:(id)arg5 cs:(struct CGColorSpace *)arg6;
- (void)dealloc;
- (id)nativePixelFormat;
- (id)type;
- (struct CGRect)pixelSpaceBounds;
- (id)newPixelBufferWithFormat:(id)arg1 roi:(struct CGRect)arg2 colorSpace:(struct CGColorSpace *)arg3 pixelTransform:(id)arg4 nonStandardAlphaOK:(_Bool)arg5;
- (id)newTextureBufferWithFormat:(id)arg1 location:(int)arg2 roi:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4 pixelTransform:(id)arg5;
- (_Bool)canProvideNativeTextureFor:(int)arg1 withoutRenderer:(struct HGRenderer *)arg2;
- (id)newScheduleTokenForImageRep:(id)arg1;
- (CDStruct_60067b7e)_md5ValueForPF:(id)arg1 cs:(struct CGColorSpace *)arg2 pt:(id)arg3 loc:(int)arg4 roi:(struct CGRect)arg5;
- (id)_newTextureFromCache:(CDStruct_60067b7e)arg1;
- (id)description;

@end
