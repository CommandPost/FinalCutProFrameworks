//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFModelLocking-Protocol.h>
#import <Flexo/FFRollbackRecordProtocol_v2-Protocol.h>

@class FFAnchoredObject, NSString;

__attribute__((visibility("hidden")))
@interface _FFColorMatchHelperRecord : NSObject <FFModelLocking, FFRollbackRecordProtocol_v2>
{
    FFAnchoredObject *_anchoredObject;
}

+ (id)recordWithAnchoredObject:(id)arg1;
@property(readonly, nonatomic) FFAnchoredObject *anchoredObject; // @synthesize anchoredObject=_anchoredObject;
- (id)modelLockingObject;
- (BOOL)rollbackWithRecordData:(id)arg1;
- (id)recordData;
- (id)matchToEffect;
- (id)consumerBalanceColorEffect;
- (void)dealloc;
- (id)initWithAnchoredObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

