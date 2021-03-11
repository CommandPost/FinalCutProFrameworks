//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSCopying-Protocol.h>

@class FFStreamVideoOptions, PCMatrix44Double;

@interface FFSVContext : NSObject <NSCopying>
{
    struct CGColorSpace *_effectOutputCS;
    int _effectOutputCSEnum;
    int _workingSpace;
    PCMatrix44Double *_pt;
    unsigned int _tf;
    int _sq;
    int _tq;
    int _priority;
    FFStreamVideoOptions *_options;
    struct FFImageLocationHint _locationHint;
    unsigned int _additionalRenderingFlags;
    FFSVContext *_cachedNoFieldPairingContext;
    int _CGProviderCacheNodePolicy;
}

+ (int)getPreferredWorkingSpaceForColorSpace:(struct CGColorSpace *)arg1;
+ (int)getPreferredWorkingSpaceForSource:(id)arg1 wsChoice:(int)arg2;
@property(readonly, nonatomic) int getCGProviderCacheNodePolicy; // @synthesize getCGProviderCacheNodePolicy=_CGProviderCacheNodePolicy;
@property(readonly, nonatomic) unsigned int additionalRenderingFlags; // @synthesize additionalRenderingFlags=_additionalRenderingFlags;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)compareTo:(id)arg1 withCompareFlags:(unsigned int)arg2;
- (BOOL)pixelSpaceBounds:(struct CGRect *)arg1;
- (BOOL)drawingInsideMultiAngleGrid;
- (BOOL)allowCustomPreviewMode;
- (BOOL)forLiveEdit;
- (BOOL)pairFields;
- (BOOL)effectsBestQuality;
- (BOOL)disable422Filtering;
- (BOOL)drawAllAnglesTopLevel;
- (BOOL)draftTextMode;
- (struct FFImageLocationHint)locationHint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyForOtherField;
- (id)copyWithAllowCustomPreviewMode:(BOOL)arg1;
- (id)copyWithUpdatedWorkingSpace:(int)arg1;
- (id)copyWithCGProviderCacheNodePolicy:(int)arg1;
- (id)copyWithLiveEditFlag:(BOOL)arg1;
- (id)copyWithPairFields:(BOOL)arg1;
- (id)copyWithAdjustedPriority:(int)arg1 andLocationHint:(struct FFImageLocationHint)arg2;
- (id)copyWithAdjustedPriority:(int)arg1;
- (id)copyWithFxBestQuality:(BOOL)arg1;
- (id)copyWithDraftTextMode:(BOOL)arg1;
- (id)copyWithStrippedDrawAllAnglesAndAdjustedQuality:(int)arg1;
- (id)copyForTopLevelMultiAngleGrid;
- (id)copyWithUpdatedLocationHint:(struct FFImageLocationHint)arg1;
- (id)copyWithSpatialQuality:(int)arg1 temporalQuality:(int)arg2;
- (id)copyWithUpdatedFlags:(unsigned int)arg1;
- (id)options;
- (int)priority;
- (int)spatialQuality;
- (int)temporalQuality;
- (unsigned int)field;
- (unsigned int)temporalField;
- (struct CGRect)transformRectThruPT:(struct CGRect)arg1;
- (_Bool)hasYDownPixelTransform;
- (_Bool)hasValidPixelTransform;
- (id)copyPixelTransform;
- (id)pixelTransform;
- (int)workingSpace;
- (int)effectOutputColorSpaceEnum;
- (struct CGColorSpace *)effectOutputColorspace;
- (void)colorSpace;
- (void)dealloc;
- (id)initForStream:(id)arg1 field:(unsigned int)arg2 spatialQuality:(int)arg3 temporalQuality:(int)arg4 Ydown:(BOOL)arg5 priority:(int)arg6 wantSquarePixels:(BOOL)arg7 wsChoice:(int)arg8;
- (id)initForStream:(id)arg1 field:(unsigned int)arg2 spatialQuality:(int)arg3 temporalQuality:(int)arg4 Ydown:(BOOL)arg5 priority:(int)arg6;
- (id)initForHQFramesWithVideoProps:(id)arg1 priority:(int)arg2;
- (id)initForFramesWithVideoProps:(id)arg1 spatialQuality:(int)arg2 temporalQuality:(int)arg3 priority:(int)arg4;
- (id)initWithColorSpaceRef:(struct CGColorSpace *)arg1 pixelTransform:(id)arg2 temporalField:(unsigned int)arg3 spatialQuality:(int)arg4 temporalQuality:(int)arg5 priority:(int)arg6 options:(id)arg7 locationHint:(struct FFImageLocationHint)arg8;
- (id)initWithColorSpaceRef:(struct CGColorSpace *)arg1 pixelTransform:(id)arg2 temporalField:(unsigned int)arg3 spatialQuality:(int)arg4 temporalQuality:(int)arg5 workingSpace:(int)arg6 priority:(int)arg7 options:(id)arg8 locationHint:(struct FFImageLocationHint)arg9;
- (id)initWithColorSpaceRef:(struct CGColorSpace *)arg1 pixelTransform:(id)arg2 temporalField:(unsigned int)arg3 spatialQuality:(int)arg4 temporalQuality:(int)arg5 workingSpace:(int)arg6 priority:(int)arg7 options:(id)arg8 locationHint:(struct FFImageLocationHint)arg9 flags:(unsigned int)arg10 cgProviderCachePolicy:(int)arg11;

@end

