//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFDestVideoRequestInfo, FFGraphBuildInformation, FFImage, FFOnScreenControlsTexture, FFSubRangeMD5Info, NSError, NSMapTable;

@interface FFPlayerFrame : NSObject
{
    CDStruct_1b6d18a9 _time;
    CDStruct_1b6d18a9 _timeRepresented;
    CDStruct_1b6d18a9 _alwaysFwdTime;
    CDStruct_1b6d18a9 _nativeFrameDur;
    FFImage *_image1;
    FFImage *_image2;
    unsigned int _zebraMode1;
    unsigned int _zebraMode2;
    struct CGRect _bounds;
    double _rate;
    unsigned int _timecodeType;
    BOOL _viewed;
    BOOL _isBlankFrame;
    BOOL _isAudioFrame;
    CDStruct_b80813c2 _healthLevels;
    FFSubRangeMD5Info *_image1_MD5;
    FFSubRangeMD5Info *_image2_MD5;
    FFGraphBuildInformation *_gBuildInfo1;
    FFGraphBuildInformation *_gBuildInfo2;
    FFDestVideoRequestInfo *_originalDestRequest;
    int _cameraMode;
    FFOnScreenControlsTexture *_overlayTexture;
    NSMapTable *_drawProperties;
    NSError *_errorInfo;
    _Bool _execLocInfoHasBeenSet;
    CDStruct_17afb55d _execLocInfo;
}

@property(readonly) unsigned int zebraMode2; // @synthesize zebraMode2=_zebraMode2;
@property(readonly) unsigned int zebraMode1; // @synthesize zebraMode1=_zebraMode1;
@property(readonly) int cameraMode; // @synthesize cameraMode=_cameraMode;
@property(readonly, nonatomic) CDStruct_1b6d18a9 nativeFrameDur; // @synthesize nativeFrameDur=_nativeFrameDur;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, retain, nonatomic) FFDestVideoRequestInfo *originalDestRequest; // @synthesize originalDestRequest=_originalDestRequest;
@property(readonly, nonatomic) unsigned int timecodeType; // @synthesize timecodeType=_timecodeType;
@property BOOL isAudioFrame; // @synthesize isAudioFrame=_isAudioFrame;
@property BOOL isBlankFrame; // @synthesize isBlankFrame=_isBlankFrame;
@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 alwaysFwdTime; // @synthesize alwaysFwdTime=_alwaysFwdTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 timeRepresented; // @synthesize timeRepresented=_timeRepresented;
@property(readonly, nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
- (CDStruct_b80813c2 *)healthLevels;
- (void)updateHealthLevels:(CDStruct_b80813c2 *)arg1;
- (void)dealloc;
- (id)description;
- (CDStruct_17afb55d)execLocInfo;
- (void)setExecLocInfo:(CDStruct_17afb55d)arg1;
- (id)graphBuildInfo2;
- (id)graphBuildInfo1;
- (id)image2_MD5;
- (id)image1_MD5;
- (void)setImage2:(id)arg1 withMD5:(id)arg2 graphBuildInfo:(id)arg3 zebraMode:(unsigned int)arg4;
- (void)setImage1:(id)arg1 withMD5:(id)arg2 graphBuildInfo:(id)arg3 zebraMode:(unsigned int)arg4;
- (void)_validateImageAgainstOriginalRequest:(id)arg1;
- (id)image2;
- (id)image1;
- (BOOL)viewed;
- (void)setViewed;
- (id)overlayTexture;
- (void)setOverlayTexture:(id)arg1;
- (id)drawProperties;
- (void)setDrawProperties:(id)arg1;
- (BOOL)hasSecondField;
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 timeRepresented:(CDStruct_1b6d18a9)arg2 alwaysFwdTime:(CDStruct_1b6d18a9)arg3 nativeFrameDur:(CDStruct_1b6d18a9)arg4 bounds:(struct CGRect)arg5 forRate:(double)arg6 forTimecodeType:(unsigned int)arg7 cameraMode:(int)arg8 originalDestRequest:(id)arg9;

@end

