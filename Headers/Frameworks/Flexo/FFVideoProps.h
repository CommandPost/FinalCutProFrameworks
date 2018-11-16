//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSMutableCopying.h"

@class PCMatrix44Double;

@interface FFVideoProps : NSObject <NSMutableCopying, NSCoding>
{
    struct CGRect _pixelSpaceFrameBounds;
    struct CGColorSpace *_colorSpace;
    int _fieldDominance;
    CDStruct_1b6d18a9 _sampleDuration;
    CDStruct_1b6d18a9 _frameDuration;
    PCMatrix44Double *_frame;
    PCMatrix44Double *_field1;
    PCMatrix44Double *_field2;
    PCMatrix44Double *_cachedQuarter;
    PCMatrix44Double *_cachedSixteenth;
    int _paspH;
    int _paspV;
    struct CGRect _cachedImageSpaceBounds;
    BOOL _frameRateUndefined;
}

+ (void)initialize;
+ (id)pixelTransformIdentity;
+ (id)pixelTransformToQuarter;
+ (id)pixelTransformToSixteenth;
+ (id)pixelTransformToLower;
+ (id)pixelTransformToUpper;
+ (id)pixelTransformToNTSC;
+ (id)pixelTransformToNTSCLower;
+ (id)pixelTransformToNTSCUpper;
+ (id)pixelTransformToNTSCAnamorphic;
+ (id)pixelTransformToNTSCAnamorphicLower;
+ (id)pixelTransformToNTSCAnamorphicUpper;
+ (id)pixelTransformToPAL;
+ (id)pixelTransformToPALLower;
+ (id)pixelTransformToPALUpper;
+ (id)pixelTransformToPALAnamorphic;
+ (id)pixelTransformToPALAnamorphicLower;
+ (id)pixelTransformToPALAnamorphicUpper;
+ (id)pixelTransformTo1280x1080;
+ (id)pixelTransformTo1280x1080iLower;
+ (id)pixelTransformTo1280x1080iUpper;
+ (id)pixelTransformTo1440x1080;
+ (id)pixelTransformTo1440x1080iLower;
+ (id)pixelTransformTo1440x1080iUpper;
+ (BOOL)classIsAbstract;
+ (void)releaseSharedInstance;
+ (id)newPropsFromVideoFormat:(id)arg1;
+ (id)newPropsFromVideoFormatDescription:(struct opaqueCMFormatDescription *)arg1 frameDuration:(CDStruct_1b6d18a9)arg2 anamorphicHint:(BOOL)arg3 isRotated:(BOOL)arg4 ambiguous:(char *)arg5;
+ (id)newPropsFromCType:(unsigned int)arg1 dimensions:(CDStruct_79c71658)arg2 extensionsDict:(id)arg3 frameDuration:(CDStruct_1b6d18a9)arg4 anamorphicHint:(BOOL)arg5 ambiguous:(char *)arg6;
+ (struct CGColorSpace *)guessYCbCrColorSpaceFromHeight:(int)arg1;
+ (CDStruct_1b6d18a9)defaultSampleDurationForStillImage;
+ (BOOL)isReallyClose16x9s:(struct CGRect)arg1 bounds2:(struct CGRect)arg2;
- (id)initWithPixelSpaceFrameBounds:(struct CGRect)arg1 colorSpace:(struct CGColorSpace *)arg2 fieldDominance:(int)arg3 sampleDuration:(CDStruct_1b6d18a9)arg4 frame:(id)arg5 field1:(id)arg6 field2:(id)arg7 paspH:(int)arg8 paspV:(int)arg9 frameRateUndefined:(BOOL)arg10;
- (id)initWithPList:(id)arg1;
- (id)initWithProxyVideoProps:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setPixelSpaceFrameBounds:(struct CGRect)arg1;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (void)setColorSpaceData:(id)arg1;
- (void)setFieldDominance:(int)arg1;
- (void)setSampleDuration:(CDStruct_1b6d18a9)arg1;
- (void)setFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)setFrame:(id)arg1;
- (void)setField1:(id)arg1;
- (void)setField2:(id)arg1;
- (void)setQuarter:(id)arg1;
- (void)setSixteenth:(id)arg1;
- (void)setPaspH:(int)arg1;
- (void)setPaspV:(int)arg1;
- (struct CGRect)pixelSpaceFrameBounds;
- (struct CGColorSpace *)colorSpace;
- (id)colorSpaceName;
- (id)colorSpaceData;
- (int)fieldDominance;
- (CDStruct_1b6d18a9)sampleDuration;
- (CDStruct_1b6d18a9)frameDuration;
- (id)frame;
- (id)field1;
- (id)field2;
- (id)quarter;
- (id)sixteenth;
- (int)paspH;
- (int)paspV;
- (double)pixelAspect;
- (double)frameAspect;
- (struct CGRect)squareFrameBounds;
- (BOOL)frameRateUndefined;
- (BOOL)frameRateDefined;
- (void)_updateCachedPixelTransforms;
- (void)_updateCachedImageSpaceBounds;
- (struct CGRect)imageSpaceBounds;
- (id)_propertyDescription;
- (id)description;
- (id)newPList;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringColorSpace:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)exactMatchVideoFormat;
- (id)videoFormat;
- (id)bestGuessedVideoFormat;
- (BOOL)isReallyGoodGuessOf:(id)arg1;
- (id)matchingPropsWithFieldOrder:(int)arg1;

@end

