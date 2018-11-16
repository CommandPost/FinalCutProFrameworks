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
    unsigned int _hasBeenWrittenTo;
}

- (id)description;
- (BOOL)writeTransferredData:(id)arg1 token2:(id)arg2 fieldOrder:(int)arg3 cameraMode:(int)arg4 sampleNum:(long long)arg5 error:(id *)arg6;
- (BOOL)writeBuffer:(id)arg1 sampleNumber:(long long)arg2 mustWrite:(BOOL)arg3 error:(id *)arg4;
- (BOOL)writeFrame:(id)arg1 image2:(id)arg2 fieldOrder:(int)arg3 cameraMode:(int)arg4 sampleNumber:(long long)arg5 cost:(double)arg6 mustWrite:(BOOL)arg7 error:(id *)arg8;
- (BOOL)writeFrame:(id)arg1 image2:(id)arg2 fieldOrder:(int)arg3 sampleNumber:(long long)arg4 cost:(double)arg5 mustWrite:(BOOL)arg6 error:(id *)arg7;
- (id)newBufferAtOffset:(long long)arg1 priority:(int)arg2 error:(id *)arg3;
- (id)newImageAtOffset:(long long)arg1 decodeQuality:(int)arg2 priority:(int)arg3 error:(id *)arg4;
- (_Bool)wantsHinting;
- (BOOL)ageOutCompressor:(BOOL)arg1;
- (void)updateSegmentInfo;
- (id)storedFrameIndexes;
- (id)newCachedBufferTokenAtOffset:(long long)arg1 priority:(int)arg2 error:(id *)arg3;
- (id)newCachedFrameTokenAtOffset:(long long)arg1 decodeQuality:(int)arg2 priority:(int)arg3 error:(id *)arg4;
- (id)newCachedFrameTokenAtOffset:(long long)arg1 doAsync:(BOOL)arg2 decodeQuality:(int)arg3 priority:(int)arg4 error:(id *)arg5;
- (id)_newCachedReadTokenForExistingSampleOffset:(long long)arg1 decodeQuality:(int)arg2 priority:(int)arg3;
- (void)finishedReadObj:(id)arg1;
- (BOOL)_quickApproximateFrameExistsAtOffset:(long long)arg1;
- (BOOL)frameExistsAtOffset:(long long)arg1;
- (id)segmentInfo;
- (id)renderProps;
- (id)url;
- (id)path;
- (CDStruct_bdcb2b0d)md5;
- (void)dealloc;
- (id)initWithSegmentMD5:(CDStruct_bdcb2b0d)arg1 path:(id)arg2 renderPropsForCreation:(id)arg3 error:(id *)arg4;

@end

