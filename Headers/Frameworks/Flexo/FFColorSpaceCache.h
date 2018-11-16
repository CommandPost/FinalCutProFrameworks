//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSLock, NSMutableArray, NSMutableDictionary;

@interface FFColorSpaceCache : NSObject
{
    NSMutableArray *_knownColorSpaces;
    NSLock *_cachedColorLock;
    NSData *_linear709Data;
    struct CGColorSpace *_linear709ColorSpace;
    struct CGColorSpace *_709ColorSpace;
    struct CGColorSpace *_gamma20_709ColorSpace;
    struct CGColorSpace *_canonDSLR_116_NCLC_Space;
    struct CGColorSpace *_sanyo_611_NCLC_Space;
    NSArray *_standardEnumeratedSpaces;
    NSMutableDictionary *_oddballCachedColorSpaces;
    NSMutableArray *_recentColorSpacesWithEnums;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (struct CGColorSpace *)newColorSpaceForOverrideIndex:(int)arg1;
+ (BOOL)testConversionFromColorSpace:(struct CGColorSpace *)arg1 toColorSpace:(struct CGColorSpace *)arg2;
- (id)init;
- (void)dealloc;
- (struct ColorSyncProfile *)colorSyncProfileForColorSpace:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)colorSpaceForColorSyncProfile:(struct ColorSyncProfile *)arg1;
- (id)newICCProfileDataForColorSpace:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)colorSpaceForICCProfileData:(id)arg1;
- (struct CGColorSpace *)createGamma20_709ColorSpace;
- (struct CGColorSpace *)createGamma_709ColorSpace:(double)arg1;
- (id)_slowGetCacheRecordForSpace:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)createAndStoreColorProfile:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)linear709ColorSpace;
- (struct CGColorSpace *)gamma22_709ColorSpace;
- (struct CGColorSpace *)standard709ColorSpace;
- (struct CGColorSpace *)gamma20_709ColorSpace;
- (struct CGColorSpace *)canonDSLR_116_NCLC_Space;
- (struct CGColorSpace *)sanyo_611_NCLC_Space;
- (BOOL)isProductionLevelNCLC:(struct CGColorSpace *)arg1;
- (id)_lookupInRecentsWhileHoldingSynchronizedSelf:(struct CGColorSpace *)arg1;
- (int)getMatchingStandardColorSpace:(struct CGColorSpace *)arg1;
- (_Bool)doesColorspace:(struct CGColorSpace *)arg1 matchStandard:(int)arg2;
- (struct CGColorSpace *)colorSpaceForPrimaries:(id)arg1 transferFunc:(id)arg2 matrix:(id)arg3 gammaNumber:(id)arg4 retIsNonStandard:(int *)arg5;

@end

