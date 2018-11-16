//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAssetFileIdentifier, NSObject<OS_dispatch_semaphore>, NSURL;

__attribute__((visibility("hidden")))
@interface FFRAWClip : NSObject
{
    FFAssetFileIdentifier *_assetFileID;
    id <RAWClipReading> _reader;
    NSURL *_urlOfReader;
    CDStruct_1b6d18a9 _timecodeFrameDuration;
    CDStruct_1b6d18a9 _startTimeCode;
    unsigned long long _startTimeCodeInFrames;
    long long _timecodeDisplayDrop;
    long long _videoFrameCount;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)copyClipInstanceForURL:(id)arg1 assetFileID:(id)arg2;
- (unsigned long long)read:(void *)arg1 offset:(long long)arg2 length:(unsigned long long)arg3;
- (long long)timecodeDisplayDropFrame;
- (CDStruct_1b6d18a9)startTimeCode;
- (unsigned long long)startTimeCodeInFrames;
- (CDStruct_1b6d18a9)timecodeFrameDuration;
- (id)copyReader;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fileURL;
- (void)dealloc;
- (oneway void)release;
- (void)_updateReader:(id)arg1;
- (id)initWithURL:(id)arg1 assetFileID:(id)arg2;

@end

