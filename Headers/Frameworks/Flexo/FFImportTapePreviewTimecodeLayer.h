//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CATextLayer, MIOTimecode, NSDictionary;

__attribute__((visibility("hidden")))
@interface FFImportTapePreviewTimecodeLayer : CALayer
{
    MIOTimecode *_timecode;
    unsigned int _repeatingTimecodeCount;
    BOOL _checkForNoData;
    long long _deckStatus;
    long long _elapsedSeconds;
    long long _iSightStatus;
    int _importProcessingType;
    CATextLayer *_statusTextLayer;
    CALayer *_statusBackgroundLayer;
    CATextLayer *_timecodeTextLayer;
    CALayer *_timecodeBackgroundLayer;
    NSDictionary *_fontAttributes;
}

+ (id)layerWithFrame:(struct CGRect)arg1 superlayer:(id)arg2;
- (void)dealloc;
- (void)disableFrameAnimationOnLayer:(id)arg1;
- (void)configureTextLayer:(id)arg1 inBackgroundLayer:(id)arg2;
- (void)addSublayers;
@property(retain, nonatomic) MIOTimecode *timecode; // @synthesize timecode=_timecode;
@property(nonatomic) long long elapsedSeconds; // @synthesize elapsedSeconds=_elapsedSeconds;
@property(nonatomic) long long deckStatus; // @synthesize deckStatus=_deckStatus;
@property(nonatomic) int importProcessingType; // @synthesize importProcessingType=_importProcessingType;
@property(nonatomic) long long iSightStatus; // @synthesize iSightStatus=_iSightStatus;
- (void)updateTextlayer:(id)arg1 andBackgroundLayer:(id)arg2 withString:(id)arg3;
- (void)updateStatusLayer;
- (void)updateTimecodeLayer;

@end

