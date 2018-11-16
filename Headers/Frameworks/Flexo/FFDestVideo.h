//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDest.h>

@class FFPlayer;

__attribute__((visibility("hidden")))
@interface FFDestVideo : FFDest
{
    id _delegate;
    FFPlayer *_player;
    int _drawFieldsInterlaced;
    CDStruct_1b6d18a9 _sampleDuration;
    CDStruct_1b6d18a9 _frameDuration;
    int _fieldDominance;
    struct CGRect _sequenceBounds;
}

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)setSampleDuration:(CDStruct_1b6d18a9)arg1 fieldDominance:(int)arg2 sequenceBounds:(struct CGRect)arg3;
- (id)newDrawPropertiesForFrame:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (int)imageLocation;
- (struct CGColorSpace *)colorSpace;
- (id)supportedPixelFormats;
- (struct CGSize)requestedImageSizeWithFilterQuality:(int *)arg1;
- (struct CGSize)maxSupportedSize;
- (int)requestedBackground;
- (BOOL)wantsDithering:(id)arg1;
- (void)flush:(BOOL)arg1;
- (void)pushFrame:(id)arg1;
- (BOOL)wantsMoreFrames;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (int)drawFieldsInterlaced;
- (struct CGRect)sequenceBounds;
- (void)setNeedsUpdate:(BOOL)arg1;
- (_Bool)shouldSkipFrame:(CDStruct_1b6d18a9)arg1 playRate:(double)arg2;
- (void)skippedFrame:(CDStruct_1b6d18a9)arg1;
- (void)setLastHealthMetric:(float)arg1;
- (id)description;
@property(readonly) CDStruct_1b6d18a9 frameDuration; // @synthesize frameDuration=_frameDuration;
@property(readonly) CDStruct_1b6d18a9 sampleDuration; // @synthesize sampleDuration=_sampleDuration;

@end

