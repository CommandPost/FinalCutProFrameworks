//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFSegmentStoreInfo, NSLock, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FFSegmentStore : NSObject
{
    CDStruct_bdcb2b0d _md5;
    NSString *_path;
    FFSegmentStoreInfo *_segmentInfo;
    NSLock *_pendingReadsLock;
    NSMutableArray *_pendingReads;
}

- (id)initWithSegmentMD5:(CDStruct_60067b7e)arg1 path:(id)arg2 renderProps:(id)arg3;
- (void)dealloc;
- (CDStruct_60067b7e)md5;
- (id)path;
- (id)renderProps;
- (id)segmentInfo;
- (BOOL)frameExistsAtOffset:(long long)arg1;
- (BOOL)_quickApproximateFrameExistsAtOffset:(long long)arg1;
- (void)finishedReadObj:(id)arg1;
- (id)_newCachedReadTokenForExistingSampleOffset:(long long)arg1 decodeQuality:(int)arg2;
- (id)newCachedFrameTokenAtOffset:(long long)arg1 doAsync:(BOOL)arg2 decodeQuality:(int)arg3;
- (id)newCachedFrameTokenAtOffset:(long long)arg1 decodeQuality:(int)arg2;
- (id)newCachedBufferTokenAtOffset:(long long)arg1;
- (id)storedFrameIndexes;
- (void)updateSegmentInfo;
- (void)ageOutCompressor:(BOOL)arg1;
- (id)newImageAtOffset:(long long)arg1 decodeQuality:(int)arg2;
- (id)newImageAtOffset:(long long)arg1;
- (id)newBufferAtOffset:(long long)arg1;
- (int)writeFrame:(id)arg1 image2:(id)arg2 fieldOrder:(int)arg3 sampleNumber:(long long)arg4 cost:(double)arg5 mustWrite:(BOOL)arg6;
- (int)writeBuffer:(id)arg1 sampleNumber:(long long)arg2 cost:(double)arg3 mustWrite:(BOOL)arg4;
- (id)description;

@end
