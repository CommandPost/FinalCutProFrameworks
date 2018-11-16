//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FFPixelFormat, FFStreamVideoOptions, PCMatrix44Double;

@interface FFSVContext : NSObject <NSCopying>
{
    struct CGColorSpace *_cs;
    FFPixelFormat *_pf;
    PCMatrix44Double *_pt;
    unsigned int _tf;
    int _tq;
    int _sq;
    int _priority;
    FFStreamVideoOptions *_options;
    int _locationHint;
    unsigned int _additionalRenderingFlags;
}

- (id)initWithColorSpaceRef:(struct CGColorSpace *)arg1 pixelFormat:(id)arg2 pixelTransform:(id)arg3 temporalField:(unsigned int)arg4 spatialQuality:(int)arg5 temporalQuality:(int)arg6 priority:(int)arg7 options:(id)arg8;
- (void)dealloc;
- (struct CGColorSpace *)colorSpace;
- (id)pixelFormat;
- (id)pixelTransform;
- (unsigned int)temporalField;
- (unsigned int)field;
- (int)temporalQuality;
- (int)spatialQuality;
- (int)priority;
- (id)options;
- (void)setDrawAllAngles:(BOOL)arg1;
- (void)setDisable422Filtering:(BOOL)arg1;
- (void)setDraftTextMode:(BOOL)arg1;
- (id)copyWithSpatialQuality:(int)arg1 temporalQuality:(int)arg2;
- (id)copyWithUpdatedLocationHint:(int)arg1;
- (id)copyForTopLevelMultiAngleGrid;
- (id)copyWithStrippedDrawAllAnglesAndAdjustedQuality:(int)arg1;
- (id)copyWithDraftTextMode:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)locationHint;
- (void)setLocationHint:(int)arg1;
- (BOOL)draftTextMode;
- (BOOL)drawAllAngles;
- (BOOL)disable422Filtering;
- (struct CGRect)pixelSpaceBounds;
@property(readonly, nonatomic) unsigned int additionalRenderingFlags; // @synthesize additionalRenderingFlags=_additionalRenderingFlags;

@end

