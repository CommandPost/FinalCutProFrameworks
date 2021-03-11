//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFLogResultsAlertDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FFAudioRoleComponentsMigrationLogDelegate : NSObject <FFLogResultsAlertDelegate>
{
    NSMutableArray *_unmodifiedList;
    NSMapTable *_modifiedMap;
    NSMapTable *_dataLossMap;
    NSMutableArray *_objectList;
}

- (id)logResultsAlert:(id)arg1 xmlElementForItem:(id)arg2;
- (id)logResultsAlert:(id)arg1 stringValueForItem:(id)arg2;
- (BOOL)logResultsAlert:(id)arg1 isItemExpandable:(id)arg2;
- (id)logResultsAlert:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)logResultsAlert:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)titleForLogResultsAlert:(id)arg1;
- (void)dealloc;
- (id)initWithLogTable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

