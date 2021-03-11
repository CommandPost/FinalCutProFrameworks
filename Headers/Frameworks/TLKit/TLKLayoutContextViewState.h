//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TLKLayoutContextViewState : NSObject
{
    NSMapTable *_laneStates;
    BOOL _spineVisible;
    struct CGPoint _spineOrigin;
}

@property(nonatomic) BOOL spineVisible; // @synthesize spineVisible=_spineVisible;
@property(nonatomic) struct CGPoint spineOrigin; // @synthesize spineOrigin=_spineOrigin;
- (id)description;
- (void)setLaneViewState:(id)arg1 forLane:(id)arg2;
- (id)laneViewStateForLane:(id)arg1;
- (void)dealloc;

@end

