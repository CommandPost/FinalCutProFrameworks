//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter;

@protocol AVAssetWriterDataWritingDelegate <NSObject>
- (void)assetWriter:(AVAssetWriter *)arg1 didProduceDataOfLength:(unsigned long long)arg2 offset:(long long)arg3 bytes:(const char *)arg4 bytesWritten:(unsigned long long *)arg5;
@end
