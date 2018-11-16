//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFImage, FFTextureBuffer, NSMapTable;

@interface FFPlayerFrame : NSObject
{
    CDStruct_1b6d18a9 _time;
    CDStruct_1b6d18a9 _timeRepresented;
    CDStruct_1b6d18a9 _nativeFrameDur;
    FFImage *_image1;
    FFImage *_image2;
    struct CGRect _bounds;
    double _rate;
    unsigned int _timecodeType;
    BOOL _viewed;
    BOOL _isErrorFrame;
    BOOL _isBlankFrame;
    FFTextureBuffer *_overlayTexture;
    NSMapTable *_drawProperties;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 nativeFrameDur; // @synthesize nativeFrameDur=_nativeFrameDur;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) unsigned int timecodeType; // @synthesize timecodeType=_timecodeType;
@property BOOL isBlankFrame; // @synthesize isBlankFrame=_isBlankFrame;
@property BOOL isErrorFrame; // @synthesize isErrorFrame=_isErrorFrame;
@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 timeRepresented; // @synthesize timeRepresented=_timeRepresented;
@property(readonly, nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (void)dealloc;
- (id)description;
- (id)image2;
- (id)image1;
- (void)setImage2:(id)arg1;
- (void)setImage1:(id)arg1;
- (BOOL)viewed;
- (void)setViewed;
- (id)overlayTexture;
- (void)setOverlayTexture:(id)arg1;
- (id)drawProperties;
- (void)setDrawProperties:(id)arg1;
- (BOOL)hasSecondField;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 timeRepresented:(CDStruct_1b6d18a9)arg2 nativeFrameDur:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4 forRate:(double)arg5 forTimecodeType:(unsigned int)arg6;

@end

