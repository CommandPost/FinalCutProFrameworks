//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSSet;

@interface FFRollbackRecord_v2 : NSObject
{
    id <FFRollbackRecordDelegate_v2> _delegate;
    NSSet *_records;
    NSMapTable *_recordedData;
}

+ (id)rollbackRecordWithRecords:(id)arg1 delegate:(id)arg2;
+ (id)rollbackRecordWithRecords:(id)arg1;
@property(readonly, nonatomic) NSSet *records; // @synthesize records=_records;
@property(nonatomic) id <FFRollbackRecordDelegate_v2> delegate; // @synthesize delegate=_delegate;
- (void)rollbackWithUndoHandler:(id)arg1;
- (void)rollback;
- (void)_rollback;
- (BOOL)commitWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)commit:(id *)arg1;
- (void)update;
- (void)dealloc;
- (id)initWithRecords:(id)arg1 delegate:(id)arg2;
- (id)initWithRecords:(id)arg1;
- (void)_commonInit;

@end

