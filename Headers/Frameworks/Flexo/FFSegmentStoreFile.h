//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableData, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface FFSegmentStoreFile : NSObject
{
    NSLock *_lock;
    int _fileDescriptor;
    NSMutableData *_headerData;
    long long _startFrame;
    unsigned long long _fileSize;
    struct _SegmentStoreFileHeader *_fileHeader;
    struct _SegmentStoreFrameInfo *_frameInfoArray;
    NSMutableIndexSet *_frameInfosNeedingWrite;
}

- (void)dealloc;
- (BOOL)frameExists:(unsigned int)arg1;
- (long long)startFrame;
- (int)setFrameData:(id)arg1 sampleNumber:(unsigned int)arg2 pixelTransformIndex1:(unsigned long long)arg3 pixelTransformIndex2:(unsigned long long)arg4;
- (id)newFrameData:(const struct _CleanSegmentStoreFrameInfo *)arg1 sampleObj:(id)arg2 error:(id *)arg3;
- (struct _CleanSegmentStoreFrameInfo)lookupOffsetInfoFor:(long long)arg1;
- (void)ensureFlushedToDisk;
- (int)fileDescriptor;
- (id)initWithPath:(id)arg1 count:(unsigned long long)arg2 startFrame:(long long)arg3 createIfMissing:(BOOL)arg4;

@end

