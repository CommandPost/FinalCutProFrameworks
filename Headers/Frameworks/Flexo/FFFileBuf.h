//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFFileReading.h"

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface FFFileBuf : NSObject <FFFileReading>
{
    NSData *_readBufferData;
    const char *_readBuf;
    const char *_readPtr;
    const char *_readEnd;
    NSNumber *_contentLength;
    long long _readPosition;
    unsigned long long _pageSize;
}

+ (id)newBufferForURL:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSData *readBufferData; // @synthesize readBufferData=_readBufferData;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long readPosition; // @synthesize readPosition=_readPosition;
@property(retain, nonatomic) NSNumber *contentLength; // @synthesize contentLength=_contentLength;
- (BOOL)readNext:(unsigned long long)arg1 error:(id *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2 error:(id *)arg3;
- (const char *)getReadBytes:(unsigned long long *)arg1;
- (void)dealloc;
- (id)init;

@end
