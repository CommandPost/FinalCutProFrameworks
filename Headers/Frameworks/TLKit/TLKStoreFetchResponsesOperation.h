//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <TLKit/TLKOperationPipingSource-Protocol.h>

@class NSArray, PCChangeLog, TLKLayoutDatabase;

@interface TLKStoreFetchResponsesOperation : NSOperation <TLKOperationPipingSource>
{
    PCChangeLog *_outputChangeLog;
    TLKLayoutDatabase *_database;
    NSArray *_fetchResponses;
}

@property(copy, nonatomic) NSArray *fetchResponses; // @synthesize fetchResponses=_fetchResponses;
@property(retain, nonatomic) TLKLayoutDatabase *database; // @synthesize database=_database;
@property(readonly) PCChangeLog *outputChangeLog; // @synthesize outputChangeLog=_outputChangeLog;
- (void)saveFetchResults;
- (void)main;
- (void)dealloc;
- (id)init;

@end

