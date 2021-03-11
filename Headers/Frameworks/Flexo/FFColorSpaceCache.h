//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableArray;

@interface FFColorSpaceCache : NSObject
{
    NSMutableArray *_knownColorSpaces;
    NSLock *_cachedColorLock;
    struct CGColorSpace *_linear709ColorSpace;
    struct CGColorSpace *_709ColorSpace;
    struct CGColorSpace *_601_170M_ColorSpace;
    struct CGColorSpace *_601_EBU_ColorSpace;
    struct CGColorSpace *_NCLC_1_1_6_ColorSpace;
    struct CGColorSpace *_NCLC_6_1_1_ColorSpace;
    struct CGColorSpace *_linear2020ColorSpace;
    struct CGColorSpace *_2020ColorSpace;
    struct CGColorSpace *_DCI_P3_ColorSpace;
    struct CGColorSpace *_P3_D65_ColorSpace;
    struct CGColorSpace *_NCLC_12_1_6_ColorSpace;
    struct CGColorSpace *_2020_PQ_ColorSpace;
    struct CGColorSpace *_2020_HLG_ColorSpace;
    struct CGColorSpace *_CGColorSpaceGenericGray;
    struct CGColorSpace *_CGColorSpaceGenericRGB;
    struct CGColorSpace *_CGColorSpaceGenericRGBLinear;
    struct CGColorSpace *_displayLinear2020ForCAMetalLayer;
    struct CGColorSpace *_luminance2020_PQ_ColorSpace;
    NSArray *_standardEnumeratedSpaces;
    NSMutableArray *_recentColorSpacesWithEnums;
}

+ (BOOL)testConversionFromColorSpace:(struct CGColorSpace *)arg1 toColorSpace:(struct CGColorSpace *)arg2;
+ (struct CGColorSpace *)colorSpaceForNCLC:(int)arg1 transferFunction:(int)arg2 matrix:(int)arg3;
+ (struct CGColorSpace *)newColorSpaceForOverrideIndex:(int)arg1;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property(readonly, nonatomic) struct CGColorSpace *luminance2020_PQ_ColorSpace; // @synthesize luminance2020_PQ_ColorSpace=_luminance2020_PQ_ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *displayLinear2020ForCAMetalLayer; // @synthesize displayLinear2020ForCAMetalLayer=_displayLinear2020ForCAMetalLayer;
@property(readonly, nonatomic) struct CGColorSpace *CGColorSpaceGenericRGBLinear; // @synthesize CGColorSpaceGenericRGBLinear=_CGColorSpaceGenericRGBLinear;
@property(readonly, nonatomic) struct CGColorSpace *CGColorSpaceGenericRGB; // @synthesize CGColorSpaceGenericRGB=_CGColorSpaceGenericRGB;
@property(readonly, nonatomic) struct CGColorSpace *CGColorSpaceGenericGray; // @synthesize CGColorSpaceGenericGray=_CGColorSpaceGenericGray;
@property(readonly, nonatomic) struct CGColorSpace *hdr2020_HLG_ColorSpace; // @synthesize hdr2020_HLG_ColorSpace=_2020_HLG_ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *hdr2020_PQ_ColorSpace; // @synthesize hdr2020_PQ_ColorSpace=_2020_PQ_ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *NCLC_12_1_6_ColorSpace; // @synthesize NCLC_12_1_6_ColorSpace=_NCLC_12_1_6_ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *P3_D65_ColorSpace; // @synthesize P3_D65_ColorSpace=_P3_D65_ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *DCI_P3_ColorSpace; // @synthesize DCI_P3_ColorSpace=_DCI_P3_ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *standard2020_ColorSpace; // @synthesize standard2020_ColorSpace=_2020ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *linear2020_ColorSpace; // @synthesize linear2020_ColorSpace=_linear2020ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *NCLC_6_1_1_ColorSpace; // @synthesize NCLC_6_1_1_ColorSpace=_NCLC_6_1_1_ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *NCLC_1_1_6_ColorSpace; // @synthesize NCLC_1_1_6_ColorSpace=_NCLC_1_1_6_ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *standard601_EBU_ColorSpace; // @synthesize standard601_EBU_ColorSpace=_601_EBU_ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *standard601_170M_ColorSpace; // @synthesize standard601_170M_ColorSpace=_601_170M_ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *standard709_ColorSpace; // @synthesize standard709_ColorSpace=_709ColorSpace;
@property(readonly, nonatomic) struct CGColorSpace *linear709_ColorSpace; // @synthesize linear709_ColorSpace=_linear709ColorSpace;
- (struct CGColorSpace *)colorSpaceForPrimaries:(id)arg1 transferFunc:(id)arg2 matrix:(id)arg3 gammaNumber:(id)arg4;
- (_Bool)doesColorspace:(struct CGColorSpace *)arg1 matchStandard:(int)arg2;
- (int)getMatchingStandardColorSpace:(struct CGColorSpace *)arg1 matchedColorSpace:(struct CGColorSpace **)arg2;
- (int)getMatchingStandardColorSpace:(struct CGColorSpace *)arg1;
- (id)_lookupInRecentsWhileHoldingThemSynchronized:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)colorSpaceForICCProfileData:(id)arg1 colorSpaceEnumOut:(int *)arg2;
- (id)copyICCProfileDataForColorSpace:(struct CGColorSpace *)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)_addCacheRecordForNovelColorSpace:(struct CGColorSpace *)arg1 withEnum:(int)arg2;

@end

