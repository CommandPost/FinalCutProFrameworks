//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFStream.h>

@class NSMutableDictionary;

@interface FFStreamVideo : FFStream
{
    long long _flags;
    NSMutableDictionary *_segmentStores;
}

+ (struct CGRect)computeROI:(id)arg1 forSquared:(BOOL)arg2 full:(BOOL)arg3 quality:(int)arg4;
- (id)newPTforRequestSquared:(BOOL)arg1 field:(unsigned int)arg2 quality:(int)arg3 Ydown:(BOOL)arg4;
- (int)actualQualityFromRequestedQuality:(int)arg1;
- (id)newFlattenedImageAtTime:(CDStruct_1b6d18a9)arg1 Ydown:(BOOL)arg2 field:(unsigned int)arg3 priority:(int)arg4;
- (id)newRepresentationalImageAtTime:(CDStruct_1b6d18a9)arg1 Ydown:(BOOL)arg2 field:(unsigned int)arg3 priority:(int)arg4 quality:(int)arg5 wsChoice:(int)arg6;
- (id)newRepresentationalImageAtTime:(CDStruct_1b6d18a9)arg1 Ydown:(BOOL)arg2 field:(unsigned int)arg3 priority:(int)arg4 quality:(int)arg5;
- (id)newRepresentationalImageAtTime:(CDStruct_1b6d18a9)arg1 Ydown:(BOOL)arg2 field:(unsigned int)arg3 priority:(int)arg4;
- (id)newRepresentationalImageAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2 useStreamROI:(BOOL)arg3 fullFrame:(BOOL)arg4 graphBuildInfo:(id)arg5 error:(id *)arg6;
- (id)newRepresentationalImageAtTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2 useStreamROI:(BOOL)arg3 fullFrame:(BOOL)arg4 graphBuildInfo:(id)arg5;
- (id)newRepresentationalImageAtTime:(CDStruct_1b6d18a9)arg1 Ydown:(BOOL)arg2 field:(unsigned int)arg3 priority:(int)arg4 quality:(int)arg5 useStreamROI:(BOOL)arg6 graphBuildInfo:(id)arg7;
- (id)newRepresentationalImageAtTime:(CDStruct_1b6d18a9)arg1 Ydown:(BOOL)arg2 field:(unsigned int)arg3 priority:(int)arg4 quality:(int)arg5 useStreamROI:(BOOL)arg6;
- (id)newSquaredFlattenedImageAtTime:(CDStruct_1b6d18a9)arg1 quality:(int)arg2 temporalQuality:(int)arg3 bypassSegmentStore:(BOOL)arg4 backgroundColor:(id)arg5 returnImageMD5:(id *)arg6 error:(id *)arg7;
- (id)newSquaredFlattenedImageAtTime:(CDStruct_1b6d18a9)arg1 quality:(int)arg2 temporalQuality:(int)arg3 bypassSegmentStore:(BOOL)arg4 backgroundColor:(id)arg5 returnImageMD5:(id *)arg6;
- (id)newSquaredFlattenedImageAtTime:(CDStruct_1b6d18a9)arg1 quality:(int)arg2 temporalQuality:(int)arg3 bypassSegmentStore:(BOOL)arg4 returnImageMD5:(id *)arg5;
- (id)newThumbnailAtTime:(CDStruct_1b6d18a9)arg1 temporalQuality:(int)arg2 returnImageMD5:(id *)arg3 contentsScale:(double)arg4;
- (void)_saveThumbnailImageForMD5AndOffset:(CDStruct_bdcb2b0d)arg1 sampleOffset:(long long)arg2 image:(id)arg3;
- (id)_newThumbnailImageForMD5AndOffset:(CDStruct_bdcb2b0d)arg1 sampleOffset:(long long)arg2;
- (BOOL)md5AndOffsetForCGThumbnailAtTime:(CDStruct_1b6d18a9)arg1 temporalQuality:(int)arg2 md5:(CDStruct_bdcb2b0d *)arg3 sampleOffset:(long long *)arg4 contentsScale:(double)arg5;
- (void)newContextAndPixelTransformForQuality:(int)arg1 temporalQuality:(int)arg2 context:(id *)arg3 pixelTransform:(id *)arg4 wsChoice:(int)arg5;
- (struct CGImage *)newCGThumbnailAtTime:(CDStruct_1b6d18a9)arg1 temporalQuality:(int)arg2 returnImageMD5:(id *)arg3 contentsScale:(double)arg4;
- (id)newNSThumbnailAtTime:(CDStruct_1b6d18a9)arg1 temporalQuality:(int)arg2 contentsScale:(double)arg3;
- (id)description;
- (void)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4;
- (void)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 context:(id)arg2 downstreamPT:(id)arg3;
- (id)newScheduleTokenAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5;
- (void)newScheduleTokenAtTime:(CDStruct_fcaf9308)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4;
- (void)newScheduleTokenAtTime:(CDStruct_fcaf9308)arg1 context:(id)arg2 downstreamPT:(id)arg3;
- (id)newScheduleTokenAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5;
- (_Bool)shouldCheckCacheForTime:(CDStruct_1b6d18a9)arg1 context:(id)arg2 props:(id)arg3;
- (void)setFlags:(long long)arg1;
- (long long)flags;
- (id)newImageAtTimeIgnoringCache:(CDStruct_fcaf9308)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4 roi:(const struct CGRect *)arg5 graphBuildInfo:(id)arg6;
- (id)newImageAtTimeIgnoringCache:(CDStruct_fcaf9308)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4 roi:(const struct CGRect *)arg5;
- (id)newImageAtTimeIgnoringCache:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5 roi:(const struct CGRect *)arg6 graphBuildInfo:(id)arg7;
- (id)newImageAtTime:(CDStruct_fcaf9308)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 downstreamPT:(id)arg4 roi:(const struct CGRect *)arg5 graphBuildInfo:(id)arg6;
- (id)newImageAtTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2 context:(id)arg3 schedInfo:(id)arg4 downstreamPT:(id)arg5 roi:(const struct CGRect *)arg6 graphBuildInfo:(id)arg7;
- (id)newTokOrImageFromCache:(CDStruct_1b6d18a9)arg1 context:(id)arg2 scheduleOnly:(_Bool)arg3 videoProps:(id)arg4 localCache:(struct cachedPathsForQuals *)arg5;
- (id)copySegmentStoreImageAtTime:(CDStruct_1b6d18a9)arg1 lookupContext:(id)arg2 lookupInfo:(id)arg3 tagInfo:(id)arg4 decodeQuality:(int)arg5 videoProps:(id)arg6 costAtTime:(double)arg7 useIdeal:(_Bool)arg8 justSchedule:(_Bool)arg9 localCache:(struct cachedPathsForQuals *)arg10;
- (id)pixelTransformToField2ForQuality:(int)arg1;
- (id)pixelTransformToField1ForQuality:(int)arg1;
- (id)pixelTransformToFrameForQuality:(int)arg1;
- (CDStruct_e83c9415)timeRange;
- (id)videoProps;
- (void)dealloc;
- (id)initWithSource:(id)arg1 context:(id)arg2 flags:(long long)arg3 options:(id)arg4;

@end

