//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZTimelineViewMulti.h>

@class NSTimer;

@interface OZTimelineViewAudio : OZTimelineViewMulti
{
    struct map<OZTimelineAudioImageTag, OZTimelineAudioImage, std::less<OZTimelineAudioImageTag>, std::allocator<std::pair<const OZTimelineAudioImageTag, OZTimelineAudioImage>>> *_images;
    NSTimer *_sweepTimer;
    CDStruct_1b6d18a9 _audioChunkFrames;
    double _audioChunkPixels;
    unsigned int _rasterColor;
    BOOL _audioImagesUpdated;
}

- (id).cxx_construct;
- (void)stopTimers;
- (void)imagesOutOfDate;
- (unsigned int)rasterColor;
- (id)createEmptyBitmapWithWidth:(unsigned int)arg1 withHeight:(unsigned int)arg2;
- (void)audioReady:(id)arg1;
- (void)sweepAudioImages:(id)arg1;
- (void)clearAudioImages;
- (id)allocRow:(int)arg1;
- (void)verticalZoomChanged;
- (id)imageForAudio:(struct OZAudioTrack *)arg1 startTime:(CDStruct_1b6d18a9)arg2 endTime:(CDStruct_1b6d18a9)arg3 size:(struct CGSize)arg4;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)timeDisplayRangeModified;
- (void)timeDisplayRangeModificationEnd;
- (double)audioChunkPixels;
- (CDStruct_1b6d18a9)audioChunkFrames;
- (void)createDropInfo:(struct OZDropTargetInfo *)arg1 sender:(id)arg2 doOn:(BOOL)arg3;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

