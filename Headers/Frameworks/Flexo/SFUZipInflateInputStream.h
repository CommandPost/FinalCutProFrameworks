//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFUInputStream.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUZipInflateInputStream : NSObject <SFUInputStream>
{
    struct z_stream_s mStream;
    long long mOffset;
    id <SFUBufferedInputStream> mInput;
    char *mOutBuffer;
    unsigned long long mOutBufferSize;
    BOOL mReachedEnd;
    BOOL mIsFromZip;
    unsigned long long mCalculatedCrc;
    unsigned long long mCheckCrc;
}

- (long long)totalCompressedBytesConsumed;
- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (long long)offset;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithInput:(id)arg1;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5;
- (void)setupInflateStream;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

