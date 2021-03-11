//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol FFVerticalOrdering;

@interface FFVerticalOrderInfo : NSObject
{
    id <FFVerticalOrdering> _item;
    long long _orgLane;
    long long _lane;
    long long _lanePriority;
    NSMutableArray *_intersectedItems;
    NSArray *_itemsWithIntrinsicOrder;
    struct orderInfoFlags _flags;
    CDStruct_1b6d18a9 _start;
    CDStruct_1b6d18a9 _end;
    double _startSec;
    double _endSec;
    BOOL _canFillGaps;
    long long _movedItemsCount;
}

+ (id)newWithItem:(id)arg1;
@property BOOL canFillGaps; // @synthesize canFillGaps=_canFillGaps;
@property long long movedItemsCount; // @synthesize movedItemsCount=_movedItemsCount;
@property(readonly) NSArray *itemsWithIntrinsicOrder; // @synthesize itemsWithIntrinsicOrder=_itemsWithIntrinsicOrder;
@property(readonly) struct orderInfoFlags flags; // @synthesize flags=_flags;
@property long long lanePriority; // @synthesize lanePriority=_lanePriority;
@property long long orgLane; // @synthesize orgLane=_orgLane;
@property long long lane; // @synthesize lane=_lane;
@property double endSec; // @synthesize endSec=_endSec;
@property double startSec; // @synthesize startSec=_startSec;
@property CDStruct_1b6d18a9 end; // @synthesize end=_end;
@property CDStruct_1b6d18a9 start; // @synthesize start=_start;
@property(readonly) id <FFVerticalOrdering> item; // @synthesize item=_item;
- (id)description;
- (id)itemDescription;
- (id)shortDescription:(BOOL)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithRange:(CDStruct_e83c9415)arg1 lane:(long long)arg2 item:(id)arg3;
- (void)dealloc;
- (id)init;
@property(readonly) NSMutableArray *intersectedItems;
- (BOOL)hasIntersectedItems;
- (void)releaseIntersectedItems;

@end

