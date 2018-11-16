//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHChannelDouble, FFMD5AndOffset, FFProject, NSString;

__attribute__((visibility("hidden")))
@interface FFThumbnailRequest : NSObject
{
    BOOL _highPriority;
    struct NSObject *_skimmable;
    CDStruct_e83c9415 _imageTimeRange;
    id _target;
    SEL _imageReadySelector;
    CDStruct_e83c9415 _sampleTimeRange;
    BOOL _isAudio;
    struct CGSize _imageSize;
    double _contentsScale;
    FFMD5AndOffset *_imageMD5;
    CDStruct_bdcb2b0d _cachedMD5;
    BOOL _isAVClip;
    struct CGImage *_image;
    BOOL _canceled;
    int _attemptCount;
    CHChannelDouble *_volumeChannel;
    BOOL _audioWasHighQuality;
    NSString *_segmentStoreMD5;
    long long _segmentStoreOffset;
    FFProject *_project;
    int _thumbQuality;
    long long _effectCount;
    BOOL _useAudioPeaksAvailable;
}

- (struct CGImage *)dummyImage;
- (id)initWithSkimmable:(struct NSObject *)arg1 imageTimeRange:(CDStruct_e83c9415)arg2 imageSize:(struct CGSize)arg3 contentsScale:(double)arg4 requestAudio:(BOOL)arg5 target:(id)arg6 imageReadySelector:(SEL)arg7 requestTimeType:(int)arg8 constrainedTimeRange:(CDStruct_e83c9415)arg9 highPriority:(BOOL)arg10 useAudioPeaksAvailable:(BOOL)arg11 effectCount:(long long)arg12;
- (id)initWithSegmentStoreMD5:(id)arg1 segmentStoreOffset:(long long)arg2 project:(id)arg3 isAudio:(BOOL)arg4;
- (void)dealloc;
- (oneway void)release;
- (id)description;
- (BOOL)highPriority;
- (BOOL)newImage:(struct CGImage **)arg1;
- (void)setImage:(struct CGImage *)arg1;
- (void)notifyImageReady;
- (CDStruct_e83c9415)sampleTimeRange;
- (void)cancelRequest;
- (BOOL)canceled;
- (BOOL)isAudio;
- (void)addImageToSegmentStore;
- (CDStruct_60067b7e)imageMD5Cached;
- (CDStruct_60067b7e)imageMD5;
- (CDStruct_60067b7e)audioMD5;
- (CDStruct_60067b7e)cachedMD5;
- (void)setVideoImageMD5:(id)arg1;
- (void)recalculateImageMD5:(id)arg1;
- (id)segmentStoreMD5;
- (long long)segmentStoreOffset;
- (id)project;
- (int)thumbQuality;

@end

