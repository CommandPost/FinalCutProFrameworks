//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TLKItemLaneInfo;
@protocol TLKVerticalIndexing;

@interface TLKVerticalIndexTableKey : NSObject
{
    id <TLKVerticalIndexing> _verticalIndexValue;
    TLKItemLaneInfo *_laneInfo;
    long long _layoutRegion;
}

+ (id)verticalIndexTableKeyWithValue:(id)arg1 inLane:(id)arg2;
@property(readonly, nonatomic) long long layoutRegion; // @synthesize layoutRegion=_layoutRegion;
@property(readonly, nonatomic) TLKItemLaneInfo *laneInfo; // @synthesize laneInfo=_laneInfo;
@property(readonly, nonatomic) id <TLKVerticalIndexing> verticalIndexValue; // @synthesize verticalIndexValue=_verticalIndexValue;
- (BOOL)isValidForLayoutGraphNode:(id)arg1;
- (long long)compareVerticalIndexOrder:(id)arg1;
- (long long)_compareLaneDistanceToSpine:(id)arg1;
- (long long)compareDistanceToSpine:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToVerticalIndexTableKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithVerticalIndexValue:(id)arg1 inLane:(id)arg2 layoutRegion:(long long)arg3;

@end

