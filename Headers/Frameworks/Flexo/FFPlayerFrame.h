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
    BOOL _viewed;
    BOOL _isErrorFrame;
    FFTextureBuffer *_overlayTexture;
    NSMapTable *_drawProperties;
}

- (id)initWithTime:(CDStruct_1b6d18a9)arg1 timeRepresented:(CDStruct_1b6d18a9)arg2 nativeFrameDur:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4 forRate:(double)arg5;
- (BOOL)hasSecondField;
- (void)setDrawProperties:(id)arg1;
- (id)drawProperties;
- (void)setOverlayTexture:(id)arg1;
- (id)overlayTexture;
- (void)setViewed;
- (BOOL)viewed;
- (id)description;
- (void)dealloc;
@property(readonly) CDStruct_1b6d18a9 nativeFrameDur; // @synthesize nativeFrameDur=_nativeFrameDur;
@property(readonly) struct CGRect bounds; // @synthesize bounds=_bounds;
@property BOOL isErrorFrame; // @synthesize isErrorFrame=_isErrorFrame;
@property(readonly) double rate; // @synthesize rate=_rate;
@property(retain) FFImage *image2; // @synthesize image2=_image2;
@property(retain) FFImage *image1; // @synthesize image1=_image1;
@property(readonly) CDStruct_1b6d18a9 timeRepresented; // @synthesize timeRepresented=_timeRepresented;
@property(readonly) CDStruct_1b6d18a9 time; // @synthesize time=_time;

@end

