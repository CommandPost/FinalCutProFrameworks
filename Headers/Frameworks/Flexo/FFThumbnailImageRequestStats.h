//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FFThumbnailImageRequestStats : NSObject
{
    unsigned long long _numRequests;
    unsigned long long _numCancels;
    unsigned long long _numRealRequests;
    unsigned long long _numCacheHits;
    unsigned long long _numRAMCacheHits;
    unsigned long long _numDiskCacheHits;
    unsigned long long _numImageGenerations;
}

+ (id)sharedInstance;
@property unsigned long long numImageGenerations; // @synthesize numImageGenerations=_numImageGenerations;
@property unsigned long long numDiskCacheHits; // @synthesize numDiskCacheHits=_numDiskCacheHits;
@property unsigned long long numRAMCacheHits; // @synthesize numRAMCacheHits=_numRAMCacheHits;
@property unsigned long long numCacheHits; // @synthesize numCacheHits=_numCacheHits;
@property unsigned long long numRealRequests; // @synthesize numRealRequests=_numRealRequests;
@property unsigned long long numCancels; // @synthesize numCancels=_numCancels;
@property unsigned long long numRequests; // @synthesize numRequests=_numRequests;
- (id)description;
- (void)reset;

@end

