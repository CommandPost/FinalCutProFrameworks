//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FFUTDiffReport : NSObject
{
    int _maxDiff[4];
    int _minDiff[4];
    int _diffCount[4];
    unsigned short _minPixelVal_img1[4];
    unsigned short _maxPixelVal_img1[4];
    unsigned short _minPixelVal_img2[4];
    unsigned short _maxPixelVal_img2[4];
    int _totalDiffCount;
    int _pixelCount;
    int _channelIsZero_img1[4];
    int _channelIsZero_img2[4];
    int _alphaChannelIndex;
    NSString *_label;
    NSString *_firstDiff;
    NSString *_maxDiffInfo[4];
    NSString *_minDiffInfo[4];
}

@property(readonly) int alphaChannelIndex; // @synthesize alphaChannelIndex=_alphaChannelIndex;
@property(retain) NSString *label; // @synthesize label=_label;
- (int)alphaIsZeroCountImg2;
- (int)alphaIsZeroCountImg1;
- (int)minAlphaValImg2;
- (int)minAlphaValImg1;
- (int)totalPixelCount;
- (int)totalDiffCount;
- (id)channelDesc:(int)arg1;
- (id)description;
- (_Bool)withinTolerancesForChannelIndex:(int)arg1 tolerancesArray:(struct FFUTDiffReport_toleranceInfo *)arg2;
- (_Bool)withinTolerancesForChannelIndex:(int)arg1 lower:(int)arg2 upper:(int)arg3;
- (void)dealloc;
- (id)initWithPB1:(id)arg1 PB2:(id)arg2;

@end

