//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCompositionTrackSegment, AVSampleBufferGenerator, AVURLAsset, NSString;

__attribute__((visibility("hidden")))
@interface FFAVFCompositionTrackAsset : NSObject
{
    NSString *m_mediaType;
    AVURLAsset *m_assetTrack;
    AVCompositionTrackSegment *m_segmentAssetTrack;
    AVSampleBufferGenerator *m_sampleGenerator;
    CDStruct_82206317 m_sampleTimeMapping;
}

- (CDStruct_82206317)segmentTimeMapping;
- (id)trackMediaType;
- (id)trackAVURLAsset;
- (id)sampleGenerator;
- (id)trackSegment;
- (void)dealloc;
- (id)initWithSegment:(id)arg1 avurlAsset:(id)arg2 mediaType:(id)arg3;

@end
