//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FFRenderProps : NSObject
{
    NSString *_name;
    CDStruct_bdcb2b0d _cachedMD5ForProps;
    unsigned int _codecType;
    NSArray *_pixelFormats;
    struct CGColorSpace *_colorSpace;
    int _colorSpaceEnum;
    NSArray *_requiredVideoFormats;
    struct CGSize _explicitSizeRequirement;
}

+ (id)renderPropsForName:(id)arg1;
@property(readonly, nonatomic) int colorSpaceEnum; // @synthesize colorSpaceEnum=_colorSpaceEnum;
- (id)newImageConvertedToRenderPropsFormat:(id)arg1 doFlatten:(BOOL)arg2;
- (id)copyPrefFormatForImage:(id)arg1;
- (void)getPrefFormatForImage:(id)arg1 retPF:(id *)arg2 retCS:(struct CGColorSpace **)arg3;
- (id)description;
- (BOOL)isEqualToRenderProps:(id)arg1;
- (struct CGSize)explicitSizeRequirement;
- (id)requiredVideoFormats;
- (CDStruct_bdcb2b0d)md5ForProps;
- (struct CGColorSpace *)colorSpace;
- (id)pixelFormats;
- (unsigned int)codecType;
- (id)name;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 codecType:(unsigned int)arg2 pixelFormats:(id)arg3 colorSpace:(struct CGColorSpace *)arg4 videoFormats:(id)arg5 explicitSizeRequirement:(struct CGSize)arg6;

@end

