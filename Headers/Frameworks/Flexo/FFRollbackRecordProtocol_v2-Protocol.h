//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/NSObject-Protocol.h>

@class NSData;

@protocol FFRollbackRecordProtocol_v2 <NSObject>
- (BOOL)rollbackWithRecordData:(NSData *)arg1;
- (NSData *)recordData;

@optional
- (BOOL)commitWithRecordData:(NSData *)arg1 error:(id *)arg2;
@end

