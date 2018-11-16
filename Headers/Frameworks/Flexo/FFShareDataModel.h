//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface FFShareDataModel : NSObject
{
    NSMapTable *_mapDestinationToBatch;
    NSMapTable *_mapDestinationToJob;
    NSMapTable *_mapDestinationToTarget;
}

@property(retain, nonatomic) NSMapTable *mapDestinationToTarget; // @synthesize mapDestinationToTarget=_mapDestinationToTarget;
@property(retain, nonatomic) NSMapTable *mapDestinationToJob; // @synthesize mapDestinationToJob=_mapDestinationToJob;
@property(retain, nonatomic) NSMapTable *mapDestinationToBatch; // @synthesize mapDestinationToBatch=_mapDestinationToBatch;
- (void)enumerateBatchesUsingBlock:(CDUnknownBlockType)arg1;
- (id)targetForDestination:(id)arg1;
- (id)jobForDestination:(id)arg1;
- (id)batchForDestination:(id)arg1;
- (void)associateDestination:(id)arg1 withBatch:(id)arg2 job:(id)arg3 target:(id)arg4;
- (void)dealloc;
- (id)init;

@end
