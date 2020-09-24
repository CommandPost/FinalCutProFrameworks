//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFProResRAWConversionAdjustmentInfo : NSObject
{
    float _whiteBalanceRedFactor;
    float _whiteBalanceBlueFactor;
    float *_ctm;
    float _adjustmentGain;
    CDStruct_bdcb2b0d _conversionMD5;
}

@property(readonly, nonatomic) CDStruct_bdcb2b0d conversionMD5; // @synthesize conversionMD5=_conversionMD5;
@property(readonly, nonatomic) float adjustmentGain; // @synthesize adjustmentGain=_adjustmentGain;
@property(readonly, nonatomic) float whiteBalanceBlueFactor; // @synthesize whiteBalanceBlueFactor=_whiteBalanceBlueFactor;
@property(readonly, nonatomic) float whiteBalanceRedFactor; // @synthesize whiteBalanceRedFactor=_whiteBalanceRedFactor;
@property(readonly, nonatomic) float *colorTranslationMatrix; // @synthesize colorTranslationMatrix=_ctm;
- (BOOL)specifiesSameConversionAs:(id)arg1;
- (void)dealloc;
- (id)initWithColorTemperature:(long long)arg1 isoEI:(long long)arg2 exposureOffset:(double)arg3 adjustmentParams:(id)arg4;

@end
